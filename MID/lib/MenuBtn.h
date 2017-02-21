//
// Created by Angel Zaprianov on 14.2.2017 г..
//

#ifndef ARDUINO_MID_MENU_BTN_H
#define ARDUINO_MID_MENU_BTN_H

#include "IntAmp.h"
#include "WhlSens.h"
#include "CarSens.h"
#include "EepRom.h"

#ifndef AWAITING
#define AWAITING 2000
#endif

class MenuBtn {

    IntAmp *amp;
    CarSens *car;
    EepRom *eep;
    WhlSens *whl;
    CarState *stt;

private:
    uint8_t btnUp, btnDw, pinTn;
    uint8_t lastButtonPushed = 0; //TODO @deprecated [changed to MenuBtn::STATE]
    int isMainNavigationStatus = 0;
    boolean _isEditOption = false;
    boolean isEnterSub = false;
    boolean isNavigationActive = true;
    boolean playSecondTone = false;
    unsigned long entryTimeDownState = 0;


    void captureUp(void);

    void captureDw(void);

    void captureHold(void);

    void shortcut(void);

public:
    MenuBtn(IntAmp *_amp, CarSens *_car, EepRom *_eep, WhlSens *_whl, CarState *_stt);

    void listener(void);

    void setup(uint8_t buttonPinUp, uint8_t buttonPinDw, uint8_t pinTones);


    uint8_t getPinUp(void);

    uint8_t getPinDw(void);

    uint8_t getLastBtn(void);

    uint8_t getPinTn(void);

    boolean isUp() {
        return lastButtonPushed == btnUp;
    }


    boolean isDw() {
        return lastButtonPushed == btnDw;
    }


    static uint8_t STATE;

    IntAmp *passAmp(void);

    CarSens *passCar(void);

    EepRom *passEep(void);

    WhlSens *passWhl(void);

    CarState *passStt(void);

};

uint8_t MenuBtn::STATE = LOW;


MenuBtn::MenuBtn(IntAmp *_amp, CarSens *_car, EepRom *_eep, WhlSens *_whl, CarState *_stt) {
    amp = _amp;
    car = _car;
    eep = _eep;
    whl = _whl;
    stt = _stt;

}

uint8_t MenuBtn::getPinUp(void) {
    return btnUp;
}

uint8_t MenuBtn::getPinDw(void) {
    return btnDw;
}

uint8_t MenuBtn::getPinTn(void) {
    return pinTn;
}

uint8_t MenuBtn::getLastBtn() {
    return lastButtonPushed;
}

IntAmp *MenuBtn::passAmp(void) {
    return amp;
}

CarSens *MenuBtn::passCar(void) {
    return car;
}

EepRom *MenuBtn::passEep(void) {
    return eep;
}

WhlSens *MenuBtn::passWhl(void) {
    return whl;
}

CarState *MenuBtn::passStt(void) {
    return stt;
}

void MenuBtn::setup(uint8_t buttonPinUp, uint8_t buttonPinDw, uint8_t pinTones) {
    btnUp = buttonPinUp;
    btnDw = buttonPinDw;
    pinTn = pinTones;
    //
    // Pin button mode
    pinMode(pinTn, INPUT);
    pinMode(btnDw, INPUT);
    //
    // Default state value
    this->STATE = LOW;
}

void MenuBtn::listener() {

    //
    // Delete last loop state record
    lastButtonPushed = 0;
    MenuBtn::STATE = LOW;
    //
    // Checks is navigation active (default = true)
    if (isNavigationActive) {
        //
        // Detect up state button
        captureUp();


        //
        // Detect down state button
        captureDw();

        //
        // Detect Hold button state
        captureHold();
    }


}

void MenuBtn::captureUp(void) {
    if (!digitalRead(btnUp) == HIGH) {

        if (amp->isLow() && !digitalRead(btnUp) == HIGH) {
            lastButtonPushed = btnUp;
            MenuBtn::STATE = btnUp;
        }
    }
}

void MenuBtn::captureDw(void) {
    if (entryTimeDownState + AWAITING > millis() && isEnterSub && !digitalRead(btnDw) == LOW) {

        //
        // Controlling start of press state
        if (entryTimeDownState == 0) {
            whl->disable();
            entryTimeDownState = millis();
        }
        //
        //
        tone(pinTn, 700, 20);
        delay(20);
        tone(pinTn, 700, 20);
        isEnterSub = false;
        //
        // Perform button is released action
        lastButtonPushed = btnDw;
        MenuBtn::STATE = btnDw;

    }
}

void MenuBtn::captureHold(void) {
    //
    // Detect EDIT state button
    if (!digitalRead(btnDw) == HIGH) {


        if (amp->isMin() && !digitalRead(btnDw) == HIGH) {
            isEnterSub = true;
        }

        //
        // Hold
        if (entryTimeDownState + AWAITING < millis() && !digitalRead(btnDw) == HIGH) {
            //
            // If is still high state [pressed]
            if (!digitalRead(btnDw) == HIGH) {

                //
                // Cut the method if shortcut is executed
                shortcut();
                //
                // Reset entry down state
                entryTimeDownState = 0;

                //
                // Check for subMenu if not got inner level entry
                if (_isEditOption == 0) {
                    //
                    // Enter inner level menu
                    _isEditOption = 1;
                    tone(pinTn, 400, 100);
                    //
                    // Exit inner level menu
                } else if (_isEditOption == 1) {
                    _isEditOption = 0;
                    tone(pinTn, 400, 50);
                    playSecondTone = 1;
                }
            }
        }

    } else { // <- deprecated
        entryTimeDownState = 0;
        whl->enable(); // unlock radio
    }

    if (amp->isSec() && playSecondTone) {
        tone(pinTn, 800, 50);
        playSecondTone = 0;
    }
}


void MenuBtn::shortcut(void) {

    /*********** [SHORTCUTS] *********** *********** *********** *********** START ***********/
    // Steering button is pressed
    if (whl->getCurrentState() == whl->STR_BTN_ATT) {
        tone(TONE_ADT_PIN, 1000, 10);
        delay(10);
        tone(TONE_ADT_PIN, 1000, 10);
        delay(10);

        tone(TONE_ADT_PIN, 2500, 10);
        delay(20);
        tone(TONE_ADT_PIN, 2500, 10);
        eep->saveZeroingData();
        delay(20);

        lastButtonPushed = 0;
    }
    //
    // Change Speed alarm Up
    if (whl->getCurrentState() == WhlSens::STR_BTN_SKU) {
        car->speedingAlarmsUp();
        tone(TONE_ADT_PIN, 800, 50);
        delay(50);
        tone(TONE_ADT_PIN, 2000, 80);
        delay(80);


        Serial.println("speed UP --------------------------");


        lastButtonPushed = 0;
    }
    //
    // Change Speed alarm Down
    if (whl->getCurrentState() == WhlSens::STR_BTN_SKD) {
        car->speedingAlarmsDw();
        tone(TONE_ADT_PIN, 2000, 50);
        delay(50);
        tone(TONE_ADT_PIN, 800, 80);
        delay(80);


        Serial.println("speed DW --------------------------");


        lastButtonPushed = 0;
    }
    /*********** [SHORTCUTS] *********** *********** *********** *********** END   ***********/


}

#endif //ARDUINOMID_BUTTONS_H
