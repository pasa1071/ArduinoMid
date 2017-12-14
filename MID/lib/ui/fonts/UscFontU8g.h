//
// Created by Angel Zaprianov on 14.12.2017 г..
//

#ifndef ARDUINOMID_USC_FONT_U8G_H
#define ARDUINOMID_USCF_ONT_U8G_H

#include <stdlib.h>
#include <avr/pgmspace.h>
#include <U8g2lib.h>


#ifndef _U8G2LIB_HH
// Some IDE syntax mishmash fixer
#include "../../libraries/U8g2/src/U8g2lib.h"

#endif

extern const uint8_t u8g_font_ucs[8316] U8G2_FONT_SECTION("u8g_font_ucs") =
        "\323\0\3\3\4\5\3\5\5\20\24\377\373\12\375\12\376\1\270\3\342\13\316 \5\0\10'!\7\242\12"
                ")\236\10\42\13UZ/$,\243H(\2#\24\230\30\261$\62\211\350$\21Id\22\321I\42\223"
                "\210\0$\22\307\370\360\202\25\211%b\63\331,\21\213\244\30\3%\34\253\12{\206!\211I\42\212I"
                "$\321I\34\26\231F\324B\22QL\42\12N\0&\26\252\10\367\250\42\241H*\211\222$J%I"
                "d\64\33\315(\3'\10RZ).\21\0(\15\304\350\252$\42\211Ho\42\231\0)\16\304\350*"
                "d\42\231H/\42\211\10\0*\13UX\255RR&\231B\0+\14x\10\363\304j\207\230X\15\0"
                ",\10C\350hT\222\0-\6\24:-\10.\6\42\12)\10/\15\264\370\352\62\305\222bI\261\30"
                "\0\60\16\247\10\261f\22\311\304/\23\265\21\0\61\11\245\12q&\244\375R\62\17\247\10q*\223\322"
                "p\266&\234\35\16\1\63\20\247\10q*\223\322pD\35\226,\223\12\0\64\21\247\10\261\206C\245\220"
                "D\24\231\204&\267Y\1\65\20\247\10\61\16\26\251%D\34\226,\223\12\0\66\20\247\10\261H\22S"
                "\321\62q\231HF\24\0\67\15\247\10\61\36\245B\251p(\134\3\70\16\247\10q*\23\227Ie\342"
                "eR\1\71\20\247\10qH\23\311\304eb,YD$\0:\7r\12)\310\4;\13\223\350h\324"
                "a\22I\22\0<\14x\10\263\205\332!r\210\34\42=\10G*\63\356\10\7>\15x\10\63\344\20"
                "\71D\16\21j\6?\17\245\12o&\22\212,M\66\7\310D\0@\32\254\10;\215\342\220\210\64\222"
                "\210&\42\321Dm\242\24\21Ifr\250\15\0A\24\252\6\63\345\20\71\200L\15\15CC[p\24"
                "\234\214\12B\24\251\10\65\16\241\225\321d\64\71\255\214&\243\311\350@\1C\21\251\10\365J\63\211\224"
                "\274\35 \215\314d\25\0D\24\252\10\67\216\243\65\321l\62\233\314&\263\311L\264r\3E\23\250\10"
                "\63\16\221Yd:\12\231F\241\351,\62;\10F\22\250\10\63\16\221Yd:\12\231F\241\351b\15"
                "\0G\25\252\10\365j\63\221\64\62\7\314\1s\300\250\42\33-\226\0H\26\253\10\71*\225\331h\66"
                "\232\215\16\242\331h\66\232\215f\223\6I\11\245\10-*\243\375RJ\13\305\350,*\243\375I\15\0"
                "K\25\252\10\65*\224\231h$\233\10\253\306\311l$\33MJ\3L\14\250\10\63\212\323}\213\314\16"
                "\2M\33\255\10;\250\224\351\210F\242\221\42\223\310(\62\211\214BK\241\245Xl\62-N\32\252\10"
                "\67h\23Z\210\26\212\214RFI\223Ph\22\212\221b\224\331\4\0O\21\252\10\367\210\243\221P\62"
                "\364\70\21\212\26i\0P\22\251\10\63\16\241\225\321d\64\31MN\343\325\42\0Q\25\332\330\366\210\243"
                "\221P\62\364\70\21\212\26\351\20\71d\16!R\22\252\10\65\16\261\321N\62\343d\66\231\215\266T\10"
                "S\16\247\10q*\243Z\261\310V\232T\0T\16\251\10\63\16\243\221h\24\33\357\265\4U\26\253\10"
                "\71*\225\331h\66\232\215f\243\331h\66\232\315Tk\0V\26\252\6\63J\223ah\30\33\5G\301"
                "Q\224L\7\310!B\0W \257\6=J+\263Yh\66\213M\42\243\330$\62\11N\42\223\340$"
                "\62\211\316\306\263\361l\6X\24\251\10\63*k\261Ip\22\35O#\303\310,\66\231\24Y\21\251\10"
                "\63*k\241Yl\22\234D\307[K\0Z\20\250\10\63\16B\332p:\234\16g\304\203\0[\11\303"
                "\352**\372\227\1\134\15\264\370*b\211\261\304Xb,\0]\11\303\350*&\372\227\2^\20\207*"
                "\363\302\321H\60\22K\212E\242\322\0_\6\27\350.\16`\7#\212-D\2a\16w\12qH\222"
                "\341\250\42\231HF\6b\22\271\10\63\310\273\310(\242\225\321d\64\31\211L\0c\14v\10\257(\222"
                "\22m(\12\21d\23\271\10\63\311\333$#\11e\64\31MF#\321\354\0e\14v\10\257F\222\3"
                "m(\12\21f\16\266\10\253F\22-\243\322l\247\12\0g\20\250\330p\16\223]dT\251Et\232"
                "X\0h\23\272\10\65\350\200\71`\16\230\3&\63\312h\251\20i\14\265\10kD$\71\200\264\227"
                "\2j\14\344\330j$\24)e\277X\0k\20\271\10\63\310\273\214&\262b\321\66\231\220\6l\11\265"
                "\10+H\373\227\2m\17\10?(\243\31\205\62\332\377\245\302\0n\14z\10\65(\63\312h\251"
                "\20o\16x\10\263h\42\311\310i\42\222\221\0p\23\251\330\62(\62\212he\64\31MF\42\333x"
                "Z\4q\24\271\330\362\1\261\211H\64\31MF\223\321H\64\63\257\26r\14v\10-&\222\312lS"
                "\5\0s\14v\10o\16\241\32\255t\210\0t\13\225\10\253D\223\312h\267\1u\13z\10\65(\244"
                "\375\13mBv\16x\6/(K\241Q\214H\25\313\0w\25|\6\67H\222%QhB\11M("
                "\261\321p\64\34\215\0x\15x\10\61(K\61\42[h\62!y\21\250\330\60(K\241Q\214H\25"
                "\213\203T)\0z\16w\10/\16\222Ih\266\24\231\34\4{\14\304\350\252$\42-\62\221n\2|"
                "\7\242\12)\36\14}\15\304\350*d\42m\22\221.\42\0~\12\70\70\261d\21KL\4\240\5\0"
                "\10'\241\10\242\332(H\207\3\242\20\227\30\61\203$\211Kh\22\243\204\250!\0\243\17\247\10q*"
                "\23Suv\31\312\16\207\0\244\17\227\30\61d\222\212l\252:\223Td\2\245\22\251\6\61*k\261"
                "Ip\22;\16\217\343i\11\0\246\11\242\12)\16\301C\0\247\25\307\350\260f\22\221t\26\241\210L"
                "\22Jl*\222\310F\0\250\10%\212-$\24\1\251\30\252\12\371\210*\22\312D\24\222\204%a\211"
                "(\64\31I\204B\32\0\252\13VHmF\22\21E\251\0\253\15g\10\257$z\222\310$\62\211\0"
                "\254\7G*\63\256\32\255\6\24:-\10\256\30\252\12\371\210*\222\321(I\24\21\211f\242\210h\22"
                "\212(\12i\0\257\6\25\210-\12\260\12Djm$!QD\2\261\14\210\10\363\304j\207\230X\355"
                "\20\262\13dJm$\21\221D\211\0\263\13dJ-&\21\265I\5\0\264\7#\212m(\0\265\21"
                "\252\330\64(\244\375\13\211B\221C\346\200\61\0\266\22\307\350p&\226\10%B\211PB\223p\36'"
                "\0\267\6\42:)\10\270\7\63\332lb\4\271\11dJm$#-\4\272\13UHm&\22\26\311"
                "\4\0\273\16g\10/$\62\211L\42\222\350\11\0\274\33\254\10{\204\301aT\26\226\205E!\21%"
                "$\16I\242\241\210\60d\213J\0\275\31\254\10{\244\261iP\30\25Fe!\11)\22\221\6\245\61"
                "iL\34#\276\35\254\10;\206)\262\250,\16\20E#\222\220h\24\22\207$\321PD\30\262E%"
                "\0\277\17\245\332\256dr\300L\226&\241H&\0\300\26\312\6\363\344 \71\242\34\42\7\220\251\241\241"
                "-\70\12NF\5\301\26\312\6s\345\0\71\242\34\42\7\220\251\241\241-\70\12NF\5\302\27\312\6"
                "\63\345\200\210\34M\16\221\3\310\324\320\320\26\34\5'\243\2\303\27\312\6\363$\321\210\34Q\16\221\3"
                "\310\324\320\320\26\34\5'\243\2\304\27\312\6\263$R\211\34M\16\221\3\310\324\320\320\26\34\5'\243"
                "\2\305\30\312\6\63\345\200P\34 \207\310!r\0\231\32\32\332\202\243\340dT\306\32\255\6;\17R"
                "Z\60\62\13FF\301\220\321\24\213\215c\263HpF:\4\307\24\331\330\364J\63\211\224\274\35 \215"
                "\314d\325\70(<\3\310\25\310\10\263\344\0\71\360\20\231E\246\243\220i\24\232\316\16\2\311\24\310\10"
                "\63\245r\340!\62\213LG!\323(\64\235\35\4\312\25\310\10\363\244\21\71\354\20\231E\246\243\220i"
                "\24\232\316\16\2\313\25\310\10s\324$r\330!\62\213LG!\323(\64\235\35\4\314\13\305\10m\204"
                "\342\312h_\12\315\13\305\10\255\324\1\225\321\276\24\316\14\305\10mD\21qe\264/\5\317\14\305\10"
                "-$\24ie\264/\5\320\24\252\10\67\216\243\65\321\354 Y\233\314&\63\321\312\15\0\321\34\312\10"
                "\367$\321\210\34\201\66\241\205h\241\310(\205\22\12MB\61R\214\62\233\0\322\24\312\10\367\344 \71"
                "\32q\64\22J\206\216\23\241h\221\6\323\24\312\10w\345\0\71\32q\64\22J\206\216\23\241h\221\6"
                "\324\25\312\10\67\345\200\210\34\211\70\32\11%C\307\211P\264H\3\325\25\312\10\367$\321\210\34\215\70"
                "\32\11%C\307\211P\264H\3\326\25\312\10\267$R\211\34\211\70\32\11%C\307\211P\264H\3\327"
                "\17x\10\63\204\22\221\214*\245\211$B\1\330\27\252\10\367(\241%\331d\24\61E,!Kh\62"
                "\23-Eh\0\331\27\313\10\71\345\60\71J\313l\64\33\315F\263\321l\64\233\251\326\0\332\30\313\10"
                "y\345\20\71R\245\62\33\315F\263\321l\64\33\315f\252\65\0\333\30\313\10\71\345\220\210\34\245e\66"
                "\232\215f\243\331h\66\232\315Tk\0\334\31\313\10\371$b\211\34\241R\231\215f\243\331h\66\232\215"
                "f\63\325\32\0\335\23\311\10s\305rhe-\64\213M\202\223\350x\265\4\336\21\251\10\63\252\343\323"
                "\312h\62\232\234\306\323\42\0\337\31\272\10\365\250\42\331H\66\12N\204\223\331\204\64\242\314&\223\210\204"
                "\62\2\340\21\247\10q\304r I\62\34U$\23\311\310\0\341\21\247\10\361\204r I\62\34U$"
                "\23\311\310\0\342\21\247\10\261\204\21\71\214$\31\216*\222\211dd\343\22\247\10\261$\241\210\34F\222"
                "\14G\25\311D\62\62\344\22\247\10q\224$r\20I\62\34U$\23\311\310\0\345\22\267\10\261\204\241"
                "\240\34H\222\14G\25\311D\62\62\346\21y\12y(*\23\231\245&\231IF\21\312\0\347\20\246\330"
                "\256(\222\22m(\12\221\302\261\21\0\350\17\246\10o\244r\330Hr\240\15E!\2\351\16\246\10\357"
                "\324a#\311\201\66\24\205\10\352\20\246\10\257d\21\71h$\71\320\206\242\20\1\353\17\246\10/$\332"
                "A#\311\201\66\24\205\10\354\12\245\10k\204b\322^\12\355\12\245\10\253\324\1\244\275\24\356\13\245\10"
                "kD\21\61i/\5\357\13\245\10+$\24)i/\5\360\21\270\10s\24\247C\211\260$\362\64\21"
                "\311H\0\361\21\252\10\365$\321\210\34\201\62\243\214\366\227\12\1\362\22\250\10\263\344\0\71\230&\222\214"
                "\234&\42\31\11\0\363\21\250\10\363\244r\4\232H\62r\232\210d$\0\364\22\250\10\363\244\21\71\224"
                "&\222\214\234&\42\31\11\0\365\22\250\10\263$\261\210\34L\23IFN\23\221\214\4\366\22\250\10s"
                "\324$r(M$\31\71MD\62\22\0\367\15x\10\363\304r\340!\16\24\313\0\370\21x\10\263("
                "\21\221dr\210\230&\42I\204\4\371\17\252\10\365\344 \71\2\205\264\241M\10\372\16\252\10\65\345"
                "\0\71\12\323\376\205\66!\373\20\252\10\65\345\200\210\34L!\355_h\23\2\374\20\252\10\265$R\211"
                "\34L!\355_h\23\2\375\23\330\326.\245r e)\64\212\21\251bq\220*\5\376\24\331\330\62"
                "\310[d\24\321\312h\62\232\214D\266\361\264\10\377\24\330\326n\324$r\30e)\64\212\21\251bq"
                "\220*\5\0\0\1\0\27\312\6\363\352Hr\210\34@\246\206\206\241\241-\70\12NF\5\1\1\21\227"
                "\12q\352 \222d\70\252H&\222\221\1\1\2\30\332\6\363\222\347hr\210\34@\246\206\206\241\241-"
                "\70\12NF\5\1\3\22\247\12qb\261\71\214$\31\216*\222\211dd\1\4\32\332\326\62\345\20\71"
                "\200L\15\15CC[p\24\234\214\252qH\34\64\3\1\5\22\247\332pH\222\341\250\42\231HF\266"
                "hx\4\1\6\25\331\10u\305r\224\322L\42%o\7H#\63Y\5\0\1\7\17\246\10\357\324a"
                "\24I\211\66\24\205\10\1\10\25\331\10\65\305\21\71Bi&\221\222\267\3\244\221\231\254\2\1\11\21\246"
                "\10\257d\21\71\210\42)\321\206\242\20\1\1\12\25\331\10\65\345\0\71Ji&\221\222\267\3\244\221\231"
                "\254\2\1\13\20\246\10\357\204r\20ER\242\15E!\2\1\14\25\331\10\365$a\71Ji&\221\222"
                "\267\3\244\221\231\254\2\1\15\21\246\10\257$\61\71\210\42)\321\206\242\20\1\1\16\32\332\10\367$q"
                "\200\34\341\70Z\23\315&\263\311l\62\233\314D+\67\0\1\17\32\274\10;\351\240\221t$\35\305$"
                "\223\230\204\70\32\216\206\243\251h|\3\1\20\25\252\10\67\216\243\65\321\354 Y\233\314&\63\321\312\15"
                "\0\1\21\25\271\10\63\311\323\352L\62\222PF\223\321d\64\22\315\16\1\22\26\310\10s\352\260Cd"
                "\26\231\216B\246Qh:\213\314\16\2\1\23\17\226\10o\352\220\221\344@\33\212B\4\1\24\30\330\10"
                "sb\301\71\360\20\231E\246\243\220i\24\232\316\42\263\203\0\1\25\21\246\10ob\241\71h$\71\320"
                "\206\242\20\1\1\26\27\330\10\363\304r\340!\62\213LG!\323(\64\235Ef\7\1\1\27\20\246\10"
                "\257\204r\330Hr\240\15E!\2\1\30\31\330\330\62\16\221Yd:\12\231F\241\351,\62;\310\302"
                "q\300\14\0\1\31\21\246\330\256F\222\3m(\12\321\202\321\11\0\1\32\30\330\10\263$Q\71\360\20"
                "\231E\246\243\220i\24\232\316\42\263\203\0\1\33\21\246\10o$\61\71l$\71\320\206\242\20\1\1\34"
                "\33\332\10\65\345\200\210\34\251\66\23I#s\300\34\60\7\214*\262\321b\11\0\1\35\25\330\330\360\244"
                "\21\71\360\60\331EF\225ZD\247\211\5\0\1\36\32\332\10\265b\341\71Zm&\222F\346\200\71`"
                "\16\30Ud\243\305\22\0\1\37\25\330\330pb\301\71\364\60\331EF\225ZD\247\211\5\0\1 \32"
                "\332\10\65\345\20\71Zm&\222F\346\200\71`\16\30Ud\243\305\22\0\1!\24\330\330\360\304r\350"
                "a\262\213\214*\265\210N\23\13\0\1\42\35\372\270\364j\63\221\64\62\7\314\1s\300\250\42\33-\326"
                "\221\344\20\71$\16\11\3\1#\25\370\330p\303au\350a\262\213\214*\265\210N\23\13\0\1$\33"
                "\333\10\71\345\220\210\34\245e\66\232\215f\243\203h\66\232\215f\243\331\244\1\1%\31\352\10\265\344\200"
                "\210\34\205\16\230\3\346\200\71`\62\243\214\366\227\12\1\1&\27\253\10\71*\225\331\344@\231\215\16\242"
                "\331h\66\232\215f\223\6\1'\23\272\10\65\350\200\71\240:\7Lf\224\321\376R!\1(\14\325\10"
                "m\64WF\373\245\0\1)\12\245\10k\64\223\366R\1*\13\305\10-\252\225\321~)\1+\12\225"
                "\10+\252\244\275\24\1,\15\325\10-b\221qe\264_\12\1-\14\245\10+b\221\61i/\5\1"
                ".\16\325\330,*\243\375R\212\5'\0\1/\20\345\330jD$\71\200\264\227R,\70\1\1\60\14"
                "\325\10\255d\342\312h\277\24\1\61\11u\10+H{)\1\62\34\313\350\70*\225\331h\66\232\215f"
                "\243\331h\66\232\215f\223\322\34\42\207\310\0\1\63\33\351\330td\22\26\231\34F\241\214&\243\311h"
                "\62\232\214\16\221\361\352\4\0\1\64\16\365\350lD\21qe\264?\251\1\1\65\15\324\330j$\21!"
                "e\277X\0\1\66\36\372\270\64*\224\231h$\233\10\253\306\311l$\33MJs\4\71D\16\211C"
                "\302\0\1\67\31\11\271\62\310\273\214&\262b\321\66\231\220\346`\71@\16\210\3\242\0\1\70\17y\10"
                "s\226&\262b\321\66\231\220\6\1\71\20\330\10\363\244rhq\272o\221\331A\0\1:\14\345\10\253"
                "\324\1\244\375K\1\1;\21\370\270\62\212\323}\213\314\16r\240X\234\12\1<\16\5\271*H\373\227"
                ":@&K\3\1=\31\254\10;\252\222\261d\34\232\306\346\240\71h\16\232Eg\301C\20\0\1>"
                "\22\270\10\63\250#\311H\62\12Mb\323\35k\0\1?\31\254\10;\352\220\71h\16\232\203\346\240\261"
                "d,\231Eg\301C\20\0\1@\17\270\10\63\250\373$\31I\246\303\32\0\1A\22\250\10\63\212\323"
                "I\214\70\35Rg\221\331A\0\1B\15\265\10+H\233(\23\322\226\2\1C\36\332\10\67\345\0\71"
                "\12mB\13\321B\221Q\312(i\22\12MB\61R\214\62\233\0\1D\21\252\10\65\345\0\71\12e"
                "F\31\355/\25\2\1E\42\372\270\66h\23Z\210\26\212\214RFI\223Ph\22\212\221b\224\331\34"
                "E\16\221C\342\220\60\0\1F\25\312\270\64(\63\312h\251\320\21\344\20\71$\16\11\3\1G\37"
                "\332\10\367$q\200\34\201\66\241\205h\241\310(e\224\64\11\205&\241\30)F\231M\0\1H\22\252"
                "\10\365$q\200\34\201\62\243\214\366\227\12\1\1I\31\256\10}\344P\71\64\16\215Q\346\0\312x\64"
                "\36\215G\343\321\264B\1J\37\332\330\66h\23Z\210\26\212\214RFI\223Ph\22\212\221b\224\331"
                "\34\60\7\214G\0\1K\24\251\330\64(#\312\322d\64\31MF\207\310xu\2\1L\24\312\10\367"
                "\352(\304\321H(\31z\234\10E\213\64\0\1M\21\230\10\263\352@\232H\62r\232\210d$\0\1"
                "N\25\332\10\367\222\347H\304\321H(\31z\234\10E\213\64\0\1O\23\250\10\263b\301\71\224&\222"
                "\214\234&\42\31\11\0\1P\26\332\10\367$B\211\34\211\70\32\11%C\217\23\241h\221\6\1Q\23"
                "\250\10\263$\42\211\34J\23IFN\23\221\214\4\1R\34\256\10\377\16\224\21-\42\234\21G\221\241"
                "e\70\212\14\247\302YdD\213\35\10\1S\23{\12\273\226D\223\322A\64\33\15E\243\320\210\0\1"
                "T\27\332\10u\345\0\71\302!\66\332If\234\314&\263\321\226\12\1\1U\16\246\10\355\324!\23I"
                "e\266\251\2\1V\33\372\270\64\16\261\321N\62\343d\66\231\215\266T\350\10r\210\34\22\207\204\1\1"
                "W\20\306\270,&\222\312lS\35$\24&\2\1X\30\332\10\365$q\200\34\341\20\33\355$\63N"
                "f\223\331hK\205\0\1Y\20\246\10m$\61\71d\42\251\314\66U\0\1Z\22\327\10\361\204r`"
                "eT+\26\331J\223\12\0\1[\17\246\10\357\324A\207P\215V:D\0\1\134\23\327\10\261\204\21"
                "\71\254\62\252\25\213l\245I\5\0\1]\21\246\10\257d\21\71\344\20\252\321J\207\10\0\1^\23\327"
                "\330p*\243Z\261\310V\232\24\343\200\340\10\0\1_\20\246\330n\16\241\32\255t\210\205c#\0\1"
                "`\22\307\10q$A\71\260\62*\22\213\304\322\244\2\1a\21\246\10o$\61\71\350\20\252\321J\207"
                "\10\0\1b\23\331\330\62\16\243\221h\24\33\357\265\34\7\205g\0\1c\17\305\330\252D\223\312h\267"
                "Q\64\64\1\1d\23\331\10\363$a\71\364\60\32\211F\261\361^K\0\1e\17\250\10\263E*\243"
                "\210m\272\363\14\0\1f\21\251\10\63\16\243\221h\24\233V\307[K\0\1g\16\225\10\253D\223\312"
                "hR\31\315\6\1h\33\333\10\71%\341\210\34\245e\66\232\215f\243\331h\66\232\215f\63\325\32\0"
                "\1i\21\252\10\65%\321\210\34L!\355_h\23\2\1j\31\313\10\371\352\10\225\312l\64\33\315F"
                "\263\321l\64\33\315f\252\65\0\1k\16\232\10\265\352`\12i\377B\233\20\1l\32\333\10\371\322\1"
                "s\224\226\331h\66\232\215f\243\331h\66\232\315Tk\0\1m\20\252\10\265b\341\71\2\205\264\241"
                "M\10\1n\34\353\10y\345\220P\34\42Gi\231\215f\243\331h\66\232\215f\243\331L\265\6\1o"
                "\23\272\10\65\345\200P\34 G\240\220\366/\264\11\1\1p\33\333\10\71%R\211\34\241R\231\215f"
                "\243\331h\66\232\215f\243\331L\265\6\1q\21\252\10\365$B\211\34L!\355_h\23\2\1r\34"
                "\333\330\70*\225\331h\66\232\215f\243\331h\66\232\315T\353\220\70(\16\33\2\1s\22\252\330\64("
                "\244\375\13mB\215C\342\240\31\0\1t&\337\6\275\345\320\210\34Cie\66\13\315f\261Id\24"
                "\233D&\301Id\22\234D&\321\331x\66\236\315\0\1u\33\254\6w\345\240\210\34\211$Y\22\205"
                "&\224\320\204\22\33\15G\303\321\10\0\1v\25\331\10\363\304\21\71\264\262\26\232\305&\301It\274\265"
                "\4\1w\25\330\330\360\244\21\71\214\262\24\32\305\210T\261\70H\225\2\1x\26\311\10\263$B\211\34"
                "XY\13\315b\223\340$:^-\1\1y\23\330\10\63\245r\340AH\33N\207\323\341\214x\20\1"
                "z\22\247\10\357\204r\330A\62\11\315\226\42\223\203\0\1{\23\330\10\363\304r\340AH\33N\207\323"
                "\341\214x\20\1|\22\247\10\257\244r\330A\62\11\315\226\42\223\203\0\1}\23\310\10\263$Q\71\360"
                " \253\15W\207\263\332A\0\1~\23\247\10o$A\71\354 \231\204fK\221\311A\0\1\206\23\251"
                "\10uj\262IT\16\30/S%\262Q\15\0\1\211\25\252\10\67\216\243\65\321\354 Y\233\314&\63"
                "\321\312\15\0\1\216\24\250\10\63\16\262Il:\12\215L\241\351$\66\71\4\1\222\22\310\350p\207\222"
                "\330tv\33N\267E\204S\0\1\227\15\245\10-*\243\225\312hK\1\1\232\14\265\10+H\273T"
                "F[\12\1\235\33\332\330\66h\23Z\210\26\212\214RFI\223Ph\22\232\220\366\16\30\317\1\1\237"
                "\24\252\10\367\210\243\221P\62<\34\204\306\211P\264H\3\1\240\31\254\10\367h\222\321DQ\22\31\216"
                "\206\243\341h\70\23\12Gc*\0\1\241\23{\10\263h\22\221\250\64\211\214H\213\42\61\25\0\1\247"
                "\22\247\10q*\42\332\214R\241\15g$I\5\0\1\250\15v\10/*\241\21\205i\24)\1\256\21"
                "\331\330\62\16\243\221h\24\33\357\357\200\21\0\1\257\32\255\10\71*\227\331D\62\233\204f\264\305\331p"
                "\66\234Mer@\25\0\1\260\26|\10\65(\24\311h\42\31MB#\332h\70\241NH\0\1\265"
                "\21\250\10\63\16B\332pX\233\16g\304\203\0\1\266\20w\10/\16\222IhT\32E&\7\1\1"
                "\273\21\247\10q*\223\322\360\60\232\11g\207C\0\1\274\21\247\10\61\16\26\251%D\34\226,\223\12"
                "\0\1\300\10\242\12)\36\14\1\302\16\247\372\362\244J\67\251\350&U\2\1\303\10\242\12)\236\10\1"
                "\315\32\332\6\363$q\200\34Q\16\221\3\310\324\320\60\64\264\5G\301\311\250\0\1\316\22\247\12q$"
                "A\71\220$\31\216*\222\211dd\1\317\15\325\10m$!qe\264_\12\1\320\15\245\10+$!"
                "\71\200\264\227\2\1\321\26\332\10\367$q\200\34\215\70\32\11%C\217\23\241h\221\6\1\322\23\250\10"
                "\263$Q\71\230&\222\214\234&\42\31\11\0\1\323\33\333\10\71%q\210\34\245e\66\232\215f\243\331"
                "h\66\232\215f\63\325\32\0\1\324\21\252\10\365$q\200\34\201B\332\277\320&\4\1\325\34\353\10\371"
                "\352h\22\261D\216P\251\314F\263\321l\64\33\315F\263\231j\15\0\1\326\22\312\10\265\352(\252\22"
                "\71\230B\332\277\320&\4\1\327\35\373\10y\345\20\71\252D,\221#T*\263\321l\64\33\315F\263"
                "\321l\246Z\3\1\330\24\332\10u\345\0\71\222D*\221\203)\244\375\13mB\1\331\36\373\10\71%"
                "q\210\34Q\42\226\310\21*\225\331h\66\232\215f\243\331h\66S\255\1\1\332\25\332\10\365$q\200"
                "\34I\42\225\310\301\24\322\376\205\66!\1\333\35\373\10\71\345\60\71\242D,\221#T*\263\321l\64"
                "\33\315F\263\321l\246Z\3\1\334\24\332\10\365\344 \71\222D*\221\203)\244\375\13mB\1\335\16"
                "v\10/H!\341\354@\21\215\0\1\336\31\352\6\263\352(\252\22\71\232\34\42\7\220\251\241\241-\70"
                "\12NF\5\1\337\25\307\10q\352 \211H\42\7\221$\303QE\62\221\214\14\1\340\33\372\6\363\352"
                "Hr\210\34Q\16\221\3\310\324\320\60\64\264\5G\301\311\250\0\1\341\23\307\12q\352\60\251\34H\222"
                "\14G\25\311D\62\62\1\342\35\315\6{\353\310\7)-\30\231\5#\243`\310h\212\305\306\261Y$"
                "\70#\35\2\1\343\23\231\12\271\352P\212\312Df\251If\222Q\204\62\1\344\26\253\10\365\212\63\325"
                "\320\34\62\207\314!\243\222\254\62\232\326\0\1\345\21\250\330p\16\223]dT\251\345@\232X\0\1\346"
                "\33\332\10\365$q\200\34\255\66\23I#s\300\34\60\7\214*\262\321b\11\0\1\347\25\330\330\260$"
                "Q\71\364\60\331EF\225ZD\247\211\5\0\1\350\32\332\10\365$q\200\34\241B\231\211F\262\211\260"
                "j\234\314F\262\321\244\64\1\351\25\351\10s$a\71\2y\227\321DV,\332&\23\322\0\1\352\27"
                "\332\330\366\210\243\221P\62\364\70\21\212\26\351\220\70$\16\232\1\1\353\22\250\330\262h\42\311\310i\42"
                "\222\221\323\1#\0\1\354\31\372\330\366\352(\304\321H(\31z\234\10E\213tH\34\22\7\315\0\1"
                "\355\24\310\330\262\352@\232H\62r\232\210d\344t\300\10\0\1\360\15\324\330*$\21)e\277X\0"
                "\1\364\32\332\10u\345\0\71Zm&\222F\346\200\71`\16\30Ud\243\305\22\0\1\365\24\330\330\60"
                "\245r\350a\262\213\214*\265\210N\23\13\0\1\370\36\332\10\367\344 \71\2mB\13\321B\221Q\312"
                "(i\22\12MB\61R\214\62\233\0\1\371\21\252\10\365\344 \71\2eF\31\355/\25\2\1\372\35"
                "\372\6s\345\0\71\242\34\20\212\3\344\20\71D\16 SCC[p\24\234\214\12\1\373\26\347\10\361"
                "\204r\250\60\24\224\3I\222\341\250\42\231HF\6\1\374 \335\6\373\1r\230\34\313AJ\13Ff"
                "\301\310(\30\62\232b\261ql\26\11\316H\207\0\1\375\24\251\12\71\305r\4\212\312Df\251If"
                "\222Q\204\62\1\376\34\332\10w\345\0\71\32%\264$\233\214\42\246\210%d\11Mf\242\245\10\15\0"
                "\1\377\25\250\10\63\245r\60%\42\222L\16\21\323D$\211\220\0\2\0\32\332\6\263$b\211\34I"
                "\16\221\3\310\324\320\60\64\264\5G\301\311\250\0\2\1\23\247\12\61$\62\211\34D\222\14G\25\311D"
                "\62\62\2\2\31\332\6\63\307\261\70\222\34\42\7\220\251\241ahh\13\216\202\223Q\1\2\3\22\247\12"
                "\261f\351 \222d\70\252H&\222\221\1\2\4\31\330\10\63$B\211\34v\210\314\42\323Q\310\64\12"
                "Mg\221\331A\0\2\5\22\246\10/$\42\211\34\62\222\34hCQ\210\0\2\6\30\330\10\263\206\261"
                "\70\354\20\231E\246\243\220i\24\232\316\42\263\203\0\2\7\21\246\10\257F\261\70d$\71\320\206\242\20"
                "\1\2\10\17\326\6-$\42\211\34P\232\355\247\2\2\11\16\246\6+$\42\211\34@\333S\1\2\12"
                "\15\325\10m&\261he\264_\12\2\13\14\245\10k&\261(i/\5\2\14\26\332\10\267$b\211"
                "\34\205\70\32\11%C\217\23\241h\221\6\2\15\23\250\10s\24%r M$\31\71MD\62\22\0"
                "\2\16\26\332\10\67\307\261\70\12q\64\22J\206\36'B\321\42\15\0\2\17\23\250\10\363\206\261\70\220"
                "&\222\214\234&\42\31\11\0\2\20\27\332\10u\224%r\360!\66\332If\234\314&\263\321\226\12\1"
                "\2\21\20\246\10-$\42\211x\42\251\314\66U\0\2\22\27\332\10\365\306\261\70\370\20\33\355$\63N"
                "f\223\331hK\205\0\2\23\17\246\10\255F\261\360DR\231m\252\0\2\24\34\333\10\271$r\200D"
                "\216P\251\314F\263\321l\64\33\315F\263\321l\246Z\3\2\25\20\252\10u\224%r\60\205\264\241"
                "M\10\2\26\33\333\10\71\347\200X\34\241R\231\215f\243\331h\66\232\215f\243\331L\265\6\2\27\20"
                "\252\10\365\306\261\70\230B\332\277\320&\4\2\30\23\367\270p*\243Z\261\310V\232\324\201Ri\42\0"
                "\2\31\21\306\270n\16\241\32\255t\210\203\204\302D\0\2\32\27\371\270\62\16\243\221h\24\33\357\265\216"
                "\42\7\310\1q@\24\0\2\33\20\345\270\252D\223\312h\267\71@&K\3\2\36\33\333\10\71%q"
                "\210\34\245e\66\232\215f\243\203h\66\232\215f\243\331\244\1\2\37\31\352\10u$q\200\34\211\16\230"
                "\3\346\200\71`\62\243\214\366\227\12\1\2&\31\332\6\63\345\20\71\242\34\42\7\220\251\241ahh\13"
                "\216\202\223Q\1\2'\22\247\12\261\244r I\62\34U$\23\311\310\0\2(\31\330\330\62\16\221Y"
                "d:\12\231F\241\351,\62;\310\342\220\350\14\0\2)\21\246\330\256F\222\3m(\12\321\302\261\11"
                "\0\2*\27\352\10\267\352(\252\22\71\22q\64\22J\206\216\23\241h\221\6\2+\25\310\10s\352@"
                "\211L\42\207\322D\222\221\323D$#\1\2,\30\352\10\267\352H\222hD\216F\34\215\204\222\241\343"
                "D(Z\244\1\2-\25\310\10s\352PI,\42\7\323D\222\221\323D$#\1\2.\26\332\10\67"
                "\345\20\71\32q\64\22J\206\36'B\321\42\15\0\2/\22\250\10\363\304r\60M$\31\71MD\62"
                "\22\0\2\60\27\372\10\367\352Hr\210\34\215\70\32\11%C\217\23\241h\221\6\2\61\23\310\10\263\352"
                "P\261\34L\23IFN\23\221\214\4\2\62\24\311\10\263\352\300\312Zh\26\233\4'\321\361\326\22\0"
                "\2\63\23\310\330p\352\60\312Rh\24#R\305\342 U\12\2P\20w\12\61L\23\311DR\32N"
                "D\24\0\2T\17v\10/H\22Ih\66#IH\0\2X\16v\10oF\22\211mF\222\220\0"
                "\2Y\16v\10/H!\341\354@\21\215\0\2_\16\266\310jJ\263\235J\23\235F\0\2e\24\272"
                "\310\64(\225\321\376B\233\314\1s\300\34\60\7\20\2u\20x\10\263h\42\311\350p\232\210d$\0"
                "\2y\14v\10mJ\263-\25\311\0\2\207\15\225\10+f\243]*#\21\0\2\210\14\305\330\252D"
                "\223\312h\277\15\2\211\17z\10\65(\244]\16\223\321\12mB\2\214\17x\6\357\304R\42-\64\12"
                "M&\4\2\215\25|\6\267\26G\303\321,B\31E(\243\220h\62\21\21\2\216\21\250\10q\245\304"
                "\260*\221\26\32\205&\23\2\2\236\20\271\310\62F\224\65c\233d\64\31o&\2\273\12Ch\251\42"
                "\21\25\0\2\274\11ChiT\222\0\2\275\12Ch)$\242X\0\2\306\11$\212m$\21\1\2"
                "\307\12$\212-$\21\11\0\2\310\11RZ).\21\0\2\311\7\25\210-\12\2\312\10#\212m("
                "\0\2\313\10#\212-D\2\2\315\7\25\350,\12\2\316\10#\332,D\2\2\317\10#\332l(\0"
                "\2\330\12%\210-b\221\11\0\2\331\7\42\214-\10\2\332\13\64\210m$\241\210\4\0\2\333\10\63"
                "\332l\222\6\2\334\10%\210m\264\0\2\335\12&\210m$\24\11\0\2\356\14Fhot\11EB"
                "!\0\3~\14\223\350h\324a\22I\22\0\3\204\10#\212m(\0\3\205\13U\212\255\324\1\22\212"
                "\0\3\207\7\42:)\10\3\274\22\252\330\64(\244\375\13\211B\221C\346\200\61\0\0";
#endif //ARDUINOMID_USCFONTU8G_H
