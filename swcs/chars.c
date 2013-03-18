#include "charset.h"

static const struct swcs_char_properties __swcs_chars [] =
{

    {               0,           0 }, /* U+0000 ?   00 00   <control> */
    {               0,           0 }, /* U+0001 ?   00 01   <control> */
    {               0,           0 }, /* U+0002 ?   00 02   <control> */
    {               0,           0 }, /* U+0003 ?   00 03   <control> */
    {               0,           0 }, /* U+0004 ?   00 04   <control> */
    {               0,           0 }, /* U+0005 ?   00 05   <control> */
    {               0,           0 }, /* U+0006 ?   00 06   <control> */
    {               0,           0 }, /* U+0007 ?   00 07   <control> */
    {               0,           0 }, /* U+0008 ?   00 08   <control> */
    {               0,           0 }, /* U+0009 ?   00 09   <control> */
    {               0,           0 }, /* U+000A ?   00 0a   <control> */
    {               0,           0 }, /* U+000B ?   00 0b   <control> */
    {               0,           0 }, /* U+000C ?   00 0c   <control> */
    {               0,           0 }, /* U+000D ?   00 0d   <control> */
    {               0,           0 }, /* U+000E ?   00 0e   <control> */
    {               0,           0 }, /* U+000F ?   00 0f   <control> */
    {               0,           0 }, /* U+0010 ?   00 10   <control> */
    {               0,           0 }, /* U+0011 ?   00 11   <control> */
    {               0,           0 }, /* U+0012 ?   00 12   <control> */
    {               0,           0 }, /* U+0013 ?   00 13   <control> */
    {               0,           0 }, /* U+0014 ?   00 14   <control> */
    {               0,           0 }, /* U+0015 ?   00 15   <control> */
    {               0,           0 }, /* U+0016 ?   00 16   <control> */
    {               0,           0 }, /* U+0017 ?   00 17   <control> */
    {               0,           0 }, /* U+0018 ?   00 18   <control> */
    {               0,           0 }, /* U+0019 ?   00 19   <control> */
    {               0,           0 }, /* U+001A ?   00 1a   <control> */
    {               0,           0 }, /* U+001B ?   00 1b   <control> */
    {               0,           0 }, /* U+001C ?   00 1c   <control> */
    {               0,           0 }, /* U+001D ?   00 1d   <control> */
    {               0,           0 }, /* U+001E ?   00 1e   <control> */
    {               0,           0 }, /* U+001F ?   00 1f   <control> */
    {               0,           0 }, /* U+0020     00 20   SPACE */
    {   SW_WP_COMPLEX,           0 }, /* U+0021 !   00 21   EXCLAMATION MARK */
    {   SW_WP_COMPLEX,           0 }, /* U+0022 "   00 22   QUOTATION MARK */
    {   SW_WP_COMPLEX,           0 }, /* U+0023 #   00 23   NUMBER SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+0024 $   00 24   DOLLAR SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+0025 %   00 25   PERCENT SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+0026 &   00 26   AMPERSAND */
    {   SW_WP_COMPLEX,           0 }, /* U+0027 '   00 27   APOSTROPHE */
    {   SW_WP_COMPLEX,           0 }, /* U+0028 (   00 28   LEFT PARENTHESIS */
    {   SW_WP_COMPLEX,           0 }, /* U+0029 )   00 29   RIGHT PARENTHESIS */
    {   SW_WP_COMPLEX,           0 }, /* U+002A *   00 2a   ASTERISK */
    {   SW_WP_COMPLEX,           0 }, /* U+002B +   00 2b   PLUS SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+002C ,   00 2c   COMMA */
    {   SW_WP_COMPLEX,           0 }, /* U+002D -   00 2d   HYPHEN-MINUS */
    {   SW_WP_COMPLEX,           0 }, /* U+002E .   00 2e   FULL STOP */
    {   SW_WP_COMPLEX,           0 }, /* U+002F /   00 2f   SOLIDUS */
    {     SW_WP_DIGIT,           0 }, /* U+0030 0   00 30   DIGIT ZERO */
    {     SW_WP_DIGIT,           0 }, /* U+0031 1   00 31   DIGIT ONE */
    {     SW_WP_DIGIT,           0 }, /* U+0032 2   00 32   DIGIT TWO */
    {     SW_WP_DIGIT,           0 }, /* U+0033 3   00 33   DIGIT THREE */
    {     SW_WP_DIGIT,           0 }, /* U+0034 4   00 34   DIGIT FOUR */
    {     SW_WP_DIGIT,           0 }, /* U+0035 5   00 35   DIGIT FIVE */
    {     SW_WP_DIGIT,           0 }, /* U+0036 6   00 36   DIGIT SIX */
    {     SW_WP_DIGIT,           0 }, /* U+0037 7   00 37   DIGIT SEVEN */
    {     SW_WP_DIGIT,           0 }, /* U+0038 8   00 38   DIGIT EIGHT */
    {     SW_WP_DIGIT,           0 }, /* U+0039 9   00 39   DIGIT NINE */
    {   SW_WP_COMPLEX,           0 }, /* U+003A :   00 3a   COLON */
    {   SW_WP_COMPLEX,           0 }, /* U+003B ;   00 3b   SEMICOLON */
    {   SW_WP_COMPLEX,           0 }, /* U+003C <   00 3c   LESS-THAN SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+003D =   00 3d   EQUALS SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+003E >   00 3e   GREATER-THAN SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+003F ?   00 3f   QUESTION MARK */
    {   SW_WP_COMPLEX,           0 }, /* U+0040 @   00 40   COMMERCIAL AT */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0041 A   00 41   LATIN CAPITAL LETTER A */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0042 B   00 42   LATIN CAPITAL LETTER B */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0043 C   00 43   LATIN CAPITAL LETTER C */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0044 D   00 44   LATIN CAPITAL LETTER D */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0045 E   00 45   LATIN CAPITAL LETTER E */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0046 F   00 46   LATIN CAPITAL LETTER F */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0047 G   00 47   LATIN CAPITAL LETTER G */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0048 H   00 48   LATIN CAPITAL LETTER H */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0049 I   00 49   LATIN CAPITAL LETTER I */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004A J   00 4a   LATIN CAPITAL LETTER J */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004B K   00 4b   LATIN CAPITAL LETTER K */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004C L   00 4c   LATIN CAPITAL LETTER L */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004D M   00 4d   LATIN CAPITAL LETTER M */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004E N   00 4e   LATIN CAPITAL LETTER N */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+004F O   00 4f   LATIN CAPITAL LETTER O */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0050 P   00 50   LATIN CAPITAL LETTER P */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0051 Q   00 51   LATIN CAPITAL LETTER Q */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0052 R   00 52   LATIN CAPITAL LETTER R */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0053 S   00 53   LATIN CAPITAL LETTER S */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0054 T   00 54   LATIN CAPITAL LETTER T */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0055 U   00 55   LATIN CAPITAL LETTER U */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0056 V   00 56   LATIN CAPITAL LETTER V */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0057 W   00 57   LATIN CAPITAL LETTER W */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0058 X   00 58   LATIN CAPITAL LETTER X */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0059 Y   00 59   LATIN CAPITAL LETTER Y */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+005A Z   00 5a   LATIN CAPITAL LETTER Z */
    {   SW_WP_COMPLEX,           0 }, /* U+005B [   00 5b   LEFT SQUARE BRACKET */
    {   SW_WP_COMPLEX,           0 }, /* U+005C \   00 5c   REVERSE SOLIDUS */
    {   SW_WP_COMPLEX,           0 }, /* U+005D ]   00 5d   RIGHT SQUARE BRACKET */
    {   SW_WP_COMPLEX,           0 }, /* U+005E ^   00 5e   CIRCUMFLEX ACCENT */
    {   SW_WP_COMPLEX,           0 }, /* U+005F _   00 5f   LOW LINE */
    {   SW_WP_COMPLEX,           0 }, /* U+0060 `   00 60   GRAVE ACCENT */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0061 a   00 61   LATIN SMALL LETTER A */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0062 b   00 62   LATIN SMALL LETTER B */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0063 c   00 63   LATIN SMALL LETTER C */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0064 d   00 64   LATIN SMALL LETTER D */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0065 e   00 65   LATIN SMALL LETTER E */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0066 f   00 66   LATIN SMALL LETTER F */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0067 g   00 67   LATIN SMALL LETTER G */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0068 h   00 68   LATIN SMALL LETTER H */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0069 i   00 69   LATIN SMALL LETTER I */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006A j   00 6a   LATIN SMALL LETTER J */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006B k   00 6b   LATIN SMALL LETTER K */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006C l   00 6c   LATIN SMALL LETTER L */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006D m   00 6d   LATIN SMALL LETTER M */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006E n   00 6e   LATIN SMALL LETTER N */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+006F o   00 6f   LATIN SMALL LETTER O */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0070 p   00 70   LATIN SMALL LETTER P */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0071 q   00 71   LATIN SMALL LETTER Q */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0072 r   00 72   LATIN SMALL LETTER R */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0073 s   00 73   LATIN SMALL LETTER S */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0074 t   00 74   LATIN SMALL LETTER T */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0075 u   00 75   LATIN SMALL LETTER U */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0076 v   00 76   LATIN SMALL LETTER V */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0077 w   00 77   LATIN SMALL LETTER W */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0078 x   00 78   LATIN SMALL LETTER X */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0079 y   00 79   LATIN SMALL LETTER Y */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+007A z   00 7a   LATIN SMALL LETTER Z */
    {   SW_WP_COMPLEX,           0 }, /* U+007B {   00 7b   LEFT CURLY BRACKET */
    {   SW_WP_COMPLEX,           0 }, /* U+007C |   00 7c   VERTICAL LINE */
    {   SW_WP_COMPLEX,           0 }, /* U+007D }   00 7d   RIGHT CURLY BRACKET */
    {   SW_WP_COMPLEX,           0 }, /* U+007E ~   00 7e   TILDE */
    {               0,           0 }, /* U+007F ?   00 7f   <control> */
    {               0,           0 }, /* U+0080 ?   c2 80   <control> */
    {               0,           0 }, /* U+0081 ?   c2 81   <control> */
    {               0,           0 }, /* U+0082 ?   c2 82   <control> */
    {               0,           0 }, /* U+0083 ?   c2 83   <control> */
    {               0,           0 }, /* U+0084 ?   c2 84   <control> */
    {               0,           0 }, /* U+0085 ?   c2 85   <control> */
    {               0,           0 }, /* U+0086 ?   c2 86   <control> */
    {               0,           0 }, /* U+0087 ?   c2 87   <control> */
    {               0,           0 }, /* U+0088 ?   c2 88   <control> */
    {               0,           0 }, /* U+0089 ?   c2 89   <control> */
    {               0,           0 }, /* U+008A ?   c2 8a   <control> */
    {               0,           0 }, /* U+008B ?   c2 8b   <control> */
    {               0,           0 }, /* U+008C ?   c2 8c   <control> */
    {               0,           0 }, /* U+008D ?   c2 8d   <control> */
    {               0,           0 }, /* U+008E ?   c2 8e   <control> */
    {               0,           0 }, /* U+008F ?   c2 8f   <control> */
    {               0,           0 }, /* U+0090 ?   c2 90   <control> */
    {               0,           0 }, /* U+0091 ?   c2 91   <control> */
    {               0,           0 }, /* U+0092 ?   c2 92   <control> */
    {               0,           0 }, /* U+0093 ?   c2 93   <control> */
    {               0,           0 }, /* U+0094 ?   c2 94   <control> */
    {               0,           0 }, /* U+0095 ?   c2 95   <control> */
    {               0,           0 }, /* U+0096 ?   c2 96   <control> */
    {               0,           0 }, /* U+0097 ?   c2 97   <control> */
    {               0,           0 }, /* U+0098 ?   c2 98   <control> */
    {               0,           0 }, /* U+0099 ?   c2 99   <control> */
    {               0,           0 }, /* U+009A ?   c2 9a   <control> */
    {               0,           0 }, /* U+009B ?   c2 9b   <control> */
    {               0,           0 }, /* U+009C ?   c2 9c   <control> */
    {               0,           0 }, /* U+009D ?   c2 9d   <control> */
    {               0,           0 }, /* U+009E ?   c2 9e   <control> */
    {               0,           0 }, /* U+009F ?   c2 9f   <control> */
    {               0,           0 }, /* U+00A0     c2 a0   NO-BREAK SPACE */
    {   SW_WP_COMPLEX,           0 }, /* U+00A1 ¡   c2 a1   INVERTED EXCLAMATION MARK */
    {   SW_WP_COMPLEX,           0 }, /* U+00A2 ¢   c2 a2   CENT SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+00A3 £   c2 a3   POUND SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+00A4 ¤   c2 a4   CURRENCY SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+00A5 ¥   c2 a5   YEN SIGN */
    {               0,           0 }, /* U+00A6 ¦   c2 a6   BROKEN BAR */
    {   SW_WP_COMPLEX,           0 }, /* U+00A7 §   c2 a7   SECTION SIGN */
    {   SW_WP_COMPLEX,           0 }, /* U+00A8 ¨   c2 a8   DIAERESIS */
    {   SW_WP_COMPLEX,           0 }, /* U+00A9 ©   c2 a9   COPYRIGHT SIGN */
    {               0,           0 }, /* U+00AA ª   c2 aa   FEMININE ORDINAL INDICATOR */
    {   SW_WP_COMPLEX,           0 }, /* U+00AB «   c2 ab   LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
    {               0,           0 }, /* U+00AC ¬   c2 ac   NOT SIGN */
    {               0,           0 }, /* U+00AD     c2 ad   SOFT HYPHEN */
    {   SW_WP_COMPLEX,           0 }, /* U+00AE ®   c2 ae   REGISTERED SIGN */
    {               0,           0 }, /* U+00AF ¯   c2 af   MACRON */
    {               0,           0 }, /* U+00B0 °   c2 b0   DEGREE SIGN */
    {               0,           0 }, /* U+00B1 ±   c2 b1   PLUS-MINUS SIGN */
    {               0,           0 }, /* U+00B2 ²   c2 b2   SUPERSCRIPT TWO */
    {               0,           0 }, /* U+00B3 ³   c2 b3   SUPERSCRIPT THREE */
    {               0,           0 }, /* U+00B4 ´   c2 b4   ACUTE ACCENT */
    {               0,           0 }, /* U+00B5 µ   c2 b5   MICRO SIGN */
    {               0,           0 }, /* U+00B6 ¶   c2 b6   PILCROW SIGN */
    {               0,           0 }, /* U+00B7 ·   c2 b7   MIDDLE DOT */
    {               0,           0 }, /* U+00B8 ¸   c2 b8   CEDILLA */
    {               0,           0 }, /* U+00B9 ¹   c2 b9   SUPERSCRIPT ONE */
    {               0,           0 }, /* U+00BA º   c2 ba   MASCULINE ORDINAL INDICATOR */
    {   SW_WP_COMPLEX,           0 }, /* U+00BB »   c2 bb   RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
    {               0,           0 }, /* U+00BC ¼   c2 bc   VULGAR FRACTION ONE QUARTER */
    {               0,           0 }, /* U+00BD ½   c2 bd   VULGAR FRACTION ONE HALF */
    {               0,           0 }, /* U+00BE ¾   c2 be   VULGAR FRACTION THREE QUARTERS */
    {   SW_WP_COMPLEX,           0 }, /* U+00BF ¿   c2 bf   INVERTED QUESTION MARK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C0 À   c3 80   LATIN CAPITAL LETTER A WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C1 Á   c3 81   LATIN CAPITAL LETTER A WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C2 Â   c3 82   LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C3 Ã   c3 83   LATIN CAPITAL LETTER A WITH TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C4 Ä   c3 84   LATIN CAPITAL LETTER A WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C5 Å   c3 85   LATIN CAPITAL LETTER A WITH RING ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C6 Æ   c3 86   LATIN CAPITAL LETTER AE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C7 Ç   c3 87   LATIN CAPITAL LETTER C WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C8 È   c3 88   LATIN CAPITAL LETTER E WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00C9 É   c3 89   LATIN CAPITAL LETTER E WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CA Ê   c3 8a   LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CB Ë   c3 8b   LATIN CAPITAL LETTER E WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CC Ì   c3 8c   LATIN CAPITAL LETTER I WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CD Í   c3 8d   LATIN CAPITAL LETTER I WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CE Î   c3 8e   LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00CF Ï   c3 8f   LATIN CAPITAL LETTER I WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D0 Ð   c3 90   LATIN CAPITAL LETTER ETH */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D1 Ñ   c3 91   LATIN CAPITAL LETTER N WITH TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D2 Ò   c3 92   LATIN CAPITAL LETTER O WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D3 Ó   c3 93   LATIN CAPITAL LETTER O WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D4 Ô   c3 94   LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D5 Õ   c3 95   LATIN CAPITAL LETTER O WITH TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D6 Ö   c3 96   LATIN CAPITAL LETTER O WITH DIAERESIS */
    {   SW_WP_COMPLEX,           0 }, /* U+00D7 ×   c3 97   MULTIPLICATION SIGN */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D8 Ø   c3 98   LATIN CAPITAL LETTER O WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00D9 Ù   c3 99   LATIN CAPITAL LETTER U WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00DA Ú   c3 9a   LATIN CAPITAL LETTER U WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00DB Û   c3 9b   LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00DC Ü   c3 9c   LATIN CAPITAL LETTER U WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00DD Ý   c3 9d   LATIN CAPITAL LETTER Y WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+00DE Þ   c3 9e   LATIN CAPITAL LETTER THORN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00DF ß   c3 9f   LATIN SMALL LETTER SHARP S */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E0 à   c3 a0   LATIN SMALL LETTER A WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E1 á   c3 a1   LATIN SMALL LETTER A WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E2 â   c3 a2   LATIN SMALL LETTER A WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E3 ã   c3 a3   LATIN SMALL LETTER A WITH TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E4 ä   c3 a4   LATIN SMALL LETTER A WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E5 å   c3 a5   LATIN SMALL LETTER A WITH RING ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E6 æ   c3 a6   LATIN SMALL LETTER AE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E7 ç   c3 a7   LATIN SMALL LETTER C WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E8 è   c3 a8   LATIN SMALL LETTER E WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00E9 é   c3 a9   LATIN SMALL LETTER E WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00EA ê   c3 aa   LATIN SMALL LETTER E WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00EB ë   c3 ab   LATIN SMALL LETTER E WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00EC ì   c3 ac   LATIN SMALL LETTER I WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00ED í   c3 ad   LATIN SMALL LETTER I WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00EE î   c3 ae   LATIN SMALL LETTER I WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00EF ï   c3 af   LATIN SMALL LETTER I WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F0 ð   c3 b0   LATIN SMALL LETTER ETH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F1 ñ   c3 b1   LATIN SMALL LETTER N WITH TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F2 ò   c3 b2   LATIN SMALL LETTER O WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F3 ó   c3 b3   LATIN SMALL LETTER O WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F4 ô   c3 b4   LATIN SMALL LETTER O WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F5 õ   c3 b5   LATIN SMALL LETTER O WITH TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F6 ö   c3 b6   LATIN SMALL LETTER O WITH DIAERESIS */
    {   SW_WP_COMPLEX,           0 }, /* U+00F7 ÷   c3 b7   DIVISION SIGN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F8 ø   c3 b8   LATIN SMALL LETTER O WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00F9 ù   c3 b9   LATIN SMALL LETTER U WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FA ú   c3 ba   LATIN SMALL LETTER U WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FB û   c3 bb   LATIN SMALL LETTER U WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FC ü   c3 bc   LATIN SMALL LETTER U WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FD ý   c3 bd   LATIN SMALL LETTER Y WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FE þ   c3 be   LATIN SMALL LETTER THORN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+00FF ÿ   c3 bf   LATIN SMALL LETTER Y WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0100 Ā   c4 80   LATIN CAPITAL LETTER A WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0101 ā   c4 81   LATIN SMALL LETTER A WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0102 Ă   c4 82   LATIN CAPITAL LETTER A WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0103 ă   c4 83   LATIN SMALL LETTER A WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0104 Ą   c4 84   LATIN CAPITAL LETTER A WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0105 ą   c4 85   LATIN SMALL LETTER A WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0106 Ć   c4 86   LATIN CAPITAL LETTER C WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0107 ć   c4 87   LATIN SMALL LETTER C WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0108 Ĉ   c4 88   LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0109 ĉ   c4 89   LATIN SMALL LETTER C WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+010A Ċ   c4 8a   LATIN CAPITAL LETTER C WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+010B ċ   c4 8b   LATIN SMALL LETTER C WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+010C Č   c4 8c   LATIN CAPITAL LETTER C WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+010D č   c4 8d   LATIN SMALL LETTER C WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+010E Ď   c4 8e   LATIN CAPITAL LETTER D WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+010F ď   c4 8f   LATIN SMALL LETTER D WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0110 Đ   c4 90   LATIN CAPITAL LETTER D WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0111 đ   c4 91   LATIN SMALL LETTER D WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0112 Ē   c4 92   LATIN CAPITAL LETTER E WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0113 ē   c4 93   LATIN SMALL LETTER E WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0114 Ĕ   c4 94   LATIN CAPITAL LETTER E WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0115 ĕ   c4 95   LATIN SMALL LETTER E WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0116 Ė   c4 96   LATIN CAPITAL LETTER E WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0117 ė   c4 97   LATIN SMALL LETTER E WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0118 Ę   c4 98   LATIN CAPITAL LETTER E WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0119 ę   c4 99   LATIN SMALL LETTER E WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+011A Ě   c4 9a   LATIN CAPITAL LETTER E WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+011B ě   c4 9b   LATIN SMALL LETTER E WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+011C Ĝ   c4 9c   LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+011D ĝ   c4 9d   LATIN SMALL LETTER G WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+011E Ğ   c4 9e   LATIN CAPITAL LETTER G WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+011F ğ   c4 9f   LATIN SMALL LETTER G WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0120 Ġ   c4 a0   LATIN CAPITAL LETTER G WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0121 ġ   c4 a1   LATIN SMALL LETTER G WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0122 Ģ   c4 a2   LATIN CAPITAL LETTER G WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0123 ģ   c4 a3   LATIN SMALL LETTER G WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0124 Ĥ   c4 a4   LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0125 ĥ   c4 a5   LATIN SMALL LETTER H WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0126 Ħ   c4 a6   LATIN CAPITAL LETTER H WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0127 ħ   c4 a7   LATIN SMALL LETTER H WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0128 Ĩ   c4 a8   LATIN CAPITAL LETTER I WITH TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0129 ĩ   c4 a9   LATIN SMALL LETTER I WITH TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+012A Ī   c4 aa   LATIN CAPITAL LETTER I WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+012B ī   c4 ab   LATIN SMALL LETTER I WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+012C Ĭ   c4 ac   LATIN CAPITAL LETTER I WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+012D ĭ   c4 ad   LATIN SMALL LETTER I WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+012E Į   c4 ae   LATIN CAPITAL LETTER I WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+012F į   c4 af   LATIN SMALL LETTER I WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0130 İ   c4 b0   LATIN CAPITAL LETTER I WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0131 ı   c4 b1   LATIN SMALL LETTER DOTLESS I */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0132 Ĳ   c4 b2   LATIN CAPITAL LIGATURE IJ */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0133 ĳ   c4 b3   LATIN SMALL LIGATURE IJ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0134 Ĵ   c4 b4   LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0135 ĵ   c4 b5   LATIN SMALL LETTER J WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0136 Ķ   c4 b6   LATIN CAPITAL LETTER K WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0137 ķ   c4 b7   LATIN SMALL LETTER K WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0138 ĸ   c4 b8   LATIN SMALL LETTER KRA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0139 Ĺ   c4 b9   LATIN CAPITAL LETTER L WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+013A ĺ   c4 ba   LATIN SMALL LETTER L WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+013B Ļ   c4 bb   LATIN CAPITAL LETTER L WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+013C ļ   c4 bc   LATIN SMALL LETTER L WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+013D Ľ   c4 bd   LATIN CAPITAL LETTER L WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+013E ľ   c4 be   LATIN SMALL LETTER L WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+013F Ŀ   c4 bf   LATIN CAPITAL LETTER L WITH MIDDLE DOT */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0140 ŀ   c5 80   LATIN SMALL LETTER L WITH MIDDLE DOT */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0141 Ł   c5 81   LATIN CAPITAL LETTER L WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0142 ł   c5 82   LATIN SMALL LETTER L WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0143 Ń   c5 83   LATIN CAPITAL LETTER N WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0144 ń   c5 84   LATIN SMALL LETTER N WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0145 Ņ   c5 85   LATIN CAPITAL LETTER N WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0146 ņ   c5 86   LATIN SMALL LETTER N WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0147 Ň   c5 87   LATIN CAPITAL LETTER N WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0148 ň   c5 88   LATIN SMALL LETTER N WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0149 ŉ   c5 89   LATIN SMALL LETTER N PRECEDED BY APOSTROPHE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+014A Ŋ   c5 8a   LATIN CAPITAL LETTER ENG */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+014B ŋ   c5 8b   LATIN SMALL LETTER ENG */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+014C Ō   c5 8c   LATIN CAPITAL LETTER O WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+014D ō   c5 8d   LATIN SMALL LETTER O WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+014E Ŏ   c5 8e   LATIN CAPITAL LETTER O WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+014F ŏ   c5 8f   LATIN SMALL LETTER O WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0150 Ő   c5 90   LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0151 ő   c5 91   LATIN SMALL LETTER O WITH DOUBLE ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0152 Œ   c5 92   LATIN CAPITAL LIGATURE OE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0153 œ   c5 93   LATIN SMALL LIGATURE OE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0154 Ŕ   c5 94   LATIN CAPITAL LETTER R WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0155 ŕ   c5 95   LATIN SMALL LETTER R WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0156 Ŗ   c5 96   LATIN CAPITAL LETTER R WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0157 ŗ   c5 97   LATIN SMALL LETTER R WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0158 Ř   c5 98   LATIN CAPITAL LETTER R WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0159 ř   c5 99   LATIN SMALL LETTER R WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+015A Ś   c5 9a   LATIN CAPITAL LETTER S WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+015B ś   c5 9b   LATIN SMALL LETTER S WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+015C Ŝ   c5 9c   LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+015D ŝ   c5 9d   LATIN SMALL LETTER S WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+015E Ş   c5 9e   LATIN CAPITAL LETTER S WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+015F ş   c5 9f   LATIN SMALL LETTER S WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0160 Š   c5 a0   LATIN CAPITAL LETTER S WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0161 š   c5 a1   LATIN SMALL LETTER S WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0162 Ţ   c5 a2   LATIN CAPITAL LETTER T WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0163 ţ   c5 a3   LATIN SMALL LETTER T WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0164 Ť   c5 a4   LATIN CAPITAL LETTER T WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0165 ť   c5 a5   LATIN SMALL LETTER T WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0166 Ŧ   c5 a6   LATIN CAPITAL LETTER T WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0167 ŧ   c5 a7   LATIN SMALL LETTER T WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0168 Ũ   c5 a8   LATIN CAPITAL LETTER U WITH TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0169 ũ   c5 a9   LATIN SMALL LETTER U WITH TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+016A Ū   c5 aa   LATIN CAPITAL LETTER U WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+016B ū   c5 ab   LATIN SMALL LETTER U WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+016C Ŭ   c5 ac   LATIN CAPITAL LETTER U WITH BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+016D ŭ   c5 ad   LATIN SMALL LETTER U WITH BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+016E Ů   c5 ae   LATIN CAPITAL LETTER U WITH RING ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+016F ů   c5 af   LATIN SMALL LETTER U WITH RING ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0170 Ű   c5 b0   LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0171 ű   c5 b1   LATIN SMALL LETTER U WITH DOUBLE ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0172 Ų   c5 b2   LATIN CAPITAL LETTER U WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0173 ų   c5 b3   LATIN SMALL LETTER U WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0174 Ŵ   c5 b4   LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0175 ŵ   c5 b5   LATIN SMALL LETTER W WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0176 Ŷ   c5 b6   LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0177 ŷ   c5 b7   LATIN SMALL LETTER Y WITH CIRCUMFLEX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0178 Ÿ   c5 b8   LATIN CAPITAL LETTER Y WITH DIAERESIS */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0179 Ź   c5 b9   LATIN CAPITAL LETTER Z WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+017A ź   c5 ba   LATIN SMALL LETTER Z WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+017B Ż   c5 bb   LATIN CAPITAL LETTER Z WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+017C ż   c5 bc   LATIN SMALL LETTER Z WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+017D Ž   c5 bd   LATIN CAPITAL LETTER Z WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+017E ž   c5 be   LATIN SMALL LETTER Z WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+017F ſ   c5 bf   LATIN SMALL LETTER LONG S */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0180 ƀ   c6 80   LATIN SMALL LETTER B WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0181 Ɓ   c6 81   LATIN CAPITAL LETTER B WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0182 Ƃ   c6 82   LATIN CAPITAL LETTER B WITH TOPBAR */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0183 ƃ   c6 83   LATIN SMALL LETTER B WITH TOPBAR */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0184 Ƅ   c6 84   LATIN CAPITAL LETTER TONE SIX */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0185 ƅ   c6 85   LATIN SMALL LETTER TONE SIX */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0186 Ɔ   c6 86   LATIN CAPITAL LETTER OPEN O */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0187 Ƈ   c6 87   LATIN CAPITAL LETTER C WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0188 ƈ   c6 88   LATIN SMALL LETTER C WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0189 Ɖ   c6 89   LATIN CAPITAL LETTER AFRICAN D */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+018A Ɗ   c6 8a   LATIN CAPITAL LETTER D WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+018B Ƌ   c6 8b   LATIN CAPITAL LETTER D WITH TOPBAR */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+018C ƌ   c6 8c   LATIN SMALL LETTER D WITH TOPBAR */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+018D ƍ   c6 8d   LATIN SMALL LETTER TURNED DELTA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+018E Ǝ   c6 8e   LATIN CAPITAL LETTER REVERSED E */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+018F Ə   c6 8f   LATIN CAPITAL LETTER SCHWA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0190 Ɛ   c6 90   LATIN CAPITAL LETTER OPEN E */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0191 Ƒ   c6 91   LATIN CAPITAL LETTER F WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0192 ƒ   c6 92   LATIN SMALL LETTER F WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0193 Ɠ   c6 93   LATIN CAPITAL LETTER G WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0194 Ɣ   c6 94   LATIN CAPITAL LETTER GAMMA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0195 ƕ   c6 95   LATIN SMALL LETTER HV */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0196 Ɩ   c6 96   LATIN CAPITAL LETTER IOTA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0197 Ɨ   c6 97   LATIN CAPITAL LETTER I WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0198 Ƙ   c6 98   LATIN CAPITAL LETTER K WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0199 ƙ   c6 99   LATIN SMALL LETTER K WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+019A ƚ   c6 9a   LATIN SMALL LETTER L WITH BAR */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+019B ƛ   c6 9b   LATIN SMALL LETTER LAMBDA WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+019C Ɯ   c6 9c   LATIN CAPITAL LETTER TURNED M */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+019D Ɲ   c6 9d   LATIN CAPITAL LETTER N WITH LEFT HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+019E ƞ   c6 9e   LATIN SMALL LETTER N WITH LONG RIGHT LEG */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+019F Ɵ   c6 9f   LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01A0 Ơ   c6 a0   LATIN CAPITAL LETTER O WITH HORN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01A1 ơ   c6 a1   LATIN SMALL LETTER O WITH HORN */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01A2 Ƣ   c6 a2   LATIN CAPITAL LETTER OI */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01A3 ƣ   c6 a3   LATIN SMALL LETTER OI */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01A4 Ƥ   c6 a4   LATIN CAPITAL LETTER P WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01A5 ƥ   c6 a5   LATIN SMALL LETTER P WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01A6 Ʀ   c6 a6   LATIN LETTER YR */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01A7 Ƨ   c6 a7   LATIN CAPITAL LETTER TONE TWO */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01A8 ƨ   c6 a8   LATIN SMALL LETTER TONE TWO */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01A9 Ʃ   c6 a9   LATIN CAPITAL LETTER ESH */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01AA ƪ   c6 aa   LATIN LETTER REVERSED ESH LOOP */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01AB ƫ   c6 ab   LATIN SMALL LETTER T WITH PALATAL HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01AC Ƭ   c6 ac   LATIN CAPITAL LETTER T WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01AD ƭ   c6 ad   LATIN SMALL LETTER T WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01AE Ʈ   c6 ae   LATIN CAPITAL LETTER T WITH RETROFLEX HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01AF Ư   c6 af   LATIN CAPITAL LETTER U WITH HORN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01B0 ư   c6 b0   LATIN SMALL LETTER U WITH HORN */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B1 Ʊ   c6 b1   LATIN CAPITAL LETTER UPSILON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B2 Ʋ   c6 b2   LATIN CAPITAL LETTER V WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B3 Ƴ   c6 b3   LATIN CAPITAL LETTER Y WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01B4 ƴ   c6 b4   LATIN SMALL LETTER Y WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B5 Ƶ   c6 b5   LATIN CAPITAL LETTER Z WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01B6 ƶ   c6 b6   LATIN SMALL LETTER Z WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B7 Ʒ   c6 b7   LATIN CAPITAL LETTER EZH */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01B8 Ƹ   c6 b8   LATIN CAPITAL LETTER EZH REVERSED */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01B9 ƹ   c6 b9   LATIN SMALL LETTER EZH REVERSED */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01BA ƺ   c6 ba   LATIN SMALL LETTER EZH WITH TAIL */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01BB ƻ   c6 bb   LATIN LETTER TWO WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01BC Ƽ   c6 bc   LATIN CAPITAL LETTER TONE FIVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01BD ƽ   c6 bd   LATIN SMALL LETTER TONE FIVE */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01BE ƾ   c6 be   LATIN LETTER INVERTED GLOTTAL STOP WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01BF ƿ   c6 bf   LATIN LETTER WYNN */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01C0 ǀ   c7 80   LATIN LETTER DENTAL CLICK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01C1 ǁ   c7 81   LATIN LETTER LATERAL CLICK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01C2 ǂ   c7 82   LATIN LETTER ALVEOLAR CLICK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+01C3 ǃ   c7 83   LATIN LETTER RETROFLEX CLICK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01C4 Ǆ   c7 84   LATIN CAPITAL LETTER DZ WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01C5 ǅ   c7 85   LATIN CAPITAL LETTER D WITH SMALL LETTER Z WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01C6 ǆ   c7 86   LATIN SMALL LETTER DZ WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01C7 Ǉ   c7 87   LATIN CAPITAL LETTER LJ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01C8 ǈ   c7 88   LATIN CAPITAL LETTER L WITH SMALL LETTER J */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01C9 ǉ   c7 89   LATIN SMALL LETTER LJ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01CA Ǌ   c7 8a   LATIN CAPITAL LETTER NJ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01CB ǋ   c7 8b   LATIN CAPITAL LETTER N WITH SMALL LETTER J */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01CC ǌ   c7 8c   LATIN SMALL LETTER NJ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01CD Ǎ   c7 8d   LATIN CAPITAL LETTER A WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01CE ǎ   c7 8e   LATIN SMALL LETTER A WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01CF Ǐ   c7 8f   LATIN CAPITAL LETTER I WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01D0 ǐ   c7 90   LATIN SMALL LETTER I WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01D1 Ǒ   c7 91   LATIN CAPITAL LETTER O WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01D2 ǒ   c7 92   LATIN SMALL LETTER O WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01D3 Ǔ   c7 93   LATIN CAPITAL LETTER U WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01D4 ǔ   c7 94   LATIN SMALL LETTER U WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01D5 Ǖ   c7 95   LATIN CAPITAL LETTER U WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01D6 ǖ   c7 96   LATIN SMALL LETTER U WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01D7 Ǘ   c7 97   LATIN CAPITAL LETTER U WITH DIAERESIS AND ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01D8 ǘ   c7 98   LATIN SMALL LETTER U WITH DIAERESIS AND ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01D9 Ǚ   c7 99   LATIN CAPITAL LETTER U WITH DIAERESIS AND CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01DA ǚ   c7 9a   LATIN SMALL LETTER U WITH DIAERESIS AND CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01DB Ǜ   c7 9b   LATIN CAPITAL LETTER U WITH DIAERESIS AND GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01DC ǜ   c7 9c   LATIN SMALL LETTER U WITH DIAERESIS AND GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01DD ǝ   c7 9d   LATIN SMALL LETTER TURNED E */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01DE Ǟ   c7 9e   LATIN CAPITAL LETTER A WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01DF ǟ   c7 9f   LATIN SMALL LETTER A WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01E0 Ǡ   c7 a0   LATIN CAPITAL LETTER A WITH DOT ABOVE AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01E1 ǡ   c7 a1   LATIN SMALL LETTER A WITH DOT ABOVE AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01E2 Ǣ   c7 a2   LATIN CAPITAL LETTER AE WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01E3 ǣ   c7 a3   LATIN SMALL LETTER AE WITH MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01E4 Ǥ   c7 a4   LATIN CAPITAL LETTER G WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01E5 ǥ   c7 a5   LATIN SMALL LETTER G WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01E6 Ǧ   c7 a6   LATIN CAPITAL LETTER G WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01E7 ǧ   c7 a7   LATIN SMALL LETTER G WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01E8 Ǩ   c7 a8   LATIN CAPITAL LETTER K WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01E9 ǩ   c7 a9   LATIN SMALL LETTER K WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01EA Ǫ   c7 aa   LATIN CAPITAL LETTER O WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01EB ǫ   c7 ab   LATIN SMALL LETTER O WITH OGONEK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01EC Ǭ   c7 ac   LATIN CAPITAL LETTER O WITH OGONEK AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01ED ǭ   c7 ad   LATIN SMALL LETTER O WITH OGONEK AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01EE Ǯ   c7 ae   LATIN CAPITAL LETTER EZH WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01EF ǯ   c7 af   LATIN SMALL LETTER EZH WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01F0 ǰ   c7 b0   LATIN SMALL LETTER J WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F1 Ǳ   c7 b1   LATIN CAPITAL LETTER DZ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F2 ǲ   c7 b2   LATIN CAPITAL LETTER D WITH SMALL LETTER Z */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01F3 ǳ   c7 b3   LATIN SMALL LETTER DZ */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F4 Ǵ   c7 b4   LATIN CAPITAL LETTER G WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01F5 ǵ   c7 b5   LATIN SMALL LETTER G WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F6 Ƕ   c7 b6   LATIN CAPITAL LETTER HWAIR */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F7 Ƿ   c7 b7   LATIN CAPITAL LETTER WYNN */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01F8 Ǹ   c7 b8   LATIN CAPITAL LETTER N WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01F9 ǹ   c7 b9   LATIN SMALL LETTER N WITH GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01FA Ǻ   c7 ba   LATIN CAPITAL LETTER A WITH RING ABOVE AND ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01FB ǻ   c7 bb   LATIN SMALL LETTER A WITH RING ABOVE AND ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01FC Ǽ   c7 bc   LATIN CAPITAL LETTER AE WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01FD ǽ   c7 bd   LATIN SMALL LETTER AE WITH ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+01FE Ǿ   c7 be   LATIN CAPITAL LETTER O WITH STROKE AND ACUTE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+01FF ǿ   c7 bf   LATIN SMALL LETTER O WITH STROKE AND ACUTE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0200 Ȁ   c8 80   LATIN CAPITAL LETTER A WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0201 ȁ   c8 81   LATIN SMALL LETTER A WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0202 Ȃ   c8 82   LATIN CAPITAL LETTER A WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0203 ȃ   c8 83   LATIN SMALL LETTER A WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0204 Ȅ   c8 84   LATIN CAPITAL LETTER E WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0205 ȅ   c8 85   LATIN SMALL LETTER E WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0206 Ȇ   c8 86   LATIN CAPITAL LETTER E WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0207 ȇ   c8 87   LATIN SMALL LETTER E WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0208 Ȉ   c8 88   LATIN CAPITAL LETTER I WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0209 ȉ   c8 89   LATIN SMALL LETTER I WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+020A Ȋ   c8 8a   LATIN CAPITAL LETTER I WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+020B ȋ   c8 8b   LATIN SMALL LETTER I WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+020C Ȍ   c8 8c   LATIN CAPITAL LETTER O WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+020D ȍ   c8 8d   LATIN SMALL LETTER O WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+020E Ȏ   c8 8e   LATIN CAPITAL LETTER O WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+020F ȏ   c8 8f   LATIN SMALL LETTER O WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0210 Ȑ   c8 90   LATIN CAPITAL LETTER R WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0211 ȑ   c8 91   LATIN SMALL LETTER R WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0212 Ȓ   c8 92   LATIN CAPITAL LETTER R WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0213 ȓ   c8 93   LATIN SMALL LETTER R WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0214 Ȕ   c8 94   LATIN CAPITAL LETTER U WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0215 ȕ   c8 95   LATIN SMALL LETTER U WITH DOUBLE GRAVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0216 Ȗ   c8 96   LATIN CAPITAL LETTER U WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0217 ȗ   c8 97   LATIN SMALL LETTER U WITH INVERTED BREVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0218 Ș   c8 98   LATIN CAPITAL LETTER S WITH COMMA BELOW */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0219 ș   c8 99   LATIN SMALL LETTER S WITH COMMA BELOW */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+021A Ț   c8 9a   LATIN CAPITAL LETTER T WITH COMMA BELOW */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+021B ț   c8 9b   LATIN SMALL LETTER T WITH COMMA BELOW */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+021C Ȝ   c8 9c   LATIN CAPITAL LETTER YOGH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+021D ȝ   c8 9d   LATIN SMALL LETTER YOGH */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+021E Ȟ   c8 9e   LATIN CAPITAL LETTER H WITH CARON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+021F ȟ   c8 9f   LATIN SMALL LETTER H WITH CARON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0220 Ƞ   c8 a0   LATIN CAPITAL LETTER N WITH LONG RIGHT LEG */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0221 ȡ   c8 a1   LATIN SMALL LETTER D WITH CURL */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0222 Ȣ   c8 a2   LATIN CAPITAL LETTER OU */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0223 ȣ   c8 a3   LATIN SMALL LETTER OU */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0224 Ȥ   c8 a4   LATIN CAPITAL LETTER Z WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0225 ȥ   c8 a5   LATIN SMALL LETTER Z WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0226 Ȧ   c8 a6   LATIN CAPITAL LETTER A WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0227 ȧ   c8 a7   LATIN SMALL LETTER A WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0228 Ȩ   c8 a8   LATIN CAPITAL LETTER E WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0229 ȩ   c8 a9   LATIN SMALL LETTER E WITH CEDILLA */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+022A Ȫ   c8 aa   LATIN CAPITAL LETTER O WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+022B ȫ   c8 ab   LATIN SMALL LETTER O WITH DIAERESIS AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+022C Ȭ   c8 ac   LATIN CAPITAL LETTER O WITH TILDE AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+022D ȭ   c8 ad   LATIN SMALL LETTER O WITH TILDE AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+022E Ȯ   c8 ae   LATIN CAPITAL LETTER O WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+022F ȯ   c8 af   LATIN SMALL LETTER O WITH DOT ABOVE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0230 Ȱ   c8 b0   LATIN CAPITAL LETTER O WITH DOT ABOVE AND MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0231 ȱ   c8 b1   LATIN SMALL LETTER O WITH DOT ABOVE AND MACRON */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0232 Ȳ   c8 b2   LATIN CAPITAL LETTER Y WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0233 ȳ   c8 b3   LATIN SMALL LETTER Y WITH MACRON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0234 ȴ   c8 b4   LATIN SMALL LETTER L WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0235 ȵ   c8 b5   LATIN SMALL LETTER N WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0236 ȶ   c8 b6   LATIN SMALL LETTER T WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0237 ȷ   c8 b7   LATIN SMALL LETTER DOTLESS J */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0238 ȸ   c8 b8   LATIN SMALL LETTER DB DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0239 ȹ   c8 b9   LATIN SMALL LETTER QP DIGRAPH */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+023A Ⱥ   c8 ba   LATIN CAPITAL LETTER A WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+023B Ȼ   c8 bb   LATIN CAPITAL LETTER C WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+023C ȼ   c8 bc   LATIN SMALL LETTER C WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+023D Ƚ   c8 bd   LATIN CAPITAL LETTER L WITH BAR */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+023E Ⱦ   c8 be   LATIN CAPITAL LETTER T WITH DIAGONAL STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+023F ȿ   c8 bf   LATIN SMALL LETTER S WITH SWASH TAIL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0240 ɀ   c9 80   LATIN SMALL LETTER Z WITH SWASH TAIL */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0241 Ɂ   c9 81   LATIN CAPITAL LETTER GLOTTAL STOP */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0242 ɂ   c9 82   LATIN SMALL LETTER GLOTTAL STOP */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0243 Ƀ   c9 83   LATIN CAPITAL LETTER B WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0244 Ʉ   c9 84   LATIN CAPITAL LETTER U BAR */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0245 Ʌ   c9 85   LATIN CAPITAL LETTER TURNED V */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0246 Ɇ   c9 86   LATIN CAPITAL LETTER E WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0247 ɇ   c9 87   LATIN SMALL LETTER E WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+0248 Ɉ   c9 88   LATIN CAPITAL LETTER J WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0249 ɉ   c9 89   LATIN SMALL LETTER J WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+024A Ɋ   c9 8a   LATIN CAPITAL LETTER SMALL Q WITH HOOK TAIL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+024B ɋ   c9 8b   LATIN SMALL LETTER Q WITH HOOK TAIL */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+024C Ɍ   c9 8c   LATIN CAPITAL LETTER R WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+024D ɍ   c9 8d   LATIN SMALL LETTER R WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UPPER }, /* U+024E Ɏ   c9 8e   LATIN CAPITAL LETTER Y WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+024F ɏ   c9 8f   LATIN SMALL LETTER Y WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0250 ɐ   c9 90   LATIN SMALL LETTER TURNED A */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0251 ɑ   c9 91   LATIN SMALL LETTER ALPHA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0252 ɒ   c9 92   LATIN SMALL LETTER TURNED ALPHA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0253 ɓ   c9 93   LATIN SMALL LETTER B WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0254 ɔ   c9 94   LATIN SMALL LETTER OPEN O */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0255 ɕ   c9 95   LATIN SMALL LETTER C WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0256 ɖ   c9 96   LATIN SMALL LETTER D WITH TAIL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0257 ɗ   c9 97   LATIN SMALL LETTER D WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0258 ɘ   c9 98   LATIN SMALL LETTER REVERSED E */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0259 ə   c9 99   LATIN SMALL LETTER SCHWA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025A ɚ   c9 9a   LATIN SMALL LETTER SCHWA WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025B ɛ   c9 9b   LATIN SMALL LETTER OPEN E */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025C ɜ   c9 9c   LATIN SMALL LETTER REVERSED OPEN E */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025D ɝ   c9 9d   LATIN SMALL LETTER REVERSED OPEN E WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025E ɞ   c9 9e   LATIN SMALL LETTER CLOSED REVERSED OPEN E */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+025F ɟ   c9 9f   LATIN SMALL LETTER DOTLESS J WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0260 ɠ   c9 a0   LATIN SMALL LETTER G WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0261 ɡ   c9 a1   LATIN SMALL LETTER SCRIPT G */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0262 ɢ   c9 a2   LATIN LETTER SMALL CAPITAL G */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0263 ɣ   c9 a3   LATIN SMALL LETTER GAMMA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0264 ɤ   c9 a4   LATIN SMALL LETTER RAMS HORN */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0265 ɥ   c9 a5   LATIN SMALL LETTER TURNED H */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0266 ɦ   c9 a6   LATIN SMALL LETTER H WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0267 ɧ   c9 a7   LATIN SMALL LETTER HENG WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0268 ɨ   c9 a8   LATIN SMALL LETTER I WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0269 ɩ   c9 a9   LATIN SMALL LETTER IOTA */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+026A ɪ   c9 aa   LATIN LETTER SMALL CAPITAL I */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+026B ɫ   c9 ab   LATIN SMALL LETTER L WITH MIDDLE TILDE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+026C ɬ   c9 ac   LATIN SMALL LETTER L WITH BELT */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+026D ɭ   c9 ad   LATIN SMALL LETTER L WITH RETROFLEX HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+026E ɮ   c9 ae   LATIN SMALL LETTER LEZH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+026F ɯ   c9 af   LATIN SMALL LETTER TURNED M */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0270 ɰ   c9 b0   LATIN SMALL LETTER TURNED M WITH LONG LEG */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0271 ɱ   c9 b1   LATIN SMALL LETTER M WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0272 ɲ   c9 b2   LATIN SMALL LETTER N WITH LEFT HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0273 ɳ   c9 b3   LATIN SMALL LETTER N WITH RETROFLEX HOOK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0274 ɴ   c9 b4   LATIN LETTER SMALL CAPITAL N */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0275 ɵ   c9 b5   LATIN SMALL LETTER BARRED O */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0276 ɶ   c9 b6   LATIN LETTER SMALL CAPITAL OE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0277 ɷ   c9 b7   LATIN SMALL LETTER CLOSED OMEGA */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0278 ɸ   c9 b8   LATIN SMALL LETTER PHI */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0279 ɹ   c9 b9   LATIN SMALL LETTER TURNED R */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027A ɺ   c9 ba   LATIN SMALL LETTER TURNED R WITH LONG LEG */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027B ɻ   c9 bb   LATIN SMALL LETTER TURNED R WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027C ɼ   c9 bc   LATIN SMALL LETTER R WITH LONG LEG */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027D ɽ   c9 bd   LATIN SMALL LETTER R WITH TAIL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027E ɾ   c9 be   LATIN SMALL LETTER R WITH FISHHOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+027F ɿ   c9 bf   LATIN SMALL LETTER REVERSED R WITH FISHHOOK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0280 ʀ   ca 80   LATIN LETTER SMALL CAPITAL R */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0281 ʁ   ca 81   LATIN LETTER SMALL CAPITAL INVERTED R */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0282 ʂ   ca 82   LATIN SMALL LETTER S WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0283 ʃ   ca 83   LATIN SMALL LETTER ESH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0284 ʄ   ca 84   LATIN SMALL LETTER DOTLESS J WITH STROKE AND HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0285 ʅ   ca 85   LATIN SMALL LETTER SQUAT REVERSED ESH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0286 ʆ   ca 86   LATIN SMALL LETTER ESH WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0287 ʇ   ca 87   LATIN SMALL LETTER TURNED T */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0288 ʈ   ca 88   LATIN SMALL LETTER T WITH RETROFLEX HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0289 ʉ   ca 89   LATIN SMALL LETTER U BAR */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+028A ʊ   ca 8a   LATIN SMALL LETTER UPSILON */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+028B ʋ   ca 8b   LATIN SMALL LETTER V WITH HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+028C ʌ   ca 8c   LATIN SMALL LETTER TURNED V */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+028D ʍ   ca 8d   LATIN SMALL LETTER TURNED W */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+028E ʎ   ca 8e   LATIN SMALL LETTER TURNED Y */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+028F ʏ   ca 8f   LATIN LETTER SMALL CAPITAL Y */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0290 ʐ   ca 90   LATIN SMALL LETTER Z WITH RETROFLEX HOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0291 ʑ   ca 91   LATIN SMALL LETTER Z WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0292 ʒ   ca 92   LATIN SMALL LETTER EZH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+0293 ʓ   ca 93   LATIN SMALL LETTER EZH WITH CURL */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0294 ʔ   ca 94   LATIN LETTER GLOTTAL STOP */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0295 ʕ   ca 95   LATIN LETTER PHARYNGEAL VOICED FRICATIVE */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0296 ʖ   ca 96   LATIN LETTER INVERTED GLOTTAL STOP */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0297 ʗ   ca 97   LATIN LETTER STRETCHED C */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0298 ʘ   ca 98   LATIN LETTER BILABIAL CLICK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+0299 ʙ   ca 99   LATIN LETTER SMALL CAPITAL B */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+029A ʚ   ca 9a   LATIN SMALL LETTER CLOSED OPEN E */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+029B ʛ   ca 9b   LATIN LETTER SMALL CAPITAL G WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+029C ʜ   ca 9c   LATIN LETTER SMALL CAPITAL H */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+029D ʝ   ca 9d   LATIN SMALL LETTER J WITH CROSSED-TAIL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+029E ʞ   ca 9e   LATIN SMALL LETTER TURNED K */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+029F ʟ   ca 9f   LATIN LETTER SMALL CAPITAL L */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A0 ʠ   ca a0   LATIN SMALL LETTER Q WITH HOOK */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+02A1 ʡ   ca a1   LATIN LETTER GLOTTAL STOP WITH STROKE */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+02A2 ʢ   ca a2   LATIN LETTER REVERSED GLOTTAL STOP WITH STROKE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A3 ʣ   ca a3   LATIN SMALL LETTER DZ DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A4 ʤ   ca a4   LATIN SMALL LETTER DEZH DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A5 ʥ   ca a5   LATIN SMALL LETTER DZ DIGRAPH WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A6 ʦ   ca a6   LATIN SMALL LETTER TS DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A7 ʧ   ca a7   LATIN SMALL LETTER TESH DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A8 ʨ   ca a8   LATIN SMALL LETTER TC DIGRAPH WITH CURL */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02A9 ʩ   ca a9   LATIN SMALL LETTER FENG DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02AA ʪ   ca aa   LATIN SMALL LETTER LS DIGRAPH */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02AB ʫ   ca ab   LATIN SMALL LETTER LZ DIGRAPH */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+02AC ʬ   ca ac   LATIN LETTER BILABIAL PERCUSSIVE */
    {     SW_WP_LATIN, SW_UI_UNDEF }, /* U+02AD ʭ   ca ad   LATIN LETTER BIDENTAL PERCUSSIVE */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02AE ʮ   ca ae   LATIN SMALL LETTER TURNED H WITH FISHHOOK */
    {     SW_WP_LATIN, SW_UI_LOWER }, /* U+02AF ʯ   ca af   LATIN SMALL LETTER TURNED H WITH FISHHOOK AND TAIL */
    {               0,           0 }, /* U+02B0 ʰ   ca b0   MODIFIER LETTER SMALL H */
    {               0,           0 }, /* U+02B1 ʱ   ca b1   MODIFIER LETTER SMALL H WITH HOOK */
    {               0,           0 }, /* U+02B2 ʲ   ca b2   MODIFIER LETTER SMALL J */
    {               0,           0 }, /* U+02B3 ʳ   ca b3   MODIFIER LETTER SMALL R */
    {               0,           0 }, /* U+02B4 ʴ   ca b4   MODIFIER LETTER SMALL TURNED R */
    {               0,           0 }, /* U+02B5 ʵ   ca b5   MODIFIER LETTER SMALL TURNED R WITH HOOK */
    {               0,           0 }, /* U+02B6 ʶ   ca b6   MODIFIER LETTER SMALL CAPITAL INVERTED R */
    {               0,           0 }, /* U+02B7 ʷ   ca b7   MODIFIER LETTER SMALL W */
    {               0,           0 }, /* U+02B8 ʸ   ca b8   MODIFIER LETTER SMALL Y */
    {               0,           0 }, /* U+02B9 ʹ   ca b9   MODIFIER LETTER PRIME */
    {               0,           0 }, /* U+02BA ʺ   ca ba   MODIFIER LETTER DOUBLE PRIME */
    {               0,           0 }, /* U+02BB ʻ   ca bb   MODIFIER LETTER TURNED COMMA */
    {               0,           0 }, /* U+02BC ʼ   ca bc   MODIFIER LETTER APOSTROPHE */
    {               0,           0 }, /* U+02BD ʽ   ca bd   MODIFIER LETTER REVERSED COMMA */
    {               0,           0 }, /* U+02BE ʾ   ca be   MODIFIER LETTER RIGHT HALF RING */
    {               0,           0 }, /* U+02BF ʿ   ca bf   MODIFIER LETTER LEFT HALF RING */
    {               0,           0 }, /* U+02C0 ˀ   cb 80   MODIFIER LETTER GLOTTAL STOP */
    {               0,           0 }, /* U+02C1 ˁ   cb 81   MODIFIER LETTER REVERSED GLOTTAL STOP */
    {               0,           0 }, /* U+02C2 ˂   cb 82   MODIFIER LETTER LEFT ARROWHEAD */
    {               0,           0 }, /* U+02C3 ˃   cb 83   MODIFIER LETTER RIGHT ARROWHEAD */
    {               0,           0 }, /* U+02C4 ˄   cb 84   MODIFIER LETTER UP ARROWHEAD */
    {               0,           0 }, /* U+02C5 ˅   cb 85   MODIFIER LETTER DOWN ARROWHEAD */
    {               0,           0 }, /* U+02C6 ˆ   cb 86   MODIFIER LETTER CIRCUMFLEX ACCENT */
    {               0,           0 }, /* U+02C7 ˇ   cb 87   CARON */
    {               0,           0 }, /* U+02C8 ˈ   cb 88   MODIFIER LETTER VERTICAL LINE */
    {               0,           0 }, /* U+02C9 ˉ   cb 89   MODIFIER LETTER MACRON */
    {               0,           0 }, /* U+02CA ˊ   cb 8a   MODIFIER LETTER ACUTE ACCENT */
    {               0,           0 }, /* U+02CB ˋ   cb 8b   MODIFIER LETTER GRAVE ACCENT */
    {               0,           0 }, /* U+02CC ˌ   cb 8c   MODIFIER LETTER LOW VERTICAL LINE */
    {               0,           0 }, /* U+02CD ˍ   cb 8d   MODIFIER LETTER LOW MACRON */
    {               0,           0 }, /* U+02CE ˎ   cb 8e   MODIFIER LETTER LOW GRAVE ACCENT */
    {               0,           0 }, /* U+02CF ˏ   cb 8f   MODIFIER LETTER LOW ACUTE ACCENT */
    {               0,           0 }, /* U+02D0 ː   cb 90   MODIFIER LETTER TRIANGULAR COLON */
    {               0,           0 }, /* U+02D1 ˑ   cb 91   MODIFIER LETTER HALF TRIANGULAR COLON */
    {               0,           0 }, /* U+02D2 ˒   cb 92   MODIFIER LETTER CENTRED RIGHT HALF RING */
    {               0,           0 }, /* U+02D3 ˓   cb 93   MODIFIER LETTER CENTRED LEFT HALF RING */
    {               0,           0 }, /* U+02D4 ˔   cb 94   MODIFIER LETTER UP TACK */
    {               0,           0 }, /* U+02D5 ˕   cb 95   MODIFIER LETTER DOWN TACK */
    {               0,           0 }, /* U+02D6 ˖   cb 96   MODIFIER LETTER PLUS SIGN */
    {               0,           0 }, /* U+02D7 ˗   cb 97   MODIFIER LETTER MINUS SIGN */
    {               0,           0 }, /* U+02D8 ˘   cb 98   BREVE */
    {               0,           0 }, /* U+02D9 ˙   cb 99   DOT ABOVE */
    {               0,           0 }, /* U+02DA ˚   cb 9a   RING ABOVE */
    {               0,           0 }, /* U+02DB ˛   cb 9b   OGONEK */
    {               0,           0 }, /* U+02DC ˜   cb 9c   SMALL TILDE */
    {               0,           0 }, /* U+02DD ˝   cb 9d   DOUBLE ACUTE ACCENT */
    {               0,           0 }, /* U+02DE ˞   cb 9e   MODIFIER LETTER RHOTIC HOOK */
    {               0,           0 }, /* U+02DF ˟   cb 9f   MODIFIER LETTER CROSS ACCENT */
    {               0,           0 }, /* U+02E0 ˠ   cb a0   MODIFIER LETTER SMALL GAMMA */
    {               0,           0 }, /* U+02E1 ˡ   cb a1   MODIFIER LETTER SMALL L */
    {               0,           0 }, /* U+02E2 ˢ   cb a2   MODIFIER LETTER SMALL S */
    {               0,           0 }, /* U+02E3 ˣ   cb a3   MODIFIER LETTER SMALL X */
    {               0,           0 }, /* U+02E4 ˤ   cb a4   MODIFIER LETTER SMALL REVERSED GLOTTAL STOP */
    {               0,           0 }, /* U+02E5 ˥   cb a5   MODIFIER LETTER EXTRA-HIGH TONE BAR */
    {               0,           0 }, /* U+02E6 ˦   cb a6   MODIFIER LETTER HIGH TONE BAR */
    {               0,           0 }, /* U+02E7 ˧   cb a7   MODIFIER LETTER MID TONE BAR */
    {               0,           0 }, /* U+02E8 ˨   cb a8   MODIFIER LETTER LOW TONE BAR */
    {               0,           0 }, /* U+02E9 ˩   cb a9   MODIFIER LETTER EXTRA-LOW TONE BAR */
    {               0,           0 }, /* U+02EA ˪   cb aa   MODIFIER LETTER YIN DEPARTING TONE MARK */
    {               0,           0 }, /* U+02EB ˫   cb ab   MODIFIER LETTER YANG DEPARTING TONE MARK */
    {               0,           0 }, /* U+02EC ˬ   cb ac   MODIFIER LETTER VOICING */
    {               0,           0 }, /* U+02ED ˭   cb ad   MODIFIER LETTER UNASPIRATED */
    {               0,           0 }, /* U+02EE ˮ   cb ae   MODIFIER LETTER DOUBLE APOSTROPHE */
    {               0,           0 }, /* U+02EF ˯   cb af   MODIFIER LETTER LOW DOWN ARROWHEAD */
    {               0,           0 }, /* U+02F0 ˰   cb b0   MODIFIER LETTER LOW UP ARROWHEAD */
    {               0,           0 }, /* U+02F1 ˱   cb b1   MODIFIER LETTER LOW LEFT ARROWHEAD */
    {               0,           0 }, /* U+02F2 ˲   cb b2   MODIFIER LETTER LOW RIGHT ARROWHEAD */
    {               0,           0 }, /* U+02F3 ˳   cb b3   MODIFIER LETTER LOW RING */
    {               0,           0 }, /* U+02F4 ˴   cb b4   MODIFIER LETTER MIDDLE GRAVE ACCENT */
    {               0,           0 }, /* U+02F5 ˵   cb b5   MODIFIER LETTER MIDDLE DOUBLE GRAVE ACCENT */
    {               0,           0 }, /* U+02F6 ˶   cb b6   MODIFIER LETTER MIDDLE DOUBLE ACUTE ACCENT */
    {               0,           0 }, /* U+02F7 ˷   cb b7   MODIFIER LETTER LOW TILDE */
    {               0,           0 }, /* U+02F8 ˸   cb b8   MODIFIER LETTER RAISED COLON */
    {               0,           0 }, /* U+02F9 ˹   cb b9   MODIFIER LETTER BEGIN HIGH TONE */
    {               0,           0 }, /* U+02FA ˺   cb ba   MODIFIER LETTER END HIGH TONE */
    {               0,           0 }, /* U+02FB ˻   cb bb   MODIFIER LETTER BEGIN LOW TONE */
    {               0,           0 }, /* U+02FC ˼   cb bc   MODIFIER LETTER END LOW TONE */
    {               0,           0 }, /* U+02FD ˽   cb bd   MODIFIER LETTER SHELF */
    {               0,           0 }, /* U+02FE ˾   cb be   MODIFIER LETTER OPEN SHELF */
    {               0,           0 }, /* U+02FF ˿   cb bf   MODIFIER LETTER LOW LEFT ARROW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0300 ?   cc 80   COMBINING GRAVE ACCENT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0301 ?   cc 81   COMBINING ACUTE ACCENT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0302 ?   cc 82   COMBINING CIRCUMFLEX ACCENT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0303 ?   cc 83   COMBINING TILDE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0304 ?   cc 84   COMBINING MACRON */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0305 ?   cc 85   COMBINING OVERLINE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0306 ?   cc 86   COMBINING BREVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0307 ?   cc 87   COMBINING DOT ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0308 ?   cc 88   COMBINING DIAERESIS */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0309 ?   cc 89   COMBINING HOOK ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030A ?   cc 8a   COMBINING RING ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030B ?   cc 8b   COMBINING DOUBLE ACUTE ACCENT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030C ?   cc 8c   COMBINING CARON */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030D ?   cc 8d   COMBINING VERTICAL LINE ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030E ?   cc 8e   COMBINING DOUBLE VERTICAL LINE ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+030F ?   cc 8f   COMBINING DOUBLE GRAVE ACCENT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0310 ?   cc 90   COMBINING CANDRABINDU */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0311 ?   cc 91   COMBINING INVERTED BREVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0312 ?   cc 92   COMBINING TURNED COMMA ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0313 ?   cc 93   COMBINING COMMA ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0314 ?   cc 94   COMBINING REVERSED COMMA ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0315 ?   cc 95   COMBINING COMMA ABOVE RIGHT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0316 ?   cc 96   COMBINING GRAVE ACCENT BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0317 ?   cc 97   COMBINING ACUTE ACCENT BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0318 ?   cc 98   COMBINING LEFT TACK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0319 ?   cc 99   COMBINING RIGHT TACK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031A ?   cc 9a   COMBINING LEFT ANGLE ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031B ?   cc 9b   COMBINING HORN */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031C ?   cc 9c   COMBINING LEFT HALF RING BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031D ?   cc 9d   COMBINING UP TACK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031E ?   cc 9e   COMBINING DOWN TACK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+031F ?   cc 9f   COMBINING PLUS SIGN BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0320 ?   cc a0   COMBINING MINUS SIGN BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0321 ?   cc a1   COMBINING PALATALIZED HOOK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0322 ?   cc a2   COMBINING RETROFLEX HOOK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0323 ?   cc a3   COMBINING DOT BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0324 ?   cc a4   COMBINING DIAERESIS BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0325 ?   cc a5   COMBINING RING BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0326 ?   cc a6   COMBINING COMMA BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0327 ?   cc a7   COMBINING CEDILLA */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0328 ?   cc a8   COMBINING OGONEK */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0329 ?   cc a9   COMBINING VERTICAL LINE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032A ?   cc aa   COMBINING BRIDGE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032B ?   cc ab   COMBINING INVERTED DOUBLE ARCH BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032C ?   cc ac   COMBINING CARON BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032D ?   cc ad   COMBINING CIRCUMFLEX ACCENT BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032E ?   cc ae   COMBINING BREVE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+032F ?   cc af   COMBINING INVERTED BREVE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0330 ?   cc b0   COMBINING TILDE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0331 ?   cc b1   COMBINING MACRON BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0332 ?   cc b2   COMBINING LOW LINE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0333 ?   cc b3   COMBINING DOUBLE LOW LINE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0334 ?   cc b4   COMBINING TILDE OVERLAY */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0335 ?   cc b5   COMBINING SHORT STROKE OVERLAY */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0336 ?   cc b6   COMBINING LONG STROKE OVERLAY */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0337 ?   cc b7   COMBINING SHORT SOLIDUS OVERLAY */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0338 ?   cc b8   COMBINING LONG SOLIDUS OVERLAY */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0339 ?   cc b9   COMBINING RIGHT HALF RING BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033A ?   cc ba   COMBINING INVERTED BRIDGE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033B ?   cc bb   COMBINING SQUARE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033C ?   cc bc   COMBINING SEAGULL BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033D ?   cc bd   COMBINING X ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033E ?   cc be   COMBINING VERTICAL TILDE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+033F ?   cc bf   COMBINING DOUBLE OVERLINE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0340 ?   cd 80   COMBINING GRAVE TONE MARK */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0341 ?   cd 81   COMBINING ACUTE TONE MARK */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0342 ?   cd 82   COMBINING GREEK PERISPOMENI */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0343 ?   cd 83   COMBINING GREEK KORONIS */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0344 ?   cd 84   COMBINING GREEK DIALYTIKA TONOS */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0345 ?   cd 85   COMBINING GREEK YPOGEGRAMMENI */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0346 ?   cd 86   COMBINING BRIDGE ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0347 ?   cd 87   COMBINING EQUALS SIGN BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0348 ?   cd 88   COMBINING DOUBLE VERTICAL LINE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0349 ?   cd 89   COMBINING LEFT ANGLE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034A ?   cd 8a   COMBINING NOT TILDE ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034B ?   cd 8b   COMBINING HOMOTHETIC ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034C ?   cd 8c   COMBINING ALMOST EQUAL TO ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034D ?   cd 8d   COMBINING LEFT RIGHT ARROW BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034E ?   cd 8e   COMBINING UPWARDS ARROW BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+034F ?   cd 8f   COMBINING GRAPHEME JOINER */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0350 ?   cd 90   COMBINING RIGHT ARROWHEAD ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0351 ?   cd 91   COMBINING LEFT HALF RING ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0352 ?   cd 92   COMBINING FERMATA */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0353 ?   cd 93   COMBINING X BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0354 ?   cd 94   COMBINING LEFT ARROWHEAD BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0355 ?   cd 95   COMBINING RIGHT ARROWHEAD BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0356 ?   cd 96   COMBINING RIGHT ARROWHEAD AND UP ARROWHEAD BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0357 ?   cd 97   COMBINING RIGHT HALF RING ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0358 ?   cd 98   COMBINING DOT ABOVE RIGHT */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0359 ?   cd 99   COMBINING ASTERISK BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035A ?   cd 9a   COMBINING DOUBLE RING BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035B ?   cd 9b   COMBINING ZIGZAG ABOVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035C ?   cd 9c   COMBINING DOUBLE BREVE BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035D ?   cd 9d   COMBINING DOUBLE BREVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035E ?   cd 9e   COMBINING DOUBLE MACRON */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+035F ?   cd 9f   COMBINING DOUBLE MACRON BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0360 ?   cd a0   COMBINING DOUBLE TILDE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0361 ?   cd a1   COMBINING DOUBLE INVERTED BREVE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0362 ?   cd a2   COMBINING DOUBLE RIGHTWARDS ARROW BELOW */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0363 ?   cd a3   COMBINING LATIN SMALL LETTER A */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0364 ?   cd a4   COMBINING LATIN SMALL LETTER E */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0365 ?   cd a5   COMBINING LATIN SMALL LETTER I */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0366 ?   cd a6   COMBINING LATIN SMALL LETTER O */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0367 ?   cd a7   COMBINING LATIN SMALL LETTER U */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0368 ?   cd a8   COMBINING LATIN SMALL LETTER C */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0369 ?   cd a9   COMBINING LATIN SMALL LETTER D */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036A ?   cd aa   COMBINING LATIN SMALL LETTER H */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036B ?   cd ab   COMBINING LATIN SMALL LETTER M */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036C ?   cd ac   COMBINING LATIN SMALL LETTER R */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036D ?   cd ad   COMBINING LATIN SMALL LETTER T */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036E ?   cd ae   COMBINING LATIN SMALL LETTER V */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+036F ?   cd af   COMBINING LATIN SMALL LETTER X */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0370 Ͱ   cd b0   GREEK CAPITAL LETTER HETA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+0371 ͱ   cd b1   GREEK SMALL LETTER HETA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0372 Ͳ   cd b2   GREEK CAPITAL LETTER ARCHAIC SAMPI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+0373 ͳ   cd b3   GREEK SMALL LETTER ARCHAIC SAMPI */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+0374 ʹ   cd b4   GREEK NUMERAL SIGN */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+0375 ͵   cd b5   GREEK LOWER NUMERAL SIGN */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0376 Ͷ   cd b6   GREEK CAPITAL LETTER PAMPHYLIAN DIGAMMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+0377 ͷ   cd b7   GREEK SMALL LETTER PAMPHYLIAN DIGAMMA */
    {               0,           0 }, /* U+0378 ͸   cd b8    */
    {               0,           0 }, /* U+0379 ͹   cd b9    */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+037A ͺ   cd ba   GREEK YPOGEGRAMMENI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+037B ͻ   cd bb   GREEK SMALL REVERSED LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+037C ͼ   cd bc   GREEK SMALL DOTTED LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+037D ͽ   cd bd   GREEK SMALL REVERSED DOTTED LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+037E ;   cd be   GREEK QUESTION MARK */
    {               0,           0 }, /* U+037F Ϳ   cd bf    */
    {               0,           0 }, /* U+0380 ΀   ce 80    */
    {               0,           0 }, /* U+0381 ΁   ce 81    */
    {               0,           0 }, /* U+0382 ΂   ce 82    */
    {               0,           0 }, /* U+0383 ΃   ce 83    */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+0384 ΄   ce 84   GREEK TONOS */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+0385 ΅   ce 85   GREEK DIALYTIKA TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0386 Ά   ce 86   GREEK CAPITAL LETTER ALPHA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+0387 ·   ce 87   GREEK ANO TELEIA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0388 Έ   ce 88   GREEK CAPITAL LETTER EPSILON WITH TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0389 Ή   ce 89   GREEK CAPITAL LETTER ETA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+038A Ί   ce 8a   GREEK CAPITAL LETTER IOTA WITH TONOS */
    {               0,           0 }, /* U+038B ΋   ce 8b    */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+038C Ό   ce 8c   GREEK CAPITAL LETTER OMICRON WITH TONOS */
    {               0,           0 }, /* U+038D ΍   ce 8d    */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+038E Ύ   ce 8e   GREEK CAPITAL LETTER UPSILON WITH TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+038F Ώ   ce 8f   GREEK CAPITAL LETTER OMEGA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+0390 ΐ   ce 90   GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0391 Α   ce 91   GREEK CAPITAL LETTER ALPHA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0392 Β   ce 92   GREEK CAPITAL LETTER BETA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0393 Γ   ce 93   GREEK CAPITAL LETTER GAMMA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0394 Δ   ce 94   GREEK CAPITAL LETTER DELTA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0395 Ε   ce 95   GREEK CAPITAL LETTER EPSILON */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0396 Ζ   ce 96   GREEK CAPITAL LETTER ZETA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0397 Η   ce 97   GREEK CAPITAL LETTER ETA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0398 Θ   ce 98   GREEK CAPITAL LETTER THETA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+0399 Ι   ce 99   GREEK CAPITAL LETTER IOTA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039A Κ   ce 9a   GREEK CAPITAL LETTER KAPPA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039B Λ   ce 9b   GREEK CAPITAL LETTER LAMDA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039C Μ   ce 9c   GREEK CAPITAL LETTER MU */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039D Ν   ce 9d   GREEK CAPITAL LETTER NU */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039E Ξ   ce 9e   GREEK CAPITAL LETTER XI */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+039F Ο   ce 9f   GREEK CAPITAL LETTER OMICRON */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A0 Π   ce a0   GREEK CAPITAL LETTER PI */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A1 Ρ   ce a1   GREEK CAPITAL LETTER RHO */
    {               0,           0 }, /* U+03A2 ΢   ce a2    */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A3 Σ   ce a3   GREEK CAPITAL LETTER SIGMA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A4 Τ   ce a4   GREEK CAPITAL LETTER TAU */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A5 Υ   ce a5   GREEK CAPITAL LETTER UPSILON */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A6 Φ   ce a6   GREEK CAPITAL LETTER PHI */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A7 Χ   ce a7   GREEK CAPITAL LETTER CHI */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A8 Ψ   ce a8   GREEK CAPITAL LETTER PSI */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03A9 Ω   ce a9   GREEK CAPITAL LETTER OMEGA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03AA Ϊ   ce aa   GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03AB Ϋ   ce ab   GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03AC ά   ce ac   GREEK SMALL LETTER ALPHA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03AD έ   ce ad   GREEK SMALL LETTER EPSILON WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03AE ή   ce ae   GREEK SMALL LETTER ETA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03AF ί   ce af   GREEK SMALL LETTER IOTA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B0 ΰ   ce b0   GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B1 α   ce b1   GREEK SMALL LETTER ALPHA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B2 β   ce b2   GREEK SMALL LETTER BETA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B3 γ   ce b3   GREEK SMALL LETTER GAMMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B4 δ   ce b4   GREEK SMALL LETTER DELTA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B5 ε   ce b5   GREEK SMALL LETTER EPSILON */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B6 ζ   ce b6   GREEK SMALL LETTER ZETA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B7 η   ce b7   GREEK SMALL LETTER ETA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B8 θ   ce b8   GREEK SMALL LETTER THETA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03B9 ι   ce b9   GREEK SMALL LETTER IOTA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BA κ   ce ba   GREEK SMALL LETTER KAPPA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BB λ   ce bb   GREEK SMALL LETTER LAMDA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BC μ   ce bc   GREEK SMALL LETTER MU */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BD ν   ce bd   GREEK SMALL LETTER NU */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BE ξ   ce be   GREEK SMALL LETTER XI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03BF ο   ce bf   GREEK SMALL LETTER OMICRON */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C0 π   cf 80   GREEK SMALL LETTER PI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C1 ρ   cf 81   GREEK SMALL LETTER RHO */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C2 ς   cf 82   GREEK SMALL LETTER FINAL SIGMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C3 σ   cf 83   GREEK SMALL LETTER SIGMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C4 τ   cf 84   GREEK SMALL LETTER TAU */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C5 υ   cf 85   GREEK SMALL LETTER UPSILON */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C6 φ   cf 86   GREEK SMALL LETTER PHI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C7 χ   cf 87   GREEK SMALL LETTER CHI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C8 ψ   cf 88   GREEK SMALL LETTER PSI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03C9 ω   cf 89   GREEK SMALL LETTER OMEGA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03CA ϊ   cf 8a   GREEK SMALL LETTER IOTA WITH DIALYTIKA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03CB ϋ   cf 8b   GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03CC ό   cf 8c   GREEK SMALL LETTER OMICRON WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03CD ύ   cf 8d   GREEK SMALL LETTER UPSILON WITH TONOS */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03CE ώ   cf 8e   GREEK SMALL LETTER OMEGA WITH TONOS */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03CF Ϗ   cf 8f   GREEK CAPITAL KAI SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D0 ϐ   cf 90   GREEK BETA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D1 ϑ   cf 91   GREEK THETA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D2 ϒ   cf 92   GREEK UPSILON WITH HOOK SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D3 ϓ   cf 93   GREEK UPSILON WITH ACUTE AND HOOK SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D4 ϔ   cf 94   GREEK UPSILON WITH DIAERESIS AND HOOK SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D5 ϕ   cf 95   GREEK PHI SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D6 ϖ   cf 96   GREEK PI SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D7 ϗ   cf 97   GREEK KAI SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03D8 Ϙ   cf 98   GREEK LETTER ARCHAIC KOPPA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03D9 ϙ   cf 99   GREEK SMALL LETTER ARCHAIC KOPPA */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03DA Ϛ   cf 9a   GREEK LETTER STIGMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03DB ϛ   cf 9b   GREEK SMALL LETTER STIGMA */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03DC Ϝ   cf 9c   GREEK LETTER DIGAMMA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03DD ϝ   cf 9d   GREEK SMALL LETTER DIGAMMA */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03DE Ϟ   cf 9e   GREEK LETTER KOPPA */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03DF ϟ   cf 9f   GREEK SMALL LETTER KOPPA */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03E0 Ϡ   cf a0   GREEK LETTER SAMPI */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03E1 ϡ   cf a1   GREEK SMALL LETTER SAMPI */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03E2 Ϣ   cf a2   COPTIC CAPITAL LETTER SHEI */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03E3 ϣ   cf a3   COPTIC SMALL LETTER SHEI */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03E4 Ϥ   cf a4   COPTIC CAPITAL LETTER FEI */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03E5 ϥ   cf a5   COPTIC SMALL LETTER FEI */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03E6 Ϧ   cf a6   COPTIC CAPITAL LETTER KHEI */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03E7 ϧ   cf a7   COPTIC SMALL LETTER KHEI */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03E8 Ϩ   cf a8   COPTIC CAPITAL LETTER HORI */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03E9 ϩ   cf a9   COPTIC SMALL LETTER HORI */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03EA Ϫ   cf aa   COPTIC CAPITAL LETTER GANGIA */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03EB ϫ   cf ab   COPTIC SMALL LETTER GANGIA */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03EC Ϭ   cf ac   COPTIC CAPITAL LETTER SHIMA */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03ED ϭ   cf ad   COPTIC SMALL LETTER SHIMA */
    {    SW_WP_COPTIC, SW_UI_UPPER }, /* U+03EE Ϯ   cf ae   COPTIC CAPITAL LETTER DEI */
    {    SW_WP_COPTIC, SW_UI_LOWER }, /* U+03EF ϯ   cf af   COPTIC SMALL LETTER DEI */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F0 ϰ   cf b0   GREEK KAPPA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F1 ϱ   cf b1   GREEK RHO SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F2 ϲ   cf b2   GREEK LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F3 ϳ   cf b3   GREEK LETTER YOT */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03F4 ϴ   cf b4   GREEK CAPITAL THETA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F5 ϵ   cf b5   GREEK LUNATE EPSILON SYMBOL */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03F6 ϶   cf b6   GREEK REVERSED LUNATE EPSILON SYMBOL */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03F7 Ϸ   cf b7   GREEK CAPITAL LETTER SHO */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03F8 ϸ   cf b8   GREEK SMALL LETTER SHO */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03F9 Ϲ   cf b9   GREEK CAPITAL LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03FA Ϻ   cf ba   GREEK CAPITAL LETTER SAN */
    {     SW_WP_GREEK, SW_UI_LOWER }, /* U+03FB ϻ   cf bb   GREEK SMALL LETTER SAN */
    {     SW_WP_GREEK, SW_UI_UNDEF }, /* U+03FC ϼ   cf bc   GREEK RHO WITH STROKE SYMBOL */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03FD Ͻ   cf bd   GREEK CAPITAL REVERSED LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03FE Ͼ   cf be   GREEK CAPITAL DOTTED LUNATE SIGMA SYMBOL */
    {     SW_WP_GREEK, SW_UI_UPPER }, /* U+03FF Ͽ   cf bf   GREEK CAPITAL REVERSED DOTTED LUNATE SIGMA SYMBOL */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0400 Ѐ   d0 80   CYRILLIC CAPITAL LETTER IE WITH GRAVE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0401 Ё   d0 81   CYRILLIC CAPITAL LETTER IO */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0402 Ђ   d0 82   CYRILLIC CAPITAL LETTER DJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0403 Ѓ   d0 83   CYRILLIC CAPITAL LETTER GJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0404 Є   d0 84   CYRILLIC CAPITAL LETTER UKRAINIAN IE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0405 Ѕ   d0 85   CYRILLIC CAPITAL LETTER DZE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0406 І   d0 86   CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0407 Ї   d0 87   CYRILLIC CAPITAL LETTER YI */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0408 Ј   d0 88   CYRILLIC CAPITAL LETTER JE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0409 Љ   d0 89   CYRILLIC CAPITAL LETTER LJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040A Њ   d0 8a   CYRILLIC CAPITAL LETTER NJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040B Ћ   d0 8b   CYRILLIC CAPITAL LETTER TSHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040C Ќ   d0 8c   CYRILLIC CAPITAL LETTER KJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040D Ѝ   d0 8d   CYRILLIC CAPITAL LETTER I WITH GRAVE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040E Ў   d0 8e   CYRILLIC CAPITAL LETTER SHORT U */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+040F Џ   d0 8f   CYRILLIC CAPITAL LETTER DZHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0410 А   d0 90   CYRILLIC CAPITAL LETTER A */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0411 Б   d0 91   CYRILLIC CAPITAL LETTER BE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0412 В   d0 92   CYRILLIC CAPITAL LETTER VE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0413 Г   d0 93   CYRILLIC CAPITAL LETTER GHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0414 Д   d0 94   CYRILLIC CAPITAL LETTER DE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0415 Е   d0 95   CYRILLIC CAPITAL LETTER IE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0416 Ж   d0 96   CYRILLIC CAPITAL LETTER ZHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0417 З   d0 97   CYRILLIC CAPITAL LETTER ZE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0418 И   d0 98   CYRILLIC CAPITAL LETTER I */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0419 Й   d0 99   CYRILLIC CAPITAL LETTER SHORT I */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041A К   d0 9a   CYRILLIC CAPITAL LETTER KA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041B Л   d0 9b   CYRILLIC CAPITAL LETTER EL */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041C М   d0 9c   CYRILLIC CAPITAL LETTER EM */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041D Н   d0 9d   CYRILLIC CAPITAL LETTER EN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041E О   d0 9e   CYRILLIC CAPITAL LETTER O */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+041F П   d0 9f   CYRILLIC CAPITAL LETTER PE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0420 Р   d0 a0   CYRILLIC CAPITAL LETTER ER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0421 С   d0 a1   CYRILLIC CAPITAL LETTER ES */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0422 Т   d0 a2   CYRILLIC CAPITAL LETTER TE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0423 У   d0 a3   CYRILLIC CAPITAL LETTER U */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0424 Ф   d0 a4   CYRILLIC CAPITAL LETTER EF */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0425 Х   d0 a5   CYRILLIC CAPITAL LETTER HA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0426 Ц   d0 a6   CYRILLIC CAPITAL LETTER TSE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0427 Ч   d0 a7   CYRILLIC CAPITAL LETTER CHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0428 Ш   d0 a8   CYRILLIC CAPITAL LETTER SHA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0429 Щ   d0 a9   CYRILLIC CAPITAL LETTER SHCHA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042A Ъ   d0 aa   CYRILLIC CAPITAL LETTER HARD SIGN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042B Ы   d0 ab   CYRILLIC CAPITAL LETTER YERU */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042C Ь   d0 ac   CYRILLIC CAPITAL LETTER SOFT SIGN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042D Э   d0 ad   CYRILLIC CAPITAL LETTER E */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042E Ю   d0 ae   CYRILLIC CAPITAL LETTER YU */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+042F Я   d0 af   CYRILLIC CAPITAL LETTER YA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0430 а   d0 b0   CYRILLIC SMALL LETTER A */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0431 б   d0 b1   CYRILLIC SMALL LETTER BE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0432 в   d0 b2   CYRILLIC SMALL LETTER VE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0433 г   d0 b3   CYRILLIC SMALL LETTER GHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0434 д   d0 b4   CYRILLIC SMALL LETTER DE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0435 е   d0 b5   CYRILLIC SMALL LETTER IE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0436 ж   d0 b6   CYRILLIC SMALL LETTER ZHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0437 з   d0 b7   CYRILLIC SMALL LETTER ZE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0438 и   d0 b8   CYRILLIC SMALL LETTER I */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0439 й   d0 b9   CYRILLIC SMALL LETTER SHORT I */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043A к   d0 ba   CYRILLIC SMALL LETTER KA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043B л   d0 bb   CYRILLIC SMALL LETTER EL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043C м   d0 bc   CYRILLIC SMALL LETTER EM */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043D н   d0 bd   CYRILLIC SMALL LETTER EN */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043E о   d0 be   CYRILLIC SMALL LETTER O */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+043F п   d0 bf   CYRILLIC SMALL LETTER PE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0440 р   d1 80   CYRILLIC SMALL LETTER ER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0441 с   d1 81   CYRILLIC SMALL LETTER ES */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0442 т   d1 82   CYRILLIC SMALL LETTER TE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0443 у   d1 83   CYRILLIC SMALL LETTER U */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0444 ф   d1 84   CYRILLIC SMALL LETTER EF */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0445 х   d1 85   CYRILLIC SMALL LETTER HA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0446 ц   d1 86   CYRILLIC SMALL LETTER TSE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0447 ч   d1 87   CYRILLIC SMALL LETTER CHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0448 ш   d1 88   CYRILLIC SMALL LETTER SHA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0449 щ   d1 89   CYRILLIC SMALL LETTER SHCHA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044A ъ   d1 8a   CYRILLIC SMALL LETTER HARD SIGN */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044B ы   d1 8b   CYRILLIC SMALL LETTER YERU */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044C ь   d1 8c   CYRILLIC SMALL LETTER SOFT SIGN */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044D э   d1 8d   CYRILLIC SMALL LETTER E */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044E ю   d1 8e   CYRILLIC SMALL LETTER YU */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+044F я   d1 8f   CYRILLIC SMALL LETTER YA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0450 ѐ   d1 90   CYRILLIC SMALL LETTER IE WITH GRAVE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0451 ё   d1 91   CYRILLIC SMALL LETTER IO */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0452 ђ   d1 92   CYRILLIC SMALL LETTER DJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0453 ѓ   d1 93   CYRILLIC SMALL LETTER GJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0454 є   d1 94   CYRILLIC SMALL LETTER UKRAINIAN IE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0455 ѕ   d1 95   CYRILLIC SMALL LETTER DZE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0456 і   d1 96   CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0457 ї   d1 97   CYRILLIC SMALL LETTER YI */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0458 ј   d1 98   CYRILLIC SMALL LETTER JE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0459 љ   d1 99   CYRILLIC SMALL LETTER LJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045A њ   d1 9a   CYRILLIC SMALL LETTER NJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045B ћ   d1 9b   CYRILLIC SMALL LETTER TSHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045C ќ   d1 9c   CYRILLIC SMALL LETTER KJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045D ѝ   d1 9d   CYRILLIC SMALL LETTER I WITH GRAVE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045E ў   d1 9e   CYRILLIC SMALL LETTER SHORT U */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+045F џ   d1 9f   CYRILLIC SMALL LETTER DZHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0460 Ѡ   d1 a0   CYRILLIC CAPITAL LETTER OMEGA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0461 ѡ   d1 a1   CYRILLIC SMALL LETTER OMEGA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0462 Ѣ   d1 a2   CYRILLIC CAPITAL LETTER YAT */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0463 ѣ   d1 a3   CYRILLIC SMALL LETTER YAT */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0464 Ѥ   d1 a4   CYRILLIC CAPITAL LETTER IOTIFIED E */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0465 ѥ   d1 a5   CYRILLIC SMALL LETTER IOTIFIED E */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0466 Ѧ   d1 a6   CYRILLIC CAPITAL LETTER LITTLE YUS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0467 ѧ   d1 a7   CYRILLIC SMALL LETTER LITTLE YUS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0468 Ѩ   d1 a8   CYRILLIC CAPITAL LETTER IOTIFIED LITTLE YUS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0469 ѩ   d1 a9   CYRILLIC SMALL LETTER IOTIFIED LITTLE YUS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+046A Ѫ   d1 aa   CYRILLIC CAPITAL LETTER BIG YUS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+046B ѫ   d1 ab   CYRILLIC SMALL LETTER BIG YUS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+046C Ѭ   d1 ac   CYRILLIC CAPITAL LETTER IOTIFIED BIG YUS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+046D ѭ   d1 ad   CYRILLIC SMALL LETTER IOTIFIED BIG YUS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+046E Ѯ   d1 ae   CYRILLIC CAPITAL LETTER KSI */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+046F ѯ   d1 af   CYRILLIC SMALL LETTER KSI */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0470 Ѱ   d1 b0   CYRILLIC CAPITAL LETTER PSI */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0471 ѱ   d1 b1   CYRILLIC SMALL LETTER PSI */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0472 Ѳ   d1 b2   CYRILLIC CAPITAL LETTER FITA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0473 ѳ   d1 b3   CYRILLIC SMALL LETTER FITA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0474 Ѵ   d1 b4   CYRILLIC CAPITAL LETTER IZHITSA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0475 ѵ   d1 b5   CYRILLIC SMALL LETTER IZHITSA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0476 Ѷ   d1 b6   CYRILLIC CAPITAL LETTER IZHITSA WITH DOUBLE GRAVE ACCENT */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0477 ѷ   d1 b7   CYRILLIC SMALL LETTER IZHITSA WITH DOUBLE GRAVE ACCENT */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0478 Ѹ   d1 b8   CYRILLIC CAPITAL LETTER UK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0479 ѹ   d1 b9   CYRILLIC SMALL LETTER UK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+047A Ѻ   d1 ba   CYRILLIC CAPITAL LETTER ROUND OMEGA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+047B ѻ   d1 bb   CYRILLIC SMALL LETTER ROUND OMEGA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+047C Ѽ   d1 bc   CYRILLIC CAPITAL LETTER OMEGA WITH TITLO */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+047D ѽ   d1 bd   CYRILLIC SMALL LETTER OMEGA WITH TITLO */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+047E Ѿ   d1 be   CYRILLIC CAPITAL LETTER OT */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+047F ѿ   d1 bf   CYRILLIC SMALL LETTER OT */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0480 Ҁ   d2 80   CYRILLIC CAPITAL LETTER KOPPA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0481 ҁ   d2 81   CYRILLIC SMALL LETTER KOPPA */
    {  SW_WP_CYRILLIC, SW_UI_UNDEF }, /* U+0482 ҂   d2 82   CYRILLIC THOUSANDS SIGN */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0483 ?   d2 83   COMBINING CYRILLIC TITLO */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0484 ?   d2 84   COMBINING CYRILLIC PALATALIZATION */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0485 ?   d2 85   COMBINING CYRILLIC DASIA PNEUMATA */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0486 ?   d2 86   COMBINING CYRILLIC PSILI PNEUMATA */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0487 ?   d2 87   COMBINING CYRILLIC POKRYTIE */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0488 ?   d2 88   COMBINING CYRILLIC HUNDRED THOUSANDS SIGN */
    { SW_WP_COMBINING, SW_UI_UNDEF }, /* U+0489 ?   d2 89   COMBINING CYRILLIC MILLIONS SIGN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+048A Ҋ   d2 8a   CYRILLIC CAPITAL LETTER SHORT I WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+048B ҋ   d2 8b   CYRILLIC SMALL LETTER SHORT I WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+048C Ҍ   d2 8c   CYRILLIC CAPITAL LETTER SEMISOFT SIGN */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+048D ҍ   d2 8d   CYRILLIC SMALL LETTER SEMISOFT SIGN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+048E Ҏ   d2 8e   CYRILLIC CAPITAL LETTER ER WITH TICK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+048F ҏ   d2 8f   CYRILLIC SMALL LETTER ER WITH TICK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0490 Ґ   d2 90   CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0491 ґ   d2 91   CYRILLIC SMALL LETTER GHE WITH UPTURN */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0492 Ғ   d2 92   CYRILLIC CAPITAL LETTER GHE WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0493 ғ   d2 93   CYRILLIC SMALL LETTER GHE WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0494 Ҕ   d2 94   CYRILLIC CAPITAL LETTER GHE WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0495 ҕ   d2 95   CYRILLIC SMALL LETTER GHE WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0496 Җ   d2 96   CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0497 җ   d2 97   CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0498 Ҙ   d2 98   CYRILLIC CAPITAL LETTER ZE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0499 ҙ   d2 99   CYRILLIC SMALL LETTER ZE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+049A Қ   d2 9a   CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+049B қ   d2 9b   CYRILLIC SMALL LETTER KA WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+049C Ҝ   d2 9c   CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+049D ҝ   d2 9d   CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+049E Ҟ   d2 9e   CYRILLIC CAPITAL LETTER KA WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+049F ҟ   d2 9f   CYRILLIC SMALL LETTER KA WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04A0 Ҡ   d2 a0   CYRILLIC CAPITAL LETTER BASHKIR KA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04A1 ҡ   d2 a1   CYRILLIC SMALL LETTER BASHKIR KA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04A2 Ң   d2 a2   CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04A3 ң   d2 a3   CYRILLIC SMALL LETTER EN WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04A4 Ҥ   d2 a4   CYRILLIC CAPITAL LIGATURE EN GHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04A5 ҥ   d2 a5   CYRILLIC SMALL LIGATURE EN GHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04A6 Ҧ   d2 a6   CYRILLIC CAPITAL LETTER PE WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04A7 ҧ   d2 a7   CYRILLIC SMALL LETTER PE WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04A8 Ҩ   d2 a8   CYRILLIC CAPITAL LETTER ABKHASIAN HA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04A9 ҩ   d2 a9   CYRILLIC SMALL LETTER ABKHASIAN HA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04AA Ҫ   d2 aa   CYRILLIC CAPITAL LETTER ES WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04AB ҫ   d2 ab   CYRILLIC SMALL LETTER ES WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04AC Ҭ   d2 ac   CYRILLIC CAPITAL LETTER TE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04AD ҭ   d2 ad   CYRILLIC SMALL LETTER TE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04AE Ү   d2 ae   CYRILLIC CAPITAL LETTER STRAIGHT U */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04AF ү   d2 af   CYRILLIC SMALL LETTER STRAIGHT U */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04B0 Ұ   d2 b0   CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04B1 ұ   d2 b1   CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04B2 Ҳ   d2 b2   CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04B3 ҳ   d2 b3   CYRILLIC SMALL LETTER HA WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04B4 Ҵ   d2 b4   CYRILLIC CAPITAL LIGATURE TE TSE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04B5 ҵ   d2 b5   CYRILLIC SMALL LIGATURE TE TSE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04B6 Ҷ   d2 b6   CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04B7 ҷ   d2 b7   CYRILLIC SMALL LETTER CHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04B8 Ҹ   d2 b8   CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04B9 ҹ   d2 b9   CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04BA Һ   d2 ba   CYRILLIC CAPITAL LETTER SHHA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04BB һ   d2 bb   CYRILLIC SMALL LETTER SHHA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04BC Ҽ   d2 bc   CYRILLIC CAPITAL LETTER ABKHASIAN CHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04BD ҽ   d2 bd   CYRILLIC SMALL LETTER ABKHASIAN CHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04BE Ҿ   d2 be   CYRILLIC CAPITAL LETTER ABKHASIAN CHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04BF ҿ   d2 bf   CYRILLIC SMALL LETTER ABKHASIAN CHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UNDEF }, /* U+04C0 Ӏ   d3 80   CYRILLIC LETTER PALOCHKA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04C1 Ӂ   d3 81   CYRILLIC CAPITAL LETTER ZHE WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04C2 ӂ   d3 82   CYRILLIC SMALL LETTER ZHE WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04C3 Ӄ   d3 83   CYRILLIC CAPITAL LETTER KA WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04C4 ӄ   d3 84   CYRILLIC SMALL LETTER KA WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04C5 Ӆ   d3 85   CYRILLIC CAPITAL LETTER EL WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04C6 ӆ   d3 86   CYRILLIC SMALL LETTER EL WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04C7 Ӈ   d3 87   CYRILLIC CAPITAL LETTER EN WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04C8 ӈ   d3 88   CYRILLIC SMALL LETTER EN WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04C9 Ӊ   d3 89   CYRILLIC CAPITAL LETTER EN WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04CA ӊ   d3 8a   CYRILLIC SMALL LETTER EN WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04CB Ӌ   d3 8b   CYRILLIC CAPITAL LETTER KHAKASSIAN CHE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04CC ӌ   d3 8c   CYRILLIC SMALL LETTER KHAKASSIAN CHE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04CD Ӎ   d3 8d   CYRILLIC CAPITAL LETTER EM WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04CE ӎ   d3 8e   CYRILLIC SMALL LETTER EM WITH TAIL */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04CF ӏ   d3 8f   CYRILLIC SMALL LETTER PALOCHKA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04D0 Ӑ   d3 90   CYRILLIC CAPITAL LETTER A WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04D1 ӑ   d3 91   CYRILLIC SMALL LETTER A WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04D2 Ӓ   d3 92   CYRILLIC CAPITAL LETTER A WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04D3 ӓ   d3 93   CYRILLIC SMALL LETTER A WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04D4 Ӕ   d3 94   CYRILLIC CAPITAL LIGATURE A IE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04D5 ӕ   d3 95   CYRILLIC SMALL LIGATURE A IE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04D6 Ӗ   d3 96   CYRILLIC CAPITAL LETTER IE WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04D7 ӗ   d3 97   CYRILLIC SMALL LETTER IE WITH BREVE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04D8 Ә   d3 98   CYRILLIC CAPITAL LETTER SCHWA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04D9 ә   d3 99   CYRILLIC SMALL LETTER SCHWA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04DA Ӛ   d3 9a   CYRILLIC CAPITAL LETTER SCHWA WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04DB ӛ   d3 9b   CYRILLIC SMALL LETTER SCHWA WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04DC Ӝ   d3 9c   CYRILLIC CAPITAL LETTER ZHE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04DD ӝ   d3 9d   CYRILLIC SMALL LETTER ZHE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04DE Ӟ   d3 9e   CYRILLIC CAPITAL LETTER ZE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04DF ӟ   d3 9f   CYRILLIC SMALL LETTER ZE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04E0 Ӡ   d3 a0   CYRILLIC CAPITAL LETTER ABKHASIAN DZE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04E1 ӡ   d3 a1   CYRILLIC SMALL LETTER ABKHASIAN DZE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04E2 Ӣ   d3 a2   CYRILLIC CAPITAL LETTER I WITH MACRON */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04E3 ӣ   d3 a3   CYRILLIC SMALL LETTER I WITH MACRON */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04E4 Ӥ   d3 a4   CYRILLIC CAPITAL LETTER I WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04E5 ӥ   d3 a5   CYRILLIC SMALL LETTER I WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04E6 Ӧ   d3 a6   CYRILLIC CAPITAL LETTER O WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04E7 ӧ   d3 a7   CYRILLIC SMALL LETTER O WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04E8 Ө   d3 a8   CYRILLIC CAPITAL LETTER BARRED O */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04E9 ө   d3 a9   CYRILLIC SMALL LETTER BARRED O */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04EA Ӫ   d3 aa   CYRILLIC CAPITAL LETTER BARRED O WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04EB ӫ   d3 ab   CYRILLIC SMALL LETTER BARRED O WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04EC Ӭ   d3 ac   CYRILLIC CAPITAL LETTER E WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04ED ӭ   d3 ad   CYRILLIC SMALL LETTER E WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04EE Ӯ   d3 ae   CYRILLIC CAPITAL LETTER U WITH MACRON */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04EF ӯ   d3 af   CYRILLIC SMALL LETTER U WITH MACRON */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04F0 Ӱ   d3 b0   CYRILLIC CAPITAL LETTER U WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04F1 ӱ   d3 b1   CYRILLIC SMALL LETTER U WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04F2 Ӳ   d3 b2   CYRILLIC CAPITAL LETTER U WITH DOUBLE ACUTE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04F3 ӳ   d3 b3   CYRILLIC SMALL LETTER U WITH DOUBLE ACUTE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04F4 Ӵ   d3 b4   CYRILLIC CAPITAL LETTER CHE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04F5 ӵ   d3 b5   CYRILLIC SMALL LETTER CHE WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04F6 Ӷ   d3 b6   CYRILLIC CAPITAL LETTER GHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04F7 ӷ   d3 b7   CYRILLIC SMALL LETTER GHE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04F8 Ӹ   d3 b8   CYRILLIC CAPITAL LETTER YERU WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04F9 ӹ   d3 b9   CYRILLIC SMALL LETTER YERU WITH DIAERESIS */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04FA Ӻ   d3 ba   CYRILLIC CAPITAL LETTER GHE WITH STROKE AND HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04FB ӻ   d3 bb   CYRILLIC SMALL LETTER GHE WITH STROKE AND HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04FC Ӽ   d3 bc   CYRILLIC CAPITAL LETTER HA WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04FD ӽ   d3 bd   CYRILLIC SMALL LETTER HA WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+04FE Ӿ   d3 be   CYRILLIC CAPITAL LETTER HA WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+04FF ӿ   d3 bf   CYRILLIC SMALL LETTER HA WITH STROKE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0500 Ԁ   d4 80   CYRILLIC CAPITAL LETTER KOMI DE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0501 ԁ   d4 81   CYRILLIC SMALL LETTER KOMI DE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0502 Ԃ   d4 82   CYRILLIC CAPITAL LETTER KOMI DJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0503 ԃ   d4 83   CYRILLIC SMALL LETTER KOMI DJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0504 Ԅ   d4 84   CYRILLIC CAPITAL LETTER KOMI ZJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0505 ԅ   d4 85   CYRILLIC SMALL LETTER KOMI ZJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0506 Ԇ   d4 86   CYRILLIC CAPITAL LETTER KOMI DZJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0507 ԇ   d4 87   CYRILLIC SMALL LETTER KOMI DZJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0508 Ԉ   d4 88   CYRILLIC CAPITAL LETTER KOMI LJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0509 ԉ   d4 89   CYRILLIC SMALL LETTER KOMI LJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+050A Ԋ   d4 8a   CYRILLIC CAPITAL LETTER KOMI NJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+050B ԋ   d4 8b   CYRILLIC SMALL LETTER KOMI NJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+050C Ԍ   d4 8c   CYRILLIC CAPITAL LETTER KOMI SJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+050D ԍ   d4 8d   CYRILLIC SMALL LETTER KOMI SJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+050E Ԏ   d4 8e   CYRILLIC CAPITAL LETTER KOMI TJE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+050F ԏ   d4 8f   CYRILLIC SMALL LETTER KOMI TJE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0510 Ԑ   d4 90   CYRILLIC CAPITAL LETTER REVERSED ZE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0511 ԑ   d4 91   CYRILLIC SMALL LETTER REVERSED ZE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0512 Ԓ   d4 92   CYRILLIC CAPITAL LETTER EL WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0513 ԓ   d4 93   CYRILLIC SMALL LETTER EL WITH HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0514 Ԕ   d4 94   CYRILLIC CAPITAL LETTER LHA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0515 ԕ   d4 95   CYRILLIC SMALL LETTER LHA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0516 Ԗ   d4 96   CYRILLIC CAPITAL LETTER RHA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0517 ԗ   d4 97   CYRILLIC SMALL LETTER RHA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0518 Ԙ   d4 98   CYRILLIC CAPITAL LETTER YAE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0519 ԙ   d4 99   CYRILLIC SMALL LETTER YAE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+051A Ԛ   d4 9a   CYRILLIC CAPITAL LETTER QA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+051B ԛ   d4 9b   CYRILLIC SMALL LETTER QA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+051C Ԝ   d4 9c   CYRILLIC CAPITAL LETTER WE */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+051D ԝ   d4 9d   CYRILLIC SMALL LETTER WE */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+051E Ԟ   d4 9e   CYRILLIC CAPITAL LETTER ALEUT KA */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+051F ԟ   d4 9f   CYRILLIC SMALL LETTER ALEUT KA */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0520 Ԡ   d4 a0   CYRILLIC CAPITAL LETTER EL WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0521 ԡ   d4 a1   CYRILLIC SMALL LETTER EL WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0522 Ԣ   d4 a2   CYRILLIC CAPITAL LETTER EN WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0523 ԣ   d4 a3   CYRILLIC SMALL LETTER EN WITH MIDDLE HOOK */
    {  SW_WP_CYRILLIC, SW_UI_UPPER }, /* U+0524 Ԥ   d4 a4   CYRILLIC CAPITAL LETTER PE WITH DESCENDER */
    {  SW_WP_CYRILLIC, SW_UI_LOWER }, /* U+0525 ԥ   d4 a5   CYRILLIC SMALL LETTER PE WITH DESCENDER */
    {               0,           0 }, /* 0526	Ԧ	d4 a6	 */
    {               0,           0 }, /* 0527	ԧ	d4 a7	 */
    {               0,           0 }, /* 0528	Ԩ	d4 a8	 */
    {               0,           0 }, /* 0529	ԩ	d4 a9	 */
    {               0,           0 }, /* 052A	Ԫ	d4 aa	 */
    {               0,           0 }, /* 052B	ԫ	d4 ab	 */
    {               0,           0 }, /* 052C	Ԭ	d4 ac	 */
    {               0,           0 }, /* 052D	ԭ	d4 ad	 */
    {               0,           0 }, /* 052E	Ԯ	d4 ae	 */
    {               0,           0 }, /* 052F	ԯ	d4 af	 */
    {               0,           0 }, /* 0530	԰	d4 b0	 */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0531	Ա	d4 b1	ARMENIAN CAPITAL LETTER AYB */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0532	Բ	d4 b2	ARMENIAN CAPITAL LETTER BEN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0533	Գ	d4 b3	ARMENIAN CAPITAL LETTER GIM */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0534	Դ	d4 b4	ARMENIAN CAPITAL LETTER DA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0535	Ե	d4 b5	ARMENIAN CAPITAL LETTER ECH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0536	Զ	d4 b6	ARMENIAN CAPITAL LETTER ZA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0537	Է	d4 b7	ARMENIAN CAPITAL LETTER EH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0538	Ը	d4 b8	ARMENIAN CAPITAL LETTER ET */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0539	Թ	d4 b9	ARMENIAN CAPITAL LETTER TO */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053A	Ժ	d4 ba	ARMENIAN CAPITAL LETTER ZHE */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053B	Ի	d4 bb	ARMENIAN CAPITAL LETTER INI */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053C	Լ	d4 bc	ARMENIAN CAPITAL LETTER LIWN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053D	Խ	d4 bd	ARMENIAN CAPITAL LETTER XEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053E	Ծ	d4 be	ARMENIAN CAPITAL LETTER CA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 053F	Կ	d4 bf	ARMENIAN CAPITAL LETTER KEN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0540	Հ	d5 80	ARMENIAN CAPITAL LETTER HO */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0541	Ձ	d5 81	ARMENIAN CAPITAL LETTER JA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0542	Ղ	d5 82	ARMENIAN CAPITAL LETTER GHAD */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0543	Ճ	d5 83	ARMENIAN CAPITAL LETTER CHEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0544	Մ	d5 84	ARMENIAN CAPITAL LETTER MEN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0545	Յ	d5 85	ARMENIAN CAPITAL LETTER YI */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0546	Ն	d5 86	ARMENIAN CAPITAL LETTER NOW */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0547	Շ	d5 87	ARMENIAN CAPITAL LETTER SHA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0548	Ո	d5 88	ARMENIAN CAPITAL LETTER VO */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0549	Չ	d5 89	ARMENIAN CAPITAL LETTER CHA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054A	Պ	d5 8a	ARMENIAN CAPITAL LETTER PEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054B	Ջ	d5 8b	ARMENIAN CAPITAL LETTER JHEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054C	Ռ	d5 8c	ARMENIAN CAPITAL LETTER RA */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054D	Ս	d5 8d	ARMENIAN CAPITAL LETTER SEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054E	Վ	d5 8e	ARMENIAN CAPITAL LETTER VEW */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 054F	Տ	d5 8f	ARMENIAN CAPITAL LETTER TIWN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0550	Ր	d5 90	ARMENIAN CAPITAL LETTER REH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0551	Ց	d5 91	ARMENIAN CAPITAL LETTER CO */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0552	Ւ	d5 92	ARMENIAN CAPITAL LETTER YIWN */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0553	Փ	d5 93	ARMENIAN CAPITAL LETTER PIWR */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0554	Ք	d5 94	ARMENIAN CAPITAL LETTER KEH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0555	Օ	d5 95	ARMENIAN CAPITAL LETTER OH */
    {  SW_WP_ARMENIAN, SW_UI_UPPER }, /* 0556	Ֆ	d5 96	ARMENIAN CAPITAL LETTER FEH */
    {               0,           0 }, /* 0557	՗	d5 97	 */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 0558	՘	d5 98	 */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 0559	ՙ	d5 99	ARMENIAN MODIFIER LETTER LEFT HALF RING */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055A	՚	d5 9a	ARMENIAN APOSTROPHE */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055B	՛	d5 9b	ARMENIAN EMPHASIS MARK */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055C	՜	d5 9c	ARMENIAN EXCLAMATION MARK */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055D	՝	d5 9d	ARMENIAN COMMA */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055E	՞	d5 9e	ARMENIAN QUESTION MARK */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 055F	՟	d5 9f	ARMENIAN ABBREVIATION MARK */
    {               0,           0 }, /* 0560	ՠ	d5 a0	 */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0561	ա	d5 a1	ARMENIAN SMALL LETTER AYB */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0562	բ	d5 a2	ARMENIAN SMALL LETTER BEN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0563	գ	d5 a3	ARMENIAN SMALL LETTER GIM */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0564	դ	d5 a4	ARMENIAN SMALL LETTER DA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0565	ե	d5 a5	ARMENIAN SMALL LETTER ECH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0566	զ	d5 a6	ARMENIAN SMALL LETTER ZA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0567	է	d5 a7	ARMENIAN SMALL LETTER EH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0568	ը	d5 a8	ARMENIAN SMALL LETTER ET */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0569	թ	d5 a9	ARMENIAN SMALL LETTER TO */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056A	ժ	d5 aa	ARMENIAN SMALL LETTER ZHE */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056B	ի	d5 ab	ARMENIAN SMALL LETTER INI */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056C	լ	d5 ac	ARMENIAN SMALL LETTER LIWN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056D	խ	d5 ad	ARMENIAN SMALL LETTER XEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056E	ծ	d5 ae	ARMENIAN SMALL LETTER CA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 056F	կ	d5 af	ARMENIAN SMALL LETTER KEN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0570	հ	d5 b0	ARMENIAN SMALL LETTER HO */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0571	ձ	d5 b1	ARMENIAN SMALL LETTER JA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0572	ղ	d5 b2	ARMENIAN SMALL LETTER GHAD */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0573	ճ	d5 b3	ARMENIAN SMALL LETTER CHEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0574	մ	d5 b4	ARMENIAN SMALL LETTER MEN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0575	յ	d5 b5	ARMENIAN SMALL LETTER YI */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0576	ն	d5 b6	ARMENIAN SMALL LETTER NOW */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0577	շ	d5 b7	ARMENIAN SMALL LETTER SHA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0578	ո	d5 b8	ARMENIAN SMALL LETTER VO */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0579	չ	d5 b9	ARMENIAN SMALL LETTER CHA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057A	պ	d5 ba	ARMENIAN SMALL LETTER PEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057B	ջ	d5 bb	ARMENIAN SMALL LETTER JHEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057C	ռ	d5 bc	ARMENIAN SMALL LETTER RA */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057D	ս	d5 bd	ARMENIAN SMALL LETTER SEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057E	վ	d5 be	ARMENIAN SMALL LETTER VEW */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 057F	տ	d5 bf	ARMENIAN SMALL LETTER TIWN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0580	ր	d6 80	ARMENIAN SMALL LETTER REH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0581	ց	d6 81	ARMENIAN SMALL LETTER CO */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0582	ւ	d6 82	ARMENIAN SMALL LETTER YIWN */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0583	փ	d6 83	ARMENIAN SMALL LETTER PIWR */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0584	ք	d6 84	ARMENIAN SMALL LETTER KEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0585	օ	d6 85	ARMENIAN SMALL LETTER OH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0586	ֆ	d6 86	ARMENIAN SMALL LETTER FEH */
    {  SW_WP_ARMENIAN, SW_UI_LOWER }, /* 0587	և	d6 87	ARMENIAN SMALL LIGATURE ECH YIWN */
    {               0,           0 }, /* 0588	ֈ	d6 88	 */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 0589	։	d6 89	ARMENIAN FULL STOP */
    {  SW_WP_ARMENIAN, SW_UI_UNDEF }, /* 058A	֊	d6 8a	ARMENIAN HYPHEN */
    {               0,           0 }, /* 058B	֋	d6 8b	 */
    {               0,           0 }, /* 058C	֌	d6 8c	 */
    {               0,           0 }, /* 058D	֍	d6 8d	 */
    {               0,           0 }, /* 058E	֎	d6 8e	 */
    {               0,           0 }, /* 058F	֏	d6 8f	 */
    {               0,           0 }, /* 0590	֐	d6 90	 */
    {    SW_WP_HEBREW,           0 }, /* 0591	֑	d6 91	HEBREW ACCENT ETNAHTA */
    {    SW_WP_HEBREW,           0 }, /* 0592	֒	d6 92	HEBREW ACCENT SEGOL */
    {    SW_WP_HEBREW,           0 }, /* 0593	֓	d6 93	HEBREW ACCENT SHALSHELET */
    {    SW_WP_HEBREW,           0 }, /* 0594	֔	d6 94	HEBREW ACCENT ZAQEF QATAN */
    {    SW_WP_HEBREW,           0 }, /* 0595	֕	d6 95	HEBREW ACCENT ZAQEF GADOL */
    {    SW_WP_HEBREW,           0 }, /* 0596	֖	d6 96	HEBREW ACCENT TIPEHA */
    {    SW_WP_HEBREW,           0 }, /* 0597	֗	d6 97	HEBREW ACCENT REVIA */
    {    SW_WP_HEBREW,           0 }, /* 0598	֘	d6 98	HEBREW ACCENT ZARQA */
    {    SW_WP_HEBREW,           0 }, /* 0599	֙	d6 99	HEBREW ACCENT PASHTA */
    {    SW_WP_HEBREW,           0 }, /* 059A	֚	d6 9a	HEBREW ACCENT YETIV */
    {    SW_WP_HEBREW,           0 }, /* 059B	֛	d6 9b	HEBREW ACCENT TEVIR */
    {    SW_WP_HEBREW,           0 }, /* 059C	֜	d6 9c	HEBREW ACCENT GERESH */
    {    SW_WP_HEBREW,           0 }, /* 059D	֝	d6 9d	HEBREW ACCENT GERESH MUQDAM */
    {    SW_WP_HEBREW,           0 }, /* 059E	֞	d6 9e	HEBREW ACCENT GERSHAYIM */
    {    SW_WP_HEBREW,           0 }, /* 059F	֟	d6 9f	HEBREW ACCENT QARNEY PARA */
    {    SW_WP_HEBREW,           0 }, /* 05A0	֠	d6 a0	HEBREW ACCENT TELISHA GEDOLA */
    {    SW_WP_HEBREW,           0 }, /* 05A1	֡	d6 a1	HEBREW ACCENT PAZER */
    {    SW_WP_HEBREW,           0 }, /* 05A2	֢	d6 a2	HEBREW ACCENT ATNAH HAFUKH */
    {    SW_WP_HEBREW,           0 }, /* 05A3	֣	d6 a3	HEBREW ACCENT MUNAH */
    {    SW_WP_HEBREW,           0 }, /* 05A4	֤	d6 a4	HEBREW ACCENT MAHAPAKH */
    {    SW_WP_HEBREW,           0 }, /* 05A5	֥	d6 a5	HEBREW ACCENT MERKHA */
    {    SW_WP_HEBREW,           0 }, /* 05A6	֦	d6 a6	HEBREW ACCENT MERKHA KEFULA */
    {    SW_WP_HEBREW,           0 }, /* 05A7	֧	d6 a7	HEBREW ACCENT DARGA */
    {    SW_WP_HEBREW,           0 }, /* 05A8	֨	d6 a8	HEBREW ACCENT QADMA */
    {    SW_WP_HEBREW,           0 }, /* 05A9	֩	d6 a9	HEBREW ACCENT TELISHA QETANA */
    {    SW_WP_HEBREW,           0 }, /* 05AA	֪	d6 aa	HEBREW ACCENT YERAH BEN YOMO */
    {    SW_WP_HEBREW,           0 }, /* 05AB	֫	d6 ab	HEBREW ACCENT OLE */
    {    SW_WP_HEBREW,           0 }, /* 05AC	֬	d6 ac	HEBREW ACCENT ILUY */
    {    SW_WP_HEBREW,           0 }, /* 05AD	֭	d6 ad	HEBREW ACCENT DEHI */
    {    SW_WP_HEBREW,           0 }, /* 05AE	֮	d6 ae	HEBREW ACCENT ZINOR */
    {    SW_WP_HEBREW,           0 }, /* 05AF	֯	d6 af	HEBREW MARK MASORA CIRCLE */
    {    SW_WP_HEBREW,           0 }, /* 05B0	ְ	d6 b0	HEBREW POINT SHEVA */
    {    SW_WP_HEBREW,           0 }, /* 05B1	ֱ	d6 b1	HEBREW POINT HATAF SEGOL */
    {    SW_WP_HEBREW,           0 }, /* 05B2	ֲ	d6 b2	HEBREW POINT HATAF PATAH */
    {    SW_WP_HEBREW,           0 }, /* 05B3	ֳ	d6 b3	HEBREW POINT HATAF QAMATS */
    {    SW_WP_HEBREW,           0 }, /* 05B4	ִ	d6 b4	HEBREW POINT HIRIQ */
    {    SW_WP_HEBREW,           0 }, /* 05B5	ֵ	d6 b5	HEBREW POINT TSERE */
    {    SW_WP_HEBREW,           0 }, /* 05B6	ֶ	d6 b6	HEBREW POINT SEGOL */
    {    SW_WP_HEBREW,           0 }, /* 05B7	ַ	d6 b7	HEBREW POINT PATAH */
    {    SW_WP_HEBREW,           0 }, /* 05B8	ָ	d6 b8	HEBREW POINT QAMATS */
    {    SW_WP_HEBREW,           0 }, /* 05B9	ֹ	d6 b9	HEBREW POINT HOLAM */
    {    SW_WP_HEBREW,           0 }, /* 05BA	ֺ	d6 ba	HEBREW POINT HOLAM HASER FOR VAV */
    {    SW_WP_HEBREW,           0 }, /* 05BB	ֻ	d6 bb	HEBREW POINT QUBUTS */
    {    SW_WP_HEBREW,           0 }, /* 05BC	ּ	d6 bc	HEBREW POINT DAGESH OR MAPIQ */
    {    SW_WP_HEBREW,           0 }, /* 05BD	ֽ	d6 bd	HEBREW POINT METEG */
    {    SW_WP_HEBREW,           0 }, /* 05BE	־	d6 be	HEBREW PUNCTUATION MAQAF */
    {    SW_WP_HEBREW,           0 }, /* 05BF	ֿ	d6 bf	HEBREW POINT RAFE */
    {    SW_WP_HEBREW,           0 }, /* 05C0	׀	d7 80	HEBREW PUNCTUATION PASEQ */
    {    SW_WP_HEBREW,           0 }, /* 05C1	ׁ	d7 81	HEBREW POINT SHIN DOT */
    {    SW_WP_HEBREW,           0 }, /* 05C2	ׂ	d7 82	HEBREW POINT SIN DOT */
    {    SW_WP_HEBREW,           0 }, /* 05C3	׃	d7 83	HEBREW PUNCTUATION SOF PASUQ */
    {    SW_WP_HEBREW,           0 }, /* 05C4	ׄ	d7 84	HEBREW MARK UPPER DOT */
    {    SW_WP_HEBREW,           0 }, /* 05C5	ׅ	d7 85	HEBREW MARK LOWER DOT */
    {    SW_WP_HEBREW,           0 }, /* 05C6	׆	d7 86	HEBREW PUNCTUATION NUN HAFUKHA */
    {    SW_WP_HEBREW,           0 }, /* 05C7	ׇ	d7 87	HEBREW POINT QAMATS QATAN */
    {               0,           0 }, /* 05C8	׈	d7 88	 */
    {               0,           0 }, /* 05C9	׉	d7 89	 */
    {               0,           0 }, /* 05CA	׊	d7 8a	 */
    {               0,           0 }, /* 05CB	׋	d7 8b	 */
    {               0,           0 }, /* 05CC	׌	d7 8c	 */
    {               0,           0 }, /* 05CD	׍	d7 8d	 */
    {               0,           0 }, /* 05CE	׎	d7 8e	 */
    {               0,           0 }, /* 05CF	׏	d7 8f	 */
    {    SW_WP_HEBREW,           0 }, /* 05D0	א	d7 90	HEBREW LETTER ALEF */
    {    SW_WP_HEBREW,           0 }, /* 05D1	ב	d7 91	HEBREW LETTER BET */
    {    SW_WP_HEBREW,           0 }, /* 05D2	ג	d7 92	HEBREW LETTER GIMEL */
    {    SW_WP_HEBREW,           0 }, /* 05D3	ד	d7 93	HEBREW LETTER DALET */
    {    SW_WP_HEBREW,           0 }, /* 05D4	ה	d7 94	HEBREW LETTER HE */
    {    SW_WP_HEBREW,           0 }, /* 05D5	ו	d7 95	HEBREW LETTER VAV */
    {    SW_WP_HEBREW,           0 }, /* 05D6	ז	d7 96	HEBREW LETTER ZAYIN */
    {    SW_WP_HEBREW,           0 }, /* 05D7	ח	d7 97	HEBREW LETTER HET */
    {    SW_WP_HEBREW,           0 }, /* 05D8	ט	d7 98	HEBREW LETTER TET */
    {    SW_WP_HEBREW,           0 }, /* 05D9	י	d7 99	HEBREW LETTER YOD */
    {    SW_WP_HEBREW,           0 }, /* 05DA	ך	d7 9a	HEBREW LETTER FINAL KAF */
    {    SW_WP_HEBREW,           0 }, /* 05DB	כ	d7 9b	HEBREW LETTER KAF */
    {    SW_WP_HEBREW,           0 }, /* 05DC	ל	d7 9c	HEBREW LETTER LAMED */
    {    SW_WP_HEBREW,           0 }, /* 05DD	ם	d7 9d	HEBREW LETTER FINAL MEM */
    {    SW_WP_HEBREW,           0 }, /* 05DE	מ	d7 9e	HEBREW LETTER MEM */
    {    SW_WP_HEBREW,           0 }, /* 05DF	ן	d7 9f	HEBREW LETTER FINAL NUN */
    {    SW_WP_HEBREW,           0 }, /* 05E0	נ	d7 a0	HEBREW LETTER NUN */
    {    SW_WP_HEBREW,           0 }, /* 05E1	ס	d7 a1	HEBREW LETTER SAMEKH */
    {    SW_WP_HEBREW,           0 }, /* 05E2	ע	d7 a2	HEBREW LETTER AYIN */
    {    SW_WP_HEBREW,           0 }, /* 05E3	ף	d7 a3	HEBREW LETTER FINAL PE */
    {    SW_WP_HEBREW,           0 }, /* 05E4	פ	d7 a4	HEBREW LETTER PE */
    {    SW_WP_HEBREW,           0 }, /* 05E5	ץ	d7 a5	HEBREW LETTER FINAL TSADI */
    {    SW_WP_HEBREW,           0 }, /* 05E6	צ	d7 a6	HEBREW LETTER TSADI */
    {    SW_WP_HEBREW,           0 }, /* 05E7	ק	d7 a7	HEBREW LETTER QOF */
    {    SW_WP_HEBREW,           0 }, /* 05E8	ר	d7 a8	HEBREW LETTER RESH */
    {    SW_WP_HEBREW,           0 }, /* 05E9	ש	d7 a9	HEBREW LETTER SHIN */
    {    SW_WP_HEBREW,           0 }, /* 05EA	ת	d7 aa	HEBREW LETTER TAV */
    {               0,           0 }, /* 05EB	׫	d7 ab	 */
    {               0,           0 }, /* 05EC	׬	d7 ac	 */
    {               0,           0 }, /* 05ED	׭	d7 ad	 */
    {               0,           0 }, /* 05EE	׮	d7 ae	 */
    {               0,           0 }, /* 05EF	ׯ	d7 af	 */
    {    SW_WP_HEBREW,           0 }, /* 05F0	װ	d7 b0	HEBREW LIGATURE YIDDISH DOUBLE VAV */
    {    SW_WP_HEBREW,           0 }, /* 05F1	ױ	d7 b1	HEBREW LIGATURE YIDDISH VAV YOD */
    {    SW_WP_HEBREW,           0 }, /* 05F2	ײ	d7 b2	HEBREW LIGATURE YIDDISH DOUBLE YOD */
    {    SW_WP_HEBREW,           0 }, /* 05F3	׳	d7 b3	HEBREW PUNCTUATION GERESH */
    {    SW_WP_HEBREW,           0 }, /* 05F4	״	d7 b4	HEBREW PUNCTUATION GERSHAYIM */
    {               0,           0 }, /* 05F5	׵	d7 b5	 */
    {               0,           0 }, /* 05F6	׶	d7 b6	 */
    {               0,           0 }, /* 05F7	׷	d7 b7	 */
    {               0,           0 }, /* 05F8	׸	d7 b8	 */
    {               0,           0 }, /* 05F9	׹	d7 b9	 */
    {               0,           0 }, /* 05FA	׺	d7 ba	 */
    {               0,           0 }, /* 05FB	׻	d7 bb	 */
    {               0,           0 }, /* 05FC	׼	d7 bc	 */
    {               0,           0 }, /* 05FD	׽	d7 bd	 */
    {               0,           0 }, /* 05FE	׾	d7 be	 */
    {               0,           0 }, /* 05FF	׿	d7 bf */
    {               0,           0 }, /* 0600	؀	d8 80	ARABIC NUMBER SIGN */
    {               0,           0 }, /* 0601	؁	d8 81	ARABIC SIGN SANAH */
    {               0,           0 }, /* 0602	؂	d8 82	ARABIC FOOTNOTE MARKER */
    {               0,           0 }, /* 0603	؃	d8 83	ARABIC SIGN SAFHA */
    {               0,           0 }, /* 0604	؄	d8 84	 */
    {               0,           0 }, /* 0605	؅	d8 85	 */
    {               0,           0 }, /* 0606	؆	d8 86	ARABIC-INDIC CUBE ROOT */
    {               0,           0 }, /* 0607	؇	d8 87	ARABIC-INDIC FOURTH ROOT */
    {               0,           0 }, /* 0608	؈	d8 88	ARABIC RAY */
    {               0,           0 }, /* 0609	؉	d8 89	ARABIC-INDIC PER MILLE SIGN */
    {               0,           0 }, /* 060A	؊	d8 8a	ARABIC-INDIC PER TEN THOUSAND SIGN */
    {               0,           0 }, /* 060B	؋	d8 8b	AFGHANI SIGN */
    {               0,           0 }, /* 060C	،	d8 8c	ARABIC COMMA */
    {               0,           0 }, /* 060D	؍	d8 8d	ARABIC DATE SEPARATOR */
    {               0,           0 }, /* 060E	؎	d8 8e	ARABIC POETIC VERSE SIGN */
    {               0,           0 }, /* 060F	؏	d8 8f	ARABIC SIGN MISRA */
    {               0,           0 }, /* 0610	ؐ	d8 90	ARABIC SIGN SALLALLAHOU ALAYHE WASSALLAM */
    {               0,           0 }, /* 0611	ؑ	d8 91	ARABIC SIGN ALAYHE ASSALLAM */
    {               0,           0 }, /* 0612	ؒ	d8 92	ARABIC SIGN RAHMATULLAH ALAYHE */
    {               0,           0 }, /* 0613	ؓ	d8 93	ARABIC SIGN RADI ALLAHOU ANHU */
    {               0,           0 }, /* 0614	ؔ	d8 94	ARABIC SIGN TAKHALLUS */
    {               0,           0 }, /* 0615	ؕ	d8 95	ARABIC SMALL HIGH TAH */
    {               0,           0 }, /* 0616	ؖ	d8 96	ARABIC SMALL HIGH LIGATURE ALEF WITH LAM WITH YEH */
    {               0,           0 }, /* 0617	ؗ	d8 97	ARABIC SMALL HIGH ZAIN */
    {               0,           0 }, /* 0618	ؘ	d8 98	ARABIC SMALL FATHA */
    {               0,           0 }, /* 0619	ؙ	d8 99	ARABIC SMALL DAMMA */
    {               0,           0 }, /* 061A	ؚ	d8 9a	ARABIC SMALL KASRA */
    {               0,           0 }, /* 061B	؛	d8 9b	ARABIC SEMICOLON */
    {               0,           0 }, /* 061C	؜	d8 9c	 */
    {               0,           0 }, /* 061D	؝	d8 9d	 */
    {               0,           0 }, /* 061E	؞	d8 9e	ARABIC TRIPLE DOT PUNCTUATION MARK */
    {               0,           0 }, /* 061F	؟	d8 9f	ARABIC QUESTION MARK */
    {               0,           0 }, /* 0620	ؠ	d8 a0	 */
    {               0,           0 }, /* 0621	ء	d8 a1	ARABIC LETTER HAMZA */
    {               0,           0 }, /* 0622	آ	d8 a2	ARABIC LETTER ALEF WITH MADDA ABOVE */
    {               0,           0 }, /* 0623	أ	d8 a3	ARABIC LETTER ALEF WITH HAMZA ABOVE */
    {               0,           0 }, /* 0624	ؤ	d8 a4	ARABIC LETTER WAW WITH HAMZA ABOVE */
    {               0,           0 }, /* 0625	إ	d8 a5	ARABIC LETTER ALEF WITH HAMZA BELOW */
    {               0,           0 }, /* 0626	ئ	d8 a6	ARABIC LETTER YEH WITH HAMZA ABOVE */
    {               0,           0 }, /* 0627	ا	d8 a7	ARABIC LETTER ALEF */
    {               0,           0 }, /* 0628	ب	d8 a8	ARABIC LETTER BEH */
    {               0,           0 }, /* 0629	ة	d8 a9	ARABIC LETTER TEH MARBUTA */
    {               0,           0 }, /* 062A	ت	d8 aa	ARABIC LETTER TEH */
    {               0,           0 }, /* 062B	ث	d8 ab	ARABIC LETTER THEH */
    {               0,           0 }, /* 062C	ج	d8 ac	ARABIC LETTER JEEM */
    {               0,           0 }, /* 062D	ح	d8 ad	ARABIC LETTER HAH */
    {               0,           0 }, /* 062E	خ	d8 ae	ARABIC LETTER KHAH */
    {               0,           0 }, /* 062F	د	d8 af	ARABIC LETTER DAL */
    {               0,           0 }, /* 0630	ذ	d8 b0	ARABIC LETTER THAL */
    {               0,           0 }, /* 0631	ر	d8 b1	ARABIC LETTER REH */
    {               0,           0 }, /* 0632	ز	d8 b2	ARABIC LETTER ZAIN */
    {               0,           0 }, /* 0633	س	d8 b3	ARABIC LETTER SEEN */
    {               0,           0 }, /* 0634	ش	d8 b4	ARABIC LETTER SHEEN */
    {               0,           0 }, /* 0635	ص	d8 b5	ARABIC LETTER SAD */
    {               0,           0 }, /* 0636	ض	d8 b6	ARABIC LETTER DAD */
    {               0,           0 }, /* 0637	ط	d8 b7	ARABIC LETTER TAH */
    {               0,           0 }, /* 0638	ظ	d8 b8	ARABIC LETTER ZAH */
    {               0,           0 }, /* 0639	ع	d8 b9	ARABIC LETTER AIN */
    {               0,           0 }, /* 063A	غ	d8 ba	ARABIC LETTER GHAIN */
    {               0,           0 }, /* 063B	ػ	d8 bb	ARABIC LETTER KEHEH WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 063C	ؼ	d8 bc	ARABIC LETTER KEHEH WITH THREE DOTS BELOW */
    {               0,           0 }, /* 063D	ؽ	d8 bd	ARABIC LETTER FARSI YEH WITH INVERTED V */
    {               0,           0 }, /* 063E	ؾ	d8 be	ARABIC LETTER FARSI YEH WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 063F	ؿ	d8 bf	ARABIC LETTER FARSI YEH WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 0640	ـ	d9 80	ARABIC TATWEEL */
    {               0,           0 }, /* 0641	ف	d9 81	ARABIC LETTER FEH */
    {               0,           0 }, /* 0642	ق	d9 82	ARABIC LETTER QAF */
    {               0,           0 }, /* 0643	ك	d9 83	ARABIC LETTER KAF */
    {               0,           0 }, /* 0644	ل	d9 84	ARABIC LETTER LAM */
    {               0,           0 }, /* 0645	م	d9 85	ARABIC LETTER MEEM */
    {               0,           0 }, /* 0646	ن	d9 86	ARABIC LETTER NOON */
    {               0,           0 }, /* 0647	ه	d9 87	ARABIC LETTER HEH */
    {               0,           0 }, /* 0648	و	d9 88	ARABIC LETTER WAW */
    {               0,           0 }, /* 0649	ى	d9 89	ARABIC LETTER ALEF MAKSURA */
    {               0,           0 }, /* 064A	ي	d9 8a	ARABIC LETTER YEH */
    {               0,           0 }, /* 064B	ً	d9 8b	ARABIC FATHATAN */
    {               0,           0 }, /* 064C	ٌ	d9 8c	ARABIC DAMMATAN */
    {               0,           0 }, /* 064D	ٍ	d9 8d	ARABIC KASRATAN */
    {               0,           0 }, /* 064E	َ	d9 8e	ARABIC FATHA */
    {               0,           0 }, /* 064F	ُ	d9 8f	ARABIC DAMMA */
    {               0,           0 }, /* 0650	ِ	d9 90	ARABIC KASRA */
    {               0,           0 }, /* 0651	ّ	d9 91	ARABIC SHADDA */
    {               0,           0 }, /* 0652	ْ	d9 92	ARABIC SUKUN */
    {               0,           0 }, /* 0653	ٓ	d9 93	ARABIC MADDAH ABOVE */
    {               0,           0 }, /* 0654	ٔ	d9 94	ARABIC HAMZA ABOVE */
    {               0,           0 }, /* 0655	ٕ	d9 95	ARABIC HAMZA BELOW */
    {               0,           0 }, /* 0656	ٖ	d9 96	ARABIC SUBSCRIPT ALEF */
    {               0,           0 }, /* 0657	ٗ	d9 97	ARABIC INVERTED DAMMA */
    {               0,           0 }, /* 0658	٘	d9 98	ARABIC MARK NOON GHUNNA */
    {               0,           0 }, /* 0659	ٙ	d9 99	ARABIC ZWARAKAY */
    {               0,           0 }, /* 065A	ٚ	d9 9a	ARABIC VOWEL SIGN SMALL V ABOVE */
    {               0,           0 }, /* 065B	ٛ	d9 9b	ARABIC VOWEL SIGN INVERTED SMALL V ABOVE */
    {               0,           0 }, /* 065C	ٜ	d9 9c	ARABIC VOWEL SIGN DOT BELOW */
    {               0,           0 }, /* 065D	ٝ	d9 9d	ARABIC REVERSED DAMMA */
    {               0,           0 }, /* 065E	ٞ	d9 9e	ARABIC FATHA WITH TWO DOTS */
    {               0,           0 }, /* 065F	ٟ	d9 9f	 */
    {               0,           0 }, /* 0660	٠	d9 a0	ARABIC-INDIC DIGIT ZERO */
    {               0,           0 }, /* 0661	١	d9 a1	ARABIC-INDIC DIGIT ONE */
    {               0,           0 }, /* 0662	٢	d9 a2	ARABIC-INDIC DIGIT TWO */
    {               0,           0 }, /* 0663	٣	d9 a3	ARABIC-INDIC DIGIT THREE */
    {               0,           0 }, /* 0664	٤	d9 a4	ARABIC-INDIC DIGIT FOUR */
    {               0,           0 }, /* 0665	٥	d9 a5	ARABIC-INDIC DIGIT FIVE */
    {               0,           0 }, /* 0666	٦	d9 a6	ARABIC-INDIC DIGIT SIX */
    {               0,           0 }, /* 0667	٧	d9 a7	ARABIC-INDIC DIGIT SEVEN */
    {               0,           0 }, /* 0668	٨	d9 a8	ARABIC-INDIC DIGIT EIGHT */
    {               0,           0 }, /* 0669	٩	d9 a9	ARABIC-INDIC DIGIT NINE */
    {               0,           0 }, /* 066A	٪	d9 aa	ARABIC PERCENT SIGN */
    {               0,           0 }, /* 066B	٫	d9 ab	ARABIC DECIMAL SEPARATOR */
    {               0,           0 }, /* 066C	٬	d9 ac	ARABIC THOUSANDS SEPARATOR */
    {               0,           0 }, /* 066D	٭	d9 ad	ARABIC FIVE POINTED STAR */
    {               0,           0 }, /* 066E	ٮ	d9 ae	ARABIC LETTER DOTLESS BEH */
    {               0,           0 }, /* 066F	ٯ	d9 af	ARABIC LETTER DOTLESS QAF */
    {               0,           0 }, /* 0670	ٰ	d9 b0	ARABIC LETTER SUPERSCRIPT ALEF */
    {               0,           0 }, /* 0671	ٱ	d9 b1	ARABIC LETTER ALEF WASLA */
    {               0,           0 }, /* 0672	ٲ	d9 b2	ARABIC LETTER ALEF WITH WAVY HAMZA ABOVE */
    {               0,           0 }, /* 0673	ٳ	d9 b3	ARABIC LETTER ALEF WITH WAVY HAMZA BELOW */
    {               0,           0 }, /* 0674	ٴ	d9 b4	ARABIC LETTER HIGH HAMZA */
    {               0,           0 }, /* 0675	ٵ	d9 b5	ARABIC LETTER HIGH HAMZA ALEF */
    {               0,           0 }, /* 0676	ٶ	d9 b6	ARABIC LETTER HIGH HAMZA WAW */
    {               0,           0 }, /* 0677	ٷ	d9 b7	ARABIC LETTER U WITH HAMZA ABOVE */
    {               0,           0 }, /* 0678	ٸ	d9 b8	ARABIC LETTER HIGH HAMZA YEH */
    {               0,           0 }, /* 0679	ٹ	d9 b9	ARABIC LETTER TTEH */
    {               0,           0 }, /* 067A	ٺ	d9 ba	ARABIC LETTER TTEHEH */
    {               0,           0 }, /* 067B	ٻ	d9 bb	ARABIC LETTER BEEH */
    {               0,           0 }, /* 067C	ټ	d9 bc	ARABIC LETTER TEH WITH RING */
    {               0,           0 }, /* 067D	ٽ	d9 bd	ARABIC LETTER TEH WITH THREE DOTS ABOVE DOWNWARDS */
    {               0,           0 }, /* 067E	پ	d9 be	ARABIC LETTER PEH */
    {               0,           0 }, /* 067F	ٿ	d9 bf	ARABIC LETTER TEHEH */
    {               0,           0 }, /* 0680	ڀ	da 80	ARABIC LETTER BEHEH */
    {               0,           0 }, /* 0681	ځ	da 81	ARABIC LETTER HAH WITH HAMZA ABOVE */
    {               0,           0 }, /* 0682	ڂ	da 82	ARABIC LETTER HAH WITH TWO DOTS VERTICAL ABOVE */
    {               0,           0 }, /* 0683	ڃ	da 83	ARABIC LETTER NYEH */
    {               0,           0 }, /* 0684	ڄ	da 84	ARABIC LETTER DYEH */
    {               0,           0 }, /* 0685	څ	da 85	ARABIC LETTER HAH WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 0686	چ	da 86	ARABIC LETTER TCHEH */
    {               0,           0 }, /* 0687	ڇ	da 87	ARABIC LETTER TCHEHEH */
    {               0,           0 }, /* 0688	ڈ	da 88	ARABIC LETTER DDAL */
    {               0,           0 }, /* 0689	ډ	da 89	ARABIC LETTER DAL WITH RING */
    {               0,           0 }, /* 068A	ڊ	da 8a	ARABIC LETTER DAL WITH DOT BELOW */
    {               0,           0 }, /* 068B	ڋ	da 8b	ARABIC LETTER DAL WITH DOT BELOW AND SMALL TAH */
    {               0,           0 }, /* 068C	ڌ	da 8c	ARABIC LETTER DAHAL */
    {               0,           0 }, /* 068D	ڍ	da 8d	ARABIC LETTER DDAHAL */
    {               0,           0 }, /* 068E	ڎ	da 8e	ARABIC LETTER DUL */
    {               0,           0 }, /* 068F	ڏ	da 8f	ARABIC LETTER DAL WITH THREE DOTS ABOVE DOWNWARDS */
    {               0,           0 }, /* 0690	ڐ	da 90	ARABIC LETTER DAL WITH FOUR DOTS ABOVE */
    {               0,           0 }, /* 0691	ڑ	da 91	ARABIC LETTER RREH */
    {               0,           0 }, /* 0692	ڒ	da 92	ARABIC LETTER REH WITH SMALL V */
    {               0,           0 }, /* 0693	ړ	da 93	ARABIC LETTER REH WITH RING */
    {               0,           0 }, /* 0694	ڔ	da 94	ARABIC LETTER REH WITH DOT BELOW */
    {               0,           0 }, /* 0695	ڕ	da 95	ARABIC LETTER REH WITH SMALL V BELOW */
    {               0,           0 }, /* 0696	ږ	da 96	ARABIC LETTER REH WITH DOT BELOW AND DOT ABOVE */
    {               0,           0 }, /* 0697	ڗ	da 97	ARABIC LETTER REH WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 0698	ژ	da 98	ARABIC LETTER JEH */
    {               0,           0 }, /* 0699	ڙ	da 99	ARABIC LETTER REH WITH FOUR DOTS ABOVE */
    {               0,           0 }, /* 069A	ښ	da 9a	ARABIC LETTER SEEN WITH DOT BELOW AND DOT ABOVE */
    {               0,           0 }, /* 069B	ڛ	da 9b	ARABIC LETTER SEEN WITH THREE DOTS BELOW */
    {               0,           0 }, /* 069C	ڜ	da 9c	ARABIC LETTER SEEN WITH THREE DOTS BELOW AND THREE DOTS ABOVE */
    {               0,           0 }, /* 069D	ڝ	da 9d	ARABIC LETTER SAD WITH TWO DOTS BELOW */
    {               0,           0 }, /* 069E	ڞ	da 9e	ARABIC LETTER SAD WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 069F	ڟ	da 9f	ARABIC LETTER TAH WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06A0	ڠ	da a0	ARABIC LETTER AIN WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06A1	ڡ	da a1	ARABIC LETTER DOTLESS FEH */
    {               0,           0 }, /* 06A2	ڢ	da a2	ARABIC LETTER FEH WITH DOT MOVED BELOW */
    {               0,           0 }, /* 06A3	ڣ	da a3	ARABIC LETTER FEH WITH DOT BELOW */
    {               0,           0 }, /* 06A4	ڤ	da a4	ARABIC LETTER VEH */
    {               0,           0 }, /* 06A5	ڥ	da a5	ARABIC LETTER FEH WITH THREE DOTS BELOW */
    {               0,           0 }, /* 06A6	ڦ	da a6	ARABIC LETTER PEHEH */
    {               0,           0 }, /* 06A7	ڧ	da a7	ARABIC LETTER QAF WITH DOT ABOVE */
    {               0,           0 }, /* 06A8	ڨ	da a8	ARABIC LETTER QAF WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06A9	ک	da a9	ARABIC LETTER KEHEH */
    {               0,           0 }, /* 06AA	ڪ	da aa	ARABIC LETTER SWASH KAF */
    {               0,           0 }, /* 06AB	ګ	da ab	ARABIC LETTER KAF WITH RING */
    {               0,           0 }, /* 06AC	ڬ	da ac	ARABIC LETTER KAF WITH DOT ABOVE */
    {               0,           0 }, /* 06AD	ڭ	da ad	ARABIC LETTER NG */
    {               0,           0 }, /* 06AE	ڮ	da ae	ARABIC LETTER KAF WITH THREE DOTS BELOW */
    {               0,           0 }, /* 06AF	گ	da af	ARABIC LETTER GAF */
    {               0,           0 }, /* 06B0	ڰ	da b0	ARABIC LETTER GAF WITH RING */
    {               0,           0 }, /* 06B1	ڱ	da b1	ARABIC LETTER NGOEH */
    {               0,           0 }, /* 06B2	ڲ	da b2	ARABIC LETTER GAF WITH TWO DOTS BELOW */
    {               0,           0 }, /* 06B3	ڳ	da b3	ARABIC LETTER GUEH */
    {               0,           0 }, /* 06B4	ڴ	da b4	ARABIC LETTER GAF WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06B5	ڵ	da b5	ARABIC LETTER LAM WITH SMALL V */
    {               0,           0 }, /* 06B6	ڶ	da b6	ARABIC LETTER LAM WITH DOT ABOVE */
    {               0,           0 }, /* 06B7	ڷ	da b7	ARABIC LETTER LAM WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06B8	ڸ	da b8	ARABIC LETTER LAM WITH THREE DOTS BELOW */
    {               0,           0 }, /* 06B9	ڹ	da b9	ARABIC LETTER NOON WITH DOT BELOW */
    {               0,           0 }, /* 06BA	ں	da ba	ARABIC LETTER NOON GHUNNA */
    {               0,           0 }, /* 06BB	ڻ	da bb	ARABIC LETTER RNOON */
    {               0,           0 }, /* 06BC	ڼ	da bc	ARABIC LETTER NOON WITH RING */
    {               0,           0 }, /* 06BD	ڽ	da bd	ARABIC LETTER NOON WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 06BE	ھ	da be	ARABIC LETTER HEH DOACHASHMEE */
    {               0,           0 }, /* 06BF	ڿ	da bf	ARABIC LETTER TCHEH WITH DOT ABOVE */
    {               0,           0 }, /* 06C0	ۀ	db 80	ARABIC LETTER HEH WITH YEH ABOVE */
    {               0,           0 }, /* 06C1	ہ	db 81	ARABIC LETTER HEH GOAL */
    {               0,           0 }, /* 06C2	ۂ	db 82	ARABIC LETTER HEH GOAL WITH HAMZA ABOVE */
    {               0,           0 }, /* 06C3	ۃ	db 83	ARABIC LETTER TEH MARBUTA GOAL */
    {               0,           0 }, /* 06C4	ۄ	db 84	ARABIC LETTER WAW WITH RING */
    {               0,           0 }, /* 06C5	ۅ	db 85	ARABIC LETTER KIRGHIZ OE */
    {               0,           0 }, /* 06C6	ۆ	db 86	ARABIC LETTER OE */
    {               0,           0 }, /* 06C7	ۇ	db 87	ARABIC LETTER U */
    {               0,           0 }, /* 06C8	ۈ	db 88	ARABIC LETTER YU */
    {               0,           0 }, /* 06C9	ۉ	db 89	ARABIC LETTER KIRGHIZ YU */
    {               0,           0 }, /* 06CA	ۊ	db 8a	ARABIC LETTER WAW WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 06CB	ۋ	db 8b	ARABIC LETTER VE */
    {               0,           0 }, /* 06CC	ی	db 8c	ARABIC LETTER FARSI YEH */
    {               0,           0 }, /* 06CD	ۍ	db 8d	ARABIC LETTER YEH WITH TAIL */
    {               0,           0 }, /* 06CE	ێ	db 8e	ARABIC LETTER YEH WITH SMALL V */
    {               0,           0 }, /* 06CF	ۏ	db 8f	ARABIC LETTER WAW WITH DOT ABOVE */
    {               0,           0 }, /* 06D0	ې	db 90	ARABIC LETTER E */
    {               0,           0 }, /* 06D1	ۑ	db 91	ARABIC LETTER YEH WITH THREE DOTS BELOW */
    {               0,           0 }, /* 06D2	ے	db 92	ARABIC LETTER YEH BARREE */
    {               0,           0 }, /* 06D3	ۓ	db 93	ARABIC LETTER YEH BARREE WITH HAMZA ABOVE */
    {               0,           0 }, /* 06D4	۔	db 94	ARABIC FULL STOP */
    {               0,           0 }, /* 06D5	ە	db 95	ARABIC LETTER AE */
    {               0,           0 }, /* 06D6	ۖ	db 96	ARABIC SMALL HIGH LIGATURE SAD WITH LAM WITH ALEF MAKSURA */
    {               0,           0 }, /* 06D7	ۗ	db 97	ARABIC SMALL HIGH LIGATURE QAF WITH LAM WITH ALEF MAKSURA */
    {               0,           0 }, /* 06D8	ۘ	db 98	ARABIC SMALL HIGH MEEM INITIAL FORM */
    {               0,           0 }, /* 06D9	ۙ	db 99	ARABIC SMALL HIGH LAM ALEF */
    {               0,           0 }, /* 06DA	ۚ	db 9a	ARABIC SMALL HIGH JEEM */
    {               0,           0 }, /* 06DB	ۛ	db 9b	ARABIC SMALL HIGH THREE DOTS */
    {               0,           0 }, /* 06DC	ۜ	db 9c	ARABIC SMALL HIGH SEEN */
    {               0,           0 }, /* 06DD	۝	db 9d	ARABIC END OF AYAH */
    {               0,           0 }, /* 06DE	۞	db 9e	ARABIC START OF RUB EL HIZB */
    {               0,           0 }, /* 06DF	۟	db 9f	ARABIC SMALL HIGH ROUNDED ZERO */
    {               0,           0 }, /* 06E0	۠	db a0	ARABIC SMALL HIGH UPRIGHT RECTANGULAR ZERO */
    {               0,           0 }, /* 06E1	ۡ	db a1	ARABIC SMALL HIGH DOTLESS HEAD OF KHAH */
    {               0,           0 }, /* 06E2	ۢ	db a2	ARABIC SMALL HIGH MEEM ISOLATED FORM */
    {               0,           0 }, /* 06E3	ۣ	db a3	ARABIC SMALL LOW SEEN */
    {               0,           0 }, /* 06E4	ۤ	db a4	ARABIC SMALL HIGH MADDA */
    {               0,           0 }, /* 06E5	ۥ	db a5	ARABIC SMALL WAW */
    {               0,           0 }, /* 06E6	ۦ	db a6	ARABIC SMALL YEH */
    {               0,           0 }, /* 06E7	ۧ	db a7	ARABIC SMALL HIGH YEH */
    {               0,           0 }, /* 06E8	ۨ	db a8	ARABIC SMALL HIGH NOON */
    {               0,           0 }, /* 06E9	۩	db a9	ARABIC PLACE OF SAJDAH */
    {               0,           0 }, /* 06EA	۪	db aa	ARABIC EMPTY CENTRE LOW STOP */
    {               0,           0 }, /* 06EB	۫	db ab	ARABIC EMPTY CENTRE HIGH STOP */
    {               0,           0 }, /* 06EC	۬	db ac	ARABIC ROUNDED HIGH STOP WITH FILLED CENTRE */
    {               0,           0 }, /* 06ED	ۭ	db ad	ARABIC SMALL LOW MEEM */
    {               0,           0 }, /* 06EE	ۮ	db ae	ARABIC LETTER DAL WITH INVERTED V */
    {               0,           0 }, /* 06EF	ۯ	db af	ARABIC LETTER REH WITH INVERTED V */
    {               0,           0 }, /* 06F0	۰	db b0	EXTENDED ARABIC-INDIC DIGIT ZERO */
    {               0,           0 }, /* 06F1	۱	db b1	EXTENDED ARABIC-INDIC DIGIT ONE */
    {               0,           0 }, /* 06F2	۲	db b2	EXTENDED ARABIC-INDIC DIGIT TWO */
    {               0,           0 }, /* 06F3	۳	db b3	EXTENDED ARABIC-INDIC DIGIT THREE */
    {               0,           0 }, /* 06F4	۴	db b4	EXTENDED ARABIC-INDIC DIGIT FOUR */
    {               0,           0 }, /* 06F5	۵	db b5	EXTENDED ARABIC-INDIC DIGIT FIVE */
    {               0,           0 }, /* 06F6	۶	db b6	EXTENDED ARABIC-INDIC DIGIT SIX */
    {               0,           0 }, /* 06F7	۷	db b7	EXTENDED ARABIC-INDIC DIGIT SEVEN */
    {               0,           0 }, /* 06F8	۸	db b8	EXTENDED ARABIC-INDIC DIGIT EIGHT */
    {               0,           0 }, /* 06F9	۹	db b9	EXTENDED ARABIC-INDIC DIGIT NINE */
    {               0,           0 }, /* 06FA	ۺ	db ba	ARABIC LETTER SHEEN WITH DOT BELOW */
    {               0,           0 }, /* 06FB	ۻ	db bb	ARABIC LETTER DAD WITH DOT BELOW */
    {               0,           0 }, /* 06FC	ۼ	db bc	ARABIC LETTER GHAIN WITH DOT BELOW */
    {               0,           0 }, /* 06FD	۽	db bd	ARABIC SIGN SINDHI AMPERSAND */
    {               0,           0 }, /* 06FE	۾	db be	ARABIC SIGN SINDHI POSTPOSITION MEN */
    {               0,           0 }, /* 06FF	ۿ	db bf	ARABIC LETTER HEH WITH INVERTED V */
    {               0,           0 }, /* 0700	܀	dc 80	SYRIAC END OF PARAGRAPH */
    {               0,           0 }, /* 0701	܁	dc 81	SYRIAC SUPRALINEAR FULL STOP */
    {               0,           0 }, /* 0702	܂	dc 82	SYRIAC SUBLINEAR FULL STOP */
    {               0,           0 }, /* 0703	܃	dc 83	SYRIAC SUPRALINEAR COLON */
    {               0,           0 }, /* 0704	܄	dc 84	SYRIAC SUBLINEAR COLON */
    {               0,           0 }, /* 0705	܅	dc 85	SYRIAC HORIZONTAL COLON */
    {               0,           0 }, /* 0706	܆	dc 86	SYRIAC COLON SKEWED LEFT */
    {               0,           0 }, /* 0707	܇	dc 87	SYRIAC COLON SKEWED RIGHT */
    {               0,           0 }, /* 0708	܈	dc 88	SYRIAC SUPRALINEAR COLON SKEWED LEFT */
    {               0,           0 }, /* 0709	܉	dc 89	SYRIAC SUBLINEAR COLON SKEWED RIGHT */
    {               0,           0 }, /* 070A	܊	dc 8a	SYRIAC CONTRACTION */
    {               0,           0 }, /* 070B	܋	dc 8b	SYRIAC HARKLEAN OBELUS */
    {               0,           0 }, /* 070C	܌	dc 8c	SYRIAC HARKLEAN METOBELUS */
    {               0,           0 }, /* 070D	܍	dc 8d	SYRIAC HARKLEAN ASTERISCUS */
    {               0,           0 }, /* 070E	܎	dc 8e	 */
    {               0,           0 }, /* 070F	܏	dc 8f	SYRIAC ABBREVIATION MARK */
    {               0,           0 }, /* 0710	ܐ	dc 90	SYRIAC LETTER ALAPH */
    {               0,           0 }, /* 0711	ܑ	dc 91	SYRIAC LETTER SUPERSCRIPT ALAPH */
    {               0,           0 }, /* 0712	ܒ	dc 92	SYRIAC LETTER BETH */
    {               0,           0 }, /* 0713	ܓ	dc 93	SYRIAC LETTER GAMAL */
    {               0,           0 }, /* 0714	ܔ	dc 94	SYRIAC LETTER GAMAL GARSHUNI */
    {               0,           0 }, /* 0715	ܕ	dc 95	SYRIAC LETTER DALATH */
    {               0,           0 }, /* 0716	ܖ	dc 96	SYRIAC LETTER DOTLESS DALATH RISH */
    {               0,           0 }, /* 0717	ܗ	dc 97	SYRIAC LETTER HE */
    {               0,           0 }, /* 0718	ܘ	dc 98	SYRIAC LETTER WAW */
    {               0,           0 }, /* 0719	ܙ	dc 99	SYRIAC LETTER ZAIN */
    {               0,           0 }, /* 071A	ܚ	dc 9a	SYRIAC LETTER HETH */
    {               0,           0 }, /* 071B	ܛ	dc 9b	SYRIAC LETTER TETH */
    {               0,           0 }, /* 071C	ܜ	dc 9c	SYRIAC LETTER TETH GARSHUNI */
    {               0,           0 }, /* 071D	ܝ	dc 9d	SYRIAC LETTER YUDH */
    {               0,           0 }, /* 071E	ܞ	dc 9e	SYRIAC LETTER YUDH HE */
    {               0,           0 }, /* 071F	ܟ	dc 9f	SYRIAC LETTER KAPH */
    {               0,           0 }, /* 0720	ܠ	dc a0	SYRIAC LETTER LAMADH */
    {               0,           0 }, /* 0721	ܡ	dc a1	SYRIAC LETTER MIM */
    {               0,           0 }, /* 0722	ܢ	dc a2	SYRIAC LETTER NUN */
    {               0,           0 }, /* 0723	ܣ	dc a3	SYRIAC LETTER SEMKATH */
    {               0,           0 }, /* 0724	ܤ	dc a4	SYRIAC LETTER FINAL SEMKATH */
    {               0,           0 }, /* 0725	ܥ	dc a5	SYRIAC LETTER E */
    {               0,           0 }, /* 0726	ܦ	dc a6	SYRIAC LETTER PE */
    {               0,           0 }, /* 0727	ܧ	dc a7	SYRIAC LETTER REVERSED PE */
    {               0,           0 }, /* 0728	ܨ	dc a8	SYRIAC LETTER SADHE */
    {               0,           0 }, /* 0729	ܩ	dc a9	SYRIAC LETTER QAPH */
    {               0,           0 }, /* 072A	ܪ	dc aa	SYRIAC LETTER RISH */
    {               0,           0 }, /* 072B	ܫ	dc ab	SYRIAC LETTER SHIN */
    {               0,           0 }, /* 072C	ܬ	dc ac	SYRIAC LETTER TAW */
    {               0,           0 }, /* 072D	ܭ	dc ad	SYRIAC LETTER PERSIAN BHETH */
    {               0,           0 }, /* 072E	ܮ	dc ae	SYRIAC LETTER PERSIAN GHAMAL */
    {               0,           0 }, /* 072F	ܯ	dc af	SYRIAC LETTER PERSIAN DHALATH */
    {               0,           0 }, /* 0730	ܰ	dc b0	SYRIAC PTHAHA ABOVE */
    {               0,           0 }, /* 0731	ܱ	dc b1	SYRIAC PTHAHA BELOW */
    {               0,           0 }, /* 0732	ܲ	dc b2	SYRIAC PTHAHA DOTTED */
    {               0,           0 }, /* 0733	ܳ	dc b3	SYRIAC ZQAPHA ABOVE */
    {               0,           0 }, /* 0734	ܴ	dc b4	SYRIAC ZQAPHA BELOW */
    {               0,           0 }, /* 0735	ܵ	dc b5	SYRIAC ZQAPHA DOTTED */
    {               0,           0 }, /* 0736	ܶ	dc b6	SYRIAC RBASA ABOVE */
    {               0,           0 }, /* 0737	ܷ	dc b7	SYRIAC RBASA BELOW */
    {               0,           0 }, /* 0738	ܸ	dc b8	SYRIAC DOTTED ZLAMA HORIZONTAL */
    {               0,           0 }, /* 0739	ܹ	dc b9	SYRIAC DOTTED ZLAMA ANGULAR */
    {               0,           0 }, /* 073A	ܺ	dc ba	SYRIAC HBASA ABOVE */
    {               0,           0 }, /* 073B	ܻ	dc bb	SYRIAC HBASA BELOW */
    {               0,           0 }, /* 073C	ܼ	dc bc	SYRIAC HBASA-ESASA DOTTED */
    {               0,           0 }, /* 073D	ܽ	dc bd	SYRIAC ESASA ABOVE */
    {               0,           0 }, /* 073E	ܾ	dc be	SYRIAC ESASA BELOW */
    {               0,           0 }, /* 073F	ܿ	dc bf	SYRIAC RWAHA */
    {               0,           0 }, /* 0740	݀	dd 80	SYRIAC FEMININE DOT */
    {               0,           0 }, /* 0741	݁	dd 81	SYRIAC QUSHSHAYA */
    {               0,           0 }, /* 0742	݂	dd 82	SYRIAC RUKKAKHA */
    {               0,           0 }, /* 0743	݃	dd 83	SYRIAC TWO VERTICAL DOTS ABOVE */
    {               0,           0 }, /* 0744	݄	dd 84	SYRIAC TWO VERTICAL DOTS BELOW */
    {               0,           0 }, /* 0745	݅	dd 85	SYRIAC THREE DOTS ABOVE */
    {               0,           0 }, /* 0746	݆	dd 86	SYRIAC THREE DOTS BELOW */
    {               0,           0 }, /* 0747	݇	dd 87	SYRIAC OBLIQUE LINE ABOVE */
    {               0,           0 }, /* 0748	݈	dd 88	SYRIAC OBLIQUE LINE BELOW */
    {               0,           0 }, /* 0749	݉	dd 89	SYRIAC MUSIC */
    {               0,           0 }, /* 074A	݊	dd 8a	SYRIAC BARREKH */
    {               0,           0 }, /* 074B	݋	dd 8b	 */
    {               0,           0 }, /* 074C	݌	dd 8c	 */
    {               0,           0 }, /* 074D	ݍ	dd 8d	SYRIAC LETTER SOGDIAN ZHAIN */
    {               0,           0 }, /* 074E	ݎ	dd 8e	SYRIAC LETTER SOGDIAN KHAPH */
    {               0,           0 }, /* 074F	ݏ	dd 8f	SYRIAC LETTER SOGDIAN FE */
    {               0,           0 }, /* 0750	ݐ	dd 90	ARABIC LETTER BEH WITH THREE DOTS HORIZONTALLY BELOW */
    {               0,           0 }, /* 0751	ݑ	dd 91	ARABIC LETTER BEH WITH DOT BELOW AND THREE DOTS ABOVE */
    {               0,           0 }, /* 0752	ݒ	dd 92	ARABIC LETTER BEH WITH THREE DOTS POINTING UPWARDS BELOW */
    {               0,           0 }, /* 0753	ݓ	dd 93	ARABIC LETTER BEH WITH THREE DOTS POINTING UPWARDS BELOW AND TWO DOTS ABOVE */
    {               0,           0 }, /* 0754	ݔ	dd 94	ARABIC LETTER BEH WITH TWO DOTS BELOW AND DOT ABOVE */
    {               0,           0 }, /* 0755	ݕ	dd 95	ARABIC LETTER BEH WITH INVERTED SMALL V BELOW */
    {               0,           0 }, /* 0756	ݖ	dd 96	ARABIC LETTER BEH WITH SMALL V */
    {               0,           0 }, /* 0757	ݗ	dd 97	ARABIC LETTER HAH WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 0758	ݘ	dd 98	ARABIC LETTER HAH WITH THREE DOTS POINTING UPWARDS BELOW */
    {               0,           0 }, /* 0759	ݙ	dd 99	ARABIC LETTER DAL WITH TWO DOTS VERTICALLY BELOW AND SMALL TAH */
    {               0,           0 }, /* 075A	ݚ	dd 9a	ARABIC LETTER DAL WITH INVERTED SMALL V BELOW */
    {               0,           0 }, /* 075B	ݛ	dd 9b	ARABIC LETTER REH WITH STROKE */
    {               0,           0 }, /* 075C	ݜ	dd 9c	ARABIC LETTER SEEN WITH FOUR DOTS ABOVE */
    {               0,           0 }, /* 075D	ݝ	dd 9d	ARABIC LETTER AIN WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 075E	ݞ	dd 9e	ARABIC LETTER AIN WITH THREE DOTS POINTING DOWNWARDS ABOVE */
    {               0,           0 }, /* 075F	ݟ	dd 9f	ARABIC LETTER AIN WITH TWO DOTS VERTICALLY ABOVE */
    {               0,           0 }, /* 0760	ݠ	dd a0	ARABIC LETTER FEH WITH TWO DOTS BELOW */
    {               0,           0 }, /* 0761	ݡ	dd a1	ARABIC LETTER FEH WITH THREE DOTS POINTING UPWARDS BELOW */
    {               0,           0 }, /* 0762	ݢ	dd a2	ARABIC LETTER KEHEH WITH DOT ABOVE */
    {               0,           0 }, /* 0763	ݣ	dd a3	ARABIC LETTER KEHEH WITH THREE DOTS ABOVE */
    {               0,           0 }, /* 0764	ݤ	dd a4	ARABIC LETTER KEHEH WITH THREE DOTS POINTING UPWARDS BELOW */
    {               0,           0 }, /* 0765	ݥ	dd a5	ARABIC LETTER MEEM WITH DOT ABOVE */
    {               0,           0 }, /* 0766	ݦ	dd a6	ARABIC LETTER MEEM WITH DOT BELOW */
    {               0,           0 }, /* 0767	ݧ	dd a7	ARABIC LETTER NOON WITH TWO DOTS BELOW */
    {               0,           0 }, /* 0768	ݨ	dd a8	ARABIC LETTER NOON WITH SMALL TAH */
    {               0,           0 }, /* 0769	ݩ	dd a9	ARABIC LETTER NOON WITH SMALL V */
    {               0,           0 }, /* 076A	ݪ	dd aa	ARABIC LETTER LAM WITH BAR */
    {               0,           0 }, /* 076B	ݫ	dd ab	ARABIC LETTER REH WITH TWO DOTS VERTICALLY ABOVE */
    {               0,           0 }, /* 076C	ݬ	dd ac	ARABIC LETTER REH WITH HAMZA ABOVE */
    {               0,           0 }, /* 076D	ݭ	dd ad	ARABIC LETTER SEEN WITH TWO DOTS VERTICALLY ABOVE */
    {               0,           0 }, /* 076E	ݮ	dd ae	ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH BELOW */
    {               0,           0 }, /* 076F	ݯ	dd af	ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH AND TWO DOTS */
    {               0,           0 }, /* 0770	ݰ	dd b0	ARABIC LETTER SEEN WITH SMALL ARABIC LETTER TAH AND TWO DOTS */
    {               0,           0 }, /* 0771	ݱ	dd b1	ARABIC LETTER REH WITH SMALL ARABIC LETTER TAH AND TWO DOTS */
    {               0,           0 }, /* 0772	ݲ	dd b2	ARABIC LETTER HAH WITH SMALL ARABIC LETTER TAH ABOVE */
    {               0,           0 }, /* 0773	ݳ	dd b3	ARABIC LETTER ALEF WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE */
    {               0,           0 }, /* 0774	ݴ	dd b4	ARABIC LETTER ALEF WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE */
    {               0,           0 }, /* 0775	ݵ	dd b5	ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE */
    {               0,           0 }, /* 0776	ݶ	dd b6	ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE */
    {               0,           0 }, /* 0777	ݷ	dd b7	ARABIC LETTER FARSI YEH WITH EXTENDED ARABIC-INDIC DIGIT FOUR BELOW */
    {               0,           0 }, /* 0778	ݸ	dd b8	ARABIC LETTER WAW WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE */
    {               0,           0 }, /* 0779	ݹ	dd b9	ARABIC LETTER WAW WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE */
    {               0,           0 }, /* 077A	ݺ	dd ba	ARABIC LETTER YEH BARREE WITH EXTENDED ARABIC-INDIC DIGIT TWO ABOVE */
    {               0,           0 }, /* 077B	ݻ	dd bb	ARABIC LETTER YEH BARREE WITH EXTENDED ARABIC-INDIC DIGIT THREE ABOVE */
    {               0,           0 }, /* 077C	ݼ	dd bc	ARABIC LETTER HAH WITH EXTENDED ARABIC-INDIC DIGIT FOUR BELOW */
    {               0,           0 }, /* 077D	ݽ	dd bd	ARABIC LETTER SEEN WITH EXTENDED ARABIC-INDIC DIGIT FOUR ABOVE */
    {               0,           0 }, /* 077E	ݾ	dd be	ARABIC LETTER SEEN WITH INVERTED V */
    {               0,           0 }, /* 077F	ݿ	dd bf	ARABIC LETTER KAF WITH TWO DOTS ABOVE */
    {               0,           0 }, /* 0780	ހ	de 80	THAANA LETTER HAA */
    {               0,           0 }, /* 0781	ށ	de 81	THAANA LETTER SHAVIYANI */
    {               0,           0 }, /* 0782	ނ	de 82	THAANA LETTER NOONU */
    {               0,           0 }, /* 0783	ރ	de 83	THAANA LETTER RAA */
    {               0,           0 }, /* 0784	ބ	de 84	THAANA LETTER BAA */
    {               0,           0 }, /* 0785	ޅ	de 85	THAANA LETTER LHAVIYANI */
    {               0,           0 }, /* 0786	ކ	de 86	THAANA LETTER KAAFU */
    {               0,           0 }, /* 0787	އ	de 87	THAANA LETTER ALIFU */
    {               0,           0 }, /* 0788	ވ	de 88	THAANA LETTER VAAVU */
    {               0,           0 }, /* 0789	މ	de 89	THAANA LETTER MEEMU */
    {               0,           0 }, /* 078A	ފ	de 8a	THAANA LETTER FAAFU */
    {               0,           0 }, /* 078B	ދ	de 8b	THAANA LETTER DHAALU */
    {               0,           0 }, /* 078C	ތ	de 8c	THAANA LETTER THAA */
    {               0,           0 }, /* 078D	ލ	de 8d	THAANA LETTER LAAMU */
    {               0,           0 }, /* 078E	ގ	de 8e	THAANA LETTER GAAFU */
    {               0,           0 }, /* 078F	ޏ	de 8f	THAANA LETTER GNAVIYANI */
    {               0,           0 }, /* 0790	ސ	de 90	THAANA LETTER SEENU */
    {               0,           0 }, /* 0791	ޑ	de 91	THAANA LETTER DAVIYANI */
    {               0,           0 }, /* 0792	ޒ	de 92	THAANA LETTER ZAVIYANI */
    {               0,           0 }, /* 0793	ޓ	de 93	THAANA LETTER TAVIYANI */
    {               0,           0 }, /* 0794	ޔ	de 94	THAANA LETTER YAA */
    {               0,           0 }, /* 0795	ޕ	de 95	THAANA LETTER PAVIYANI */
    {               0,           0 }, /* 0796	ޖ	de 96	THAANA LETTER JAVIYANI */
    {               0,           0 }, /* 0797	ޗ	de 97	THAANA LETTER CHAVIYANI */
    {               0,           0 }, /* 0798	ޘ	de 98	THAANA LETTER TTAA */
    {               0,           0 }, /* 0799	ޙ	de 99	THAANA LETTER HHAA */
    {               0,           0 }, /* 079A	ޚ	de 9a	THAANA LETTER KHAA */
    {               0,           0 }, /* 079B	ޛ	de 9b	THAANA LETTER THAALU */
    {               0,           0 }, /* 079C	ޜ	de 9c	THAANA LETTER ZAA */
    {               0,           0 }, /* 079D	ޝ	de 9d	THAANA LETTER SHEENU */
    {               0,           0 }, /* 079E	ޞ	de 9e	THAANA LETTER SAADHU */
    {               0,           0 }, /* 079F	ޟ	de 9f	THAANA LETTER DAADHU */
    {               0,           0 }, /* 07A0	ޠ	de a0	THAANA LETTER TO */
    {               0,           0 }, /* 07A1	ޡ	de a1	THAANA LETTER ZO */
    {               0,           0 }, /* 07A2	ޢ	de a2	THAANA LETTER AINU */
    {               0,           0 }, /* 07A3	ޣ	de a3	THAANA LETTER GHAINU */
    {               0,           0 }, /* 07A4	ޤ	de a4	THAANA LETTER QAAFU */
    {               0,           0 }, /* 07A5	ޥ	de a5	THAANA LETTER WAAVU */
    {               0,           0 }, /* 07A6	ަ	de a6	THAANA ABAFILI */
    {               0,           0 }, /* 07A7	ާ	de a7	THAANA AABAAFILI */
    {               0,           0 }, /* 07A8	ި	de a8	THAANA IBIFILI */
    {               0,           0 }, /* 07A9	ީ	de a9	THAANA EEBEEFILI */
    {               0,           0 }, /* 07AA	ު	de aa	THAANA UBUFILI */
    {               0,           0 }, /* 07AB	ޫ	de ab	THAANA OOBOOFILI */
    {               0,           0 }, /* 07AC	ެ	de ac	THAANA EBEFILI */
    {               0,           0 }, /* 07AD	ޭ	de ad	THAANA EYBEYFILI */
    {               0,           0 }, /* 07AE	ޮ	de ae	THAANA OBOFILI */
    {               0,           0 }, /* 07AF	ޯ	de af	THAANA OABOAFILI */
    {               0,           0 }, /* 07B0	ް	de b0	THAANA SUKUN */
    {               0,           0 }, /* 07B1	ޱ	de b1	THAANA LETTER NAA */
    {               0,           0 }, /* 07B2	޲	de b2	 */
    {               0,           0 }, /* 07B3	޳	de b3	 */
    {               0,           0 }, /* 07B4	޴	de b4	 */
    {               0,           0 }, /* 07B5	޵	de b5	 */
    {               0,           0 }, /* 07B6	޶	de b6	 */
    {               0,           0 }, /* 07B7	޷	de b7	 */
    {               0,           0 }, /* 07B8	޸	de b8	 */
    {               0,           0 }, /* 07B9	޹	de b9	 */
    {               0,           0 }, /* 07BA	޺	de ba	 */
    {               0,           0 }, /* 07BB	޻	de bb	 */
    {               0,           0 }, /* 07BC	޼	de bc	 */
    {               0,           0 }, /* 07BD	޽	de bd	 */
    {               0,           0 }, /* 07BE	޾	de be	 */
    {               0,           0 }, /* 07BF	޿	de bf	 */
    {               0,           0 }, /* 07C0	߀	df 80	NKO DIGIT ZERO */
    {               0,           0 }, /* 07C1	߁	df 81	NKO DIGIT ONE */
    {               0,           0 }, /* 07C2	߂	df 82	NKO DIGIT TWO */
    {               0,           0 }, /* 07C3	߃	df 83	NKO DIGIT THREE */
    {               0,           0 }, /* 07C4	߄	df 84	NKO DIGIT FOUR */
    {               0,           0 }, /* 07C5	߅	df 85	NKO DIGIT FIVE */
    {               0,           0 }, /* 07C6	߆	df 86	NKO DIGIT SIX */
    {               0,           0 }, /* 07C7	߇	df 87	NKO DIGIT SEVEN */
    {               0,           0 }, /* 07C8	߈	df 88	NKO DIGIT EIGHT */
    {               0,           0 }, /* 07C9	߉	df 89	NKO DIGIT NINE */
    {               0,           0 }, /* 07CA	ߊ	df 8a	NKO LETTER A */
    {               0,           0 }, /* 07CB	ߋ	df 8b	NKO LETTER EE */
    {               0,           0 }, /* 07CC	ߌ	df 8c	NKO LETTER I */
    {               0,           0 }, /* 07CD	ߍ	df 8d	NKO LETTER E */
    {               0,           0 }, /* 07CE	ߎ	df 8e	NKO LETTER U */
    {               0,           0 }, /* 07CF	ߏ	df 8f	NKO LETTER OO */
    {               0,           0 }, /* 07D0	ߐ	df 90	NKO LETTER O */
    {               0,           0 }, /* 07D1	ߑ	df 91	NKO LETTER DAGBASINNA */
    {               0,           0 }, /* 07D2	ߒ	df 92	NKO LETTER N */
    {               0,           0 }, /* 07D3	ߓ	df 93	NKO LETTER BA */
    {               0,           0 }, /* 07D4	ߔ	df 94	NKO LETTER PA */
    {               0,           0 }, /* 07D5	ߕ	df 95	NKO LETTER TA */
    {               0,           0 }, /* 07D6	ߖ	df 96	NKO LETTER JA */
    {               0,           0 }, /* 07D7	ߗ	df 97	NKO LETTER CHA */
    {               0,           0 }, /* 07D8	ߘ	df 98	NKO LETTER DA */
    {               0,           0 }, /* 07D9	ߙ	df 99	NKO LETTER RA */
    {               0,           0 }, /* 07DA	ߚ	df 9a	NKO LETTER RRA */
    {               0,           0 }, /* 07DB	ߛ	df 9b	NKO LETTER SA */
    {               0,           0 }, /* 07DC	ߜ	df 9c	NKO LETTER GBA */
    {               0,           0 }, /* 07DD	ߝ	df 9d	NKO LETTER FA */
    {               0,           0 }, /* 07DE	ߞ	df 9e	NKO LETTER KA */
    {               0,           0 }, /* 07DF	ߟ	df 9f	NKO LETTER LA */
    {               0,           0 }, /* 07E0	ߠ	df a0	NKO LETTER NA WOLOSO */
    {               0,           0 }, /* 07E1	ߡ	df a1	NKO LETTER MA */
    {               0,           0 }, /* 07E2	ߢ	df a2	NKO LETTER NYA */
    {               0,           0 }, /* 07E3	ߣ	df a3	NKO LETTER NA */
    {               0,           0 }, /* 07E4	ߤ	df a4	NKO LETTER HA */
    {               0,           0 }, /* 07E5	ߥ	df a5	NKO LETTER WA */
    {               0,           0 }, /* 07E6	ߦ	df a6	NKO LETTER YA */
    {               0,           0 }, /* 07E7	ߧ	df a7	NKO LETTER NYA WOLOSO */
    {               0,           0 }, /* 07E8	ߨ	df a8	NKO LETTER JONA JA */
    {               0,           0 }, /* 07E9	ߩ	df a9	NKO LETTER JONA CHA */
    {               0,           0 }, /* 07EA	ߪ	df aa	NKO LETTER JONA RA */
    {               0,           0 }, /* 07EB	߫	df ab	NKO COMBINING SHORT HIGH TONE */
    {               0,           0 }, /* 07EC	߬	df ac	NKO COMBINING SHORT LOW TONE */
    {               0,           0 }, /* 07ED	߭	df ad	NKO COMBINING SHORT RISING TONE */
    {               0,           0 }, /* 07EE	߮	df ae	NKO COMBINING LONG DESCENDING TONE */
    {               0,           0 }, /* 07EF	߯	df af	NKO COMBINING LONG HIGH TONE */
    {               0,           0 }, /* 07F0	߰	df b0	NKO COMBINING LONG LOW TONE */
    {               0,           0 }, /* 07F1	߱	df b1	NKO COMBINING LONG RISING TONE */
    {               0,           0 }, /* 07F2	߲	df b2	NKO COMBINING NASALIZATION MARK */
    {               0,           0 }, /* 07F3	߳	df b3	NKO COMBINING DOUBLE DOT ABOVE */
    {               0,           0 }, /* 07F4	ߴ	df b4	NKO HIGH TONE APOSTROPHE */
    {               0,           0 }, /* 07F5	ߵ	df b5	NKO LOW TONE APOSTROPHE */
    {               0,           0 }, /* 07F6	߶	df b6	NKO SYMBOL OO DENNEN */
    {               0,           0 }, /* 07F7	߷	df b7	NKO SYMBOL GBAKURUNEN */
    {               0,           0 }, /* 07F8	߸	df b8	NKO COMMA */
    {               0,           0 }, /* 07F9	߹	df b9	NKO EXCLAMATION MARK */
    {               0,           0 }, /* 07FA	ߺ	df ba	NKO LAJANYALAN */
    {               0,           0 }, /* 07FB	߻	df bb	 */
    {               0,           0 }, /* 07FC	߼	df bc	 */
    {               0,           0 }, /* 07FD	߽	df bd	 */
    {               0,           0 }, /* 07FE	߾	df be	 */
    {               0,           0 }, /* 07FF	߿	df bf */
    {               0,           0 }, /* 0800	ࠀ	e0 a0 80	SAMARITAN LETTER ALAF */
    {               0,           0 }, /* 0801	ࠁ	e0 a0 81	SAMARITAN LETTER BIT */
    {               0,           0 }, /* 0802	ࠂ	e0 a0 82	SAMARITAN LETTER GAMAN */
    {               0,           0 }, /* 0803	ࠃ	e0 a0 83	SAMARITAN LETTER DALAT */
    {               0,           0 }, /* 0804	ࠄ	e0 a0 84	SAMARITAN LETTER IY */
    {               0,           0 }, /* 0805	ࠅ	e0 a0 85	SAMARITAN LETTER BAA */
    {               0,           0 }, /* 0806	ࠆ	e0 a0 86	SAMARITAN LETTER ZEN */
    {               0,           0 }, /* 0807	ࠇ	e0 a0 87	SAMARITAN LETTER IT */
    {               0,           0 }, /* 0808	ࠈ	e0 a0 88	SAMARITAN LETTER TIT */
    {               0,           0 }, /* 0809	ࠉ	e0 a0 89	SAMARITAN LETTER YUT */
    {               0,           0 }, /* 080A	ࠊ	e0 a0 8a	SAMARITAN LETTER KAAF */
    {               0,           0 }, /* 080B	ࠋ	e0 a0 8b	SAMARITAN LETTER LABAT */
    {               0,           0 }, /* 080C	ࠌ	e0 a0 8c	SAMARITAN LETTER MIM */
    {               0,           0 }, /* 080D	ࠍ	e0 a0 8d	SAMARITAN LETTER NUN */
    {               0,           0 }, /* 080E	ࠎ	e0 a0 8e	SAMARITAN LETTER SINGAAT */
    {               0,           0 }, /* 080F	ࠏ	e0 a0 8f	SAMARITAN LETTER IN */
    {               0,           0 }, /* 0810	ࠐ	e0 a0 90	SAMARITAN LETTER FI */
    {               0,           0 }, /* 0811	ࠑ	e0 a0 91	SAMARITAN LETTER TSAADIY */
    {               0,           0 }, /* 0812	ࠒ	e0 a0 92	SAMARITAN LETTER QUF */
    {               0,           0 }, /* 0813	ࠓ	e0 a0 93	SAMARITAN LETTER RISH */
    {               0,           0 }, /* 0814	ࠔ	e0 a0 94	SAMARITAN LETTER SHAN */
    {               0,           0 }, /* 0815	ࠕ	e0 a0 95	SAMARITAN LETTER TAAF */
    {               0,           0 }, /* 0816	ࠖ	e0 a0 96	SAMARITAN MARK IN */
    {               0,           0 }, /* 0817	ࠗ	e0 a0 97	SAMARITAN MARK IN-ALAF */
    {               0,           0 }, /* 0818	࠘	e0 a0 98	SAMARITAN MARK OCCLUSION */
    {               0,           0 }, /* 0819	࠙	e0 a0 99	SAMARITAN MARK DAGESH */
    {               0,           0 }, /* 081A	ࠚ	e0 a0 9a	SAMARITAN MODIFIER LETTER EPENTHETIC YUT */
    {               0,           0 }, /* 081B	ࠛ	e0 a0 9b	SAMARITAN MARK EPENTHETIC YUT */
    {               0,           0 }, /* 081C	ࠜ	e0 a0 9c	SAMARITAN VOWEL SIGN LONG E */
    {               0,           0 }, /* 081D	ࠝ	e0 a0 9d	SAMARITAN VOWEL SIGN E */
    {               0,           0 }, /* 081E	ࠞ	e0 a0 9e	SAMARITAN VOWEL SIGN OVERLONG AA */
    {               0,           0 }, /* 081F	ࠟ	e0 a0 9f	SAMARITAN VOWEL SIGN LONG AA */
    {               0,           0 }, /* 0820	ࠠ	e0 a0 a0	SAMARITAN VOWEL SIGN AA */
    {               0,           0 }, /* 0821	ࠡ	e0 a0 a1	SAMARITAN VOWEL SIGN OVERLONG A */
    {               0,           0 }, /* 0822	ࠢ	e0 a0 a2	SAMARITAN VOWEL SIGN LONG A */
    {               0,           0 }, /* 0823	ࠣ	e0 a0 a3	SAMARITAN VOWEL SIGN A */
    {               0,           0 }, /* 0824	ࠤ	e0 a0 a4	SAMARITAN MODIFIER LETTER SHORT A */
    {               0,           0 }, /* 0825	ࠥ	e0 a0 a5	SAMARITAN VOWEL SIGN SHORT A */
    {               0,           0 }, /* 0826	ࠦ	e0 a0 a6	SAMARITAN VOWEL SIGN LONG U */
    {               0,           0 }, /* 0827	ࠧ	e0 a0 a7	SAMARITAN VOWEL SIGN U */
    {               0,           0 }, /* 0828	ࠨ	e0 a0 a8	SAMARITAN MODIFIER LETTER I */
    {               0,           0 }, /* 0829	ࠩ	e0 a0 a9	SAMARITAN VOWEL SIGN LONG I */
    {               0,           0 }, /* 082A	ࠪ	e0 a0 aa	SAMARITAN VOWEL SIGN I */
    {               0,           0 }, /* 082B	ࠫ	e0 a0 ab	SAMARITAN VOWEL SIGN O */
    {               0,           0 }, /* 082C	ࠬ	e0 a0 ac	SAMARITAN VOWEL SIGN SUKUN */
    {               0,           0 }, /* 082D	࠭	e0 a0 ad	SAMARITAN MARK NEQUDAA */
    {               0,           0 }, /* 082E	࠮	e0 a0 ae	 */
    {               0,           0 }, /* 082F	࠯	e0 a0 af	 */
    {               0,           0 }, /* 0830	࠰	e0 a0 b0	SAMARITAN PUNCTUATION NEQUDAA */
    {               0,           0 }, /* 0831	࠱	e0 a0 b1	SAMARITAN PUNCTUATION AFSAAQ */
    {               0,           0 }, /* 0832	࠲	e0 a0 b2	SAMARITAN PUNCTUATION ANGED */
    {               0,           0 }, /* 0833	࠳	e0 a0 b3	SAMARITAN PUNCTUATION BAU */
    {               0,           0 }, /* 0834	࠴	e0 a0 b4	SAMARITAN PUNCTUATION ATMAAU */
    {               0,           0 }, /* 0835	࠵	e0 a0 b5	SAMARITAN PUNCTUATION SHIYYAALAA */
    {               0,           0 }, /* 0836	࠶	e0 a0 b6	SAMARITAN ABBREVIATION MARK */
    {               0,           0 }, /* 0837	࠷	e0 a0 b7	SAMARITAN PUNCTUATION MELODIC QITSA */
    {               0,           0 }, /* 0838	࠸	e0 a0 b8	SAMARITAN PUNCTUATION ZIQAA */
    {               0,           0 }, /* 0839	࠹	e0 a0 b9	SAMARITAN PUNCTUATION QITSA */
    {               0,           0 }, /* 083A	࠺	e0 a0 ba	SAMARITAN PUNCTUATION ZAEF */
    {               0,           0 }, /* 083B	࠻	e0 a0 bb	SAMARITAN PUNCTUATION TURU */
    {               0,           0 }, /* 083C	࠼	e0 a0 bc	SAMARITAN PUNCTUATION ARKAANU */
    {               0,           0 }, /* 083D	࠽	e0 a0 bd	SAMARITAN PUNCTUATION SOF MASHFAAT */
    {               0,           0 }, /* 083E	࠾	e0 a0 be	SAMARITAN PUNCTUATION ANNAAU */
    {               0,           0 }, /* 083F	࠿	e0 a0 bf	 */
    {               0,           0 }, /* 0840	ࡀ	e0 a1 80	 */
    {               0,           0 }, /* 0841	ࡁ	e0 a1 81	 */
    {               0,           0 }, /* 0842	ࡂ	e0 a1 82	 */
    {               0,           0 }, /* 0843	ࡃ	e0 a1 83	 */
    {               0,           0 }, /* 0844	ࡄ	e0 a1 84	 */
    {               0,           0 }, /* 0845	ࡅ	e0 a1 85	 */
    {               0,           0 }, /* 0846	ࡆ	e0 a1 86	 */
    {               0,           0 }, /* 0847	ࡇ	e0 a1 87	 */
    {               0,           0 }, /* 0848	ࡈ	e0 a1 88	 */
    {               0,           0 }, /* 0849	ࡉ	e0 a1 89	 */
    {               0,           0 }, /* 084A	ࡊ	e0 a1 8a	 */
    {               0,           0 }, /* 084B	ࡋ	e0 a1 8b	 */
    {               0,           0 }, /* 084C	ࡌ	e0 a1 8c	 */
    {               0,           0 }, /* 084D	ࡍ	e0 a1 8d	 */
    {               0,           0 }, /* 084E	ࡎ	e0 a1 8e	 */
    {               0,           0 }, /* 084F	ࡏ	e0 a1 8f	 */
    {               0,           0 }, /* 0850	ࡐ	e0 a1 90	 */
    {               0,           0 }, /* 0851	ࡑ	e0 a1 91	 */
    {               0,           0 }, /* 0852	ࡒ	e0 a1 92	 */
    {               0,           0 }, /* 0853	ࡓ	e0 a1 93	 */
    {               0,           0 }, /* 0854	ࡔ	e0 a1 94	 */
    {               0,           0 }, /* 0855	ࡕ	e0 a1 95	 */
    {               0,           0 }, /* 0856	ࡖ	e0 a1 96	 */
    {               0,           0 }, /* 0857	ࡗ	e0 a1 97	 */
    {               0,           0 }, /* 0858	ࡘ	e0 a1 98	 */
    {               0,           0 }, /* 0859	࡙	e0 a1 99	 */
    {               0,           0 }, /* 085A	࡚	e0 a1 9a	 */
    {               0,           0 }, /* 085B	࡛	e0 a1 9b	 */
    {               0,           0 }, /* 085C	࡜	e0 a1 9c	 */
    {               0,           0 }, /* 085D	࡝	e0 a1 9d	 */
    {               0,           0 }, /* 085E	࡞	e0 a1 9e	 */
    {               0,           0 }, /* 085F	࡟	e0 a1 9f	 */
    {               0,           0 }, /* 0860	ࡠ	e0 a1 a0	 */
    {               0,           0 }, /* 0861	ࡡ	e0 a1 a1	 */
    {               0,           0 }, /* 0862	ࡢ	e0 a1 a2	 */
    {               0,           0 }, /* 0863	ࡣ	e0 a1 a3	 */
    {               0,           0 }, /* 0864	ࡤ	e0 a1 a4	 */
    {               0,           0 }, /* 0865	ࡥ	e0 a1 a5	 */
    {               0,           0 }, /* 0866	ࡦ	e0 a1 a6	 */
    {               0,           0 }, /* 0867	ࡧ	e0 a1 a7	 */
    {               0,           0 }, /* 0868	ࡨ	e0 a1 a8	 */
    {               0,           0 }, /* 0869	ࡩ	e0 a1 a9	 */
    {               0,           0 }, /* 086A	ࡪ	e0 a1 aa	 */
    {               0,           0 }, /* 086B	࡫	e0 a1 ab	 */
    {               0,           0 }, /* 086C	࡬	e0 a1 ac	 */
    {               0,           0 }, /* 086D	࡭	e0 a1 ad	 */
    {               0,           0 }, /* 086E	࡮	e0 a1 ae	 */
    {               0,           0 }, /* 086F	࡯	e0 a1 af	 */
    {               0,           0 }, /* 0870	ࡰ	e0 a1 b0	 */
    {               0,           0 }, /* 0871	ࡱ	e0 a1 b1	 */
    {               0,           0 }, /* 0872	ࡲ	e0 a1 b2	 */
    {               0,           0 }, /* 0873	ࡳ	e0 a1 b3	 */
    {               0,           0 }, /* 0874	ࡴ	e0 a1 b4	 */
    {               0,           0 }, /* 0875	ࡵ	e0 a1 b5	 */
    {               0,           0 }, /* 0876	ࡶ	e0 a1 b6	 */
    {               0,           0 }, /* 0877	ࡷ	e0 a1 b7	 */
    {               0,           0 }, /* 0878	ࡸ	e0 a1 b8	 */
    {               0,           0 }, /* 0879	ࡹ	e0 a1 b9	 */
    {               0,           0 }, /* 087A	ࡺ	e0 a1 ba	 */
    {               0,           0 }, /* 087B	ࡻ	e0 a1 bb	 */
    {               0,           0 }, /* 087C	ࡼ	e0 a1 bc	 */
    {               0,           0 }, /* 087D	ࡽ	e0 a1 bd	 */
    {               0,           0 }, /* 087E	ࡾ	e0 a1 be	 */
    {               0,           0 }, /* 087F	ࡿ	e0 a1 bf	 */
    {               0,           0 }, /* 0880	ࢀ	e0 a2 80	 */
    {               0,           0 }, /* 0881	ࢁ	e0 a2 81	 */
    {               0,           0 }, /* 0882	ࢂ	e0 a2 82	 */
    {               0,           0 }, /* 0883	ࢃ	e0 a2 83	 */
    {               0,           0 }, /* 0884	ࢄ	e0 a2 84	 */
    {               0,           0 }, /* 0885	ࢅ	e0 a2 85	 */
    {               0,           0 }, /* 0886	ࢆ	e0 a2 86	 */
    {               0,           0 }, /* 0887	ࢇ	e0 a2 87	 */
    {               0,           0 }, /* 0888	࢈	e0 a2 88	 */
    {               0,           0 }, /* 0889	ࢉ	e0 a2 89	 */
    {               0,           0 }, /* 088A	ࢊ	e0 a2 8a	 */
    {               0,           0 }, /* 088B	ࢋ	e0 a2 8b	 */
    {               0,           0 }, /* 088C	ࢌ	e0 a2 8c	 */
    {               0,           0 }, /* 088D	ࢍ	e0 a2 8d	 */
    {               0,           0 }, /* 088E	ࢎ	e0 a2 8e	 */
    {               0,           0 }, /* 088F	࢏	e0 a2 8f	 */
    {               0,           0 }, /* 0890	࢐	e0 a2 90	 */
    {               0,           0 }, /* 0891	࢑	e0 a2 91	 */
    {               0,           0 }, /* 0892	࢒	e0 a2 92	 */
    {               0,           0 }, /* 0893	࢓	e0 a2 93	 */
    {               0,           0 }, /* 0894	࢔	e0 a2 94	 */
    {               0,           0 }, /* 0895	࢕	e0 a2 95	 */
    {               0,           0 }, /* 0896	࢖	e0 a2 96	 */
    {               0,           0 }, /* 0897	ࢗ	e0 a2 97	 */
    {               0,           0 }, /* 0898	࢘	e0 a2 98	 */
    {               0,           0 }, /* 0899	࢙	e0 a2 99	 */
    {               0,           0 }, /* 089A	࢚	e0 a2 9a	 */
    {               0,           0 }, /* 089B	࢛	e0 a2 9b	 */
    {               0,           0 }, /* 089C	࢜	e0 a2 9c	 */
    {               0,           0 }, /* 089D	࢝	e0 a2 9d	 */
    {               0,           0 }, /* 089E	࢞	e0 a2 9e	 */
    {               0,           0 }, /* 089F	࢟	e0 a2 9f	 */
    {               0,           0 }, /* 08A0	ࢠ	e0 a2 a0	 */
    {               0,           0 }, /* 08A1	ࢡ	e0 a2 a1	 */
    {               0,           0 }, /* 08A2	ࢢ	e0 a2 a2	 */
    {               0,           0 }, /* 08A3	ࢣ	e0 a2 a3	 */
    {               0,           0 }, /* 08A4	ࢤ	e0 a2 a4	 */
    {               0,           0 }, /* 08A5	ࢥ	e0 a2 a5	 */
    {               0,           0 }, /* 08A6	ࢦ	e0 a2 a6	 */
    {               0,           0 }, /* 08A7	ࢧ	e0 a2 a7	 */
    {               0,           0 }, /* 08A8	ࢨ	e0 a2 a8	 */
    {               0,           0 }, /* 08A9	ࢩ	e0 a2 a9	 */
    {               0,           0 }, /* 08AA	ࢪ	e0 a2 aa	 */
    {               0,           0 }, /* 08AB	ࢫ	e0 a2 ab	 */
    {               0,           0 }, /* 08AC	ࢬ	e0 a2 ac	 */
    {               0,           0 }, /* 08AD	ࢭ	e0 a2 ad	 */
    {               0,           0 }, /* 08AE	ࢮ	e0 a2 ae	 */
    {               0,           0 }, /* 08AF	ࢯ	e0 a2 af	 */
    {               0,           0 }, /* 08B0	ࢰ	e0 a2 b0	 */
    {               0,           0 }, /* 08B1	ࢱ	e0 a2 b1	 */
    {               0,           0 }, /* 08B2	ࢲ	e0 a2 b2	 */
    {               0,           0 }, /* 08B3	ࢳ	e0 a2 b3	 */
    {               0,           0 }, /* 08B4	ࢴ	e0 a2 b4	 */
    {               0,           0 }, /* 08B5	ࢵ	e0 a2 b5	 */
    {               0,           0 }, /* 08B6	ࢶ	e0 a2 b6	 */
    {               0,           0 }, /* 08B7	ࢷ	e0 a2 b7	 */
    {               0,           0 }, /* 08B8	ࢸ	e0 a2 b8	 */
    {               0,           0 }, /* 08B9	ࢹ	e0 a2 b9	 */
    {               0,           0 }, /* 08BA	ࢺ	e0 a2 ba	 */
    {               0,           0 }, /* 08BB	ࢻ	e0 a2 bb	 */
    {               0,           0 }, /* 08BC	ࢼ	e0 a2 bc	 */
    {               0,           0 }, /* 08BD	ࢽ	e0 a2 bd	 */
    {               0,           0 }, /* 08BE	ࢾ	e0 a2 be	 */
    {               0,           0 }, /* 08BF	ࢿ	e0 a2 bf	 */
    {               0,           0 }, /* 08C0	ࣀ	e0 a3 80	 */
    {               0,           0 }, /* 08C1	ࣁ	e0 a3 81	 */
    {               0,           0 }, /* 08C2	ࣂ	e0 a3 82	 */
    {               0,           0 }, /* 08C3	ࣃ	e0 a3 83	 */
    {               0,           0 }, /* 08C4	ࣄ	e0 a3 84	 */
    {               0,           0 }, /* 08C5	ࣅ	e0 a3 85	 */
    {               0,           0 }, /* 08C6	ࣆ	e0 a3 86	 */
    {               0,           0 }, /* 08C7	ࣇ	e0 a3 87	 */
    {               0,           0 }, /* 08C8	ࣈ	e0 a3 88	 */
    {               0,           0 }, /* 08C9	ࣉ	e0 a3 89	 */
    {               0,           0 }, /* 08CA	࣊	e0 a3 8a	 */
    {               0,           0 }, /* 08CB	࣋	e0 a3 8b	 */
    {               0,           0 }, /* 08CC	࣌	e0 a3 8c	 */
    {               0,           0 }, /* 08CD	࣍	e0 a3 8d	 */
    {               0,           0 }, /* 08CE	࣎	e0 a3 8e	 */
    {               0,           0 }, /* 08CF	࣏	e0 a3 8f	 */
    {               0,           0 }, /* 08D0	࣐	e0 a3 90	 */
    {               0,           0 }, /* 08D1	࣑	e0 a3 91	 */
    {               0,           0 }, /* 08D2	࣒	e0 a3 92	 */
    {               0,           0 }, /* 08D3	࣓	e0 a3 93	 */
    {               0,           0 }, /* 08D4	ࣔ	e0 a3 94	 */
    {               0,           0 }, /* 08D5	ࣕ	e0 a3 95	 */
    {               0,           0 }, /* 08D6	ࣖ	e0 a3 96	 */
    {               0,           0 }, /* 08D7	ࣗ	e0 a3 97	 */
    {               0,           0 }, /* 08D8	ࣘ	e0 a3 98	 */
    {               0,           0 }, /* 08D9	ࣙ	e0 a3 99	 */
    {               0,           0 }, /* 08DA	ࣚ	e0 a3 9a	 */
    {               0,           0 }, /* 08DB	ࣛ	e0 a3 9b	 */
    {               0,           0 }, /* 08DC	ࣜ	e0 a3 9c	 */
    {               0,           0 }, /* 08DD	ࣝ	e0 a3 9d	 */
    {               0,           0 }, /* 08DE	ࣞ	e0 a3 9e	 */
    {               0,           0 }, /* 08DF	ࣟ	e0 a3 9f	 */
    {               0,           0 }, /* 08E0	࣠	e0 a3 a0	 */
    {               0,           0 }, /* 08E1	࣡	e0 a3 a1	 */
    {               0,           0 }, /* 08E2	࣢	e0 a3 a2	 */
    {               0,           0 }, /* 08E3	ࣣ	e0 a3 a3	 */
    {               0,           0 }, /* 08E4	ࣤ	e0 a3 a4	 */
    {               0,           0 }, /* 08E5	ࣥ	e0 a3 a5	 */
    {               0,           0 }, /* 08E6	ࣦ	e0 a3 a6	 */
    {               0,           0 }, /* 08E7	ࣧ	e0 a3 a7	 */
    {               0,           0 }, /* 08E8	ࣨ	e0 a3 a8	 */
    {               0,           0 }, /* 08E9	ࣩ	e0 a3 a9	 */
    {               0,           0 }, /* 08EA	࣪	e0 a3 aa	 */
    {               0,           0 }, /* 08EB	࣫	e0 a3 ab	 */
    {               0,           0 }, /* 08EC	࣬	e0 a3 ac	 */
    {               0,           0 }, /* 08ED	࣭	e0 a3 ad	 */
    {               0,           0 }, /* 08EE	࣮	e0 a3 ae	 */
    {               0,           0 }, /* 08EF	࣯	e0 a3 af	 */
    {               0,           0 }, /* 08F0	ࣰ	e0 a3 b0	 */
    {               0,           0 }, /* 08F1	ࣱ	e0 a3 b1	 */
    {               0,           0 }, /* 08F2	ࣲ	e0 a3 b2	 */
    {               0,           0 }, /* 08F3	ࣳ	e0 a3 b3	 */
    {               0,           0 }, /* 08F4	ࣴ	e0 a3 b4	 */
    {               0,           0 }, /* 08F5	ࣵ	e0 a3 b5	 */
    {               0,           0 }, /* 08F6	ࣶ	e0 a3 b6	 */
    {               0,           0 }, /* 08F7	ࣷ	e0 a3 b7	 */
    {               0,           0 }, /* 08F8	ࣸ	e0 a3 b8	 */
    {               0,           0 }, /* 08F9	ࣹ	e0 a3 b9	 */
    {               0,           0 }, /* 08FA	ࣺ	e0 a3 ba	 */
    {               0,           0 }, /* 08FB	ࣻ	e0 a3 bb	 */
    {               0,           0 }, /* 08FC	ࣼ	e0 a3 bc	 */
    {               0,           0 }, /* 08FD	ࣽ	e0 a3 bd	 */
    {               0,           0 }, /* 08FE	ࣾ	e0 a3 be	 */
    {               0,           0 }, /* 08FF	ࣿ	e0 a3 bf */
    {               0,           0 }, /* 0900	ऀ	e0 a4 80	DEVANAGARI SIGN INVERTED CANDRABINDU */
    {               0,           0 }, /* 0901	ँ	e0 a4 81	DEVANAGARI SIGN CANDRABINDU */
    {               0,           0 }, /* 0902	ं	e0 a4 82	DEVANAGARI SIGN ANUSVARA */
    {               0,           0 }, /* 0903	ः	e0 a4 83	DEVANAGARI SIGN VISARGA */
    {               0,           0 }, /* 0904	ऄ	e0 a4 84	DEVANAGARI LETTER SHORT A */
    {               0,           0 }, /* 0905	अ	e0 a4 85	DEVANAGARI LETTER A */
    {               0,           0 }, /* 0906	आ	e0 a4 86	DEVANAGARI LETTER AA */
    {               0,           0 }, /* 0907	इ	e0 a4 87	DEVANAGARI LETTER I */
    {               0,           0 }, /* 0908	ई	e0 a4 88	DEVANAGARI LETTER II */
    {               0,           0 }, /* 0909	उ	e0 a4 89	DEVANAGARI LETTER U */
    {               0,           0 }, /* 090A	ऊ	e0 a4 8a	DEVANAGARI LETTER UU */
    {               0,           0 }, /* 090B	ऋ	e0 a4 8b	DEVANAGARI LETTER VOCALIC R */
    {               0,           0 }, /* 090C	ऌ	e0 a4 8c	DEVANAGARI LETTER VOCALIC L */
    {               0,           0 }, /* 090D	ऍ	e0 a4 8d	DEVANAGARI LETTER CANDRA E */
    {               0,           0 }, /* 090E	ऎ	e0 a4 8e	DEVANAGARI LETTER SHORT E */
    {               0,           0 }, /* 090F	ए	e0 a4 8f	DEVANAGARI LETTER E */
    {               0,           0 }, /* 0910	ऐ	e0 a4 90	DEVANAGARI LETTER AI */
    {               0,           0 }, /* 0911	ऑ	e0 a4 91	DEVANAGARI LETTER CANDRA O */
    {               0,           0 }, /* 0912	ऒ	e0 a4 92	DEVANAGARI LETTER SHORT O */
    {               0,           0 }, /* 0913	ओ	e0 a4 93	DEVANAGARI LETTER O */
    {               0,           0 }, /* 0914	औ	e0 a4 94	DEVANAGARI LETTER AU */
    {               0,           0 }, /* 0915	क	e0 a4 95	DEVANAGARI LETTER KA */
    {               0,           0 }, /* 0916	ख	e0 a4 96	DEVANAGARI LETTER KHA */
    {               0,           0 }, /* 0917	ग	e0 a4 97	DEVANAGARI LETTER GA */
    {               0,           0 }, /* 0918	घ	e0 a4 98	DEVANAGARI LETTER GHA */
    {               0,           0 }, /* 0919	ङ	e0 a4 99	DEVANAGARI LETTER NGA */
    {               0,           0 }, /* 091A	च	e0 a4 9a	DEVANAGARI LETTER CA */
    {               0,           0 }, /* 091B	छ	e0 a4 9b	DEVANAGARI LETTER CHA */
    {               0,           0 }, /* 091C	ज	e0 a4 9c	DEVANAGARI LETTER JA */
    {               0,           0 }, /* 091D	झ	e0 a4 9d	DEVANAGARI LETTER JHA */
    {               0,           0 }, /* 091E	ञ	e0 a4 9e	DEVANAGARI LETTER NYA */
    {               0,           0 }, /* 091F	ट	e0 a4 9f	DEVANAGARI LETTER TTA */
    {               0,           0 }, /* 0920	ठ	e0 a4 a0	DEVANAGARI LETTER TTHA */
    {               0,           0 }, /* 0921	ड	e0 a4 a1	DEVANAGARI LETTER DDA */
    {               0,           0 }, /* 0922	ढ	e0 a4 a2	DEVANAGARI LETTER DDHA */
    {               0,           0 }, /* 0923	ण	e0 a4 a3	DEVANAGARI LETTER NNA */
    {               0,           0 }, /* 0924	त	e0 a4 a4	DEVANAGARI LETTER TA */
    {               0,           0 }, /* 0925	थ	e0 a4 a5	DEVANAGARI LETTER THA */
    {               0,           0 }, /* 0926	द	e0 a4 a6	DEVANAGARI LETTER DA */
    {               0,           0 }, /* 0927	ध	e0 a4 a7	DEVANAGARI LETTER DHA */
    {               0,           0 }, /* 0928	न	e0 a4 a8	DEVANAGARI LETTER NA */
    {               0,           0 }, /* 0929	ऩ	e0 a4 a9	DEVANAGARI LETTER NNNA */
    {               0,           0 }, /* 092A	प	e0 a4 aa	DEVANAGARI LETTER PA */
    {               0,           0 }, /* 092B	फ	e0 a4 ab	DEVANAGARI LETTER PHA */
    {               0,           0 }, /* 092C	ब	e0 a4 ac	DEVANAGARI LETTER BA */
    {               0,           0 }, /* 092D	भ	e0 a4 ad	DEVANAGARI LETTER BHA */
    {               0,           0 }, /* 092E	म	e0 a4 ae	DEVANAGARI LETTER MA */
    {               0,           0 }, /* 092F	य	e0 a4 af	DEVANAGARI LETTER YA */
    {               0,           0 }, /* 0930	र	e0 a4 b0	DEVANAGARI LETTER RA */
    {               0,           0 }, /* 0931	ऱ	e0 a4 b1	DEVANAGARI LETTER RRA */
    {               0,           0 }, /* 0932	ल	e0 a4 b2	DEVANAGARI LETTER LA */
    {               0,           0 }, /* 0933	ळ	e0 a4 b3	DEVANAGARI LETTER LLA */
    {               0,           0 }, /* 0934	ऴ	e0 a4 b4	DEVANAGARI LETTER LLLA */
    {               0,           0 }, /* 0935	व	e0 a4 b5	DEVANAGARI LETTER VA */
    {               0,           0 }, /* 0936	श	e0 a4 b6	DEVANAGARI LETTER SHA */
    {               0,           0 }, /* 0937	ष	e0 a4 b7	DEVANAGARI LETTER SSA */
    {               0,           0 }, /* 0938	स	e0 a4 b8	DEVANAGARI LETTER SA */
    {               0,           0 }, /* 0939	ह	e0 a4 b9	DEVANAGARI LETTER HA */
    {               0,           0 }, /* 093A	ऺ	e0 a4 ba	 */
    {               0,           0 }, /* 093B	ऻ	e0 a4 bb	 */
    {               0,           0 }, /* 093C	़	e0 a4 bc	DEVANAGARI SIGN NUKTA */
    {               0,           0 }, /* 093D	ऽ	e0 a4 bd	DEVANAGARI SIGN AVAGRAHA */
    {               0,           0 }, /* 093E	ा	e0 a4 be	DEVANAGARI VOWEL SIGN AA */
    {               0,           0 }, /* 093F	ि	e0 a4 bf	DEVANAGARI VOWEL SIGN I */
    {               0,           0 }, /* 0940	ी	e0 a5 80	DEVANAGARI VOWEL SIGN II */
    {               0,           0 }, /* 0941	ु	e0 a5 81	DEVANAGARI VOWEL SIGN U */
    {               0,           0 }, /* 0942	ू	e0 a5 82	DEVANAGARI VOWEL SIGN UU */
    {               0,           0 }, /* 0943	ृ	e0 a5 83	DEVANAGARI VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0944	ॄ	e0 a5 84	DEVANAGARI VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0945	ॅ	e0 a5 85	DEVANAGARI VOWEL SIGN CANDRA E */
    {               0,           0 }, /* 0946	ॆ	e0 a5 86	DEVANAGARI VOWEL SIGN SHORT E */
    {               0,           0 }, /* 0947	े	e0 a5 87	DEVANAGARI VOWEL SIGN E */
    {               0,           0 }, /* 0948	ै	e0 a5 88	DEVANAGARI VOWEL SIGN AI */
    {               0,           0 }, /* 0949	ॉ	e0 a5 89	DEVANAGARI VOWEL SIGN CANDRA O */
    {               0,           0 }, /* 094A	ॊ	e0 a5 8a	DEVANAGARI VOWEL SIGN SHORT O */
    {               0,           0 }, /* 094B	ो	e0 a5 8b	DEVANAGARI VOWEL SIGN O */
    {               0,           0 }, /* 094C	ौ	e0 a5 8c	DEVANAGARI VOWEL SIGN AU */
    {               0,           0 }, /* 094D	्	e0 a5 8d	DEVANAGARI SIGN VIRAMA */
    {               0,           0 }, /* 094E	ॎ	e0 a5 8e	DEVANAGARI VOWEL SIGN PRISHTHAMATRA E */
    {               0,           0 }, /* 094F	ॏ	e0 a5 8f	 */
    {               0,           0 }, /* 0950	ॐ	e0 a5 90	DEVANAGARI OM */
    {               0,           0 }, /* 0951	॑	e0 a5 91	DEVANAGARI STRESS SIGN UDATTA */
    {               0,           0 }, /* 0952	॒	e0 a5 92	DEVANAGARI STRESS SIGN ANUDATTA */
    {               0,           0 }, /* 0953	॓	e0 a5 93	DEVANAGARI GRAVE ACCENT */
    {               0,           0 }, /* 0954	॔	e0 a5 94	DEVANAGARI ACUTE ACCENT */
    {               0,           0 }, /* 0955	ॕ	e0 a5 95	DEVANAGARI VOWEL SIGN CANDRA LONG E */
    {               0,           0 }, /* 0956	ॖ	e0 a5 96	 */
    {               0,           0 }, /* 0957	ॗ	e0 a5 97	 */
    {               0,           0 }, /* 0958	क़	e0 a5 98	DEVANAGARI LETTER QA */
    {               0,           0 }, /* 0959	ख़	e0 a5 99	DEVANAGARI LETTER KHHA */
    {               0,           0 }, /* 095A	ग़	e0 a5 9a	DEVANAGARI LETTER GHHA */
    {               0,           0 }, /* 095B	ज़	e0 a5 9b	DEVANAGARI LETTER ZA */
    {               0,           0 }, /* 095C	ड़	e0 a5 9c	DEVANAGARI LETTER DDDHA */
    {               0,           0 }, /* 095D	ढ़	e0 a5 9d	DEVANAGARI LETTER RHA */
    {               0,           0 }, /* 095E	फ़	e0 a5 9e	DEVANAGARI LETTER FA */
    {               0,           0 }, /* 095F	य़	e0 a5 9f	DEVANAGARI LETTER YYA */
    {               0,           0 }, /* 0960	ॠ	e0 a5 a0	DEVANAGARI LETTER VOCALIC RR */
    {               0,           0 }, /* 0961	ॡ	e0 a5 a1	DEVANAGARI LETTER VOCALIC LL */
    {               0,           0 }, /* 0962	ॢ	e0 a5 a2	DEVANAGARI VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0963	ॣ	e0 a5 a3	DEVANAGARI VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0964	।	e0 a5 a4	DEVANAGARI DANDA */
    {               0,           0 }, /* 0965	॥	e0 a5 a5	DEVANAGARI DOUBLE DANDA */
    {               0,           0 }, /* 0966	०	e0 a5 a6	DEVANAGARI DIGIT ZERO */
    {               0,           0 }, /* 0967	१	e0 a5 a7	DEVANAGARI DIGIT ONE */
    {               0,           0 }, /* 0968	२	e0 a5 a8	DEVANAGARI DIGIT TWO */
    {               0,           0 }, /* 0969	३	e0 a5 a9	DEVANAGARI DIGIT THREE */
    {               0,           0 }, /* 096A	४	e0 a5 aa	DEVANAGARI DIGIT FOUR */
    {               0,           0 }, /* 096B	५	e0 a5 ab	DEVANAGARI DIGIT FIVE */
    {               0,           0 }, /* 096C	६	e0 a5 ac	DEVANAGARI DIGIT SIX */
    {               0,           0 }, /* 096D	७	e0 a5 ad	DEVANAGARI DIGIT SEVEN */
    {               0,           0 }, /* 096E	८	e0 a5 ae	DEVANAGARI DIGIT EIGHT */
    {               0,           0 }, /* 096F	९	e0 a5 af	DEVANAGARI DIGIT NINE */
    {               0,           0 }, /* 0970	॰	e0 a5 b0	DEVANAGARI ABBREVIATION SIGN */
    {               0,           0 }, /* 0971	ॱ	e0 a5 b1	DEVANAGARI SIGN HIGH SPACING DOT */
    {               0,           0 }, /* 0972	ॲ	e0 a5 b2	DEVANAGARI LETTER CANDRA A */
    {               0,           0 }, /* 0973	ॳ	e0 a5 b3	 */
    {               0,           0 }, /* 0974	ॴ	e0 a5 b4	 */
    {               0,           0 }, /* 0975	ॵ	e0 a5 b5	 */
    {               0,           0 }, /* 0976	ॶ	e0 a5 b6	 */
    {               0,           0 }, /* 0977	ॷ	e0 a5 b7	 */
    {               0,           0 }, /* 0978	ॸ	e0 a5 b8	 */
    {               0,           0 }, /* 0979	ॹ	e0 a5 b9	DEVANAGARI LETTER ZHA */
    {               0,           0 }, /* 097A	ॺ	e0 a5 ba	DEVANAGARI LETTER HEAVY YA */
    {               0,           0 }, /* 097B	ॻ	e0 a5 bb	DEVANAGARI LETTER GGA */
    {               0,           0 }, /* 097C	ॼ	e0 a5 bc	DEVANAGARI LETTER JJA */
    {               0,           0 }, /* 097D	ॽ	e0 a5 bd	DEVANAGARI LETTER GLOTTAL STOP */
    {               0,           0 }, /* 097E	ॾ	e0 a5 be	DEVANAGARI LETTER DDDA */
    {               0,           0 }, /* 097F	ॿ	e0 a5 bf	DEVANAGARI LETTER BBA */
    {               0,           0 }, /* 0980	ঀ	e0 a6 80	 */
    {               0,           0 }, /* 0981	ঁ	e0 a6 81	BENGALI SIGN CANDRABINDU */
    {               0,           0 }, /* 0982	ং	e0 a6 82	BENGALI SIGN ANUSVARA */
    {               0,           0 }, /* 0983	ঃ	e0 a6 83	BENGALI SIGN VISARGA */
    {               0,           0 }, /* 0984	঄	e0 a6 84	 */
    {               0,           0 }, /* 0985	অ	e0 a6 85	BENGALI LETTER A */
    {               0,           0 }, /* 0986	আ	e0 a6 86	BENGALI LETTER AA */
    {               0,           0 }, /* 0987	ই	e0 a6 87	BENGALI LETTER I */
    {               0,           0 }, /* 0988	ঈ	e0 a6 88	BENGALI LETTER II */
    {               0,           0 }, /* 0989	উ	e0 a6 89	BENGALI LETTER U */
    {               0,           0 }, /* 098A	ঊ	e0 a6 8a	BENGALI LETTER UU */
    {               0,           0 }, /* 098B	ঋ	e0 a6 8b	BENGALI LETTER VOCALIC R */
    {               0,           0 }, /* 098C	ঌ	e0 a6 8c	BENGALI LETTER VOCALIC L */
    {               0,           0 }, /* 098D	঍	e0 a6 8d	 */
    {               0,           0 }, /* 098E	঎	e0 a6 8e	 */
    {               0,           0 }, /* 098F	এ	e0 a6 8f	BENGALI LETTER E */
    {               0,           0 }, /* 0990	ঐ	e0 a6 90	BENGALI LETTER AI */
    {               0,           0 }, /* 0991	঑	e0 a6 91	 */
    {               0,           0 }, /* 0992	঒	e0 a6 92	 */
    {               0,           0 }, /* 0993	ও	e0 a6 93	BENGALI LETTER O */
    {               0,           0 }, /* 0994	ঔ	e0 a6 94	BENGALI LETTER AU */
    {               0,           0 }, /* 0995	ক	e0 a6 95	BENGALI LETTER KA */
    {               0,           0 }, /* 0996	খ	e0 a6 96	BENGALI LETTER KHA */
    {               0,           0 }, /* 0997	গ	e0 a6 97	BENGALI LETTER GA */
    {               0,           0 }, /* 0998	ঘ	e0 a6 98	BENGALI LETTER GHA */
    {               0,           0 }, /* 0999	ঙ	e0 a6 99	BENGALI LETTER NGA */
    {               0,           0 }, /* 099A	চ	e0 a6 9a	BENGALI LETTER CA */
    {               0,           0 }, /* 099B	ছ	e0 a6 9b	BENGALI LETTER CHA */
    {               0,           0 }, /* 099C	জ	e0 a6 9c	BENGALI LETTER JA */
    {               0,           0 }, /* 099D	ঝ	e0 a6 9d	BENGALI LETTER JHA */
    {               0,           0 }, /* 099E	ঞ	e0 a6 9e	BENGALI LETTER NYA */
    {               0,           0 }, /* 099F	ট	e0 a6 9f	BENGALI LETTER TTA */
    {               0,           0 }, /* 09A0	ঠ	e0 a6 a0	BENGALI LETTER TTHA */
    {               0,           0 }, /* 09A1	ড	e0 a6 a1	BENGALI LETTER DDA */
    {               0,           0 }, /* 09A2	ঢ	e0 a6 a2	BENGALI LETTER DDHA */
    {               0,           0 }, /* 09A3	ণ	e0 a6 a3	BENGALI LETTER NNA */
    {               0,           0 }, /* 09A4	ত	e0 a6 a4	BENGALI LETTER TA */
    {               0,           0 }, /* 09A5	থ	e0 a6 a5	BENGALI LETTER THA */
    {               0,           0 }, /* 09A6	দ	e0 a6 a6	BENGALI LETTER DA */
    {               0,           0 }, /* 09A7	ধ	e0 a6 a7	BENGALI LETTER DHA */
    {               0,           0 }, /* 09A8	ন	e0 a6 a8	BENGALI LETTER NA */
    {               0,           0 }, /* 09A9	঩	e0 a6 a9	 */
    {               0,           0 }, /* 09AA	প	e0 a6 aa	BENGALI LETTER PA */
    {               0,           0 }, /* 09AB	ফ	e0 a6 ab	BENGALI LETTER PHA */
    {               0,           0 }, /* 09AC	ব	e0 a6 ac	BENGALI LETTER BA */
    {               0,           0 }, /* 09AD	ভ	e0 a6 ad	BENGALI LETTER BHA */
    {               0,           0 }, /* 09AE	ম	e0 a6 ae	BENGALI LETTER MA */
    {               0,           0 }, /* 09AF	য	e0 a6 af	BENGALI LETTER YA */
    {               0,           0 }, /* 09B0	র	e0 a6 b0	BENGALI LETTER RA */
    {               0,           0 }, /* 09B1	঱	e0 a6 b1	 */
    {               0,           0 }, /* 09B2	ল	e0 a6 b2	BENGALI LETTER LA */
    {               0,           0 }, /* 09B3	঳	e0 a6 b3	 */
    {               0,           0 }, /* 09B4	঴	e0 a6 b4	 */
    {               0,           0 }, /* 09B5	঵	e0 a6 b5	 */
    {               0,           0 }, /* 09B6	শ	e0 a6 b6	BENGALI LETTER SHA */
    {               0,           0 }, /* 09B7	ষ	e0 a6 b7	BENGALI LETTER SSA */
    {               0,           0 }, /* 09B8	স	e0 a6 b8	BENGALI LETTER SA */
    {               0,           0 }, /* 09B9	হ	e0 a6 b9	BENGALI LETTER HA */
    {               0,           0 }, /* 09BA	঺	e0 a6 ba	 */
    {               0,           0 }, /* 09BB	঻	e0 a6 bb	 */
    {               0,           0 }, /* 09BC	়	e0 a6 bc	BENGALI SIGN NUKTA */
    {               0,           0 }, /* 09BD	ঽ	e0 a6 bd	BENGALI SIGN AVAGRAHA */
    {               0,           0 }, /* 09BE	া	e0 a6 be	BENGALI VOWEL SIGN AA */
    {               0,           0 }, /* 09BF	ি	e0 a6 bf	BENGALI VOWEL SIGN I */
    {               0,           0 }, /* 09C0	ী	e0 a7 80	BENGALI VOWEL SIGN II */
    {               0,           0 }, /* 09C1	ু	e0 a7 81	BENGALI VOWEL SIGN U */
    {               0,           0 }, /* 09C2	ূ	e0 a7 82	BENGALI VOWEL SIGN UU */
    {               0,           0 }, /* 09C3	ৃ	e0 a7 83	BENGALI VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 09C4	ৄ	e0 a7 84	BENGALI VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 09C5	৅	e0 a7 85	 */
    {               0,           0 }, /* 09C6	৆	e0 a7 86	 */
    {               0,           0 }, /* 09C7	ে	e0 a7 87	BENGALI VOWEL SIGN E */
    {               0,           0 }, /* 09C8	ৈ	e0 a7 88	BENGALI VOWEL SIGN AI */
    {               0,           0 }, /* 09C9	৉	e0 a7 89	 */
    {               0,           0 }, /* 09CA	৊	e0 a7 8a	 */
    {               0,           0 }, /* 09CB	ো	e0 a7 8b	BENGALI VOWEL SIGN O */
    {               0,           0 }, /* 09CC	ৌ	e0 a7 8c	BENGALI VOWEL SIGN AU */
    {               0,           0 }, /* 09CD	্	e0 a7 8d	BENGALI SIGN VIRAMA */
    {               0,           0 }, /* 09CE	ৎ	e0 a7 8e	BENGALI LETTER KHANDA TA */
    {               0,           0 }, /* 09CF	৏	e0 a7 8f	 */
    {               0,           0 }, /* 09D0	৐	e0 a7 90	 */
    {               0,           0 }, /* 09D1	৑	e0 a7 91	 */
    {               0,           0 }, /* 09D2	৒	e0 a7 92	 */
    {               0,           0 }, /* 09D3	৓	e0 a7 93	 */
    {               0,           0 }, /* 09D4	৔	e0 a7 94	 */
    {               0,           0 }, /* 09D5	৕	e0 a7 95	 */
    {               0,           0 }, /* 09D6	৖	e0 a7 96	 */
    {               0,           0 }, /* 09D7	ৗ	e0 a7 97	BENGALI AU LENGTH MARK */
    {               0,           0 }, /* 09D8	৘	e0 a7 98	 */
    {               0,           0 }, /* 09D9	৙	e0 a7 99	 */
    {               0,           0 }, /* 09DA	৚	e0 a7 9a	 */
    {               0,           0 }, /* 09DB	৛	e0 a7 9b	 */
    {               0,           0 }, /* 09DC	ড়	e0 a7 9c	BENGALI LETTER RRA */
    {               0,           0 }, /* 09DD	ঢ়	e0 a7 9d	BENGALI LETTER RHA */
    {               0,           0 }, /* 09DE	৞	e0 a7 9e	 */
    {               0,           0 }, /* 09DF	য়	e0 a7 9f	BENGALI LETTER YYA */
    {               0,           0 }, /* 09E0	ৠ	e0 a7 a0	BENGALI LETTER VOCALIC RR */
    {               0,           0 }, /* 09E1	ৡ	e0 a7 a1	BENGALI LETTER VOCALIC LL */
    {               0,           0 }, /* 09E2	ৢ	e0 a7 a2	BENGALI VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 09E3	ৣ	e0 a7 a3	BENGALI VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 09E4	৤	e0 a7 a4	 */
    {               0,           0 }, /* 09E5	৥	e0 a7 a5	 */
    {               0,           0 }, /* 09E6	০	e0 a7 a6	BENGALI DIGIT ZERO */
    {               0,           0 }, /* 09E7	১	e0 a7 a7	BENGALI DIGIT ONE */
    {               0,           0 }, /* 09E8	২	e0 a7 a8	BENGALI DIGIT TWO */
    {               0,           0 }, /* 09E9	৩	e0 a7 a9	BENGALI DIGIT THREE */
    {               0,           0 }, /* 09EA	৪	e0 a7 aa	BENGALI DIGIT FOUR */
    {               0,           0 }, /* 09EB	৫	e0 a7 ab	BENGALI DIGIT FIVE */
    {               0,           0 }, /* 09EC	৬	e0 a7 ac	BENGALI DIGIT SIX */
    {               0,           0 }, /* 09ED	৭	e0 a7 ad	BENGALI DIGIT SEVEN */
    {               0,           0 }, /* 09EE	৮	e0 a7 ae	BENGALI DIGIT EIGHT */
    {               0,           0 }, /* 09EF	৯	e0 a7 af	BENGALI DIGIT NINE */
    {               0,           0 }, /* 09F0	ৰ	e0 a7 b0	BENGALI LETTER RA WITH MIDDLE DIAGONAL */
    {               0,           0 }, /* 09F1	ৱ	e0 a7 b1	BENGALI LETTER RA WITH LOWER DIAGONAL */
    {               0,           0 }, /* 09F2	৲	e0 a7 b2	BENGALI RUPEE MARK */
    {               0,           0 }, /* 09F3	৳	e0 a7 b3	BENGALI RUPEE SIGN */
    {               0,           0 }, /* 09F4	৴	e0 a7 b4	BENGALI CURRENCY NUMERATOR ONE */
    {               0,           0 }, /* 09F5	৵	e0 a7 b5	BENGALI CURRENCY NUMERATOR TWO */
    {               0,           0 }, /* 09F6	৶	e0 a7 b6	BENGALI CURRENCY NUMERATOR THREE */
    {               0,           0 }, /* 09F7	৷	e0 a7 b7	BENGALI CURRENCY NUMERATOR FOUR */
    {               0,           0 }, /* 09F8	৸	e0 a7 b8	BENGALI CURRENCY NUMERATOR ONE LESS THAN THE DENOMINATOR */
    {               0,           0 }, /* 09F9	৹	e0 a7 b9	BENGALI CURRENCY DENOMINATOR SIXTEEN */
    {               0,           0 }, /* 09FA	৺	e0 a7 ba	BENGALI ISSHAR */
    {               0,           0 }, /* 09FB	৻	e0 a7 bb	BENGALI GANDA MARK */
    {               0,           0 }, /* 09FC	ৼ	e0 a7 bc	 */
    {               0,           0 }, /* 09FD	৽	e0 a7 bd	 */
    {               0,           0 }, /* 09FE	৾	e0 a7 be	 */
    {               0,           0 }, /* 09FF	৿	e0 a7 bf */
    {               0,           0 }, /* 0A00	਀	e0 a8 80	 */
    {               0,           0 }, /* 0A01	ਁ	e0 a8 81	GURMUKHI SIGN ADAK BINDI */
    {               0,           0 }, /* 0A02	ਂ	e0 a8 82	GURMUKHI SIGN BINDI */
    {               0,           0 }, /* 0A03	ਃ	e0 a8 83	GURMUKHI SIGN VISARGA */
    {               0,           0 }, /* 0A04	਄	e0 a8 84	 */
    {               0,           0 }, /* 0A05	ਅ	e0 a8 85	GURMUKHI LETTER A */
    {               0,           0 }, /* 0A06	ਆ	e0 a8 86	GURMUKHI LETTER AA */
    {               0,           0 }, /* 0A07	ਇ	e0 a8 87	GURMUKHI LETTER I */
    {               0,           0 }, /* 0A08	ਈ	e0 a8 88	GURMUKHI LETTER II */
    {               0,           0 }, /* 0A09	ਉ	e0 a8 89	GURMUKHI LETTER U */
    {               0,           0 }, /* 0A0A	ਊ	e0 a8 8a	GURMUKHI LETTER UU */
    {               0,           0 }, /* 0A0B	਋	e0 a8 8b	 */
    {               0,           0 }, /* 0A0C	਌	e0 a8 8c	 */
    {               0,           0 }, /* 0A0D	਍	e0 a8 8d	 */
    {               0,           0 }, /* 0A0E	਎	e0 a8 8e	 */
    {               0,           0 }, /* 0A0F	ਏ	e0 a8 8f	GURMUKHI LETTER EE */
    {               0,           0 }, /* 0A10	ਐ	e0 a8 90	GURMUKHI LETTER AI */
    {               0,           0 }, /* 0A11	਑	e0 a8 91	 */
    {               0,           0 }, /* 0A12	਒	e0 a8 92	 */
    {               0,           0 }, /* 0A13	ਓ	e0 a8 93	GURMUKHI LETTER OO */
    {               0,           0 }, /* 0A14	ਔ	e0 a8 94	GURMUKHI LETTER AU */
    {               0,           0 }, /* 0A15	ਕ	e0 a8 95	GURMUKHI LETTER KA */
    {               0,           0 }, /* 0A16	ਖ	e0 a8 96	GURMUKHI LETTER KHA */
    {               0,           0 }, /* 0A17	ਗ	e0 a8 97	GURMUKHI LETTER GA */
    {               0,           0 }, /* 0A18	ਘ	e0 a8 98	GURMUKHI LETTER GHA */
    {               0,           0 }, /* 0A19	ਙ	e0 a8 99	GURMUKHI LETTER NGA */
    {               0,           0 }, /* 0A1A	ਚ	e0 a8 9a	GURMUKHI LETTER CA */
    {               0,           0 }, /* 0A1B	ਛ	e0 a8 9b	GURMUKHI LETTER CHA */
    {               0,           0 }, /* 0A1C	ਜ	e0 a8 9c	GURMUKHI LETTER JA */
    {               0,           0 }, /* 0A1D	ਝ	e0 a8 9d	GURMUKHI LETTER JHA */
    {               0,           0 }, /* 0A1E	ਞ	e0 a8 9e	GURMUKHI LETTER NYA */
    {               0,           0 }, /* 0A1F	ਟ	e0 a8 9f	GURMUKHI LETTER TTA */
    {               0,           0 }, /* 0A20	ਠ	e0 a8 a0	GURMUKHI LETTER TTHA */
    {               0,           0 }, /* 0A21	ਡ	e0 a8 a1	GURMUKHI LETTER DDA */
    {               0,           0 }, /* 0A22	ਢ	e0 a8 a2	GURMUKHI LETTER DDHA */
    {               0,           0 }, /* 0A23	ਣ	e0 a8 a3	GURMUKHI LETTER NNA */
    {               0,           0 }, /* 0A24	ਤ	e0 a8 a4	GURMUKHI LETTER TA */
    {               0,           0 }, /* 0A25	ਥ	e0 a8 a5	GURMUKHI LETTER THA */
    {               0,           0 }, /* 0A26	ਦ	e0 a8 a6	GURMUKHI LETTER DA */
    {               0,           0 }, /* 0A27	ਧ	e0 a8 a7	GURMUKHI LETTER DHA */
    {               0,           0 }, /* 0A28	ਨ	e0 a8 a8	GURMUKHI LETTER NA */
    {               0,           0 }, /* 0A29	਩	e0 a8 a9	 */
    {               0,           0 }, /* 0A2A	ਪ	e0 a8 aa	GURMUKHI LETTER PA */
    {               0,           0 }, /* 0A2B	ਫ	e0 a8 ab	GURMUKHI LETTER PHA */
    {               0,           0 }, /* 0A2C	ਬ	e0 a8 ac	GURMUKHI LETTER BA */
    {               0,           0 }, /* 0A2D	ਭ	e0 a8 ad	GURMUKHI LETTER BHA */
    {               0,           0 }, /* 0A2E	ਮ	e0 a8 ae	GURMUKHI LETTER MA */
    {               0,           0 }, /* 0A2F	ਯ	e0 a8 af	GURMUKHI LETTER YA */
    {               0,           0 }, /* 0A30	ਰ	e0 a8 b0	GURMUKHI LETTER RA */
    {               0,           0 }, /* 0A31	਱	e0 a8 b1	 */
    {               0,           0 }, /* 0A32	ਲ	e0 a8 b2	GURMUKHI LETTER LA */
    {               0,           0 }, /* 0A33	ਲ਼	e0 a8 b3	GURMUKHI LETTER LLA */
    {               0,           0 }, /* 0A34	਴	e0 a8 b4	 */
    {               0,           0 }, /* 0A35	ਵ	e0 a8 b5	GURMUKHI LETTER VA */
    {               0,           0 }, /* 0A36	ਸ਼	e0 a8 b6	GURMUKHI LETTER SHA */
    {               0,           0 }, /* 0A37	਷	e0 a8 b7	 */
    {               0,           0 }, /* 0A38	ਸ	e0 a8 b8	GURMUKHI LETTER SA */
    {               0,           0 }, /* 0A39	ਹ	e0 a8 b9	GURMUKHI LETTER HA */
    {               0,           0 }, /* 0A3A	਺	e0 a8 ba	 */
    {               0,           0 }, /* 0A3B	਻	e0 a8 bb	 */
    {               0,           0 }, /* 0A3C	਼	e0 a8 bc	GURMUKHI SIGN NUKTA */
    {               0,           0 }, /* 0A3D	਽	e0 a8 bd	 */
    {               0,           0 }, /* 0A3E	ਾ	e0 a8 be	GURMUKHI VOWEL SIGN AA */
    {               0,           0 }, /* 0A3F	ਿ	e0 a8 bf	GURMUKHI VOWEL SIGN I */
    {               0,           0 }, /* 0A40	ੀ	e0 a9 80	GURMUKHI VOWEL SIGN II */
    {               0,           0 }, /* 0A41	ੁ	e0 a9 81	GURMUKHI VOWEL SIGN U */
    {               0,           0 }, /* 0A42	ੂ	e0 a9 82	GURMUKHI VOWEL SIGN UU */
    {               0,           0 }, /* 0A43	੃	e0 a9 83	 */
    {               0,           0 }, /* 0A44	੄	e0 a9 84	 */
    {               0,           0 }, /* 0A45	੅	e0 a9 85	 */
    {               0,           0 }, /* 0A46	੆	e0 a9 86	 */
    {               0,           0 }, /* 0A47	ੇ	e0 a9 87	GURMUKHI VOWEL SIGN EE */
    {               0,           0 }, /* 0A48	ੈ	e0 a9 88	GURMUKHI VOWEL SIGN AI */
    {               0,           0 }, /* 0A49	੉	e0 a9 89	 */
    {               0,           0 }, /* 0A4A	੊	e0 a9 8a	 */
    {               0,           0 }, /* 0A4B	ੋ	e0 a9 8b	GURMUKHI VOWEL SIGN OO */
    {               0,           0 }, /* 0A4C	ੌ	e0 a9 8c	GURMUKHI VOWEL SIGN AU */
    {               0,           0 }, /* 0A4D	੍	e0 a9 8d	GURMUKHI SIGN VIRAMA */
    {               0,           0 }, /* 0A4E	੎	e0 a9 8e	 */
    {               0,           0 }, /* 0A4F	੏	e0 a9 8f	 */
    {               0,           0 }, /* 0A50	੐	e0 a9 90	 */
    {               0,           0 }, /* 0A51	ੑ	e0 a9 91	GURMUKHI SIGN UDAAT */
    {               0,           0 }, /* 0A52	੒	e0 a9 92	 */
    {               0,           0 }, /* 0A53	੓	e0 a9 93	 */
    {               0,           0 }, /* 0A54	੔	e0 a9 94	 */
    {               0,           0 }, /* 0A55	੕	e0 a9 95	 */
    {               0,           0 }, /* 0A56	੖	e0 a9 96	 */
    {               0,           0 }, /* 0A57	੗	e0 a9 97	 */
    {               0,           0 }, /* 0A58	੘	e0 a9 98	 */
    {               0,           0 }, /* 0A59	ਖ਼	e0 a9 99	GURMUKHI LETTER KHHA */
    {               0,           0 }, /* 0A5A	ਗ਼	e0 a9 9a	GURMUKHI LETTER GHHA */
    {               0,           0 }, /* 0A5B	ਜ਼	e0 a9 9b	GURMUKHI LETTER ZA */
    {               0,           0 }, /* 0A5C	ੜ	e0 a9 9c	GURMUKHI LETTER RRA */
    {               0,           0 }, /* 0A5D	੝	e0 a9 9d	 */
    {               0,           0 }, /* 0A5E	ਫ਼	e0 a9 9e	GURMUKHI LETTER FA */
    {               0,           0 }, /* 0A5F	੟	e0 a9 9f	 */
    {               0,           0 }, /* 0A60	੠	e0 a9 a0	 */
    {               0,           0 }, /* 0A61	੡	e0 a9 a1	 */
    {               0,           0 }, /* 0A62	੢	e0 a9 a2	 */
    {               0,           0 }, /* 0A63	੣	e0 a9 a3	 */
    {               0,           0 }, /* 0A64	੤	e0 a9 a4	 */
    {               0,           0 }, /* 0A65	੥	e0 a9 a5	 */
    {               0,           0 }, /* 0A66	੦	e0 a9 a6	GURMUKHI DIGIT ZERO */
    {               0,           0 }, /* 0A67	੧	e0 a9 a7	GURMUKHI DIGIT ONE */
    {               0,           0 }, /* 0A68	੨	e0 a9 a8	GURMUKHI DIGIT TWO */
    {               0,           0 }, /* 0A69	੩	e0 a9 a9	GURMUKHI DIGIT THREE */
    {               0,           0 }, /* 0A6A	੪	e0 a9 aa	GURMUKHI DIGIT FOUR */
    {               0,           0 }, /* 0A6B	੫	e0 a9 ab	GURMUKHI DIGIT FIVE */
    {               0,           0 }, /* 0A6C	੬	e0 a9 ac	GURMUKHI DIGIT SIX */
    {               0,           0 }, /* 0A6D	੭	e0 a9 ad	GURMUKHI DIGIT SEVEN */
    {               0,           0 }, /* 0A6E	੮	e0 a9 ae	GURMUKHI DIGIT EIGHT */
    {               0,           0 }, /* 0A6F	੯	e0 a9 af	GURMUKHI DIGIT NINE */
    {               0,           0 }, /* 0A70	ੰ	e0 a9 b0	GURMUKHI TIPPI */
    {               0,           0 }, /* 0A71	ੱ	e0 a9 b1	GURMUKHI ADDAK */
    {               0,           0 }, /* 0A72	ੲ	e0 a9 b2	GURMUKHI IRI */
    {               0,           0 }, /* 0A73	ੳ	e0 a9 b3	GURMUKHI URA */
    {               0,           0 }, /* 0A74	ੴ	e0 a9 b4	GURMUKHI EK ONKAR */
    {               0,           0 }, /* 0A75	ੵ	e0 a9 b5	GURMUKHI SIGN YAKASH */
    {               0,           0 }, /* 0A76	੶	e0 a9 b6	 */
    {               0,           0 }, /* 0A77	੷	e0 a9 b7	 */
    {               0,           0 }, /* 0A78	੸	e0 a9 b8	 */
    {               0,           0 }, /* 0A79	੹	e0 a9 b9	 */
    {               0,           0 }, /* 0A7A	੺	e0 a9 ba	 */
    {               0,           0 }, /* 0A7B	੻	e0 a9 bb	 */
    {               0,           0 }, /* 0A7C	੼	e0 a9 bc	 */
    {               0,           0 }, /* 0A7D	੽	e0 a9 bd	 */
    {               0,           0 }, /* 0A7E	੾	e0 a9 be	 */
    {               0,           0 }, /* 0A7F	੿	e0 a9 bf	 */
    {               0,           0 }, /* 0A80	઀	e0 aa 80	 */
    {               0,           0 }, /* 0A81	ઁ	e0 aa 81	GUJARATI SIGN CANDRABINDU */
    {               0,           0 }, /* 0A82	ં	e0 aa 82	GUJARATI SIGN ANUSVARA */
    {               0,           0 }, /* 0A83	ઃ	e0 aa 83	GUJARATI SIGN VISARGA */
    {               0,           0 }, /* 0A84	઄	e0 aa 84	 */
    {               0,           0 }, /* 0A85	અ	e0 aa 85	GUJARATI LETTER A */
    {               0,           0 }, /* 0A86	આ	e0 aa 86	GUJARATI LETTER AA */
    {               0,           0 }, /* 0A87	ઇ	e0 aa 87	GUJARATI LETTER I */
    {               0,           0 }, /* 0A88	ઈ	e0 aa 88	GUJARATI LETTER II */
    {               0,           0 }, /* 0A89	ઉ	e0 aa 89	GUJARATI LETTER U */
    {               0,           0 }, /* 0A8A	ઊ	e0 aa 8a	GUJARATI LETTER UU */
    {               0,           0 }, /* 0A8B	ઋ	e0 aa 8b	GUJARATI LETTER VOCALIC R */
    {               0,           0 }, /* 0A8C	ઌ	e0 aa 8c	GUJARATI LETTER VOCALIC L */
    {               0,           0 }, /* 0A8D	ઍ	e0 aa 8d	GUJARATI VOWEL CANDRA E */
    {               0,           0 }, /* 0A8E	઎	e0 aa 8e	 */
    {               0,           0 }, /* 0A8F	એ	e0 aa 8f	GUJARATI LETTER E */
    {               0,           0 }, /* 0A90	ઐ	e0 aa 90	GUJARATI LETTER AI */
    {               0,           0 }, /* 0A91	ઑ	e0 aa 91	GUJARATI VOWEL CANDRA O */
    {               0,           0 }, /* 0A92	઒	e0 aa 92	 */
    {               0,           0 }, /* 0A93	ઓ	e0 aa 93	GUJARATI LETTER O */
    {               0,           0 }, /* 0A94	ઔ	e0 aa 94	GUJARATI LETTER AU */
    {               0,           0 }, /* 0A95	ક	e0 aa 95	GUJARATI LETTER KA */
    {               0,           0 }, /* 0A96	ખ	e0 aa 96	GUJARATI LETTER KHA */
    {               0,           0 }, /* 0A97	ગ	e0 aa 97	GUJARATI LETTER GA */
    {               0,           0 }, /* 0A98	ઘ	e0 aa 98	GUJARATI LETTER GHA */
    {               0,           0 }, /* 0A99	ઙ	e0 aa 99	GUJARATI LETTER NGA */
    {               0,           0 }, /* 0A9A	ચ	e0 aa 9a	GUJARATI LETTER CA */
    {               0,           0 }, /* 0A9B	છ	e0 aa 9b	GUJARATI LETTER CHA */
    {               0,           0 }, /* 0A9C	જ	e0 aa 9c	GUJARATI LETTER JA */
    {               0,           0 }, /* 0A9D	ઝ	e0 aa 9d	GUJARATI LETTER JHA */
    {               0,           0 }, /* 0A9E	ઞ	e0 aa 9e	GUJARATI LETTER NYA */
    {               0,           0 }, /* 0A9F	ટ	e0 aa 9f	GUJARATI LETTER TTA */
    {               0,           0 }, /* 0AA0	ઠ	e0 aa a0	GUJARATI LETTER TTHA */
    {               0,           0 }, /* 0AA1	ડ	e0 aa a1	GUJARATI LETTER DDA */
    {               0,           0 }, /* 0AA2	ઢ	e0 aa a2	GUJARATI LETTER DDHA */
    {               0,           0 }, /* 0AA3	ણ	e0 aa a3	GUJARATI LETTER NNA */
    {               0,           0 }, /* 0AA4	ત	e0 aa a4	GUJARATI LETTER TA */
    {               0,           0 }, /* 0AA5	થ	e0 aa a5	GUJARATI LETTER THA */
    {               0,           0 }, /* 0AA6	દ	e0 aa a6	GUJARATI LETTER DA */
    {               0,           0 }, /* 0AA7	ધ	e0 aa a7	GUJARATI LETTER DHA */
    {               0,           0 }, /* 0AA8	ન	e0 aa a8	GUJARATI LETTER NA */
    {               0,           0 }, /* 0AA9	઩	e0 aa a9	 */
    {               0,           0 }, /* 0AAA	પ	e0 aa aa	GUJARATI LETTER PA */
    {               0,           0 }, /* 0AAB	ફ	e0 aa ab	GUJARATI LETTER PHA */
    {               0,           0 }, /* 0AAC	બ	e0 aa ac	GUJARATI LETTER BA */
    {               0,           0 }, /* 0AAD	ભ	e0 aa ad	GUJARATI LETTER BHA */
    {               0,           0 }, /* 0AAE	મ	e0 aa ae	GUJARATI LETTER MA */
    {               0,           0 }, /* 0AAF	ય	e0 aa af	GUJARATI LETTER YA */
    {               0,           0 }, /* 0AB0	ર	e0 aa b0	GUJARATI LETTER RA */
    {               0,           0 }, /* 0AB1	઱	e0 aa b1	 */
    {               0,           0 }, /* 0AB2	લ	e0 aa b2	GUJARATI LETTER LA */
    {               0,           0 }, /* 0AB3	ળ	e0 aa b3	GUJARATI LETTER LLA */
    {               0,           0 }, /* 0AB4	઴	e0 aa b4	 */
    {               0,           0 }, /* 0AB5	વ	e0 aa b5	GUJARATI LETTER VA */
    {               0,           0 }, /* 0AB6	શ	e0 aa b6	GUJARATI LETTER SHA */
    {               0,           0 }, /* 0AB7	ષ	e0 aa b7	GUJARATI LETTER SSA */
    {               0,           0 }, /* 0AB8	સ	e0 aa b8	GUJARATI LETTER SA */
    {               0,           0 }, /* 0AB9	હ	e0 aa b9	GUJARATI LETTER HA */
    {               0,           0 }, /* 0ABA	઺	e0 aa ba	 */
    {               0,           0 }, /* 0ABB	઻	e0 aa bb	 */
    {               0,           0 }, /* 0ABC	઼	e0 aa bc	GUJARATI SIGN NUKTA */
    {               0,           0 }, /* 0ABD	ઽ	e0 aa bd	GUJARATI SIGN AVAGRAHA */
    {               0,           0 }, /* 0ABE	ા	e0 aa be	GUJARATI VOWEL SIGN AA */
    {               0,           0 }, /* 0ABF	િ	e0 aa bf	GUJARATI VOWEL SIGN I */
    {               0,           0 }, /* 0AC0	ી	e0 ab 80	GUJARATI VOWEL SIGN II */
    {               0,           0 }, /* 0AC1	ુ	e0 ab 81	GUJARATI VOWEL SIGN U */
    {               0,           0 }, /* 0AC2	ૂ	e0 ab 82	GUJARATI VOWEL SIGN UU */
    {               0,           0 }, /* 0AC3	ૃ	e0 ab 83	GUJARATI VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0AC4	ૄ	e0 ab 84	GUJARATI VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0AC5	ૅ	e0 ab 85	GUJARATI VOWEL SIGN CANDRA E */
    {               0,           0 }, /* 0AC6	૆	e0 ab 86	 */
    {               0,           0 }, /* 0AC7	ે	e0 ab 87	GUJARATI VOWEL SIGN E */
    {               0,           0 }, /* 0AC8	ૈ	e0 ab 88	GUJARATI VOWEL SIGN AI */
    {               0,           0 }, /* 0AC9	ૉ	e0 ab 89	GUJARATI VOWEL SIGN CANDRA O */
    {               0,           0 }, /* 0ACA	૊	e0 ab 8a	 */
    {               0,           0 }, /* 0ACB	ો	e0 ab 8b	GUJARATI VOWEL SIGN O */
    {               0,           0 }, /* 0ACC	ૌ	e0 ab 8c	GUJARATI VOWEL SIGN AU */
    {               0,           0 }, /* 0ACD	્	e0 ab 8d	GUJARATI SIGN VIRAMA */
    {               0,           0 }, /* 0ACE	૎	e0 ab 8e	 */
    {               0,           0 }, /* 0ACF	૏	e0 ab 8f	 */
    {               0,           0 }, /* 0AD0	ૐ	e0 ab 90	GUJARATI OM */
    {               0,           0 }, /* 0AD1	૑	e0 ab 91	 */
    {               0,           0 }, /* 0AD2	૒	e0 ab 92	 */
    {               0,           0 }, /* 0AD3	૓	e0 ab 93	 */
    {               0,           0 }, /* 0AD4	૔	e0 ab 94	 */
    {               0,           0 }, /* 0AD5	૕	e0 ab 95	 */
    {               0,           0 }, /* 0AD6	૖	e0 ab 96	 */
    {               0,           0 }, /* 0AD7	૗	e0 ab 97	 */
    {               0,           0 }, /* 0AD8	૘	e0 ab 98	 */
    {               0,           0 }, /* 0AD9	૙	e0 ab 99	 */
    {               0,           0 }, /* 0ADA	૚	e0 ab 9a	 */
    {               0,           0 }, /* 0ADB	૛	e0 ab 9b	 */
    {               0,           0 }, /* 0ADC	૜	e0 ab 9c	 */
    {               0,           0 }, /* 0ADD	૝	e0 ab 9d	 */
    {               0,           0 }, /* 0ADE	૞	e0 ab 9e	 */
    {               0,           0 }, /* 0ADF	૟	e0 ab 9f	 */
    {               0,           0 }, /* 0AE0	ૠ	e0 ab a0	GUJARATI LETTER VOCALIC RR */
    {               0,           0 }, /* 0AE1	ૡ	e0 ab a1	GUJARATI LETTER VOCALIC LL */
    {               0,           0 }, /* 0AE2	ૢ	e0 ab a2	GUJARATI VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0AE3	ૣ	e0 ab a3	GUJARATI VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0AE4	૤	e0 ab a4	 */
    {               0,           0 }, /* 0AE5	૥	e0 ab a5	 */
    {               0,           0 }, /* 0AE6	૦	e0 ab a6	GUJARATI DIGIT ZERO */
    {               0,           0 }, /* 0AE7	૧	e0 ab a7	GUJARATI DIGIT ONE */
    {               0,           0 }, /* 0AE8	૨	e0 ab a8	GUJARATI DIGIT TWO */
    {               0,           0 }, /* 0AE9	૩	e0 ab a9	GUJARATI DIGIT THREE */
    {               0,           0 }, /* 0AEA	૪	e0 ab aa	GUJARATI DIGIT FOUR */
    {               0,           0 }, /* 0AEB	૫	e0 ab ab	GUJARATI DIGIT FIVE */
    {               0,           0 }, /* 0AEC	૬	e0 ab ac	GUJARATI DIGIT SIX */
    {               0,           0 }, /* 0AED	૭	e0 ab ad	GUJARATI DIGIT SEVEN */
    {               0,           0 }, /* 0AEE	૮	e0 ab ae	GUJARATI DIGIT EIGHT */
    {               0,           0 }, /* 0AEF	૯	e0 ab af	GUJARATI DIGIT NINE */
    {               0,           0 }, /* 0AF0	૰	e0 ab b0	 */
    {               0,           0 }, /* 0AF1	૱	e0 ab b1	GUJARATI RUPEE SIGN */
    {               0,           0 }, /* 0AF2	૲	e0 ab b2	 */
    {               0,           0 }, /* 0AF3	૳	e0 ab b3	 */
    {               0,           0 }, /* 0AF4	૴	e0 ab b4	 */
    {               0,           0 }, /* 0AF5	૵	e0 ab b5	 */
    {               0,           0 }, /* 0AF6	૶	e0 ab b6	 */
    {               0,           0 }, /* 0AF7	૷	e0 ab b7	 */
    {               0,           0 }, /* 0AF8	૸	e0 ab b8	 */
    {               0,           0 }, /* 0AF9	ૹ	e0 ab b9	 */
    {               0,           0 }, /* 0AFA	ૺ	e0 ab ba	 */
    {               0,           0 }, /* 0AFB	ૻ	e0 ab bb	 */
    {               0,           0 }, /* 0AFC	ૼ	e0 ab bc	 */
    {               0,           0 }, /* 0AFD	૽	e0 ab bd	 */
    {               0,           0 }, /* 0AFE	૾	e0 ab be	 */
    {               0,           0 }, /* 0AFF	૿	e0 ab bf */
    {               0,           0 }, /* 0B00	଀	e0 ac 80	 */
    {               0,           0 }, /* 0B01	ଁ	e0 ac 81	ORIYA SIGN CANDRABINDU */
    {               0,           0 }, /* 0B02	ଂ	e0 ac 82	ORIYA SIGN ANUSVARA */
    {               0,           0 }, /* 0B03	ଃ	e0 ac 83	ORIYA SIGN VISARGA */
    {               0,           0 }, /* 0B04	଄	e0 ac 84	 */
    {               0,           0 }, /* 0B05	ଅ	e0 ac 85	ORIYA LETTER A */
    {               0,           0 }, /* 0B06	ଆ	e0 ac 86	ORIYA LETTER AA */
    {               0,           0 }, /* 0B07	ଇ	e0 ac 87	ORIYA LETTER I */
    {               0,           0 }, /* 0B08	ଈ	e0 ac 88	ORIYA LETTER II */
    {               0,           0 }, /* 0B09	ଉ	e0 ac 89	ORIYA LETTER U */
    {               0,           0 }, /* 0B0A	ଊ	e0 ac 8a	ORIYA LETTER UU */
    {               0,           0 }, /* 0B0B	ଋ	e0 ac 8b	ORIYA LETTER VOCALIC R */
    {               0,           0 }, /* 0B0C	ଌ	e0 ac 8c	ORIYA LETTER VOCALIC L */
    {               0,           0 }, /* 0B0D	଍	e0 ac 8d	 */
    {               0,           0 }, /* 0B0E	଎	e0 ac 8e	 */
    {               0,           0 }, /* 0B0F	ଏ	e0 ac 8f	ORIYA LETTER E */
    {               0,           0 }, /* 0B10	ଐ	e0 ac 90	ORIYA LETTER AI */
    {               0,           0 }, /* 0B11	଑	e0 ac 91	 */
    {               0,           0 }, /* 0B12	଒	e0 ac 92	 */
    {               0,           0 }, /* 0B13	ଓ	e0 ac 93	ORIYA LETTER O */
    {               0,           0 }, /* 0B14	ଔ	e0 ac 94	ORIYA LETTER AU */
    {               0,           0 }, /* 0B15	କ	e0 ac 95	ORIYA LETTER KA */
    {               0,           0 }, /* 0B16	ଖ	e0 ac 96	ORIYA LETTER KHA */
    {               0,           0 }, /* 0B17	ଗ	e0 ac 97	ORIYA LETTER GA */
    {               0,           0 }, /* 0B18	ଘ	e0 ac 98	ORIYA LETTER GHA */
    {               0,           0 }, /* 0B19	ଙ	e0 ac 99	ORIYA LETTER NGA */
    {               0,           0 }, /* 0B1A	ଚ	e0 ac 9a	ORIYA LETTER CA */
    {               0,           0 }, /* 0B1B	ଛ	e0 ac 9b	ORIYA LETTER CHA */
    {               0,           0 }, /* 0B1C	ଜ	e0 ac 9c	ORIYA LETTER JA */
    {               0,           0 }, /* 0B1D	ଝ	e0 ac 9d	ORIYA LETTER JHA */
    {               0,           0 }, /* 0B1E	ଞ	e0 ac 9e	ORIYA LETTER NYA */
    {               0,           0 }, /* 0B1F	ଟ	e0 ac 9f	ORIYA LETTER TTA */
    {               0,           0 }, /* 0B20	ଠ	e0 ac a0	ORIYA LETTER TTHA */
    {               0,           0 }, /* 0B21	ଡ	e0 ac a1	ORIYA LETTER DDA */
    {               0,           0 }, /* 0B22	ଢ	e0 ac a2	ORIYA LETTER DDHA */
    {               0,           0 }, /* 0B23	ଣ	e0 ac a3	ORIYA LETTER NNA */
    {               0,           0 }, /* 0B24	ତ	e0 ac a4	ORIYA LETTER TA */
    {               0,           0 }, /* 0B25	ଥ	e0 ac a5	ORIYA LETTER THA */
    {               0,           0 }, /* 0B26	ଦ	e0 ac a6	ORIYA LETTER DA */
    {               0,           0 }, /* 0B27	ଧ	e0 ac a7	ORIYA LETTER DHA */
    {               0,           0 }, /* 0B28	ନ	e0 ac a8	ORIYA LETTER NA */
    {               0,           0 }, /* 0B29	଩	e0 ac a9	 */
    {               0,           0 }, /* 0B2A	ପ	e0 ac aa	ORIYA LETTER PA */
    {               0,           0 }, /* 0B2B	ଫ	e0 ac ab	ORIYA LETTER PHA */
    {               0,           0 }, /* 0B2C	ବ	e0 ac ac	ORIYA LETTER BA */
    {               0,           0 }, /* 0B2D	ଭ	e0 ac ad	ORIYA LETTER BHA */
    {               0,           0 }, /* 0B2E	ମ	e0 ac ae	ORIYA LETTER MA */
    {               0,           0 }, /* 0B2F	ଯ	e0 ac af	ORIYA LETTER YA */
    {               0,           0 }, /* 0B30	ର	e0 ac b0	ORIYA LETTER RA */
    {               0,           0 }, /* 0B31	଱	e0 ac b1	 */
    {               0,           0 }, /* 0B32	ଲ	e0 ac b2	ORIYA LETTER LA */
    {               0,           0 }, /* 0B33	ଳ	e0 ac b3	ORIYA LETTER LLA */
    {               0,           0 }, /* 0B34	଴	e0 ac b4	 */
    {               0,           0 }, /* 0B35	ଵ	e0 ac b5	ORIYA LETTER VA */
    {               0,           0 }, /* 0B36	ଶ	e0 ac b6	ORIYA LETTER SHA */
    {               0,           0 }, /* 0B37	ଷ	e0 ac b7	ORIYA LETTER SSA */
    {               0,           0 }, /* 0B38	ସ	e0 ac b8	ORIYA LETTER SA */
    {               0,           0 }, /* 0B39	ହ	e0 ac b9	ORIYA LETTER HA */
    {               0,           0 }, /* 0B3A	଺	e0 ac ba	 */
    {               0,           0 }, /* 0B3B	଻	e0 ac bb	 */
    {               0,           0 }, /* 0B3C	଼	e0 ac bc	ORIYA SIGN NUKTA */
    {               0,           0 }, /* 0B3D	ଽ	e0 ac bd	ORIYA SIGN AVAGRAHA */
    {               0,           0 }, /* 0B3E	ା	e0 ac be	ORIYA VOWEL SIGN AA */
    {               0,           0 }, /* 0B3F	ି	e0 ac bf	ORIYA VOWEL SIGN I */
    {               0,           0 }, /* 0B40	ୀ	e0 ad 80	ORIYA VOWEL SIGN II */
    {               0,           0 }, /* 0B41	ୁ	e0 ad 81	ORIYA VOWEL SIGN U */
    {               0,           0 }, /* 0B42	ୂ	e0 ad 82	ORIYA VOWEL SIGN UU */
    {               0,           0 }, /* 0B43	ୃ	e0 ad 83	ORIYA VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0B44	ୄ	e0 ad 84	ORIYA VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0B45	୅	e0 ad 85	 */
    {               0,           0 }, /* 0B46	୆	e0 ad 86	 */
    {               0,           0 }, /* 0B47	େ	e0 ad 87	ORIYA VOWEL SIGN E */
    {               0,           0 }, /* 0B48	ୈ	e0 ad 88	ORIYA VOWEL SIGN AI */
    {               0,           0 }, /* 0B49	୉	e0 ad 89	 */
    {               0,           0 }, /* 0B4A	୊	e0 ad 8a	 */
    {               0,           0 }, /* 0B4B	ୋ	e0 ad 8b	ORIYA VOWEL SIGN O */
    {               0,           0 }, /* 0B4C	ୌ	e0 ad 8c	ORIYA VOWEL SIGN AU */
    {               0,           0 }, /* 0B4D	୍	e0 ad 8d	ORIYA SIGN VIRAMA */
    {               0,           0 }, /* 0B4E	୎	e0 ad 8e	 */
    {               0,           0 }, /* 0B4F	୏	e0 ad 8f	 */
    {               0,           0 }, /* 0B50	୐	e0 ad 90	 */
    {               0,           0 }, /* 0B51	୑	e0 ad 91	 */
    {               0,           0 }, /* 0B52	୒	e0 ad 92	 */
    {               0,           0 }, /* 0B53	୓	e0 ad 93	 */
    {               0,           0 }, /* 0B54	୔	e0 ad 94	 */
    {               0,           0 }, /* 0B55	୕	e0 ad 95	 */
    {               0,           0 }, /* 0B56	ୖ	e0 ad 96	ORIYA AI LENGTH MARK */
    {               0,           0 }, /* 0B57	ୗ	e0 ad 97	ORIYA AU LENGTH MARK */
    {               0,           0 }, /* 0B58	୘	e0 ad 98	 */
    {               0,           0 }, /* 0B59	୙	e0 ad 99	 */
    {               0,           0 }, /* 0B5A	୚	e0 ad 9a	 */
    {               0,           0 }, /* 0B5B	୛	e0 ad 9b	 */
    {               0,           0 }, /* 0B5C	ଡ଼	e0 ad 9c	ORIYA LETTER RRA */
    {               0,           0 }, /* 0B5D	ଢ଼	e0 ad 9d	ORIYA LETTER RHA */
    {               0,           0 }, /* 0B5E	୞	e0 ad 9e	 */
    {               0,           0 }, /* 0B5F	ୟ	e0 ad 9f	ORIYA LETTER YYA */
    {               0,           0 }, /* 0B60	ୠ	e0 ad a0	ORIYA LETTER VOCALIC RR */
    {               0,           0 }, /* 0B61	ୡ	e0 ad a1	ORIYA LETTER VOCALIC LL */
    {               0,           0 }, /* 0B62	ୢ	e0 ad a2	ORIYA VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0B63	ୣ	e0 ad a3	ORIYA VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0B64	୤	e0 ad a4	 */
    {               0,           0 }, /* 0B65	୥	e0 ad a5	 */
    {               0,           0 }, /* 0B66	୦	e0 ad a6	ORIYA DIGIT ZERO */
    {               0,           0 }, /* 0B67	୧	e0 ad a7	ORIYA DIGIT ONE */
    {               0,           0 }, /* 0B68	୨	e0 ad a8	ORIYA DIGIT TWO */
    {               0,           0 }, /* 0B69	୩	e0 ad a9	ORIYA DIGIT THREE */
    {               0,           0 }, /* 0B6A	୪	e0 ad aa	ORIYA DIGIT FOUR */
    {               0,           0 }, /* 0B6B	୫	e0 ad ab	ORIYA DIGIT FIVE */
    {               0,           0 }, /* 0B6C	୬	e0 ad ac	ORIYA DIGIT SIX */
    {               0,           0 }, /* 0B6D	୭	e0 ad ad	ORIYA DIGIT SEVEN */
    {               0,           0 }, /* 0B6E	୮	e0 ad ae	ORIYA DIGIT EIGHT */
    {               0,           0 }, /* 0B6F	୯	e0 ad af	ORIYA DIGIT NINE */
    {               0,           0 }, /* 0B70	୰	e0 ad b0	ORIYA ISSHAR */
    {               0,           0 }, /* 0B71	ୱ	e0 ad b1	ORIYA LETTER WA */
    {               0,           0 }, /* 0B72	୲	e0 ad b2	 */
    {               0,           0 }, /* 0B73	୳	e0 ad b3	 */
    {               0,           0 }, /* 0B74	୴	e0 ad b4	 */
    {               0,           0 }, /* 0B75	୵	e0 ad b5	 */
    {               0,           0 }, /* 0B76	୶	e0 ad b6	 */
    {               0,           0 }, /* 0B77	୷	e0 ad b7	 */
    {               0,           0 }, /* 0B78	୸	e0 ad b8	 */
    {               0,           0 }, /* 0B79	୹	e0 ad b9	 */
    {               0,           0 }, /* 0B7A	୺	e0 ad ba	 */
    {               0,           0 }, /* 0B7B	୻	e0 ad bb	 */
    {               0,           0 }, /* 0B7C	୼	e0 ad bc	 */
    {               0,           0 }, /* 0B7D	୽	e0 ad bd	 */
    {               0,           0 }, /* 0B7E	୾	e0 ad be	 */
    {               0,           0 }, /* 0B7F	୿	e0 ad bf	 */
    {               0,           0 }, /* 0B80	஀	e0 ae 80	 */
    {               0,           0 }, /* 0B81	஁	e0 ae 81	 */
    {               0,           0 }, /* 0B82	ஂ	e0 ae 82	TAMIL SIGN ANUSVARA */
    {               0,           0 }, /* 0B83	ஃ	e0 ae 83	TAMIL SIGN VISARGA */
    {               0,           0 }, /* 0B84	஄	e0 ae 84	 */
    {               0,           0 }, /* 0B85	அ	e0 ae 85	TAMIL LETTER A */
    {               0,           0 }, /* 0B86	ஆ	e0 ae 86	TAMIL LETTER AA */
    {               0,           0 }, /* 0B87	இ	e0 ae 87	TAMIL LETTER I */
    {               0,           0 }, /* 0B88	ஈ	e0 ae 88	TAMIL LETTER II */
    {               0,           0 }, /* 0B89	உ	e0 ae 89	TAMIL LETTER U */
    {               0,           0 }, /* 0B8A	ஊ	e0 ae 8a	TAMIL LETTER UU */
    {               0,           0 }, /* 0B8B	஋	e0 ae 8b	 */
    {               0,           0 }, /* 0B8C	஌	e0 ae 8c	 */
    {               0,           0 }, /* 0B8D	஍	e0 ae 8d	 */
    {               0,           0 }, /* 0B8E	எ	e0 ae 8e	TAMIL LETTER E */
    {               0,           0 }, /* 0B8F	ஏ	e0 ae 8f	TAMIL LETTER EE */
    {               0,           0 }, /* 0B90	ஐ	e0 ae 90	TAMIL LETTER AI */
    {               0,           0 }, /* 0B91	஑	e0 ae 91	 */
    {               0,           0 }, /* 0B92	ஒ	e0 ae 92	TAMIL LETTER O */
    {               0,           0 }, /* 0B93	ஓ	e0 ae 93	TAMIL LETTER OO */
    {               0,           0 }, /* 0B94	ஔ	e0 ae 94	TAMIL LETTER AU */
    {               0,           0 }, /* 0B95	க	e0 ae 95	TAMIL LETTER KA */
    {               0,           0 }, /* 0B96	஖	e0 ae 96	 */
    {               0,           0 }, /* 0B97	஗	e0 ae 97	 */
    {               0,           0 }, /* 0B98	஘	e0 ae 98	 */
    {               0,           0 }, /* 0B99	ங	e0 ae 99	TAMIL LETTER NGA */
    {               0,           0 }, /* 0B9A	ச	e0 ae 9a	TAMIL LETTER CA */
    {               0,           0 }, /* 0B9B	஛	e0 ae 9b	 */
    {               0,           0 }, /* 0B9C	ஜ	e0 ae 9c	TAMIL LETTER JA */
    {               0,           0 }, /* 0B9D	஝	e0 ae 9d	 */
    {               0,           0 }, /* 0B9E	ஞ	e0 ae 9e	TAMIL LETTER NYA */
    {               0,           0 }, /* 0B9F	ட	e0 ae 9f	TAMIL LETTER TTA */
    {               0,           0 }, /* 0BA0	஠	e0 ae a0	 */
    {               0,           0 }, /* 0BA1	஡	e0 ae a1	 */
    {               0,           0 }, /* 0BA2	஢	e0 ae a2	 */
    {               0,           0 }, /* 0BA3	ண	e0 ae a3	TAMIL LETTER NNA */
    {               0,           0 }, /* 0BA4	த	e0 ae a4	TAMIL LETTER TA */
    {               0,           0 }, /* 0BA5	஥	e0 ae a5	 */
    {               0,           0 }, /* 0BA6	஦	e0 ae a6	 */
    {               0,           0 }, /* 0BA7	஧	e0 ae a7	 */
    {               0,           0 }, /* 0BA8	ந	e0 ae a8	TAMIL LETTER NA */
    {               0,           0 }, /* 0BA9	ன	e0 ae a9	TAMIL LETTER NNNA */
    {               0,           0 }, /* 0BAA	ப	e0 ae aa	TAMIL LETTER PA */
    {               0,           0 }, /* 0BAB	஫	e0 ae ab	 */
    {               0,           0 }, /* 0BAC	஬	e0 ae ac	 */
    {               0,           0 }, /* 0BAD	஭	e0 ae ad	 */
    {               0,           0 }, /* 0BAE	ம	e0 ae ae	TAMIL LETTER MA */
    {               0,           0 }, /* 0BAF	ய	e0 ae af	TAMIL LETTER YA */
    {               0,           0 }, /* 0BB0	ர	e0 ae b0	TAMIL LETTER RA */
    {               0,           0 }, /* 0BB1	ற	e0 ae b1	TAMIL LETTER RRA */
    {               0,           0 }, /* 0BB2	ல	e0 ae b2	TAMIL LETTER LA */
    {               0,           0 }, /* 0BB3	ள	e0 ae b3	TAMIL LETTER LLA */
    {               0,           0 }, /* 0BB4	ழ	e0 ae b4	TAMIL LETTER LLLA */
    {               0,           0 }, /* 0BB5	வ	e0 ae b5	TAMIL LETTER VA */
    {               0,           0 }, /* 0BB6	ஶ	e0 ae b6	TAMIL LETTER SHA */
    {               0,           0 }, /* 0BB7	ஷ	e0 ae b7	TAMIL LETTER SSA */
    {               0,           0 }, /* 0BB8	ஸ	e0 ae b8	TAMIL LETTER SA */
    {               0,           0 }, /* 0BB9	ஹ	e0 ae b9	TAMIL LETTER HA */
    {               0,           0 }, /* 0BBA	஺	e0 ae ba	 */
    {               0,           0 }, /* 0BBB	஻	e0 ae bb	 */
    {               0,           0 }, /* 0BBC	஼	e0 ae bc	 */
    {               0,           0 }, /* 0BBD	஽	e0 ae bd	 */
    {               0,           0 }, /* 0BBE	ா	e0 ae be	TAMIL VOWEL SIGN AA */
    {               0,           0 }, /* 0BBF	ி	e0 ae bf	TAMIL VOWEL SIGN I */
    {               0,           0 }, /* 0BC0	ீ	e0 af 80	TAMIL VOWEL SIGN II */
    {               0,           0 }, /* 0BC1	ு	e0 af 81	TAMIL VOWEL SIGN U */
    {               0,           0 }, /* 0BC2	ூ	e0 af 82	TAMIL VOWEL SIGN UU */
    {               0,           0 }, /* 0BC3	௃	e0 af 83	 */
    {               0,           0 }, /* 0BC4	௄	e0 af 84	 */
    {               0,           0 }, /* 0BC5	௅	e0 af 85	 */
    {               0,           0 }, /* 0BC6	ெ	e0 af 86	TAMIL VOWEL SIGN E */
    {               0,           0 }, /* 0BC7	ே	e0 af 87	TAMIL VOWEL SIGN EE */
    {               0,           0 }, /* 0BC8	ை	e0 af 88	TAMIL VOWEL SIGN AI */
    {               0,           0 }, /* 0BC9	௉	e0 af 89	 */
    {               0,           0 }, /* 0BCA	ொ	e0 af 8a	TAMIL VOWEL SIGN O */
    {               0,           0 }, /* 0BCB	ோ	e0 af 8b	TAMIL VOWEL SIGN OO */
    {               0,           0 }, /* 0BCC	ௌ	e0 af 8c	TAMIL VOWEL SIGN AU */
    {               0,           0 }, /* 0BCD	்	e0 af 8d	TAMIL SIGN VIRAMA */
    {               0,           0 }, /* 0BCE	௎	e0 af 8e	 */
    {               0,           0 }, /* 0BCF	௏	e0 af 8f	 */
    {               0,           0 }, /* 0BD0	ௐ	e0 af 90	TAMIL OM */
    {               0,           0 }, /* 0BD1	௑	e0 af 91	 */
    {               0,           0 }, /* 0BD2	௒	e0 af 92	 */
    {               0,           0 }, /* 0BD3	௓	e0 af 93	 */
    {               0,           0 }, /* 0BD4	௔	e0 af 94	 */
    {               0,           0 }, /* 0BD5	௕	e0 af 95	 */
    {               0,           0 }, /* 0BD6	௖	e0 af 96	 */
    {               0,           0 }, /* 0BD7	ௗ	e0 af 97	TAMIL AU LENGTH MARK */
    {               0,           0 }, /* 0BD8	௘	e0 af 98	 */
    {               0,           0 }, /* 0BD9	௙	e0 af 99	 */
    {               0,           0 }, /* 0BDA	௚	e0 af 9a	 */
    {               0,           0 }, /* 0BDB	௛	e0 af 9b	 */
    {               0,           0 }, /* 0BDC	௜	e0 af 9c	 */
    {               0,           0 }, /* 0BDD	௝	e0 af 9d	 */
    {               0,           0 }, /* 0BDE	௞	e0 af 9e	 */
    {               0,           0 }, /* 0BDF	௟	e0 af 9f	 */
    {               0,           0 }, /* 0BE0	௠	e0 af a0	 */
    {               0,           0 }, /* 0BE1	௡	e0 af a1	 */
    {               0,           0 }, /* 0BE2	௢	e0 af a2	 */
    {               0,           0 }, /* 0BE3	௣	e0 af a3	 */
    {               0,           0 }, /* 0BE4	௤	e0 af a4	 */
    {               0,           0 }, /* 0BE5	௥	e0 af a5	 */
    {               0,           0 }, /* 0BE6	௦	e0 af a6	TAMIL DIGIT ZERO */
    {               0,           0 }, /* 0BE7	௧	e0 af a7	TAMIL DIGIT ONE */
    {               0,           0 }, /* 0BE8	௨	e0 af a8	TAMIL DIGIT TWO */
    {               0,           0 }, /* 0BE9	௩	e0 af a9	TAMIL DIGIT THREE */
    {               0,           0 }, /* 0BEA	௪	e0 af aa	TAMIL DIGIT FOUR */
    {               0,           0 }, /* 0BEB	௫	e0 af ab	TAMIL DIGIT FIVE */
    {               0,           0 }, /* 0BEC	௬	e0 af ac	TAMIL DIGIT SIX */
    {               0,           0 }, /* 0BED	௭	e0 af ad	TAMIL DIGIT SEVEN */
    {               0,           0 }, /* 0BEE	௮	e0 af ae	TAMIL DIGIT EIGHT */
    {               0,           0 }, /* 0BEF	௯	e0 af af	TAMIL DIGIT NINE */
    {               0,           0 }, /* 0BF0	௰	e0 af b0	TAMIL NUMBER TEN */
    {               0,           0 }, /* 0BF1	௱	e0 af b1	TAMIL NUMBER ONE HUNDRED */
    {               0,           0 }, /* 0BF2	௲	e0 af b2	TAMIL NUMBER ONE THOUSAND */
    {               0,           0 }, /* 0BF3	௳	e0 af b3	TAMIL DAY SIGN */
    {               0,           0 }, /* 0BF4	௴	e0 af b4	TAMIL MONTH SIGN */
    {               0,           0 }, /* 0BF5	௵	e0 af b5	TAMIL YEAR SIGN */
    {               0,           0 }, /* 0BF6	௶	e0 af b6	TAMIL DEBIT SIGN */
    {               0,           0 }, /* 0BF7	௷	e0 af b7	TAMIL CREDIT SIGN */
    {               0,           0 }, /* 0BF8	௸	e0 af b8	TAMIL AS ABOVE SIGN */
    {               0,           0 }, /* 0BF9	௹	e0 af b9	TAMIL RUPEE SIGN */
    {               0,           0 }, /* 0BFA	௺	e0 af ba	TAMIL NUMBER SIGN */
    {               0,           0 }, /* 0BFB	௻	e0 af bb	 */
    {               0,           0 }, /* 0BFC	௼	e0 af bc	 */
    {               0,           0 }, /* 0BFD	௽	e0 af bd	 */
    {               0,           0 }, /* 0BFE	௾	e0 af be	 */
    {               0,           0 }, /* 0BFF	௿	e0 af bf */
    {               0,           0 }, /* 0C00	ఀ	e0 b0 80	 */
    {               0,           0 }, /* 0C01	ఁ	e0 b0 81	TELUGU SIGN CANDRABINDU */
    {               0,           0 }, /* 0C02	ం	e0 b0 82	TELUGU SIGN ANUSVARA */
    {               0,           0 }, /* 0C03	ః	e0 b0 83	TELUGU SIGN VISARGA */
    {               0,           0 }, /* 0C04	ఄ	e0 b0 84	 */
    {               0,           0 }, /* 0C05	అ	e0 b0 85	TELUGU LETTER A */
    {               0,           0 }, /* 0C06	ఆ	e0 b0 86	TELUGU LETTER AA */
    {               0,           0 }, /* 0C07	ఇ	e0 b0 87	TELUGU LETTER I */
    {               0,           0 }, /* 0C08	ఈ	e0 b0 88	TELUGU LETTER II */
    {               0,           0 }, /* 0C09	ఉ	e0 b0 89	TELUGU LETTER U */
    {               0,           0 }, /* 0C0A	ఊ	e0 b0 8a	TELUGU LETTER UU */
    {               0,           0 }, /* 0C0B	ఋ	e0 b0 8b	TELUGU LETTER VOCALIC R */
    {               0,           0 }, /* 0C0C	ఌ	e0 b0 8c	TELUGU LETTER VOCALIC L */
    {               0,           0 }, /* 0C0D	఍	e0 b0 8d	 */
    {               0,           0 }, /* 0C0E	ఎ	e0 b0 8e	TELUGU LETTER E */
    {               0,           0 }, /* 0C0F	ఏ	e0 b0 8f	TELUGU LETTER EE */
    {               0,           0 }, /* 0C10	ఐ	e0 b0 90	TELUGU LETTER AI */
    {               0,           0 }, /* 0C11	఑	e0 b0 91	 */
    {               0,           0 }, /* 0C12	ఒ	e0 b0 92	TELUGU LETTER O */
    {               0,           0 }, /* 0C13	ఓ	e0 b0 93	TELUGU LETTER OO */
    {               0,           0 }, /* 0C14	ఔ	e0 b0 94	TELUGU LETTER AU */
    {               0,           0 }, /* 0C15	క	e0 b0 95	TELUGU LETTER KA */
    {               0,           0 }, /* 0C16	ఖ	e0 b0 96	TELUGU LETTER KHA */
    {               0,           0 }, /* 0C17	గ	e0 b0 97	TELUGU LETTER GA */
    {               0,           0 }, /* 0C18	ఘ	e0 b0 98	TELUGU LETTER GHA */
    {               0,           0 }, /* 0C19	ఙ	e0 b0 99	TELUGU LETTER NGA */
    {               0,           0 }, /* 0C1A	చ	e0 b0 9a	TELUGU LETTER CA */
    {               0,           0 }, /* 0C1B	ఛ	e0 b0 9b	TELUGU LETTER CHA */
    {               0,           0 }, /* 0C1C	జ	e0 b0 9c	TELUGU LETTER JA */
    {               0,           0 }, /* 0C1D	ఝ	e0 b0 9d	TELUGU LETTER JHA */
    {               0,           0 }, /* 0C1E	ఞ	e0 b0 9e	TELUGU LETTER NYA */
    {               0,           0 }, /* 0C1F	ట	e0 b0 9f	TELUGU LETTER TTA */
    {               0,           0 }, /* 0C20	ఠ	e0 b0 a0	TELUGU LETTER TTHA */
    {               0,           0 }, /* 0C21	డ	e0 b0 a1	TELUGU LETTER DDA */
    {               0,           0 }, /* 0C22	ఢ	e0 b0 a2	TELUGU LETTER DDHA */
    {               0,           0 }, /* 0C23	ణ	e0 b0 a3	TELUGU LETTER NNA */
    {               0,           0 }, /* 0C24	త	e0 b0 a4	TELUGU LETTER TA */
    {               0,           0 }, /* 0C25	థ	e0 b0 a5	TELUGU LETTER THA */
    {               0,           0 }, /* 0C26	ద	e0 b0 a6	TELUGU LETTER DA */
    {               0,           0 }, /* 0C27	ధ	e0 b0 a7	TELUGU LETTER DHA */
    {               0,           0 }, /* 0C28	న	e0 b0 a8	TELUGU LETTER NA */
    {               0,           0 }, /* 0C29	఩	e0 b0 a9	 */
    {               0,           0 }, /* 0C2A	ప	e0 b0 aa	TELUGU LETTER PA */
    {               0,           0 }, /* 0C2B	ఫ	e0 b0 ab	TELUGU LETTER PHA */
    {               0,           0 }, /* 0C2C	బ	e0 b0 ac	TELUGU LETTER BA */
    {               0,           0 }, /* 0C2D	భ	e0 b0 ad	TELUGU LETTER BHA */
    {               0,           0 }, /* 0C2E	మ	e0 b0 ae	TELUGU LETTER MA */
    {               0,           0 }, /* 0C2F	య	e0 b0 af	TELUGU LETTER YA */
    {               0,           0 }, /* 0C30	ర	e0 b0 b0	TELUGU LETTER RA */
    {               0,           0 }, /* 0C31	ఱ	e0 b0 b1	TELUGU LETTER RRA */
    {               0,           0 }, /* 0C32	ల	e0 b0 b2	TELUGU LETTER LA */
    {               0,           0 }, /* 0C33	ళ	e0 b0 b3	TELUGU LETTER LLA */
    {               0,           0 }, /* 0C34	ఴ	e0 b0 b4	 */
    {               0,           0 }, /* 0C35	వ	e0 b0 b5	TELUGU LETTER VA */
    {               0,           0 }, /* 0C36	శ	e0 b0 b6	TELUGU LETTER SHA */
    {               0,           0 }, /* 0C37	ష	e0 b0 b7	TELUGU LETTER SSA */
    {               0,           0 }, /* 0C38	స	e0 b0 b8	TELUGU LETTER SA */
    {               0,           0 }, /* 0C39	హ	e0 b0 b9	TELUGU LETTER HA */
    {               0,           0 }, /* 0C3A	఺	e0 b0 ba	 */
    {               0,           0 }, /* 0C3B	఻	e0 b0 bb	 */
    {               0,           0 }, /* 0C3C	఼	e0 b0 bc	 */
    {               0,           0 }, /* 0C3D	ఽ	e0 b0 bd	TELUGU SIGN AVAGRAHA */
    {               0,           0 }, /* 0C3E	ా	e0 b0 be	TELUGU VOWEL SIGN AA */
    {               0,           0 }, /* 0C3F	ి	e0 b0 bf	TELUGU VOWEL SIGN I */
    {               0,           0 }, /* 0C40	ీ	e0 b1 80	TELUGU VOWEL SIGN II */
    {               0,           0 }, /* 0C41	ు	e0 b1 81	TELUGU VOWEL SIGN U */
    {               0,           0 }, /* 0C42	ూ	e0 b1 82	TELUGU VOWEL SIGN UU */
    {               0,           0 }, /* 0C43	ృ	e0 b1 83	TELUGU VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0C44	ౄ	e0 b1 84	TELUGU VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0C45	౅	e0 b1 85	 */
    {               0,           0 }, /* 0C46	ె	e0 b1 86	TELUGU VOWEL SIGN E */
    {               0,           0 }, /* 0C47	ే	e0 b1 87	TELUGU VOWEL SIGN EE */
    {               0,           0 }, /* 0C48	ై	e0 b1 88	TELUGU VOWEL SIGN AI */
    {               0,           0 }, /* 0C49	౉	e0 b1 89	 */
    {               0,           0 }, /* 0C4A	ొ	e0 b1 8a	TELUGU VOWEL SIGN O */
    {               0,           0 }, /* 0C4B	ో	e0 b1 8b	TELUGU VOWEL SIGN OO */
    {               0,           0 }, /* 0C4C	ౌ	e0 b1 8c	TELUGU VOWEL SIGN AU */
    {               0,           0 }, /* 0C4D	్	e0 b1 8d	TELUGU SIGN VIRAMA */
    {               0,           0 }, /* 0C4E	౎	e0 b1 8e	 */
    {               0,           0 }, /* 0C4F	౏	e0 b1 8f	 */
    {               0,           0 }, /* 0C50	౐	e0 b1 90	 */
    {               0,           0 }, /* 0C51	౑	e0 b1 91	 */
    {               0,           0 }, /* 0C52	౒	e0 b1 92	 */
    {               0,           0 }, /* 0C53	౓	e0 b1 93	 */
    {               0,           0 }, /* 0C54	౔	e0 b1 94	 */
    {               0,           0 }, /* 0C55	ౕ	e0 b1 95	TELUGU LENGTH MARK */
    {               0,           0 }, /* 0C56	ౖ	e0 b1 96	TELUGU AI LENGTH MARK */
    {               0,           0 }, /* 0C57	౗	e0 b1 97	 */
    {               0,           0 }, /* 0C58	ౘ	e0 b1 98	TELUGU LETTER TSA */
    {               0,           0 }, /* 0C59	ౙ	e0 b1 99	TELUGU LETTER DZA */
    {               0,           0 }, /* 0C5A	ౚ	e0 b1 9a	 */
    {               0,           0 }, /* 0C5B	౛	e0 b1 9b	 */
    {               0,           0 }, /* 0C5C	౜	e0 b1 9c	 */
    {               0,           0 }, /* 0C5D	ౝ	e0 b1 9d	 */
    {               0,           0 }, /* 0C5E	౞	e0 b1 9e	 */
    {               0,           0 }, /* 0C5F	౟	e0 b1 9f	 */
    {               0,           0 }, /* 0C60	ౠ	e0 b1 a0	TELUGU LETTER VOCALIC RR */
    {               0,           0 }, /* 0C61	ౡ	e0 b1 a1	TELUGU LETTER VOCALIC LL */
    {               0,           0 }, /* 0C62	ౢ	e0 b1 a2	TELUGU VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0C63	ౣ	e0 b1 a3	TELUGU VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0C64	౤	e0 b1 a4	 */
    {               0,           0 }, /* 0C65	౥	e0 b1 a5	 */
    {               0,           0 }, /* 0C66	౦	e0 b1 a6	TELUGU DIGIT ZERO */
    {               0,           0 }, /* 0C67	౧	e0 b1 a7	TELUGU DIGIT ONE */
    {               0,           0 }, /* 0C68	౨	e0 b1 a8	TELUGU DIGIT TWO */
    {               0,           0 }, /* 0C69	౩	e0 b1 a9	TELUGU DIGIT THREE */
    {               0,           0 }, /* 0C6A	౪	e0 b1 aa	TELUGU DIGIT FOUR */
    {               0,           0 }, /* 0C6B	౫	e0 b1 ab	TELUGU DIGIT FIVE */
    {               0,           0 }, /* 0C6C	౬	e0 b1 ac	TELUGU DIGIT SIX */
    {               0,           0 }, /* 0C6D	౭	e0 b1 ad	TELUGU DIGIT SEVEN */
    {               0,           0 }, /* 0C6E	౮	e0 b1 ae	TELUGU DIGIT EIGHT */
    {               0,           0 }, /* 0C6F	౯	e0 b1 af	TELUGU DIGIT NINE */
    {               0,           0 }, /* 0C70	౰	e0 b1 b0	 */
    {               0,           0 }, /* 0C71	౱	e0 b1 b1	 */
    {               0,           0 }, /* 0C72	౲	e0 b1 b2	 */
    {               0,           0 }, /* 0C73	౳	e0 b1 b3	 */
    {               0,           0 }, /* 0C74	౴	e0 b1 b4	 */
    {               0,           0 }, /* 0C75	౵	e0 b1 b5	 */
    {               0,           0 }, /* 0C76	౶	e0 b1 b6	 */
    {               0,           0 }, /* 0C77	౷	e0 b1 b7	 */
    {               0,           0 }, /* 0C78	౸	e0 b1 b8	TELUGU FRACTION DIGIT ZERO FOR ODD POWERS OF FOUR */
    {               0,           0 }, /* 0C79	౹	e0 b1 b9	TELUGU FRACTION DIGIT ONE FOR ODD POWERS OF FOUR */
    {               0,           0 }, /* 0C7A	౺	e0 b1 ba	TELUGU FRACTION DIGIT TWO FOR ODD POWERS OF FOUR */
    {               0,           0 }, /* 0C7B	౻	e0 b1 bb	TELUGU FRACTION DIGIT THREE FOR ODD POWERS OF FOUR */
    {               0,           0 }, /* 0C7C	౼	e0 b1 bc	TELUGU FRACTION DIGIT ONE FOR EVEN POWERS OF FOUR */
    {               0,           0 }, /* 0C7D	౽	e0 b1 bd	TELUGU FRACTION DIGIT TWO FOR EVEN POWERS OF FOUR */
    {               0,           0 }, /* 0C7E	౾	e0 b1 be	TELUGU FRACTION DIGIT THREE FOR EVEN POWERS OF FOUR */
    {               0,           0 }, /* 0C7F	౿	e0 b1 bf	TELUGU SIGN TUUMU */
    {               0,           0 }, /* 0C80	ಀ	e0 b2 80	 */
    {               0,           0 }, /* 0C81	ಁ	e0 b2 81	 */
    {               0,           0 }, /* 0C82	ಂ	e0 b2 82	KANNADA SIGN ANUSVARA */
    {               0,           0 }, /* 0C83	ಃ	e0 b2 83	KANNADA SIGN VISARGA */
    {               0,           0 }, /* 0C84	಄	e0 b2 84	 */
    {               0,           0 }, /* 0C85	ಅ	e0 b2 85	KANNADA LETTER A */
    {               0,           0 }, /* 0C86	ಆ	e0 b2 86	KANNADA LETTER AA */
    {               0,           0 }, /* 0C87	ಇ	e0 b2 87	KANNADA LETTER I */
    {               0,           0 }, /* 0C88	ಈ	e0 b2 88	KANNADA LETTER II */
    {               0,           0 }, /* 0C89	ಉ	e0 b2 89	KANNADA LETTER U */
    {               0,           0 }, /* 0C8A	ಊ	e0 b2 8a	KANNADA LETTER UU */
    {               0,           0 }, /* 0C8B	ಋ	e0 b2 8b	KANNADA LETTER VOCALIC R */
    {               0,           0 }, /* 0C8C	ಌ	e0 b2 8c	KANNADA LETTER VOCALIC L */
    {               0,           0 }, /* 0C8D	಍	e0 b2 8d	 */
    {               0,           0 }, /* 0C8E	ಎ	e0 b2 8e	KANNADA LETTER E */
    {               0,           0 }, /* 0C8F	ಏ	e0 b2 8f	KANNADA LETTER EE */
    {               0,           0 }, /* 0C90	ಐ	e0 b2 90	KANNADA LETTER AI */
    {               0,           0 }, /* 0C91	಑	e0 b2 91	 */
    {               0,           0 }, /* 0C92	ಒ	e0 b2 92	KANNADA LETTER O */
    {               0,           0 }, /* 0C93	ಓ	e0 b2 93	KANNADA LETTER OO */
    {               0,           0 }, /* 0C94	ಔ	e0 b2 94	KANNADA LETTER AU */
    {               0,           0 }, /* 0C95	ಕ	e0 b2 95	KANNADA LETTER KA */
    {               0,           0 }, /* 0C96	ಖ	e0 b2 96	KANNADA LETTER KHA */
    {               0,           0 }, /* 0C97	ಗ	e0 b2 97	KANNADA LETTER GA */
    {               0,           0 }, /* 0C98	ಘ	e0 b2 98	KANNADA LETTER GHA */
    {               0,           0 }, /* 0C99	ಙ	e0 b2 99	KANNADA LETTER NGA */
    {               0,           0 }, /* 0C9A	ಚ	e0 b2 9a	KANNADA LETTER CA */
    {               0,           0 }, /* 0C9B	ಛ	e0 b2 9b	KANNADA LETTER CHA */
    {               0,           0 }, /* 0C9C	ಜ	e0 b2 9c	KANNADA LETTER JA */
    {               0,           0 }, /* 0C9D	ಝ	e0 b2 9d	KANNADA LETTER JHA */
    {               0,           0 }, /* 0C9E	ಞ	e0 b2 9e	KANNADA LETTER NYA */
    {               0,           0 }, /* 0C9F	ಟ	e0 b2 9f	KANNADA LETTER TTA */
    {               0,           0 }, /* 0CA0	ಠ	e0 b2 a0	KANNADA LETTER TTHA */
    {               0,           0 }, /* 0CA1	ಡ	e0 b2 a1	KANNADA LETTER DDA */
    {               0,           0 }, /* 0CA2	ಢ	e0 b2 a2	KANNADA LETTER DDHA */
    {               0,           0 }, /* 0CA3	ಣ	e0 b2 a3	KANNADA LETTER NNA */
    {               0,           0 }, /* 0CA4	ತ	e0 b2 a4	KANNADA LETTER TA */
    {               0,           0 }, /* 0CA5	ಥ	e0 b2 a5	KANNADA LETTER THA */
    {               0,           0 }, /* 0CA6	ದ	e0 b2 a6	KANNADA LETTER DA */
    {               0,           0 }, /* 0CA7	ಧ	e0 b2 a7	KANNADA LETTER DHA */
    {               0,           0 }, /* 0CA8	ನ	e0 b2 a8	KANNADA LETTER NA */
    {               0,           0 }, /* 0CA9	಩	e0 b2 a9	 */
    {               0,           0 }, /* 0CAA	ಪ	e0 b2 aa	KANNADA LETTER PA */
    {               0,           0 }, /* 0CAB	ಫ	e0 b2 ab	KANNADA LETTER PHA */
    {               0,           0 }, /* 0CAC	ಬ	e0 b2 ac	KANNADA LETTER BA */
    {               0,           0 }, /* 0CAD	ಭ	e0 b2 ad	KANNADA LETTER BHA */
    {               0,           0 }, /* 0CAE	ಮ	e0 b2 ae	KANNADA LETTER MA */
    {               0,           0 }, /* 0CAF	ಯ	e0 b2 af	KANNADA LETTER YA */
    {               0,           0 }, /* 0CB0	ರ	e0 b2 b0	KANNADA LETTER RA */
    {               0,           0 }, /* 0CB1	ಱ	e0 b2 b1	KANNADA LETTER RRA */
    {               0,           0 }, /* 0CB2	ಲ	e0 b2 b2	KANNADA LETTER LA */
    {               0,           0 }, /* 0CB3	ಳ	e0 b2 b3	KANNADA LETTER LLA */
    {               0,           0 }, /* 0CB4	಴	e0 b2 b4	 */
    {               0,           0 }, /* 0CB5	ವ	e0 b2 b5	KANNADA LETTER VA */
    {               0,           0 }, /* 0CB6	ಶ	e0 b2 b6	KANNADA LETTER SHA */
    {               0,           0 }, /* 0CB7	ಷ	e0 b2 b7	KANNADA LETTER SSA */
    {               0,           0 }, /* 0CB8	ಸ	e0 b2 b8	KANNADA LETTER SA */
    {               0,           0 }, /* 0CB9	ಹ	e0 b2 b9	KANNADA LETTER HA */
    {               0,           0 }, /* 0CBA	಺	e0 b2 ba	 */
    {               0,           0 }, /* 0CBB	಻	e0 b2 bb	 */
    {               0,           0 }, /* 0CBC	಼	e0 b2 bc	KANNADA SIGN NUKTA */
    {               0,           0 }, /* 0CBD	ಽ	e0 b2 bd	KANNADA SIGN AVAGRAHA */
    {               0,           0 }, /* 0CBE	ಾ	e0 b2 be	KANNADA VOWEL SIGN AA */
    {               0,           0 }, /* 0CBF	ಿ	e0 b2 bf	KANNADA VOWEL SIGN I */
    {               0,           0 }, /* 0CC0	ೀ	e0 b3 80	KANNADA VOWEL SIGN II */
    {               0,           0 }, /* 0CC1	ು	e0 b3 81	KANNADA VOWEL SIGN U */
    {               0,           0 }, /* 0CC2	ೂ	e0 b3 82	KANNADA VOWEL SIGN UU */
    {               0,           0 }, /* 0CC3	ೃ	e0 b3 83	KANNADA VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0CC4	ೄ	e0 b3 84	KANNADA VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0CC5	೅	e0 b3 85	 */
    {               0,           0 }, /* 0CC6	ೆ	e0 b3 86	KANNADA VOWEL SIGN E */
    {               0,           0 }, /* 0CC7	ೇ	e0 b3 87	KANNADA VOWEL SIGN EE */
    {               0,           0 }, /* 0CC8	ೈ	e0 b3 88	KANNADA VOWEL SIGN AI */
    {               0,           0 }, /* 0CC9	೉	e0 b3 89	 */
    {               0,           0 }, /* 0CCA	ೊ	e0 b3 8a	KANNADA VOWEL SIGN O */
    {               0,           0 }, /* 0CCB	ೋ	e0 b3 8b	KANNADA VOWEL SIGN OO */
    {               0,           0 }, /* 0CCC	ೌ	e0 b3 8c	KANNADA VOWEL SIGN AU */
    {               0,           0 }, /* 0CCD	್	e0 b3 8d	KANNADA SIGN VIRAMA */
    {               0,           0 }, /* 0CCE	೎	e0 b3 8e	 */
    {               0,           0 }, /* 0CCF	೏	e0 b3 8f	 */
    {               0,           0 }, /* 0CD0	೐	e0 b3 90	 */
    {               0,           0 }, /* 0CD1	೑	e0 b3 91	 */
    {               0,           0 }, /* 0CD2	೒	e0 b3 92	 */
    {               0,           0 }, /* 0CD3	೓	e0 b3 93	 */
    {               0,           0 }, /* 0CD4	೔	e0 b3 94	 */
    {               0,           0 }, /* 0CD5	ೕ	e0 b3 95	KANNADA LENGTH MARK */
    {               0,           0 }, /* 0CD6	ೖ	e0 b3 96	KANNADA AI LENGTH MARK */
    {               0,           0 }, /* 0CD7	೗	e0 b3 97	 */
    {               0,           0 }, /* 0CD8	೘	e0 b3 98	 */
    {               0,           0 }, /* 0CD9	೙	e0 b3 99	 */
    {               0,           0 }, /* 0CDA	೚	e0 b3 9a	 */
    {               0,           0 }, /* 0CDB	೛	e0 b3 9b	 */
    {               0,           0 }, /* 0CDC	೜	e0 b3 9c	 */
    {               0,           0 }, /* 0CDD	ೝ	e0 b3 9d	 */
    {               0,           0 }, /* 0CDE	ೞ	e0 b3 9e	KANNADA LETTER FA */
    {               0,           0 }, /* 0CDF	೟	e0 b3 9f	 */
    {               0,           0 }, /* 0CE0	ೠ	e0 b3 a0	KANNADA LETTER VOCALIC RR */
    {               0,           0 }, /* 0CE1	ೡ	e0 b3 a1	KANNADA LETTER VOCALIC LL */
    {               0,           0 }, /* 0CE2	ೢ	e0 b3 a2	KANNADA VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0CE3	ೣ	e0 b3 a3	KANNADA VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0CE4	೤	e0 b3 a4	 */
    {               0,           0 }, /* 0CE5	೥	e0 b3 a5	 */
    {               0,           0 }, /* 0CE6	೦	e0 b3 a6	KANNADA DIGIT ZERO */
    {               0,           0 }, /* 0CE7	೧	e0 b3 a7	KANNADA DIGIT ONE */
    {               0,           0 }, /* 0CE8	೨	e0 b3 a8	KANNADA DIGIT TWO */
    {               0,           0 }, /* 0CE9	೩	e0 b3 a9	KANNADA DIGIT THREE */
    {               0,           0 }, /* 0CEA	೪	e0 b3 aa	KANNADA DIGIT FOUR */
    {               0,           0 }, /* 0CEB	೫	e0 b3 ab	KANNADA DIGIT FIVE */
    {               0,           0 }, /* 0CEC	೬	e0 b3 ac	KANNADA DIGIT SIX */
    {               0,           0 }, /* 0CED	೭	e0 b3 ad	KANNADA DIGIT SEVEN */
    {               0,           0 }, /* 0CEE	೮	e0 b3 ae	KANNADA DIGIT EIGHT */
    {               0,           0 }, /* 0CEF	೯	e0 b3 af	KANNADA DIGIT NINE */
    {               0,           0 }, /* 0CF0	೰	e0 b3 b0	 */
    {               0,           0 }, /* 0CF1	ೱ	e0 b3 b1	KANNADA SIGN JIHVAMULIYA */
    {               0,           0 }, /* 0CF2	ೲ	e0 b3 b2	KANNADA SIGN UPADHMANIYA */
    {               0,           0 }, /* 0CF3	ೳ	e0 b3 b3	 */
    {               0,           0 }, /* 0CF4	೴	e0 b3 b4	 */
    {               0,           0 }, /* 0CF5	೵	e0 b3 b5	 */
    {               0,           0 }, /* 0CF6	೶	e0 b3 b6	 */
    {               0,           0 }, /* 0CF7	೷	e0 b3 b7	 */
    {               0,           0 }, /* 0CF8	೸	e0 b3 b8	 */
    {               0,           0 }, /* 0CF9	೹	e0 b3 b9	 */
    {               0,           0 }, /* 0CFA	೺	e0 b3 ba	 */
    {               0,           0 }, /* 0CFB	೻	e0 b3 bb	 */
    {               0,           0 }, /* 0CFC	೼	e0 b3 bc	 */
    {               0,           0 }, /* 0CFD	೽	e0 b3 bd	 */
    {               0,           0 }, /* 0CFE	೾	e0 b3 be	 */
    {               0,           0 }, /* 0CFF	೿	e0 b3 bf */
    {               0,           0 }, /* 0D00	ഀ	e0 b4 80	 */
    {               0,           0 }, /* 0D01	ഁ	e0 b4 81	 */
    {               0,           0 }, /* 0D02	ം	e0 b4 82	MALAYALAM SIGN ANUSVARA */
    {               0,           0 }, /* 0D03	ഃ	e0 b4 83	MALAYALAM SIGN VISARGA */
    {               0,           0 }, /* 0D04	ഄ	e0 b4 84	 */
    {               0,           0 }, /* 0D05	അ	e0 b4 85	MALAYALAM LETTER A */
    {               0,           0 }, /* 0D06	ആ	e0 b4 86	MALAYALAM LETTER AA */
    {               0,           0 }, /* 0D07	ഇ	e0 b4 87	MALAYALAM LETTER I */
    {               0,           0 }, /* 0D08	ഈ	e0 b4 88	MALAYALAM LETTER II */
    {               0,           0 }, /* 0D09	ഉ	e0 b4 89	MALAYALAM LETTER U */
    {               0,           0 }, /* 0D0A	ഊ	e0 b4 8a	MALAYALAM LETTER UU */
    {               0,           0 }, /* 0D0B	ഋ	e0 b4 8b	MALAYALAM LETTER VOCALIC R */
    {               0,           0 }, /* 0D0C	ഌ	e0 b4 8c	MALAYALAM LETTER VOCALIC L */
    {               0,           0 }, /* 0D0D	഍	e0 b4 8d	 */
    {               0,           0 }, /* 0D0E	എ	e0 b4 8e	MALAYALAM LETTER E */
    {               0,           0 }, /* 0D0F	ഏ	e0 b4 8f	MALAYALAM LETTER EE */
    {               0,           0 }, /* 0D10	ഐ	e0 b4 90	MALAYALAM LETTER AI */
    {               0,           0 }, /* 0D11	഑	e0 b4 91	 */
    {               0,           0 }, /* 0D12	ഒ	e0 b4 92	MALAYALAM LETTER O */
    {               0,           0 }, /* 0D13	ഓ	e0 b4 93	MALAYALAM LETTER OO */
    {               0,           0 }, /* 0D14	ഔ	e0 b4 94	MALAYALAM LETTER AU */
    {               0,           0 }, /* 0D15	ക	e0 b4 95	MALAYALAM LETTER KA */
    {               0,           0 }, /* 0D16	ഖ	e0 b4 96	MALAYALAM LETTER KHA */
    {               0,           0 }, /* 0D17	ഗ	e0 b4 97	MALAYALAM LETTER GA */
    {               0,           0 }, /* 0D18	ഘ	e0 b4 98	MALAYALAM LETTER GHA */
    {               0,           0 }, /* 0D19	ങ	e0 b4 99	MALAYALAM LETTER NGA */
    {               0,           0 }, /* 0D1A	ച	e0 b4 9a	MALAYALAM LETTER CA */
    {               0,           0 }, /* 0D1B	ഛ	e0 b4 9b	MALAYALAM LETTER CHA */
    {               0,           0 }, /* 0D1C	ജ	e0 b4 9c	MALAYALAM LETTER JA */
    {               0,           0 }, /* 0D1D	ഝ	e0 b4 9d	MALAYALAM LETTER JHA */
    {               0,           0 }, /* 0D1E	ഞ	e0 b4 9e	MALAYALAM LETTER NYA */
    {               0,           0 }, /* 0D1F	ട	e0 b4 9f	MALAYALAM LETTER TTA */
    {               0,           0 }, /* 0D20	ഠ	e0 b4 a0	MALAYALAM LETTER TTHA */
    {               0,           0 }, /* 0D21	ഡ	e0 b4 a1	MALAYALAM LETTER DDA */
    {               0,           0 }, /* 0D22	ഢ	e0 b4 a2	MALAYALAM LETTER DDHA */
    {               0,           0 }, /* 0D23	ണ	e0 b4 a3	MALAYALAM LETTER NNA */
    {               0,           0 }, /* 0D24	ത	e0 b4 a4	MALAYALAM LETTER TA */
    {               0,           0 }, /* 0D25	ഥ	e0 b4 a5	MALAYALAM LETTER THA */
    {               0,           0 }, /* 0D26	ദ	e0 b4 a6	MALAYALAM LETTER DA */
    {               0,           0 }, /* 0D27	ധ	e0 b4 a7	MALAYALAM LETTER DHA */
    {               0,           0 }, /* 0D28	ന	e0 b4 a8	MALAYALAM LETTER NA */
    {               0,           0 }, /* 0D29	ഩ	e0 b4 a9	 */
    {               0,           0 }, /* 0D2A	പ	e0 b4 aa	MALAYALAM LETTER PA */
    {               0,           0 }, /* 0D2B	ഫ	e0 b4 ab	MALAYALAM LETTER PHA */
    {               0,           0 }, /* 0D2C	ബ	e0 b4 ac	MALAYALAM LETTER BA */
    {               0,           0 }, /* 0D2D	ഭ	e0 b4 ad	MALAYALAM LETTER BHA */
    {               0,           0 }, /* 0D2E	മ	e0 b4 ae	MALAYALAM LETTER MA */
    {               0,           0 }, /* 0D2F	യ	e0 b4 af	MALAYALAM LETTER YA */
    {               0,           0 }, /* 0D30	ര	e0 b4 b0	MALAYALAM LETTER RA */
    {               0,           0 }, /* 0D31	റ	e0 b4 b1	MALAYALAM LETTER RRA */
    {               0,           0 }, /* 0D32	ല	e0 b4 b2	MALAYALAM LETTER LA */
    {               0,           0 }, /* 0D33	ള	e0 b4 b3	MALAYALAM LETTER LLA */
    {               0,           0 }, /* 0D34	ഴ	e0 b4 b4	MALAYALAM LETTER LLLA */
    {               0,           0 }, /* 0D35	വ	e0 b4 b5	MALAYALAM LETTER VA */
    {               0,           0 }, /* 0D36	ശ	e0 b4 b6	MALAYALAM LETTER SHA */
    {               0,           0 }, /* 0D37	ഷ	e0 b4 b7	MALAYALAM LETTER SSA */
    {               0,           0 }, /* 0D38	സ	e0 b4 b8	MALAYALAM LETTER SA */
    {               0,           0 }, /* 0D39	ഹ	e0 b4 b9	MALAYALAM LETTER HA */
    {               0,           0 }, /* 0D3A	ഺ	e0 b4 ba	 */
    {               0,           0 }, /* 0D3B	഻	e0 b4 bb	 */
    {               0,           0 }, /* 0D3C	഼	e0 b4 bc	 */
    {               0,           0 }, /* 0D3D	ഽ	e0 b4 bd	MALAYALAM SIGN AVAGRAHA */
    {               0,           0 }, /* 0D3E	ാ	e0 b4 be	MALAYALAM VOWEL SIGN AA */
    {               0,           0 }, /* 0D3F	ി	e0 b4 bf	MALAYALAM VOWEL SIGN I */
    {               0,           0 }, /* 0D40	ീ	e0 b5 80	MALAYALAM VOWEL SIGN II */
    {               0,           0 }, /* 0D41	ു	e0 b5 81	MALAYALAM VOWEL SIGN U */
    {               0,           0 }, /* 0D42	ൂ	e0 b5 82	MALAYALAM VOWEL SIGN UU */
    {               0,           0 }, /* 0D43	ൃ	e0 b5 83	MALAYALAM VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0D44	ൄ	e0 b5 84	MALAYALAM VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0D45	൅	e0 b5 85	 */
    {               0,           0 }, /* 0D46	െ	e0 b5 86	MALAYALAM VOWEL SIGN E */
    {               0,           0 }, /* 0D47	േ	e0 b5 87	MALAYALAM VOWEL SIGN EE */
    {               0,           0 }, /* 0D48	ൈ	e0 b5 88	MALAYALAM VOWEL SIGN AI */
    {               0,           0 }, /* 0D49	൉	e0 b5 89	 */
    {               0,           0 }, /* 0D4A	ൊ	e0 b5 8a	MALAYALAM VOWEL SIGN O */
    {               0,           0 }, /* 0D4B	ോ	e0 b5 8b	MALAYALAM VOWEL SIGN OO */
    {               0,           0 }, /* 0D4C	ൌ	e0 b5 8c	MALAYALAM VOWEL SIGN AU */
    {               0,           0 }, /* 0D4D	്	e0 b5 8d	MALAYALAM SIGN VIRAMA */
    {               0,           0 }, /* 0D4E	ൎ	e0 b5 8e	 */
    {               0,           0 }, /* 0D4F	൏	e0 b5 8f	 */
    {               0,           0 }, /* 0D50	൐	e0 b5 90	 */
    {               0,           0 }, /* 0D51	൑	e0 b5 91	 */
    {               0,           0 }, /* 0D52	൒	e0 b5 92	 */
    {               0,           0 }, /* 0D53	൓	e0 b5 93	 */
    {               0,           0 }, /* 0D54	ൔ	e0 b5 94	 */
    {               0,           0 }, /* 0D55	ൕ	e0 b5 95	 */
    {               0,           0 }, /* 0D56	ൖ	e0 b5 96	 */
    {               0,           0 }, /* 0D57	ൗ	e0 b5 97	MALAYALAM AU LENGTH MARK */
    {               0,           0 }, /* 0D58	൘	e0 b5 98	 */
    {               0,           0 }, /* 0D59	൙	e0 b5 99	 */
    {               0,           0 }, /* 0D5A	൚	e0 b5 9a	 */
    {               0,           0 }, /* 0D5B	൛	e0 b5 9b	 */
    {               0,           0 }, /* 0D5C	൜	e0 b5 9c	 */
    {               0,           0 }, /* 0D5D	൝	e0 b5 9d	 */
    {               0,           0 }, /* 0D5E	൞	e0 b5 9e	 */
    {               0,           0 }, /* 0D5F	ൟ	e0 b5 9f	 */
    {               0,           0 }, /* 0D60	ൠ	e0 b5 a0	MALAYALAM LETTER VOCALIC RR */
    {               0,           0 }, /* 0D61	ൡ	e0 b5 a1	MALAYALAM LETTER VOCALIC LL */
    {               0,           0 }, /* 0D62	ൢ	e0 b5 a2	MALAYALAM VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0D63	ൣ	e0 b5 a3	MALAYALAM VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0D64	൤	e0 b5 a4	 */
    {               0,           0 }, /* 0D65	൥	e0 b5 a5	 */
    {               0,           0 }, /* 0D66	൦	e0 b5 a6	MALAYALAM DIGIT ZERO */
    {               0,           0 }, /* 0D67	൧	e0 b5 a7	MALAYALAM DIGIT ONE */
    {               0,           0 }, /* 0D68	൨	e0 b5 a8	MALAYALAM DIGIT TWO */
    {               0,           0 }, /* 0D69	൩	e0 b5 a9	MALAYALAM DIGIT THREE */
    {               0,           0 }, /* 0D6A	൪	e0 b5 aa	MALAYALAM DIGIT FOUR */
    {               0,           0 }, /* 0D6B	൫	e0 b5 ab	MALAYALAM DIGIT FIVE */
    {               0,           0 }, /* 0D6C	൬	e0 b5 ac	MALAYALAM DIGIT SIX */
    {               0,           0 }, /* 0D6D	൭	e0 b5 ad	MALAYALAM DIGIT SEVEN */
    {               0,           0 }, /* 0D6E	൮	e0 b5 ae	MALAYALAM DIGIT EIGHT */
    {               0,           0 }, /* 0D6F	൯	e0 b5 af	MALAYALAM DIGIT NINE */
    {               0,           0 }, /* 0D70	൰	e0 b5 b0	MALAYALAM NUMBER TEN */
    {               0,           0 }, /* 0D71	൱	e0 b5 b1	MALAYALAM NUMBER ONE HUNDRED */
    {               0,           0 }, /* 0D72	൲	e0 b5 b2	MALAYALAM NUMBER ONE THOUSAND */
    {               0,           0 }, /* 0D73	൳	e0 b5 b3	MALAYALAM FRACTION ONE QUARTER */
    {               0,           0 }, /* 0D74	൴	e0 b5 b4	MALAYALAM FRACTION ONE HALF */
    {               0,           0 }, /* 0D75	൵	e0 b5 b5	MALAYALAM FRACTION THREE QUARTERS */
    {               0,           0 }, /* 0D76	൶	e0 b5 b6	 */
    {               0,           0 }, /* 0D77	൷	e0 b5 b7	 */
    {               0,           0 }, /* 0D78	൸	e0 b5 b8	 */
    {               0,           0 }, /* 0D79	൹	e0 b5 b9	MALAYALAM DATE MARK */
    {               0,           0 }, /* 0D7A	ൺ	e0 b5 ba	MALAYALAM LETTER CHILLU NN */
    {               0,           0 }, /* 0D7B	ൻ	e0 b5 bb	MALAYALAM LETTER CHILLU N */
    {               0,           0 }, /* 0D7C	ർ	e0 b5 bc	MALAYALAM LETTER CHILLU RR */
    {               0,           0 }, /* 0D7D	ൽ	e0 b5 bd	MALAYALAM LETTER CHILLU L */
    {               0,           0 }, /* 0D7E	ൾ	e0 b5 be	MALAYALAM LETTER CHILLU LL */
    {               0,           0 }, /* 0D7F	ൿ	e0 b5 bf	MALAYALAM LETTER CHILLU K */
    {               0,           0 }, /* 0D80	඀	e0 b6 80	 */
    {               0,           0 }, /* 0D81	ඁ	e0 b6 81	 */
    {               0,           0 }, /* 0D82	ං	e0 b6 82	SINHALA SIGN ANUSVARAYA */
    {               0,           0 }, /* 0D83	ඃ	e0 b6 83	SINHALA SIGN VISARGAYA */
    {               0,           0 }, /* 0D84	඄	e0 b6 84	 */
    {               0,           0 }, /* 0D85	අ	e0 b6 85	SINHALA LETTER AYANNA */
    {               0,           0 }, /* 0D86	ආ	e0 b6 86	SINHALA LETTER AAYANNA */
    {               0,           0 }, /* 0D87	ඇ	e0 b6 87	SINHALA LETTER AEYANNA */
    {               0,           0 }, /* 0D88	ඈ	e0 b6 88	SINHALA LETTER AEEYANNA */
    {               0,           0 }, /* 0D89	ඉ	e0 b6 89	SINHALA LETTER IYANNA */
    {               0,           0 }, /* 0D8A	ඊ	e0 b6 8a	SINHALA LETTER IIYANNA */
    {               0,           0 }, /* 0D8B	උ	e0 b6 8b	SINHALA LETTER UYANNA */
    {               0,           0 }, /* 0D8C	ඌ	e0 b6 8c	SINHALA LETTER UUYANNA */
    {               0,           0 }, /* 0D8D	ඍ	e0 b6 8d	SINHALA LETTER IRUYANNA */
    {               0,           0 }, /* 0D8E	ඎ	e0 b6 8e	SINHALA LETTER IRUUYANNA */
    {               0,           0 }, /* 0D8F	ඏ	e0 b6 8f	SINHALA LETTER ILUYANNA */
    {               0,           0 }, /* 0D90	ඐ	e0 b6 90	SINHALA LETTER ILUUYANNA */
    {               0,           0 }, /* 0D91	එ	e0 b6 91	SINHALA LETTER EYANNA */
    {               0,           0 }, /* 0D92	ඒ	e0 b6 92	SINHALA LETTER EEYANNA */
    {               0,           0 }, /* 0D93	ඓ	e0 b6 93	SINHALA LETTER AIYANNA */
    {               0,           0 }, /* 0D94	ඔ	e0 b6 94	SINHALA LETTER OYANNA */
    {               0,           0 }, /* 0D95	ඕ	e0 b6 95	SINHALA LETTER OOYANNA */
    {               0,           0 }, /* 0D96	ඖ	e0 b6 96	SINHALA LETTER AUYANNA */
    {               0,           0 }, /* 0D97	඗	e0 b6 97	 */
    {               0,           0 }, /* 0D98	඘	e0 b6 98	 */
    {               0,           0 }, /* 0D99	඙	e0 b6 99	 */
    {               0,           0 }, /* 0D9A	ක	e0 b6 9a	SINHALA LETTER ALPAPRAANA KAYANNA */
    {               0,           0 }, /* 0D9B	ඛ	e0 b6 9b	SINHALA LETTER MAHAAPRAANA KAYANNA */
    {               0,           0 }, /* 0D9C	ග	e0 b6 9c	SINHALA LETTER ALPAPRAANA GAYANNA */
    {               0,           0 }, /* 0D9D	ඝ	e0 b6 9d	SINHALA LETTER MAHAAPRAANA GAYANNA */
    {               0,           0 }, /* 0D9E	ඞ	e0 b6 9e	SINHALA LETTER KANTAJA NAASIKYAYA */
    {               0,           0 }, /* 0D9F	ඟ	e0 b6 9f	SINHALA LETTER SANYAKA GAYANNA */
    {               0,           0 }, /* 0DA0	ච	e0 b6 a0	SINHALA LETTER ALPAPRAANA CAYANNA */
    {               0,           0 }, /* 0DA1	ඡ	e0 b6 a1	SINHALA LETTER MAHAAPRAANA CAYANNA */
    {               0,           0 }, /* 0DA2	ජ	e0 b6 a2	SINHALA LETTER ALPAPRAANA JAYANNA */
    {               0,           0 }, /* 0DA3	ඣ	e0 b6 a3	SINHALA LETTER MAHAAPRAANA JAYANNA */
    {               0,           0 }, /* 0DA4	ඤ	e0 b6 a4	SINHALA LETTER TAALUJA NAASIKYAYA */
    {               0,           0 }, /* 0DA5	ඥ	e0 b6 a5	SINHALA LETTER TAALUJA SANYOOGA NAAKSIKYAYA */
    {               0,           0 }, /* 0DA6	ඦ	e0 b6 a6	SINHALA LETTER SANYAKA JAYANNA */
    {               0,           0 }, /* 0DA7	ට	e0 b6 a7	SINHALA LETTER ALPAPRAANA TTAYANNA */
    {               0,           0 }, /* 0DA8	ඨ	e0 b6 a8	SINHALA LETTER MAHAAPRAANA TTAYANNA */
    {               0,           0 }, /* 0DA9	ඩ	e0 b6 a9	SINHALA LETTER ALPAPRAANA DDAYANNA */
    {               0,           0 }, /* 0DAA	ඪ	e0 b6 aa	SINHALA LETTER MAHAAPRAANA DDAYANNA */
    {               0,           0 }, /* 0DAB	ණ	e0 b6 ab	SINHALA LETTER MUURDHAJA NAYANNA */
    {               0,           0 }, /* 0DAC	ඬ	e0 b6 ac	SINHALA LETTER SANYAKA DDAYANNA */
    {               0,           0 }, /* 0DAD	ත	e0 b6 ad	SINHALA LETTER ALPAPRAANA TAYANNA */
    {               0,           0 }, /* 0DAE	ථ	e0 b6 ae	SINHALA LETTER MAHAAPRAANA TAYANNA */
    {               0,           0 }, /* 0DAF	ද	e0 b6 af	SINHALA LETTER ALPAPRAANA DAYANNA */
    {               0,           0 }, /* 0DB0	ධ	e0 b6 b0	SINHALA LETTER MAHAAPRAANA DAYANNA */
    {               0,           0 }, /* 0DB1	න	e0 b6 b1	SINHALA LETTER DANTAJA NAYANNA */
    {               0,           0 }, /* 0DB2	඲	e0 b6 b2	 */
    {               0,           0 }, /* 0DB3	ඳ	e0 b6 b3	SINHALA LETTER SANYAKA DAYANNA */
    {               0,           0 }, /* 0DB4	ප	e0 b6 b4	SINHALA LETTER ALPAPRAANA PAYANNA */
    {               0,           0 }, /* 0DB5	ඵ	e0 b6 b5	SINHALA LETTER MAHAAPRAANA PAYANNA */
    {               0,           0 }, /* 0DB6	බ	e0 b6 b6	SINHALA LETTER ALPAPRAANA BAYANNA */
    {               0,           0 }, /* 0DB7	භ	e0 b6 b7	SINHALA LETTER MAHAAPRAANA BAYANNA */
    {               0,           0 }, /* 0DB8	ම	e0 b6 b8	SINHALA LETTER MAYANNA */
    {               0,           0 }, /* 0DB9	ඹ	e0 b6 b9	SINHALA LETTER AMBA BAYANNA */
    {               0,           0 }, /* 0DBA	ය	e0 b6 ba	SINHALA LETTER YAYANNA */
    {               0,           0 }, /* 0DBB	ර	e0 b6 bb	SINHALA LETTER RAYANNA */
    {               0,           0 }, /* 0DBC	඼	e0 b6 bc	 */
    {               0,           0 }, /* 0DBD	ල	e0 b6 bd	SINHALA LETTER DANTAJA LAYANNA */
    {               0,           0 }, /* 0DBE	඾	e0 b6 be	 */
    {               0,           0 }, /* 0DBF	඿	e0 b6 bf	 */
    {               0,           0 }, /* 0DC0	ව	e0 b7 80	SINHALA LETTER VAYANNA */
    {               0,           0 }, /* 0DC1	ශ	e0 b7 81	SINHALA LETTER TAALUJA SAYANNA */
    {               0,           0 }, /* 0DC2	ෂ	e0 b7 82	SINHALA LETTER MUURDHAJA SAYANNA */
    {               0,           0 }, /* 0DC3	ස	e0 b7 83	SINHALA LETTER DANTAJA SAYANNA */
    {               0,           0 }, /* 0DC4	හ	e0 b7 84	SINHALA LETTER HAYANNA */
    {               0,           0 }, /* 0DC5	ළ	e0 b7 85	SINHALA LETTER MUURDHAJA LAYANNA */
    {               0,           0 }, /* 0DC6	ෆ	e0 b7 86	SINHALA LETTER FAYANNA */
    {               0,           0 }, /* 0DC7	෇	e0 b7 87	 */
    {               0,           0 }, /* 0DC8	෈	e0 b7 88	 */
    {               0,           0 }, /* 0DC9	෉	e0 b7 89	 */
    {               0,           0 }, /* 0DCA	්	e0 b7 8a	SINHALA SIGN AL-LAKUNA */
    {               0,           0 }, /* 0DCB	෋	e0 b7 8b	 */
    {               0,           0 }, /* 0DCC	෌	e0 b7 8c	 */
    {               0,           0 }, /* 0DCD	෍	e0 b7 8d	 */
    {               0,           0 }, /* 0DCE	෎	e0 b7 8e	 */
    {               0,           0 }, /* 0DCF	ා	e0 b7 8f	SINHALA VOWEL SIGN AELA-PILLA */
    {               0,           0 }, /* 0DD0	ැ	e0 b7 90	SINHALA VOWEL SIGN KETTI AEDA-PILLA */
    {               0,           0 }, /* 0DD1	ෑ	e0 b7 91	SINHALA VOWEL SIGN DIGA AEDA-PILLA */
    {               0,           0 }, /* 0DD2	ි	e0 b7 92	SINHALA VOWEL SIGN KETTI IS-PILLA */
    {               0,           0 }, /* 0DD3	ී	e0 b7 93	SINHALA VOWEL SIGN DIGA IS-PILLA */
    {               0,           0 }, /* 0DD4	ු	e0 b7 94	SINHALA VOWEL SIGN KETTI PAA-PILLA */
    {               0,           0 }, /* 0DD5	෕	e0 b7 95	 */
    {               0,           0 }, /* 0DD6	ූ	e0 b7 96	SINHALA VOWEL SIGN DIGA PAA-PILLA */
    {               0,           0 }, /* 0DD7	෗	e0 b7 97	 */
    {               0,           0 }, /* 0DD8	ෘ	e0 b7 98	SINHALA VOWEL SIGN GAETTA-PILLA */
    {               0,           0 }, /* 0DD9	ෙ	e0 b7 99	SINHALA VOWEL SIGN KOMBUVA */
    {               0,           0 }, /* 0DDA	ේ	e0 b7 9a	SINHALA VOWEL SIGN DIGA KOMBUVA */
    {               0,           0 }, /* 0DDB	ෛ	e0 b7 9b	SINHALA VOWEL SIGN KOMBU DEKA */
    {               0,           0 }, /* 0DDC	ො	e0 b7 9c	SINHALA VOWEL SIGN KOMBUVA HAA AELA-PILLA */
    {               0,           0 }, /* 0DDD	ෝ	e0 b7 9d	SINHALA VOWEL SIGN KOMBUVA HAA DIGA AELA-PILLA */
    {               0,           0 }, /* 0DDE	ෞ	e0 b7 9e	SINHALA VOWEL SIGN KOMBUVA HAA GAYANUKITTA */
    {               0,           0 }, /* 0DDF	ෟ	e0 b7 9f	SINHALA VOWEL SIGN GAYANUKITTA */
    {               0,           0 }, /* 0DE0	෠	e0 b7 a0	 */
    {               0,           0 }, /* 0DE1	෡	e0 b7 a1	 */
    {               0,           0 }, /* 0DE2	෢	e0 b7 a2	 */
    {               0,           0 }, /* 0DE3	෣	e0 b7 a3	 */
    {               0,           0 }, /* 0DE4	෤	e0 b7 a4	 */
    {               0,           0 }, /* 0DE5	෥	e0 b7 a5	 */
    {               0,           0 }, /* 0DE6	෦	e0 b7 a6	 */
    {               0,           0 }, /* 0DE7	෧	e0 b7 a7	 */
    {               0,           0 }, /* 0DE8	෨	e0 b7 a8	 */
    {               0,           0 }, /* 0DE9	෩	e0 b7 a9	 */
    {               0,           0 }, /* 0DEA	෪	e0 b7 aa	 */
    {               0,           0 }, /* 0DEB	෫	e0 b7 ab	 */
    {               0,           0 }, /* 0DEC	෬	e0 b7 ac	 */
    {               0,           0 }, /* 0DED	෭	e0 b7 ad	 */
    {               0,           0 }, /* 0DEE	෮	e0 b7 ae	 */
    {               0,           0 }, /* 0DEF	෯	e0 b7 af	 */
    {               0,           0 }, /* 0DF0	෰	e0 b7 b0	 */
    {               0,           0 }, /* 0DF1	෱	e0 b7 b1	 */
    {               0,           0 }, /* 0DF2	ෲ	e0 b7 b2	SINHALA VOWEL SIGN DIGA GAETTA-PILLA */
    {               0,           0 }, /* 0DF3	ෳ	e0 b7 b3	SINHALA VOWEL SIGN DIGA GAYANUKITTA */
    {               0,           0 }, /* 0DF4	෴	e0 b7 b4	SINHALA PUNCTUATION KUNDDALIYA */
    {               0,           0 }, /* 0DF5	෵	e0 b7 b5	 */
    {               0,           0 }, /* 0DF6	෶	e0 b7 b6	 */
    {               0,           0 }, /* 0DF7	෷	e0 b7 b7	 */
    {               0,           0 }, /* 0DF8	෸	e0 b7 b8	 */
    {               0,           0 }, /* 0DF9	෹	e0 b7 b9	 */
    {               0,           0 }, /* 0DFA	෺	e0 b7 ba	 */
    {               0,           0 }, /* 0DFB	෻	e0 b7 bb	 */
    {               0,           0 }, /* 0DFC	෼	e0 b7 bc	 */
    {               0,           0 }, /* 0DFD	෽	e0 b7 bd	 */
    {               0,           0 }, /* 0DFE	෾	e0 b7 be	 */
    {               0,           0 }, /* 0DFF	෿	e0 b7 bf */
    {               0,           0 }, /* 0E00	฀	e0 b8 80	 */
    {               0,           0 }, /* 0E01	ก	e0 b8 81	THAI CHARACTER KO KAI */
    {               0,           0 }, /* 0E02	ข	e0 b8 82	THAI CHARACTER KHO KHAI */
    {               0,           0 }, /* 0E03	ฃ	e0 b8 83	THAI CHARACTER KHO KHUAT */
    {               0,           0 }, /* 0E04	ค	e0 b8 84	THAI CHARACTER KHO KHWAI */
    {               0,           0 }, /* 0E05	ฅ	e0 b8 85	THAI CHARACTER KHO KHON */
    {               0,           0 }, /* 0E06	ฆ	e0 b8 86	THAI CHARACTER KHO RAKHANG */
    {               0,           0 }, /* 0E07	ง	e0 b8 87	THAI CHARACTER NGO NGU */
    {               0,           0 }, /* 0E08	จ	e0 b8 88	THAI CHARACTER CHO CHAN */
    {               0,           0 }, /* 0E09	ฉ	e0 b8 89	THAI CHARACTER CHO CHING */
    {               0,           0 }, /* 0E0A	ช	e0 b8 8a	THAI CHARACTER CHO CHANG */
    {               0,           0 }, /* 0E0B	ซ	e0 b8 8b	THAI CHARACTER SO SO */
    {               0,           0 }, /* 0E0C	ฌ	e0 b8 8c	THAI CHARACTER CHO CHOE */
    {               0,           0 }, /* 0E0D	ญ	e0 b8 8d	THAI CHARACTER YO YING */
    {               0,           0 }, /* 0E0E	ฎ	e0 b8 8e	THAI CHARACTER DO CHADA */
    {               0,           0 }, /* 0E0F	ฏ	e0 b8 8f	THAI CHARACTER TO PATAK */
    {               0,           0 }, /* 0E10	ฐ	e0 b8 90	THAI CHARACTER THO THAN */
    {               0,           0 }, /* 0E11	ฑ	e0 b8 91	THAI CHARACTER THO NANGMONTHO */
    {               0,           0 }, /* 0E12	ฒ	e0 b8 92	THAI CHARACTER THO PHUTHAO */
    {               0,           0 }, /* 0E13	ณ	e0 b8 93	THAI CHARACTER NO NEN */
    {               0,           0 }, /* 0E14	ด	e0 b8 94	THAI CHARACTER DO DEK */
    {               0,           0 }, /* 0E15	ต	e0 b8 95	THAI CHARACTER TO TAO */
    {               0,           0 }, /* 0E16	ถ	e0 b8 96	THAI CHARACTER THO THUNG */
    {               0,           0 }, /* 0E17	ท	e0 b8 97	THAI CHARACTER THO THAHAN */
    {               0,           0 }, /* 0E18	ธ	e0 b8 98	THAI CHARACTER THO THONG */
    {               0,           0 }, /* 0E19	น	e0 b8 99	THAI CHARACTER NO NU */
    {               0,           0 }, /* 0E1A	บ	e0 b8 9a	THAI CHARACTER BO BAIMAI */
    {               0,           0 }, /* 0E1B	ป	e0 b8 9b	THAI CHARACTER PO PLA */
    {               0,           0 }, /* 0E1C	ผ	e0 b8 9c	THAI CHARACTER PHO PHUNG */
    {               0,           0 }, /* 0E1D	ฝ	e0 b8 9d	THAI CHARACTER FO FA */
    {               0,           0 }, /* 0E1E	พ	e0 b8 9e	THAI CHARACTER PHO PHAN */
    {               0,           0 }, /* 0E1F	ฟ	e0 b8 9f	THAI CHARACTER FO FAN */
    {               0,           0 }, /* 0E20	ภ	e0 b8 a0	THAI CHARACTER PHO SAMPHAO */
    {               0,           0 }, /* 0E21	ม	e0 b8 a1	THAI CHARACTER MO MA */
    {               0,           0 }, /* 0E22	ย	e0 b8 a2	THAI CHARACTER YO YAK */
    {               0,           0 }, /* 0E23	ร	e0 b8 a3	THAI CHARACTER RO RUA */
    {               0,           0 }, /* 0E24	ฤ	e0 b8 a4	THAI CHARACTER RU */
    {               0,           0 }, /* 0E25	ล	e0 b8 a5	THAI CHARACTER LO LING */
    {               0,           0 }, /* 0E26	ฦ	e0 b8 a6	THAI CHARACTER LU */
    {               0,           0 }, /* 0E27	ว	e0 b8 a7	THAI CHARACTER WO WAEN */
    {               0,           0 }, /* 0E28	ศ	e0 b8 a8	THAI CHARACTER SO SALA */
    {               0,           0 }, /* 0E29	ษ	e0 b8 a9	THAI CHARACTER SO RUSI */
    {               0,           0 }, /* 0E2A	ส	e0 b8 aa	THAI CHARACTER SO SUA */
    {               0,           0 }, /* 0E2B	ห	e0 b8 ab	THAI CHARACTER HO HIP */
    {               0,           0 }, /* 0E2C	ฬ	e0 b8 ac	THAI CHARACTER LO CHULA */
    {               0,           0 }, /* 0E2D	อ	e0 b8 ad	THAI CHARACTER O ANG */
    {               0,           0 }, /* 0E2E	ฮ	e0 b8 ae	THAI CHARACTER HO NOKHUK */
    {               0,           0 }, /* 0E2F	ฯ	e0 b8 af	THAI CHARACTER PAIYANNOI */
    {               0,           0 }, /* 0E30	ะ	e0 b8 b0	THAI CHARACTER SARA A */
    {               0,           0 }, /* 0E31	ั	e0 b8 b1	THAI CHARACTER MAI HAN-AKAT */
    {               0,           0 }, /* 0E32	า	e0 b8 b2	THAI CHARACTER SARA AA */
    {               0,           0 }, /* 0E33	ำ	e0 b8 b3	THAI CHARACTER SARA AM */
    {               0,           0 }, /* 0E34	ิ	e0 b8 b4	THAI CHARACTER SARA I */
    {               0,           0 }, /* 0E35	ี	e0 b8 b5	THAI CHARACTER SARA II */
    {               0,           0 }, /* 0E36	ึ	e0 b8 b6	THAI CHARACTER SARA UE */
    {               0,           0 }, /* 0E37	ื	e0 b8 b7	THAI CHARACTER SARA UEE */
    {               0,           0 }, /* 0E38	ุ	e0 b8 b8	THAI CHARACTER SARA U */
    {               0,           0 }, /* 0E39	ู	e0 b8 b9	THAI CHARACTER SARA UU */
    {               0,           0 }, /* 0E3A	ฺ	e0 b8 ba	THAI CHARACTER PHINTHU */
    {               0,           0 }, /* 0E3B	฻	e0 b8 bb	 */
    {               0,           0 }, /* 0E3C	฼	e0 b8 bc	 */
    {               0,           0 }, /* 0E3D	฽	e0 b8 bd	 */
    {               0,           0 }, /* 0E3E	฾	e0 b8 be	 */
    {               0,           0 }, /* 0E3F	฿	e0 b8 bf	THAI CURRENCY SYMBOL BAHT */
    {               0,           0 }, /* 0E40	เ	e0 b9 80	THAI CHARACTER SARA E */
    {               0,           0 }, /* 0E41	แ	e0 b9 81	THAI CHARACTER SARA AE */
    {               0,           0 }, /* 0E42	โ	e0 b9 82	THAI CHARACTER SARA O */
    {               0,           0 }, /* 0E43	ใ	e0 b9 83	THAI CHARACTER SARA AI MAIMUAN */
    {               0,           0 }, /* 0E44	ไ	e0 b9 84	THAI CHARACTER SARA AI MAIMALAI */
    {               0,           0 }, /* 0E45	ๅ	e0 b9 85	THAI CHARACTER LAKKHANGYAO */
    {               0,           0 }, /* 0E46	ๆ	e0 b9 86	THAI CHARACTER MAIYAMOK */
    {               0,           0 }, /* 0E47	็	e0 b9 87	THAI CHARACTER MAITAIKHU */
    {               0,           0 }, /* 0E48	่	e0 b9 88	THAI CHARACTER MAI EK */
    {               0,           0 }, /* 0E49	้	e0 b9 89	THAI CHARACTER MAI THO */
    {               0,           0 }, /* 0E4A	๊	e0 b9 8a	THAI CHARACTER MAI TRI */
    {               0,           0 }, /* 0E4B	๋	e0 b9 8b	THAI CHARACTER MAI CHATTAWA */
    {               0,           0 }, /* 0E4C	์	e0 b9 8c	THAI CHARACTER THANTHAKHAT */
    {               0,           0 }, /* 0E4D	ํ	e0 b9 8d	THAI CHARACTER NIKHAHIT */
    {               0,           0 }, /* 0E4E	๎	e0 b9 8e	THAI CHARACTER YAMAKKAN */
    {               0,           0 }, /* 0E4F	๏	e0 b9 8f	THAI CHARACTER FONGMAN */
    {               0,           0 }, /* 0E50	๐	e0 b9 90	THAI DIGIT ZERO */
    {               0,           0 }, /* 0E51	๑	e0 b9 91	THAI DIGIT ONE */
    {               0,           0 }, /* 0E52	๒	e0 b9 92	THAI DIGIT TWO */
    {               0,           0 }, /* 0E53	๓	e0 b9 93	THAI DIGIT THREE */
    {               0,           0 }, /* 0E54	๔	e0 b9 94	THAI DIGIT FOUR */
    {               0,           0 }, /* 0E55	๕	e0 b9 95	THAI DIGIT FIVE */
    {               0,           0 }, /* 0E56	๖	e0 b9 96	THAI DIGIT SIX */
    {               0,           0 }, /* 0E57	๗	e0 b9 97	THAI DIGIT SEVEN */
    {               0,           0 }, /* 0E58	๘	e0 b9 98	THAI DIGIT EIGHT */
    {               0,           0 }, /* 0E59	๙	e0 b9 99	THAI DIGIT NINE */
    {               0,           0 }, /* 0E5A	๚	e0 b9 9a	THAI CHARACTER ANGKHANKHU */
    {               0,           0 }, /* 0E5B	๛	e0 b9 9b	THAI CHARACTER KHOMUT */
    {               0,           0 }, /* 0E5C	๜	e0 b9 9c	 */
    {               0,           0 }, /* 0E5D	๝	e0 b9 9d	 */
    {               0,           0 }, /* 0E5E	๞	e0 b9 9e	 */
    {               0,           0 }, /* 0E5F	๟	e0 b9 9f	 */
    {               0,           0 }, /* 0E60	๠	e0 b9 a0	 */
    {               0,           0 }, /* 0E61	๡	e0 b9 a1	 */
    {               0,           0 }, /* 0E62	๢	e0 b9 a2	 */
    {               0,           0 }, /* 0E63	๣	e0 b9 a3	 */
    {               0,           0 }, /* 0E64	๤	e0 b9 a4	 */
    {               0,           0 }, /* 0E65	๥	e0 b9 a5	 */
    {               0,           0 }, /* 0E66	๦	e0 b9 a6	 */
    {               0,           0 }, /* 0E67	๧	e0 b9 a7	 */
    {               0,           0 }, /* 0E68	๨	e0 b9 a8	 */
    {               0,           0 }, /* 0E69	๩	e0 b9 a9	 */
    {               0,           0 }, /* 0E6A	๪	e0 b9 aa	 */
    {               0,           0 }, /* 0E6B	๫	e0 b9 ab	 */
    {               0,           0 }, /* 0E6C	๬	e0 b9 ac	 */
    {               0,           0 }, /* 0E6D	๭	e0 b9 ad	 */
    {               0,           0 }, /* 0E6E	๮	e0 b9 ae	 */
    {               0,           0 }, /* 0E6F	๯	e0 b9 af	 */
    {               0,           0 }, /* 0E70	๰	e0 b9 b0	 */
    {               0,           0 }, /* 0E71	๱	e0 b9 b1	 */
    {               0,           0 }, /* 0E72	๲	e0 b9 b2	 */
    {               0,           0 }, /* 0E73	๳	e0 b9 b3	 */
    {               0,           0 }, /* 0E74	๴	e0 b9 b4	 */
    {               0,           0 }, /* 0E75	๵	e0 b9 b5	 */
    {               0,           0 }, /* 0E76	๶	e0 b9 b6	 */
    {               0,           0 }, /* 0E77	๷	e0 b9 b7	 */
    {               0,           0 }, /* 0E78	๸	e0 b9 b8	 */
    {               0,           0 }, /* 0E79	๹	e0 b9 b9	 */
    {               0,           0 }, /* 0E7A	๺	e0 b9 ba	 */
    {               0,           0 }, /* 0E7B	๻	e0 b9 bb	 */
    {               0,           0 }, /* 0E7C	๼	e0 b9 bc	 */
    {               0,           0 }, /* 0E7D	๽	e0 b9 bd	 */
    {               0,           0 }, /* 0E7E	๾	e0 b9 be	 */
    {               0,           0 }, /* 0E7F	๿	e0 b9 bf	 */
    {               0,           0 }, /* 0E80	຀	e0 ba 80	 */
    {               0,           0 }, /* 0E81	ກ	e0 ba 81	LAO LETTER KO */
    {               0,           0 }, /* 0E82	ຂ	e0 ba 82	LAO LETTER KHO SUNG */
    {               0,           0 }, /* 0E83	຃	e0 ba 83	 */
    {               0,           0 }, /* 0E84	ຄ	e0 ba 84	LAO LETTER KHO TAM */
    {               0,           0 }, /* 0E85	຅	e0 ba 85	 */
    {               0,           0 }, /* 0E86	ຆ	e0 ba 86	 */
    {               0,           0 }, /* 0E87	ງ	e0 ba 87	LAO LETTER NGO */
    {               0,           0 }, /* 0E88	ຈ	e0 ba 88	LAO LETTER CO */
    {               0,           0 }, /* 0E89	ຉ	e0 ba 89	 */
    {               0,           0 }, /* 0E8A	ຊ	e0 ba 8a	LAO LETTER SO TAM */
    {               0,           0 }, /* 0E8B	຋	e0 ba 8b	 */
    {               0,           0 }, /* 0E8C	ຌ	e0 ba 8c	 */
    {               0,           0 }, /* 0E8D	ຍ	e0 ba 8d	LAO LETTER NYO */
    {               0,           0 }, /* 0E8E	ຎ	e0 ba 8e	 */
    {               0,           0 }, /* 0E8F	ຏ	e0 ba 8f	 */
    {               0,           0 }, /* 0E90	ຐ	e0 ba 90	 */
    {               0,           0 }, /* 0E91	ຑ	e0 ba 91	 */
    {               0,           0 }, /* 0E92	ຒ	e0 ba 92	 */
    {               0,           0 }, /* 0E93	ຓ	e0 ba 93	 */
    {               0,           0 }, /* 0E94	ດ	e0 ba 94	LAO LETTER DO */
    {               0,           0 }, /* 0E95	ຕ	e0 ba 95	LAO LETTER TO */
    {               0,           0 }, /* 0E96	ຖ	e0 ba 96	LAO LETTER THO SUNG */
    {               0,           0 }, /* 0E97	ທ	e0 ba 97	LAO LETTER THO TAM */
    {               0,           0 }, /* 0E98	ຘ	e0 ba 98	 */
    {               0,           0 }, /* 0E99	ນ	e0 ba 99	LAO LETTER NO */
    {               0,           0 }, /* 0E9A	ບ	e0 ba 9a	LAO LETTER BO */
    {               0,           0 }, /* 0E9B	ປ	e0 ba 9b	LAO LETTER PO */
    {               0,           0 }, /* 0E9C	ຜ	e0 ba 9c	LAO LETTER PHO SUNG */
    {               0,           0 }, /* 0E9D	ຝ	e0 ba 9d	LAO LETTER FO TAM */
    {               0,           0 }, /* 0E9E	ພ	e0 ba 9e	LAO LETTER PHO TAM */
    {               0,           0 }, /* 0E9F	ຟ	e0 ba 9f	LAO LETTER FO SUNG */
    {               0,           0 }, /* 0EA0	ຠ	e0 ba a0	 */
    {               0,           0 }, /* 0EA1	ມ	e0 ba a1	LAO LETTER MO */
    {               0,           0 }, /* 0EA2	ຢ	e0 ba a2	LAO LETTER YO */
    {               0,           0 }, /* 0EA3	ຣ	e0 ba a3	LAO LETTER LO LING */
    {               0,           0 }, /* 0EA4	຤	e0 ba a4	 */
    {               0,           0 }, /* 0EA5	ລ	e0 ba a5	LAO LETTER LO LOOT */
    {               0,           0 }, /* 0EA6	຦	e0 ba a6	 */
    {               0,           0 }, /* 0EA7	ວ	e0 ba a7	LAO LETTER WO */
    {               0,           0 }, /* 0EA8	ຨ	e0 ba a8	 */
    {               0,           0 }, /* 0EA9	ຩ	e0 ba a9	 */
    {               0,           0 }, /* 0EAA	ສ	e0 ba aa	LAO LETTER SO SUNG */
    {               0,           0 }, /* 0EAB	ຫ	e0 ba ab	LAO LETTER HO SUNG */
    {               0,           0 }, /* 0EAC	ຬ	e0 ba ac	 */
    {               0,           0 }, /* 0EAD	ອ	e0 ba ad	LAO LETTER O */
    {               0,           0 }, /* 0EAE	ຮ	e0 ba ae	LAO LETTER HO TAM */
    {               0,           0 }, /* 0EAF	ຯ	e0 ba af	LAO ELLIPSIS */
    {               0,           0 }, /* 0EB0	ະ	e0 ba b0	LAO VOWEL SIGN A */
    {               0,           0 }, /* 0EB1	ັ	e0 ba b1	LAO VOWEL SIGN MAI KAN */
    {               0,           0 }, /* 0EB2	າ	e0 ba b2	LAO VOWEL SIGN AA */
    {               0,           0 }, /* 0EB3	ຳ	e0 ba b3	LAO VOWEL SIGN AM */
    {               0,           0 }, /* 0EB4	ິ	e0 ba b4	LAO VOWEL SIGN I */
    {               0,           0 }, /* 0EB5	ີ	e0 ba b5	LAO VOWEL SIGN II */
    {               0,           0 }, /* 0EB6	ຶ	e0 ba b6	LAO VOWEL SIGN Y */
    {               0,           0 }, /* 0EB7	ື	e0 ba b7	LAO VOWEL SIGN YY */
    {               0,           0 }, /* 0EB8	ຸ	e0 ba b8	LAO VOWEL SIGN U */
    {               0,           0 }, /* 0EB9	ູ	e0 ba b9	LAO VOWEL SIGN UU */
    {               0,           0 }, /* 0EBA	຺	e0 ba ba	 */
    {               0,           0 }, /* 0EBB	ົ	e0 ba bb	LAO VOWEL SIGN MAI KON */
    {               0,           0 }, /* 0EBC	ຼ	e0 ba bc	LAO SEMIVOWEL SIGN LO */
    {               0,           0 }, /* 0EBD	ຽ	e0 ba bd	LAO SEMIVOWEL SIGN NYO */
    {               0,           0 }, /* 0EBE	຾	e0 ba be	 */
    {               0,           0 }, /* 0EBF	຿	e0 ba bf	 */
    {               0,           0 }, /* 0EC0	ເ	e0 bb 80	LAO VOWEL SIGN E */
    {               0,           0 }, /* 0EC1	ແ	e0 bb 81	LAO VOWEL SIGN EI */
    {               0,           0 }, /* 0EC2	ໂ	e0 bb 82	LAO VOWEL SIGN O */
    {               0,           0 }, /* 0EC3	ໃ	e0 bb 83	LAO VOWEL SIGN AY */
    {               0,           0 }, /* 0EC4	ໄ	e0 bb 84	LAO VOWEL SIGN AI */
    {               0,           0 }, /* 0EC5	໅	e0 bb 85	 */
    {               0,           0 }, /* 0EC6	ໆ	e0 bb 86	LAO KO LA */
    {               0,           0 }, /* 0EC7	໇	e0 bb 87	 */
    {               0,           0 }, /* 0EC8	່	e0 bb 88	LAO TONE MAI EK */
    {               0,           0 }, /* 0EC9	້	e0 bb 89	LAO TONE MAI THO */
    {               0,           0 }, /* 0ECA	໊	e0 bb 8a	LAO TONE MAI TI */
    {               0,           0 }, /* 0ECB	໋	e0 bb 8b	LAO TONE MAI CATAWA */
    {               0,           0 }, /* 0ECC	໌	e0 bb 8c	LAO CANCELLATION MARK */
    {               0,           0 }, /* 0ECD	ໍ	e0 bb 8d	LAO NIGGAHITA */
    {               0,           0 }, /* 0ECE	໎	e0 bb 8e	 */
    {               0,           0 }, /* 0ECF	໏	e0 bb 8f	 */
    {               0,           0 }, /* 0ED0	໐	e0 bb 90	LAO DIGIT ZERO */
    {               0,           0 }, /* 0ED1	໑	e0 bb 91	LAO DIGIT ONE */
    {               0,           0 }, /* 0ED2	໒	e0 bb 92	LAO DIGIT TWO */
    {               0,           0 }, /* 0ED3	໓	e0 bb 93	LAO DIGIT THREE */
    {               0,           0 }, /* 0ED4	໔	e0 bb 94	LAO DIGIT FOUR */
    {               0,           0 }, /* 0ED5	໕	e0 bb 95	LAO DIGIT FIVE */
    {               0,           0 }, /* 0ED6	໖	e0 bb 96	LAO DIGIT SIX */
    {               0,           0 }, /* 0ED7	໗	e0 bb 97	LAO DIGIT SEVEN */
    {               0,           0 }, /* 0ED8	໘	e0 bb 98	LAO DIGIT EIGHT */
    {               0,           0 }, /* 0ED9	໙	e0 bb 99	LAO DIGIT NINE */
    {               0,           0 }, /* 0EDA	໚	e0 bb 9a	 */
    {               0,           0 }, /* 0EDB	໛	e0 bb 9b	 */
    {               0,           0 }, /* 0EDC	ໜ	e0 bb 9c	LAO HO NO */
    {               0,           0 }, /* 0EDD	ໝ	e0 bb 9d	LAO HO MO */
    {               0,           0 }, /* 0EDE	ໞ	e0 bb 9e	 */
    {               0,           0 }, /* 0EDF	ໟ	e0 bb 9f	 */
    {               0,           0 }, /* 0EE0	໠	e0 bb a0	 */
    {               0,           0 }, /* 0EE1	໡	e0 bb a1	 */
    {               0,           0 }, /* 0EE2	໢	e0 bb a2	 */
    {               0,           0 }, /* 0EE3	໣	e0 bb a3	 */
    {               0,           0 }, /* 0EE4	໤	e0 bb a4	 */
    {               0,           0 }, /* 0EE5	໥	e0 bb a5	 */
    {               0,           0 }, /* 0EE6	໦	e0 bb a6	 */
    {               0,           0 }, /* 0EE7	໧	e0 bb a7	 */
    {               0,           0 }, /* 0EE8	໨	e0 bb a8	 */
    {               0,           0 }, /* 0EE9	໩	e0 bb a9	 */
    {               0,           0 }, /* 0EEA	໪	e0 bb aa	 */
    {               0,           0 }, /* 0EEB	໫	e0 bb ab	 */
    {               0,           0 }, /* 0EEC	໬	e0 bb ac	 */
    {               0,           0 }, /* 0EED	໭	e0 bb ad	 */
    {               0,           0 }, /* 0EEE	໮	e0 bb ae	 */
    {               0,           0 }, /* 0EEF	໯	e0 bb af	 */
    {               0,           0 }, /* 0EF0	໰	e0 bb b0	 */
    {               0,           0 }, /* 0EF1	໱	e0 bb b1	 */
    {               0,           0 }, /* 0EF2	໲	e0 bb b2	 */
    {               0,           0 }, /* 0EF3	໳	e0 bb b3	 */
    {               0,           0 }, /* 0EF4	໴	e0 bb b4	 */
    {               0,           0 }, /* 0EF5	໵	e0 bb b5	 */
    {               0,           0 }, /* 0EF6	໶	e0 bb b6	 */
    {               0,           0 }, /* 0EF7	໷	e0 bb b7	 */
    {               0,           0 }, /* 0EF8	໸	e0 bb b8	 */
    {               0,           0 }, /* 0EF9	໹	e0 bb b9	 */
    {               0,           0 }, /* 0EFA	໺	e0 bb ba	 */
    {               0,           0 }, /* 0EFB	໻	e0 bb bb	 */
    {               0,           0 }, /* 0EFC	໼	e0 bb bc	 */
    {               0,           0 }, /* 0EFD	໽	e0 bb bd	 */
    {               0,           0 }, /* 0EFE	໾	e0 bb be	 */
    {               0,           0 }, /* 0EFF	໿	e0 bb bf */
    {               0,           0 }, /* 0F00	ༀ	e0 bc 80	TIBETAN SYLLABLE OM */
    {               0,           0 }, /* 0F01	༁	e0 bc 81	TIBETAN MARK GTER YIG MGO TRUNCATED A */
    {               0,           0 }, /* 0F02	༂	e0 bc 82	TIBETAN MARK GTER YIG MGO -UM RNAM BCAD MA */
    {               0,           0 }, /* 0F03	༃	e0 bc 83	TIBETAN MARK GTER YIG MGO -UM GTER TSHEG MA */
    {               0,           0 }, /* 0F04	༄	e0 bc 84	TIBETAN MARK INITIAL YIG MGO MDUN MA */
    {               0,           0 }, /* 0F05	༅	e0 bc 85	TIBETAN MARK CLOSING YIG MGO SGAB MA */
    {               0,           0 }, /* 0F06	༆	e0 bc 86	TIBETAN MARK CARET YIG MGO PHUR SHAD MA */
    {               0,           0 }, /* 0F07	༇	e0 bc 87	TIBETAN MARK YIG MGO TSHEG SHAD MA */
    {               0,           0 }, /* 0F08	༈	e0 bc 88	TIBETAN MARK SBRUL SHAD */
    {               0,           0 }, /* 0F09	༉	e0 bc 89	TIBETAN MARK BSKUR YIG MGO */
    {               0,           0 }, /* 0F0A	༊	e0 bc 8a	TIBETAN MARK BKA- SHOG YIG MGO */
    {               0,           0 }, /* 0F0B	་	e0 bc 8b	TIBETAN MARK INTERSYLLABIC TSHEG */
    {               0,           0 }, /* 0F0C	༌	e0 bc 8c	TIBETAN MARK DELIMITER TSHEG BSTAR */
    {               0,           0 }, /* 0F0D	།	e0 bc 8d	TIBETAN MARK SHAD */
    {               0,           0 }, /* 0F0E	༎	e0 bc 8e	TIBETAN MARK NYIS SHAD */
    {               0,           0 }, /* 0F0F	༏	e0 bc 8f	TIBETAN MARK TSHEG SHAD */
    {               0,           0 }, /* 0F10	༐	e0 bc 90	TIBETAN MARK NYIS TSHEG SHAD */
    {               0,           0 }, /* 0F11	༑	e0 bc 91	TIBETAN MARK RIN CHEN SPUNGS SHAD */
    {               0,           0 }, /* 0F12	༒	e0 bc 92	TIBETAN MARK RGYA GRAM SHAD */
    {               0,           0 }, /* 0F13	༓	e0 bc 93	TIBETAN MARK CARET -DZUD RTAGS ME LONG CAN */
    {               0,           0 }, /* 0F14	༔	e0 bc 94	TIBETAN MARK GTER TSHEG */
    {               0,           0 }, /* 0F15	༕	e0 bc 95	TIBETAN LOGOTYPE SIGN CHAD RTAGS */
    {               0,           0 }, /* 0F16	༖	e0 bc 96	TIBETAN LOGOTYPE SIGN LHAG RTAGS */
    {               0,           0 }, /* 0F17	༗	e0 bc 97	TIBETAN ASTROLOGICAL SIGN SGRA GCAN -CHAR RTAGS */
    {               0,           0 }, /* 0F18	༘	e0 bc 98	TIBETAN ASTROLOGICAL SIGN -KHYUD PA */
    {               0,           0 }, /* 0F19	༙	e0 bc 99	TIBETAN ASTROLOGICAL SIGN SDONG TSHUGS */
    {               0,           0 }, /* 0F1A	༚	e0 bc 9a	TIBETAN SIGN RDEL DKAR GCIG */
    {               0,           0 }, /* 0F1B	༛	e0 bc 9b	TIBETAN SIGN RDEL DKAR GNYIS */
    {               0,           0 }, /* 0F1C	༜	e0 bc 9c	TIBETAN SIGN RDEL DKAR GSUM */
    {               0,           0 }, /* 0F1D	༝	e0 bc 9d	TIBETAN SIGN RDEL NAG GCIG */
    {               0,           0 }, /* 0F1E	༞	e0 bc 9e	TIBETAN SIGN RDEL NAG GNYIS */
    {               0,           0 }, /* 0F1F	༟	e0 bc 9f	TIBETAN SIGN RDEL DKAR RDEL NAG */
    {               0,           0 }, /* 0F20	༠	e0 bc a0	TIBETAN DIGIT ZERO */
    {               0,           0 }, /* 0F21	༡	e0 bc a1	TIBETAN DIGIT ONE */
    {               0,           0 }, /* 0F22	༢	e0 bc a2	TIBETAN DIGIT TWO */
    {               0,           0 }, /* 0F23	༣	e0 bc a3	TIBETAN DIGIT THREE */
    {               0,           0 }, /* 0F24	༤	e0 bc a4	TIBETAN DIGIT FOUR */
    {               0,           0 }, /* 0F25	༥	e0 bc a5	TIBETAN DIGIT FIVE */
    {               0,           0 }, /* 0F26	༦	e0 bc a6	TIBETAN DIGIT SIX */
    {               0,           0 }, /* 0F27	༧	e0 bc a7	TIBETAN DIGIT SEVEN */
    {               0,           0 }, /* 0F28	༨	e0 bc a8	TIBETAN DIGIT EIGHT */
    {               0,           0 }, /* 0F29	༩	e0 bc a9	TIBETAN DIGIT NINE */
    {               0,           0 }, /* 0F2A	༪	e0 bc aa	TIBETAN DIGIT HALF ONE */
    {               0,           0 }, /* 0F2B	༫	e0 bc ab	TIBETAN DIGIT HALF TWO */
    {               0,           0 }, /* 0F2C	༬	e0 bc ac	TIBETAN DIGIT HALF THREE */
    {               0,           0 }, /* 0F2D	༭	e0 bc ad	TIBETAN DIGIT HALF FOUR */
    {               0,           0 }, /* 0F2E	༮	e0 bc ae	TIBETAN DIGIT HALF FIVE */
    {               0,           0 }, /* 0F2F	༯	e0 bc af	TIBETAN DIGIT HALF SIX */
    {               0,           0 }, /* 0F30	༰	e0 bc b0	TIBETAN DIGIT HALF SEVEN */
    {               0,           0 }, /* 0F31	༱	e0 bc b1	TIBETAN DIGIT HALF EIGHT */
    {               0,           0 }, /* 0F32	༲	e0 bc b2	TIBETAN DIGIT HALF NINE */
    {               0,           0 }, /* 0F33	༳	e0 bc b3	TIBETAN DIGIT HALF ZERO */
    {               0,           0 }, /* 0F34	༴	e0 bc b4	TIBETAN MARK BSDUS RTAGS */
    {               0,           0 }, /* 0F35	༵	e0 bc b5	TIBETAN MARK NGAS BZUNG NYI ZLA */
    {               0,           0 }, /* 0F36	༶	e0 bc b6	TIBETAN MARK CARET -DZUD RTAGS BZHI MIG CAN */
    {               0,           0 }, /* 0F37	༷	e0 bc b7	TIBETAN MARK NGAS BZUNG SGOR RTAGS */
    {               0,           0 }, /* 0F38	༸	e0 bc b8	TIBETAN MARK CHE MGO */
    {               0,           0 }, /* 0F39	༹	e0 bc b9	TIBETAN MARK TSA -PHRU */
    {               0,           0 }, /* 0F3A	༺	e0 bc ba	TIBETAN MARK GUG RTAGS GYON */
    {               0,           0 }, /* 0F3B	༻	e0 bc bb	TIBETAN MARK GUG RTAGS GYAS */
    {               0,           0 }, /* 0F3C	༼	e0 bc bc	TIBETAN MARK ANG KHANG GYON */
    {               0,           0 }, /* 0F3D	༽	e0 bc bd	TIBETAN MARK ANG KHANG GYAS */
    {               0,           0 }, /* 0F3E	༾	e0 bc be	TIBETAN SIGN YAR TSHES */
    {               0,           0 }, /* 0F3F	༿	e0 bc bf	TIBETAN SIGN MAR TSHES */
    {               0,           0 }, /* 0F40	ཀ	e0 bd 80	TIBETAN LETTER KA */
    {               0,           0 }, /* 0F41	ཁ	e0 bd 81	TIBETAN LETTER KHA */
    {               0,           0 }, /* 0F42	ག	e0 bd 82	TIBETAN LETTER GA */
    {               0,           0 }, /* 0F43	གྷ	e0 bd 83	TIBETAN LETTER GHA */
    {               0,           0 }, /* 0F44	ང	e0 bd 84	TIBETAN LETTER NGA */
    {               0,           0 }, /* 0F45	ཅ	e0 bd 85	TIBETAN LETTER CA */
    {               0,           0 }, /* 0F46	ཆ	e0 bd 86	TIBETAN LETTER CHA */
    {               0,           0 }, /* 0F47	ཇ	e0 bd 87	TIBETAN LETTER JA */
    {               0,           0 }, /* 0F48	཈	e0 bd 88	 */
    {               0,           0 }, /* 0F49	ཉ	e0 bd 89	TIBETAN LETTER NYA */
    {               0,           0 }, /* 0F4A	ཊ	e0 bd 8a	TIBETAN LETTER TTA */
    {               0,           0 }, /* 0F4B	ཋ	e0 bd 8b	TIBETAN LETTER TTHA */
    {               0,           0 }, /* 0F4C	ཌ	e0 bd 8c	TIBETAN LETTER DDA */
    {               0,           0 }, /* 0F4D	ཌྷ	e0 bd 8d	TIBETAN LETTER DDHA */
    {               0,           0 }, /* 0F4E	ཎ	e0 bd 8e	TIBETAN LETTER NNA */
    {               0,           0 }, /* 0F4F	ཏ	e0 bd 8f	TIBETAN LETTER TA */
    {               0,           0 }, /* 0F50	ཐ	e0 bd 90	TIBETAN LETTER THA */
    {               0,           0 }, /* 0F51	ད	e0 bd 91	TIBETAN LETTER DA */
    {               0,           0 }, /* 0F52	དྷ	e0 bd 92	TIBETAN LETTER DHA */
    {               0,           0 }, /* 0F53	ན	e0 bd 93	TIBETAN LETTER NA */
    {               0,           0 }, /* 0F54	པ	e0 bd 94	TIBETAN LETTER PA */
    {               0,           0 }, /* 0F55	ཕ	e0 bd 95	TIBETAN LETTER PHA */
    {               0,           0 }, /* 0F56	བ	e0 bd 96	TIBETAN LETTER BA */
    {               0,           0 }, /* 0F57	བྷ	e0 bd 97	TIBETAN LETTER BHA */
    {               0,           0 }, /* 0F58	མ	e0 bd 98	TIBETAN LETTER MA */
    {               0,           0 }, /* 0F59	ཙ	e0 bd 99	TIBETAN LETTER TSA */
    {               0,           0 }, /* 0F5A	ཚ	e0 bd 9a	TIBETAN LETTER TSHA */
    {               0,           0 }, /* 0F5B	ཛ	e0 bd 9b	TIBETAN LETTER DZA */
    {               0,           0 }, /* 0F5C	ཛྷ	e0 bd 9c	TIBETAN LETTER DZHA */
    {               0,           0 }, /* 0F5D	ཝ	e0 bd 9d	TIBETAN LETTER WA */
    {               0,           0 }, /* 0F5E	ཞ	e0 bd 9e	TIBETAN LETTER ZHA */
    {               0,           0 }, /* 0F5F	ཟ	e0 bd 9f	TIBETAN LETTER ZA */
    {               0,           0 }, /* 0F60	འ	e0 bd a0	TIBETAN LETTER -A */
    {               0,           0 }, /* 0F61	ཡ	e0 bd a1	TIBETAN LETTER YA */
    {               0,           0 }, /* 0F62	ར	e0 bd a2	TIBETAN LETTER RA */
    {               0,           0 }, /* 0F63	ལ	e0 bd a3	TIBETAN LETTER LA */
    {               0,           0 }, /* 0F64	ཤ	e0 bd a4	TIBETAN LETTER SHA */
    {               0,           0 }, /* 0F65	ཥ	e0 bd a5	TIBETAN LETTER SSA */
    {               0,           0 }, /* 0F66	ས	e0 bd a6	TIBETAN LETTER SA */
    {               0,           0 }, /* 0F67	ཧ	e0 bd a7	TIBETAN LETTER HA */
    {               0,           0 }, /* 0F68	ཨ	e0 bd a8	TIBETAN LETTER A */
    {               0,           0 }, /* 0F69	ཀྵ	e0 bd a9	TIBETAN LETTER KSSA */
    {               0,           0 }, /* 0F6A	ཪ	e0 bd aa	TIBETAN LETTER FIXED-FORM RA */
    {               0,           0 }, /* 0F6B	ཫ	e0 bd ab	TIBETAN LETTER KKA */
    {               0,           0 }, /* 0F6C	ཬ	e0 bd ac	TIBETAN LETTER RRA */
    {               0,           0 }, /* 0F6D	཭	e0 bd ad	 */
    {               0,           0 }, /* 0F6E	཮	e0 bd ae	 */
    {               0,           0 }, /* 0F6F	཯	e0 bd af	 */
    {               0,           0 }, /* 0F70	཰	e0 bd b0	 */
    {               0,           0 }, /* 0F71	ཱ	e0 bd b1	TIBETAN VOWEL SIGN AA */
    {               0,           0 }, /* 0F72	ི	e0 bd b2	TIBETAN VOWEL SIGN I */
    {               0,           0 }, /* 0F73	ཱི	e0 bd b3	TIBETAN VOWEL SIGN II */
    {               0,           0 }, /* 0F74	ུ	e0 bd b4	TIBETAN VOWEL SIGN U */
    {               0,           0 }, /* 0F75	ཱུ	e0 bd b5	TIBETAN VOWEL SIGN UU */
    {               0,           0 }, /* 0F76	ྲྀ	e0 bd b6	TIBETAN VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 0F77	ཷ	e0 bd b7	TIBETAN VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 0F78	ླྀ	e0 bd b8	TIBETAN VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 0F79	ཹ	e0 bd b9	TIBETAN VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 0F7A	ེ	e0 bd ba	TIBETAN VOWEL SIGN E */
    {               0,           0 }, /* 0F7B	ཻ	e0 bd bb	TIBETAN VOWEL SIGN EE */
    {               0,           0 }, /* 0F7C	ོ	e0 bd bc	TIBETAN VOWEL SIGN O */
    {               0,           0 }, /* 0F7D	ཽ	e0 bd bd	TIBETAN VOWEL SIGN OO */
    {               0,           0 }, /* 0F7E	ཾ	e0 bd be	TIBETAN SIGN RJES SU NGA RO */
    {               0,           0 }, /* 0F7F	ཿ	e0 bd bf	TIBETAN SIGN RNAM BCAD */
    {               0,           0 }, /* 0F80	ྀ	e0 be 80	TIBETAN VOWEL SIGN REVERSED I */
    {               0,           0 }, /* 0F81	ཱྀ	e0 be 81	TIBETAN VOWEL SIGN REVERSED II */
    {               0,           0 }, /* 0F82	ྂ	e0 be 82	TIBETAN SIGN NYI ZLA NAA DA */
    {               0,           0 }, /* 0F83	ྃ	e0 be 83	TIBETAN SIGN SNA LDAN */
    {               0,           0 }, /* 0F84	྄	e0 be 84	TIBETAN MARK HALANTA */
    {               0,           0 }, /* 0F85	྅	e0 be 85	TIBETAN MARK PALUTA */
    {               0,           0 }, /* 0F86	྆	e0 be 86	TIBETAN SIGN LCI RTAGS */
    {               0,           0 }, /* 0F87	྇	e0 be 87	TIBETAN SIGN YANG RTAGS */
    {               0,           0 }, /* 0F88	ྈ	e0 be 88	TIBETAN SIGN LCE TSA CAN */
    {               0,           0 }, /* 0F89	ྉ	e0 be 89	TIBETAN SIGN MCHU CAN */
    {               0,           0 }, /* 0F8A	ྊ	e0 be 8a	TIBETAN SIGN GRU CAN RGYINGS */
    {               0,           0 }, /* 0F8B	ྋ	e0 be 8b	TIBETAN SIGN GRU MED RGYINGS */
    {               0,           0 }, /* 0F8C	ྌ	e0 be 8c	 */
    {               0,           0 }, /* 0F8D	ྍ	e0 be 8d	 */
    {               0,           0 }, /* 0F8E	ྎ	e0 be 8e	 */
    {               0,           0 }, /* 0F8F	ྏ	e0 be 8f	 */
    {               0,           0 }, /* 0F90	ྐ	e0 be 90	TIBETAN SUBJOINED LETTER KA */
    {               0,           0 }, /* 0F91	ྑ	e0 be 91	TIBETAN SUBJOINED LETTER KHA */
    {               0,           0 }, /* 0F92	ྒ	e0 be 92	TIBETAN SUBJOINED LETTER GA */
    {               0,           0 }, /* 0F93	ྒྷ	e0 be 93	TIBETAN SUBJOINED LETTER GHA */
    {               0,           0 }, /* 0F94	ྔ	e0 be 94	TIBETAN SUBJOINED LETTER NGA */
    {               0,           0 }, /* 0F95	ྕ	e0 be 95	TIBETAN SUBJOINED LETTER CA */
    {               0,           0 }, /* 0F96	ྖ	e0 be 96	TIBETAN SUBJOINED LETTER CHA */
    {               0,           0 }, /* 0F97	ྗ	e0 be 97	TIBETAN SUBJOINED LETTER JA */
    {               0,           0 }, /* 0F98	྘	e0 be 98	 */
    {               0,           0 }, /* 0F99	ྙ	e0 be 99	TIBETAN SUBJOINED LETTER NYA */
    {               0,           0 }, /* 0F9A	ྚ	e0 be 9a	TIBETAN SUBJOINED LETTER TTA */
    {               0,           0 }, /* 0F9B	ྛ	e0 be 9b	TIBETAN SUBJOINED LETTER TTHA */
    {               0,           0 }, /* 0F9C	ྜ	e0 be 9c	TIBETAN SUBJOINED LETTER DDA */
    {               0,           0 }, /* 0F9D	ྜྷ	e0 be 9d	TIBETAN SUBJOINED LETTER DDHA */
    {               0,           0 }, /* 0F9E	ྞ	e0 be 9e	TIBETAN SUBJOINED LETTER NNA */
    {               0,           0 }, /* 0F9F	ྟ	e0 be 9f	TIBETAN SUBJOINED LETTER TA */
    {               0,           0 }, /* 0FA0	ྠ	e0 be a0	TIBETAN SUBJOINED LETTER THA */
    {               0,           0 }, /* 0FA1	ྡ	e0 be a1	TIBETAN SUBJOINED LETTER DA */
    {               0,           0 }, /* 0FA2	ྡྷ	e0 be a2	TIBETAN SUBJOINED LETTER DHA */
    {               0,           0 }, /* 0FA3	ྣ	e0 be a3	TIBETAN SUBJOINED LETTER NA */
    {               0,           0 }, /* 0FA4	ྤ	e0 be a4	TIBETAN SUBJOINED LETTER PA */
    {               0,           0 }, /* 0FA5	ྥ	e0 be a5	TIBETAN SUBJOINED LETTER PHA */
    {               0,           0 }, /* 0FA6	ྦ	e0 be a6	TIBETAN SUBJOINED LETTER BA */
    {               0,           0 }, /* 0FA7	ྦྷ	e0 be a7	TIBETAN SUBJOINED LETTER BHA */
    {               0,           0 }, /* 0FA8	ྨ	e0 be a8	TIBETAN SUBJOINED LETTER MA */
    {               0,           0 }, /* 0FA9	ྩ	e0 be a9	TIBETAN SUBJOINED LETTER TSA */
    {               0,           0 }, /* 0FAA	ྪ	e0 be aa	TIBETAN SUBJOINED LETTER TSHA */
    {               0,           0 }, /* 0FAB	ྫ	e0 be ab	TIBETAN SUBJOINED LETTER DZA */
    {               0,           0 }, /* 0FAC	ྫྷ	e0 be ac	TIBETAN SUBJOINED LETTER DZHA */
    {               0,           0 }, /* 0FAD	ྭ	e0 be ad	TIBETAN SUBJOINED LETTER WA */
    {               0,           0 }, /* 0FAE	ྮ	e0 be ae	TIBETAN SUBJOINED LETTER ZHA */
    {               0,           0 }, /* 0FAF	ྯ	e0 be af	TIBETAN SUBJOINED LETTER ZA */
    {               0,           0 }, /* 0FB0	ྰ	e0 be b0	TIBETAN SUBJOINED LETTER -A */
    {               0,           0 }, /* 0FB1	ྱ	e0 be b1	TIBETAN SUBJOINED LETTER YA */
    {               0,           0 }, /* 0FB2	ྲ	e0 be b2	TIBETAN SUBJOINED LETTER RA */
    {               0,           0 }, /* 0FB3	ླ	e0 be b3	TIBETAN SUBJOINED LETTER LA */
    {               0,           0 }, /* 0FB4	ྴ	e0 be b4	TIBETAN SUBJOINED LETTER SHA */
    {               0,           0 }, /* 0FB5	ྵ	e0 be b5	TIBETAN SUBJOINED LETTER SSA */
    {               0,           0 }, /* 0FB6	ྶ	e0 be b6	TIBETAN SUBJOINED LETTER SA */
    {               0,           0 }, /* 0FB7	ྷ	e0 be b7	TIBETAN SUBJOINED LETTER HA */
    {               0,           0 }, /* 0FB8	ྸ	e0 be b8	TIBETAN SUBJOINED LETTER A */
    {               0,           0 }, /* 0FB9	ྐྵ	e0 be b9	TIBETAN SUBJOINED LETTER KSSA */
    {               0,           0 }, /* 0FBA	ྺ	e0 be ba	TIBETAN SUBJOINED LETTER FIXED-FORM WA */
    {               0,           0 }, /* 0FBB	ྻ	e0 be bb	TIBETAN SUBJOINED LETTER FIXED-FORM YA */
    {               0,           0 }, /* 0FBC	ྼ	e0 be bc	TIBETAN SUBJOINED LETTER FIXED-FORM RA */
    {               0,           0 }, /* 0FBD	྽	e0 be bd	 */
    {               0,           0 }, /* 0FBE	྾	e0 be be	TIBETAN KU RU KHA */
    {               0,           0 }, /* 0FBF	྿	e0 be bf	TIBETAN KU RU KHA BZHI MIG CAN */
    {               0,           0 }, /* 0FC0	࿀	e0 bf 80	TIBETAN CANTILLATION SIGN HEAVY BEAT */
    {               0,           0 }, /* 0FC1	࿁	e0 bf 81	TIBETAN CANTILLATION SIGN LIGHT BEAT */
    {               0,           0 }, /* 0FC2	࿂	e0 bf 82	TIBETAN CANTILLATION SIGN CANG TE-U */
    {               0,           0 }, /* 0FC3	࿃	e0 bf 83	TIBETAN CANTILLATION SIGN SBUB -CHAL */
    {               0,           0 }, /* 0FC4	࿄	e0 bf 84	TIBETAN SYMBOL DRIL BU */
    {               0,           0 }, /* 0FC5	࿅	e0 bf 85	TIBETAN SYMBOL RDO RJE */
    {               0,           0 }, /* 0FC6	࿆	e0 bf 86	TIBETAN SYMBOL PADMA GDAN */
    {               0,           0 }, /* 0FC7	࿇	e0 bf 87	TIBETAN SYMBOL RDO RJE RGYA GRAM */
    {               0,           0 }, /* 0FC8	࿈	e0 bf 88	TIBETAN SYMBOL PHUR PA */
    {               0,           0 }, /* 0FC9	࿉	e0 bf 89	TIBETAN SYMBOL NOR BU */
    {               0,           0 }, /* 0FCA	࿊	e0 bf 8a	TIBETAN SYMBOL NOR BU NYIS -KHYIL */
    {               0,           0 }, /* 0FCB	࿋	e0 bf 8b	TIBETAN SYMBOL NOR BU GSUM -KHYIL */
    {               0,           0 }, /* 0FCC	࿌	e0 bf 8c	TIBETAN SYMBOL NOR BU BZHI -KHYIL */
    {               0,           0 }, /* 0FCD	࿍	e0 bf 8d	 */
    {               0,           0 }, /* 0FCE	࿎	e0 bf 8e	TIBETAN SIGN RDEL NAG RDEL DKAR */
    {               0,           0 }, /* 0FCF	࿏	e0 bf 8f	TIBETAN SIGN RDEL NAG GSUM */
    {               0,           0 }, /* 0FD0	࿐	e0 bf 90	TIBETAN MARK BSKA- SHOG GI MGO RGYAN */
    {               0,           0 }, /* 0FD1	࿑	e0 bf 91	TIBETAN MARK MNYAM YIG GI MGO RGYAN */
    {               0,           0 }, /* 0FD2	࿒	e0 bf 92	TIBETAN MARK NYIS TSHEG */
    {               0,           0 }, /* 0FD3	࿓	e0 bf 93	TIBETAN MARK INITIAL BRDA RNYING YIG MGO MDUN MA */
    {               0,           0 }, /* 0FD4	࿔	e0 bf 94	TIBETAN MARK CLOSING BRDA RNYING YIG MGO SGAB MA */
    {               0,           0 }, /* 0FD5	࿕	e0 bf 95	RIGHT-FACING SVASTI SIGN */
    {               0,           0 }, /* 0FD6	࿖	e0 bf 96	LEFT-FACING SVASTI SIGN */
    {               0,           0 }, /* 0FD7	࿗	e0 bf 97	RIGHT-FACING SVASTI SIGN WITH DOTS */
    {               0,           0 }, /* 0FD8	࿘	e0 bf 98	LEFT-FACING SVASTI SIGN WITH DOTS */
    {               0,           0 }, /* 0FD9	࿙	e0 bf 99	 */
    {               0,           0 }, /* 0FDA	࿚	e0 bf 9a	 */
    {               0,           0 }, /* 0FDB	࿛	e0 bf 9b	 */
    {               0,           0 }, /* 0FDC	࿜	e0 bf 9c	 */
    {               0,           0 }, /* 0FDD	࿝	e0 bf 9d	 */
    {               0,           0 }, /* 0FDE	࿞	e0 bf 9e	 */
    {               0,           0 }, /* 0FDF	࿟	e0 bf 9f	 */
    {               0,           0 }, /* 0FE0	࿠	e0 bf a0	 */
    {               0,           0 }, /* 0FE1	࿡	e0 bf a1	 */
    {               0,           0 }, /* 0FE2	࿢	e0 bf a2	 */
    {               0,           0 }, /* 0FE3	࿣	e0 bf a3	 */
    {               0,           0 }, /* 0FE4	࿤	e0 bf a4	 */
    {               0,           0 }, /* 0FE5	࿥	e0 bf a5	 */
    {               0,           0 }, /* 0FE6	࿦	e0 bf a6	 */
    {               0,           0 }, /* 0FE7	࿧	e0 bf a7	 */
    {               0,           0 }, /* 0FE8	࿨	e0 bf a8	 */
    {               0,           0 }, /* 0FE9	࿩	e0 bf a9	 */
    {               0,           0 }, /* 0FEA	࿪	e0 bf aa	 */
    {               0,           0 }, /* 0FEB	࿫	e0 bf ab	 */
    {               0,           0 }, /* 0FEC	࿬	e0 bf ac	 */
    {               0,           0 }, /* 0FED	࿭	e0 bf ad	 */
    {               0,           0 }, /* 0FEE	࿮	e0 bf ae	 */
    {               0,           0 }, /* 0FEF	࿯	e0 bf af	 */
    {               0,           0 }, /* 0FF0	࿰	e0 bf b0	 */
    {               0,           0 }, /* 0FF1	࿱	e0 bf b1	 */
    {               0,           0 }, /* 0FF2	࿲	e0 bf b2	 */
    {               0,           0 }, /* 0FF3	࿳	e0 bf b3	 */
    {               0,           0 }, /* 0FF4	࿴	e0 bf b4	 */
    {               0,           0 }, /* 0FF5	࿵	e0 bf b5	 */
    {               0,           0 }, /* 0FF6	࿶	e0 bf b6	 */
    {               0,           0 }, /* 0FF7	࿷	e0 bf b7	 */
    {               0,           0 }, /* 0FF8	࿸	e0 bf b8	 */
    {               0,           0 }, /* 0FF9	࿹	e0 bf b9	 */
    {               0,           0 }, /* 0FFA	࿺	e0 bf ba	 */
    {               0,           0 }, /* 0FFB	࿻	e0 bf bb	 */
    {               0,           0 }, /* 0FFC	࿼	e0 bf bc	 */
    {               0,           0 }, /* 0FFD	࿽	e0 bf bd	 */
    {               0,           0 }, /* 0FFE	࿾	e0 bf be	 */
    {               0,           0 }, /* 0FFF	࿿	e0 bf bf */
    {               0,           0 }, /* 1000	က	e1 80 80	MYANMAR LETTER KA */
    {               0,           0 }, /* 1001	ခ	e1 80 81	MYANMAR LETTER KHA */
    {               0,           0 }, /* 1002	ဂ	e1 80 82	MYANMAR LETTER GA */
    {               0,           0 }, /* 1003	ဃ	e1 80 83	MYANMAR LETTER GHA */
    {               0,           0 }, /* 1004	င	e1 80 84	MYANMAR LETTER NGA */
    {               0,           0 }, /* 1005	စ	e1 80 85	MYANMAR LETTER CA */
    {               0,           0 }, /* 1006	ဆ	e1 80 86	MYANMAR LETTER CHA */
    {               0,           0 }, /* 1007	ဇ	e1 80 87	MYANMAR LETTER JA */
    {               0,           0 }, /* 1008	ဈ	e1 80 88	MYANMAR LETTER JHA */
    {               0,           0 }, /* 1009	ဉ	e1 80 89	MYANMAR LETTER NYA */
    {               0,           0 }, /* 100A	ည	e1 80 8a	MYANMAR LETTER NNYA */
    {               0,           0 }, /* 100B	ဋ	e1 80 8b	MYANMAR LETTER TTA */
    {               0,           0 }, /* 100C	ဌ	e1 80 8c	MYANMAR LETTER TTHA */
    {               0,           0 }, /* 100D	ဍ	e1 80 8d	MYANMAR LETTER DDA */
    {               0,           0 }, /* 100E	ဎ	e1 80 8e	MYANMAR LETTER DDHA */
    {               0,           0 }, /* 100F	ဏ	e1 80 8f	MYANMAR LETTER NNA */
    {               0,           0 }, /* 1010	တ	e1 80 90	MYANMAR LETTER TA */
    {               0,           0 }, /* 1011	ထ	e1 80 91	MYANMAR LETTER THA */
    {               0,           0 }, /* 1012	ဒ	e1 80 92	MYANMAR LETTER DA */
    {               0,           0 }, /* 1013	ဓ	e1 80 93	MYANMAR LETTER DHA */
    {               0,           0 }, /* 1014	န	e1 80 94	MYANMAR LETTER NA */
    {               0,           0 }, /* 1015	ပ	e1 80 95	MYANMAR LETTER PA */
    {               0,           0 }, /* 1016	ဖ	e1 80 96	MYANMAR LETTER PHA */
    {               0,           0 }, /* 1017	ဗ	e1 80 97	MYANMAR LETTER BA */
    {               0,           0 }, /* 1018	ဘ	e1 80 98	MYANMAR LETTER BHA */
    {               0,           0 }, /* 1019	မ	e1 80 99	MYANMAR LETTER MA */
    {               0,           0 }, /* 101A	ယ	e1 80 9a	MYANMAR LETTER YA */
    {               0,           0 }, /* 101B	ရ	e1 80 9b	MYANMAR LETTER RA */
    {               0,           0 }, /* 101C	လ	e1 80 9c	MYANMAR LETTER LA */
    {               0,           0 }, /* 101D	ဝ	e1 80 9d	MYANMAR LETTER WA */
    {               0,           0 }, /* 101E	သ	e1 80 9e	MYANMAR LETTER SA */
    {               0,           0 }, /* 101F	ဟ	e1 80 9f	MYANMAR LETTER HA */
    {               0,           0 }, /* 1020	ဠ	e1 80 a0	MYANMAR LETTER LLA */
    {               0,           0 }, /* 1021	အ	e1 80 a1	MYANMAR LETTER A */
    {               0,           0 }, /* 1022	ဢ	e1 80 a2	MYANMAR LETTER SHAN A */
    {               0,           0 }, /* 1023	ဣ	e1 80 a3	MYANMAR LETTER I */
    {               0,           0 }, /* 1024	ဤ	e1 80 a4	MYANMAR LETTER II */
    {               0,           0 }, /* 1025	ဥ	e1 80 a5	MYANMAR LETTER U */
    {               0,           0 }, /* 1026	ဦ	e1 80 a6	MYANMAR LETTER UU */
    {               0,           0 }, /* 1027	ဧ	e1 80 a7	MYANMAR LETTER E */
    {               0,           0 }, /* 1028	ဨ	e1 80 a8	MYANMAR LETTER MON E */
    {               0,           0 }, /* 1029	ဩ	e1 80 a9	MYANMAR LETTER O */
    {               0,           0 }, /* 102A	ဪ	e1 80 aa	MYANMAR LETTER AU */
    {               0,           0 }, /* 102B	ါ	e1 80 ab	MYANMAR VOWEL SIGN TALL AA */
    {               0,           0 }, /* 102C	ာ	e1 80 ac	MYANMAR VOWEL SIGN AA */
    {               0,           0 }, /* 102D	ိ	e1 80 ad	MYANMAR VOWEL SIGN I */
    {               0,           0 }, /* 102E	ီ	e1 80 ae	MYANMAR VOWEL SIGN II */
    {               0,           0 }, /* 102F	ု	e1 80 af	MYANMAR VOWEL SIGN U */
    {               0,           0 }, /* 1030	ူ	e1 80 b0	MYANMAR VOWEL SIGN UU */
    {               0,           0 }, /* 1031	ေ	e1 80 b1	MYANMAR VOWEL SIGN E */
    {               0,           0 }, /* 1032	ဲ	e1 80 b2	MYANMAR VOWEL SIGN AI */
    {               0,           0 }, /* 1033	ဳ	e1 80 b3	MYANMAR VOWEL SIGN MON II */
    {               0,           0 }, /* 1034	ဴ	e1 80 b4	MYANMAR VOWEL SIGN MON O */
    {               0,           0 }, /* 1035	ဵ	e1 80 b5	MYANMAR VOWEL SIGN E ABOVE */
    {               0,           0 }, /* 1036	ံ	e1 80 b6	MYANMAR SIGN ANUSVARA */
    {               0,           0 }, /* 1037	့	e1 80 b7	MYANMAR SIGN DOT BELOW */
    {               0,           0 }, /* 1038	း	e1 80 b8	MYANMAR SIGN VISARGA */
    {               0,           0 }, /* 1039	္	e1 80 b9	MYANMAR SIGN VIRAMA */
    {               0,           0 }, /* 103A	်	e1 80 ba	MYANMAR SIGN ASAT */
    {               0,           0 }, /* 103B	ျ	e1 80 bb	MYANMAR CONSONANT SIGN MEDIAL YA */
    {               0,           0 }, /* 103C	ြ	e1 80 bc	MYANMAR CONSONANT SIGN MEDIAL RA */
    {               0,           0 }, /* 103D	ွ	e1 80 bd	MYANMAR CONSONANT SIGN MEDIAL WA */
    {               0,           0 }, /* 103E	ှ	e1 80 be	MYANMAR CONSONANT SIGN MEDIAL HA */
    {               0,           0 }, /* 103F	ဿ	e1 80 bf	MYANMAR LETTER GREAT SA */
    {               0,           0 }, /* 1040	၀	e1 81 80	MYANMAR DIGIT ZERO */
    {               0,           0 }, /* 1041	၁	e1 81 81	MYANMAR DIGIT ONE */
    {               0,           0 }, /* 1042	၂	e1 81 82	MYANMAR DIGIT TWO */
    {               0,           0 }, /* 1043	၃	e1 81 83	MYANMAR DIGIT THREE */
    {               0,           0 }, /* 1044	၄	e1 81 84	MYANMAR DIGIT FOUR */
    {               0,           0 }, /* 1045	၅	e1 81 85	MYANMAR DIGIT FIVE */
    {               0,           0 }, /* 1046	၆	e1 81 86	MYANMAR DIGIT SIX */
    {               0,           0 }, /* 1047	၇	e1 81 87	MYANMAR DIGIT SEVEN */
    {               0,           0 }, /* 1048	၈	e1 81 88	MYANMAR DIGIT EIGHT */
    {               0,           0 }, /* 1049	၉	e1 81 89	MYANMAR DIGIT NINE */
    {               0,           0 }, /* 104A	၊	e1 81 8a	MYANMAR SIGN LITTLE SECTION */
    {               0,           0 }, /* 104B	။	e1 81 8b	MYANMAR SIGN SECTION */
    {               0,           0 }, /* 104C	၌	e1 81 8c	MYANMAR SYMBOL LOCATIVE */
    {               0,           0 }, /* 104D	၍	e1 81 8d	MYANMAR SYMBOL COMPLETED */
    {               0,           0 }, /* 104E	၎	e1 81 8e	MYANMAR SYMBOL AFOREMENTIONED */
    {               0,           0 }, /* 104F	၏	e1 81 8f	MYANMAR SYMBOL GENITIVE */
    {               0,           0 }, /* 1050	ၐ	e1 81 90	MYANMAR LETTER SHA */
    {               0,           0 }, /* 1051	ၑ	e1 81 91	MYANMAR LETTER SSA */
    {               0,           0 }, /* 1052	ၒ	e1 81 92	MYANMAR LETTER VOCALIC R */
    {               0,           0 }, /* 1053	ၓ	e1 81 93	MYANMAR LETTER VOCALIC RR */
    {               0,           0 }, /* 1054	ၔ	e1 81 94	MYANMAR LETTER VOCALIC L */
    {               0,           0 }, /* 1055	ၕ	e1 81 95	MYANMAR LETTER VOCALIC LL */
    {               0,           0 }, /* 1056	ၖ	e1 81 96	MYANMAR VOWEL SIGN VOCALIC R */
    {               0,           0 }, /* 1057	ၗ	e1 81 97	MYANMAR VOWEL SIGN VOCALIC RR */
    {               0,           0 }, /* 1058	ၘ	e1 81 98	MYANMAR VOWEL SIGN VOCALIC L */
    {               0,           0 }, /* 1059	ၙ	e1 81 99	MYANMAR VOWEL SIGN VOCALIC LL */
    {               0,           0 }, /* 105A	ၚ	e1 81 9a	MYANMAR LETTER MON NGA */
    {               0,           0 }, /* 105B	ၛ	e1 81 9b	MYANMAR LETTER MON JHA */
    {               0,           0 }, /* 105C	ၜ	e1 81 9c	MYANMAR LETTER MON BBA */
    {               0,           0 }, /* 105D	ၝ	e1 81 9d	MYANMAR LETTER MON BBE */
    {               0,           0 }, /* 105E	ၞ	e1 81 9e	MYANMAR CONSONANT SIGN MON MEDIAL NA */
    {               0,           0 }, /* 105F	ၟ	e1 81 9f	MYANMAR CONSONANT SIGN MON MEDIAL MA */
    {               0,           0 }, /* 1060	ၠ	e1 81 a0	MYANMAR CONSONANT SIGN MON MEDIAL LA */
    {               0,           0 }, /* 1061	ၡ	e1 81 a1	MYANMAR LETTER SGAW KAREN SHA */
    {               0,           0 }, /* 1062	ၢ	e1 81 a2	MYANMAR VOWEL SIGN SGAW KAREN EU */
    {               0,           0 }, /* 1063	ၣ	e1 81 a3	MYANMAR TONE MARK SGAW KAREN HATHI */
    {               0,           0 }, /* 1064	ၤ	e1 81 a4	MYANMAR TONE MARK SGAW KAREN KE PHO */
    {               0,           0 }, /* 1065	ၥ	e1 81 a5	MYANMAR LETTER WESTERN PWO KAREN THA */
    {               0,           0 }, /* 1066	ၦ	e1 81 a6	MYANMAR LETTER WESTERN PWO KAREN PWA */
    {               0,           0 }, /* 1067	ၧ	e1 81 a7	MYANMAR VOWEL SIGN WESTERN PWO KAREN EU */
    {               0,           0 }, /* 1068	ၨ	e1 81 a8	MYANMAR VOWEL SIGN WESTERN PWO KAREN UE */
    {               0,           0 }, /* 1069	ၩ	e1 81 a9	MYANMAR SIGN WESTERN PWO KAREN TONE-1 */
    {               0,           0 }, /* 106A	ၪ	e1 81 aa	MYANMAR SIGN WESTERN PWO KAREN TONE-2 */
    {               0,           0 }, /* 106B	ၫ	e1 81 ab	MYANMAR SIGN WESTERN PWO KAREN TONE-3 */
    {               0,           0 }, /* 106C	ၬ	e1 81 ac	MYANMAR SIGN WESTERN PWO KAREN TONE-4 */
    {               0,           0 }, /* 106D	ၭ	e1 81 ad	MYANMAR SIGN WESTERN PWO KAREN TONE-5 */
    {               0,           0 }, /* 106E	ၮ	e1 81 ae	MYANMAR LETTER EASTERN PWO KAREN NNA */
    {               0,           0 }, /* 106F	ၯ	e1 81 af	MYANMAR LETTER EASTERN PWO KAREN YWA */
    {               0,           0 }, /* 1070	ၰ	e1 81 b0	MYANMAR LETTER EASTERN PWO KAREN GHWA */
    {               0,           0 }, /* 1071	ၱ	e1 81 b1	MYANMAR VOWEL SIGN GEBA KAREN I */
    {               0,           0 }, /* 1072	ၲ	e1 81 b2	MYANMAR VOWEL SIGN KAYAH OE */
    {               0,           0 }, /* 1073	ၳ	e1 81 b3	MYANMAR VOWEL SIGN KAYAH U */
    {               0,           0 }, /* 1074	ၴ	e1 81 b4	MYANMAR VOWEL SIGN KAYAH EE */
    {               0,           0 }, /* 1075	ၵ	e1 81 b5	MYANMAR LETTER SHAN KA */
    {               0,           0 }, /* 1076	ၶ	e1 81 b6	MYANMAR LETTER SHAN KHA */
    {               0,           0 }, /* 1077	ၷ	e1 81 b7	MYANMAR LETTER SHAN GA */
    {               0,           0 }, /* 1078	ၸ	e1 81 b8	MYANMAR LETTER SHAN CA */
    {               0,           0 }, /* 1079	ၹ	e1 81 b9	MYANMAR LETTER SHAN ZA */
    {               0,           0 }, /* 107A	ၺ	e1 81 ba	MYANMAR LETTER SHAN NYA */
    {               0,           0 }, /* 107B	ၻ	e1 81 bb	MYANMAR LETTER SHAN DA */
    {               0,           0 }, /* 107C	ၼ	e1 81 bc	MYANMAR LETTER SHAN NA */
    {               0,           0 }, /* 107D	ၽ	e1 81 bd	MYANMAR LETTER SHAN PHA */
    {               0,           0 }, /* 107E	ၾ	e1 81 be	MYANMAR LETTER SHAN FA */
    {               0,           0 }, /* 107F	ၿ	e1 81 bf	MYANMAR LETTER SHAN BA */
    {               0,           0 }, /* 1080	ႀ	e1 82 80	MYANMAR LETTER SHAN THA */
    {               0,           0 }, /* 1081	ႁ	e1 82 81	MYANMAR LETTER SHAN HA */
    {               0,           0 }, /* 1082	ႂ	e1 82 82	MYANMAR CONSONANT SIGN SHAN MEDIAL WA */
    {               0,           0 }, /* 1083	ႃ	e1 82 83	MYANMAR VOWEL SIGN SHAN AA */
    {               0,           0 }, /* 1084	ႄ	e1 82 84	MYANMAR VOWEL SIGN SHAN E */
    {               0,           0 }, /* 1085	ႅ	e1 82 85	MYANMAR VOWEL SIGN SHAN E ABOVE */
    {               0,           0 }, /* 1086	ႆ	e1 82 86	MYANMAR VOWEL SIGN SHAN FINAL Y */
    {               0,           0 }, /* 1087	ႇ	e1 82 87	MYANMAR SIGN SHAN TONE-2 */
    {               0,           0 }, /* 1088	ႈ	e1 82 88	MYANMAR SIGN SHAN TONE-3 */
    {               0,           0 }, /* 1089	ႉ	e1 82 89	MYANMAR SIGN SHAN TONE-5 */
    {               0,           0 }, /* 108A	ႊ	e1 82 8a	MYANMAR SIGN SHAN TONE-6 */
    {               0,           0 }, /* 108B	ႋ	e1 82 8b	MYANMAR SIGN SHAN COUNCIL TONE-2 */
    {               0,           0 }, /* 108C	ႌ	e1 82 8c	MYANMAR SIGN SHAN COUNCIL TONE-3 */
    {               0,           0 }, /* 108D	ႍ	e1 82 8d	MYANMAR SIGN SHAN COUNCIL EMPHATIC TONE */
    {               0,           0 }, /* 108E	ႎ	e1 82 8e	MYANMAR LETTER RUMAI PALAUNG FA */
    {               0,           0 }, /* 108F	ႏ	e1 82 8f	MYANMAR SIGN RUMAI PALAUNG TONE-5 */
    {               0,           0 }, /* 1090	႐	e1 82 90	MYANMAR SHAN DIGIT ZERO */
    {               0,           0 }, /* 1091	႑	e1 82 91	MYANMAR SHAN DIGIT ONE */
    {               0,           0 }, /* 1092	႒	e1 82 92	MYANMAR SHAN DIGIT TWO */
    {               0,           0 }, /* 1093	႓	e1 82 93	MYANMAR SHAN DIGIT THREE */
    {               0,           0 }, /* 1094	႔	e1 82 94	MYANMAR SHAN DIGIT FOUR */
    {               0,           0 }, /* 1095	႕	e1 82 95	MYANMAR SHAN DIGIT FIVE */
    {               0,           0 }, /* 1096	႖	e1 82 96	MYANMAR SHAN DIGIT SIX */
    {               0,           0 }, /* 1097	႗	e1 82 97	MYANMAR SHAN DIGIT SEVEN */
    {               0,           0 }, /* 1098	႘	e1 82 98	MYANMAR SHAN DIGIT EIGHT */
    {               0,           0 }, /* 1099	႙	e1 82 99	MYANMAR SHAN DIGIT NINE */
    {               0,           0 }, /* 109A	ႚ	e1 82 9a	MYANMAR SIGN KHAMTI TONE-1 */
    {               0,           0 }, /* 109B	ႛ	e1 82 9b	MYANMAR SIGN KHAMTI TONE-3 */
    {               0,           0 }, /* 109C	ႜ	e1 82 9c	MYANMAR VOWEL SIGN AITON A */
    {               0,           0 }, /* 109D	ႝ	e1 82 9d	MYANMAR VOWEL SIGN AITON AI */
    {               0,           0 }, /* 109E	႞	e1 82 9e	MYANMAR SYMBOL SHAN ONE */
    {               0,           0 }, /* 109F	႟	e1 82 9f	MYANMAR SYMBOL SHAN EXCLAMATION */
    {               0,           0 }, /* 10A0	Ⴀ	e1 82 a0	GEORGIAN CAPITAL LETTER AN */
    {               0,           0 }, /* 10A1	Ⴁ	e1 82 a1	GEORGIAN CAPITAL LETTER BAN */
    {               0,           0 }, /* 10A2	Ⴂ	e1 82 a2	GEORGIAN CAPITAL LETTER GAN */
    {               0,           0 }, /* 10A3	Ⴃ	e1 82 a3	GEORGIAN CAPITAL LETTER DON */
    {               0,           0 }, /* 10A4	Ⴄ	e1 82 a4	GEORGIAN CAPITAL LETTER EN */
    {               0,           0 }, /* 10A5	Ⴅ	e1 82 a5	GEORGIAN CAPITAL LETTER VIN */
    {               0,           0 }, /* 10A6	Ⴆ	e1 82 a6	GEORGIAN CAPITAL LETTER ZEN */
    {               0,           0 }, /* 10A7	Ⴇ	e1 82 a7	GEORGIAN CAPITAL LETTER TAN */
    {               0,           0 }, /* 10A8	Ⴈ	e1 82 a8	GEORGIAN CAPITAL LETTER IN */
    {               0,           0 }, /* 10A9	Ⴉ	e1 82 a9	GEORGIAN CAPITAL LETTER KAN */
    {               0,           0 }, /* 10AA	Ⴊ	e1 82 aa	GEORGIAN CAPITAL LETTER LAS */
    {               0,           0 }, /* 10AB	Ⴋ	e1 82 ab	GEORGIAN CAPITAL LETTER MAN */
    {               0,           0 }, /* 10AC	Ⴌ	e1 82 ac	GEORGIAN CAPITAL LETTER NAR */
    {               0,           0 }, /* 10AD	Ⴍ	e1 82 ad	GEORGIAN CAPITAL LETTER ON */
    {               0,           0 }, /* 10AE	Ⴎ	e1 82 ae	GEORGIAN CAPITAL LETTER PAR */
    {               0,           0 }, /* 10AF	Ⴏ	e1 82 af	GEORGIAN CAPITAL LETTER ZHAR */
    {               0,           0 }, /* 10B0	Ⴐ	e1 82 b0	GEORGIAN CAPITAL LETTER RAE */
    {               0,           0 }, /* 10B1	Ⴑ	e1 82 b1	GEORGIAN CAPITAL LETTER SAN */
    {               0,           0 }, /* 10B2	Ⴒ	e1 82 b2	GEORGIAN CAPITAL LETTER TAR */
    {               0,           0 }, /* 10B3	Ⴓ	e1 82 b3	GEORGIAN CAPITAL LETTER UN */
    {               0,           0 }, /* 10B4	Ⴔ	e1 82 b4	GEORGIAN CAPITAL LETTER PHAR */
    {               0,           0 }, /* 10B5	Ⴕ	e1 82 b5	GEORGIAN CAPITAL LETTER KHAR */
    {               0,           0 }, /* 10B6	Ⴖ	e1 82 b6	GEORGIAN CAPITAL LETTER GHAN */
    {               0,           0 }, /* 10B7	Ⴗ	e1 82 b7	GEORGIAN CAPITAL LETTER QAR */
    {               0,           0 }, /* 10B8	Ⴘ	e1 82 b8	GEORGIAN CAPITAL LETTER SHIN */
    {               0,           0 }, /* 10B9	Ⴙ	e1 82 b9	GEORGIAN CAPITAL LETTER CHIN */
    {               0,           0 }, /* 10BA	Ⴚ	e1 82 ba	GEORGIAN CAPITAL LETTER CAN */
    {               0,           0 }, /* 10BB	Ⴛ	e1 82 bb	GEORGIAN CAPITAL LETTER JIL */
    {               0,           0 }, /* 10BC	Ⴜ	e1 82 bc	GEORGIAN CAPITAL LETTER CIL */
    {               0,           0 }, /* 10BD	Ⴝ	e1 82 bd	GEORGIAN CAPITAL LETTER CHAR */
    {               0,           0 }, /* 10BE	Ⴞ	e1 82 be	GEORGIAN CAPITAL LETTER XAN */
    {               0,           0 }, /* 10BF	Ⴟ	e1 82 bf	GEORGIAN CAPITAL LETTER JHAN */
    {               0,           0 }, /* 10C0	Ⴠ	e1 83 80	GEORGIAN CAPITAL LETTER HAE */
    {               0,           0 }, /* 10C1	Ⴡ	e1 83 81	GEORGIAN CAPITAL LETTER HE */
    {               0,           0 }, /* 10C2	Ⴢ	e1 83 82	GEORGIAN CAPITAL LETTER HIE */
    {               0,           0 }, /* 10C3	Ⴣ	e1 83 83	GEORGIAN CAPITAL LETTER WE */
    {               0,           0 }, /* 10C4	Ⴤ	e1 83 84	GEORGIAN CAPITAL LETTER HAR */
    {               0,           0 }, /* 10C5	Ⴥ	e1 83 85	GEORGIAN CAPITAL LETTER HOE */
    {               0,           0 }, /* 10C6	჆	e1 83 86	 */
    {               0,           0 }, /* 10C7	Ⴧ	e1 83 87	 */
    {               0,           0 }, /* 10C8	჈	e1 83 88	 */
    {               0,           0 }, /* 10C9	჉	e1 83 89	 */
    {               0,           0 }, /* 10CA	჊	e1 83 8a	 */
    {               0,           0 }, /* 10CB	჋	e1 83 8b	 */
    {               0,           0 }, /* 10CC	჌	e1 83 8c	 */
    {               0,           0 }, /* 10CD	Ⴭ	e1 83 8d	 */
    {               0,           0 }, /* 10CE	჎	e1 83 8e	 */
    {               0,           0 }, /* 10CF	჏	e1 83 8f	 */
    {               0,           0 }, /* 10D0	ა	e1 83 90	GEORGIAN LETTER AN */
    {               0,           0 }, /* 10D1	ბ	e1 83 91	GEORGIAN LETTER BAN */
    {               0,           0 }, /* 10D2	გ	e1 83 92	GEORGIAN LETTER GAN */
    {               0,           0 }, /* 10D3	დ	e1 83 93	GEORGIAN LETTER DON */
    {               0,           0 }, /* 10D4	ე	e1 83 94	GEORGIAN LETTER EN */
    {               0,           0 }, /* 10D5	ვ	e1 83 95	GEORGIAN LETTER VIN */
    {               0,           0 }, /* 10D6	ზ	e1 83 96	GEORGIAN LETTER ZEN */
    {               0,           0 }, /* 10D7	თ	e1 83 97	GEORGIAN LETTER TAN */
    {               0,           0 }, /* 10D8	ი	e1 83 98	GEORGIAN LETTER IN */
    {               0,           0 }, /* 10D9	კ	e1 83 99	GEORGIAN LETTER KAN */
    {               0,           0 }, /* 10DA	ლ	e1 83 9a	GEORGIAN LETTER LAS */
    {               0,           0 }, /* 10DB	მ	e1 83 9b	GEORGIAN LETTER MAN */
    {               0,           0 }, /* 10DC	ნ	e1 83 9c	GEORGIAN LETTER NAR */
    {               0,           0 }, /* 10DD	ო	e1 83 9d	GEORGIAN LETTER ON */
    {               0,           0 }, /* 10DE	პ	e1 83 9e	GEORGIAN LETTER PAR */
    {               0,           0 }, /* 10DF	ჟ	e1 83 9f	GEORGIAN LETTER ZHAR */
    {               0,           0 }, /* 10E0	რ	e1 83 a0	GEORGIAN LETTER RAE */
    {               0,           0 }, /* 10E1	ს	e1 83 a1	GEORGIAN LETTER SAN */
    {               0,           0 }, /* 10E2	ტ	e1 83 a2	GEORGIAN LETTER TAR */
    {               0,           0 }, /* 10E3	უ	e1 83 a3	GEORGIAN LETTER UN */
    {               0,           0 }, /* 10E4	ფ	e1 83 a4	GEORGIAN LETTER PHAR */
    {               0,           0 }, /* 10E5	ქ	e1 83 a5	GEORGIAN LETTER KHAR */
    {               0,           0 }, /* 10E6	ღ	e1 83 a6	GEORGIAN LETTER GHAN */
    {               0,           0 }, /* 10E7	ყ	e1 83 a7	GEORGIAN LETTER QAR */
    {               0,           0 }, /* 10E8	შ	e1 83 a8	GEORGIAN LETTER SHIN */
    {               0,           0 }, /* 10E9	ჩ	e1 83 a9	GEORGIAN LETTER CHIN */
    {               0,           0 }, /* 10EA	ც	e1 83 aa	GEORGIAN LETTER CAN */
    {               0,           0 }, /* 10EB	ძ	e1 83 ab	GEORGIAN LETTER JIL */
    {               0,           0 }, /* 10EC	წ	e1 83 ac	GEORGIAN LETTER CIL */
    {               0,           0 }, /* 10ED	ჭ	e1 83 ad	GEORGIAN LETTER CHAR */
    {               0,           0 }, /* 10EE	ხ	e1 83 ae	GEORGIAN LETTER XAN */
    {               0,           0 }, /* 10EF	ჯ	e1 83 af	GEORGIAN LETTER JHAN */
    {               0,           0 }, /* 10F0	ჰ	e1 83 b0	GEORGIAN LETTER HAE */
    {               0,           0 }, /* 10F1	ჱ	e1 83 b1	GEORGIAN LETTER HE */
    {               0,           0 }, /* 10F2	ჲ	e1 83 b2	GEORGIAN LETTER HIE */
    {               0,           0 }, /* 10F3	ჳ	e1 83 b3	GEORGIAN LETTER WE */
    {               0,           0 }, /* 10F4	ჴ	e1 83 b4	GEORGIAN LETTER HAR */
    {               0,           0 }, /* 10F5	ჵ	e1 83 b5	GEORGIAN LETTER HOE */
    {               0,           0 }, /* 10F6	ჶ	e1 83 b6	GEORGIAN LETTER FI */
    {               0,           0 }, /* 10F7	ჷ	e1 83 b7	GEORGIAN LETTER YN */
    {               0,           0 }, /* 10F8	ჸ	e1 83 b8	GEORGIAN LETTER ELIFI */
    {               0,           0 }, /* 10F9	ჹ	e1 83 b9	GEORGIAN LETTER TURNED GAN */
    {               0,           0 }, /* 10FA	ჺ	e1 83 ba	GEORGIAN LETTER AIN */
    {               0,           0 }, /* 10FB	჻	e1 83 bb	GEORGIAN PARAGRAPH SEPARATOR */
    {               0,           0 }, /* 10FC	ჼ	e1 83 bc	MODIFIER LETTER GEORGIAN NAR */
    {               0,           0 }, /* 10FD	ჽ	e1 83 bd	 */
    {               0,           0 }, /* 10FE	ჾ	e1 83 be	 */
    {               0,           0 }, /* 10FF	ჿ	e1 83 bf	 */
    {               0,           0 }, /* 1100	ᄀ	e1 84 80	HANGUL CHOSEONG KIYEOK */
    {               0,           0 }, /* 1101	ᄁ	e1 84 81	HANGUL CHOSEONG SSANGKIYEOK */
    {               0,           0 }, /* 1102	ᄂ	e1 84 82	HANGUL CHOSEONG NIEUN */
    {               0,           0 }, /* 1103	ᄃ	e1 84 83	HANGUL CHOSEONG TIKEUT */
    {               0,           0 }, /* 1104	ᄄ	e1 84 84	HANGUL CHOSEONG SSANGTIKEUT */
    {               0,           0 }, /* 1105	ᄅ	e1 84 85	HANGUL CHOSEONG RIEUL */
    {               0,           0 }, /* 1106	ᄆ	e1 84 86	HANGUL CHOSEONG MIEUM */
    {               0,           0 }, /* 1107	ᄇ	e1 84 87	HANGUL CHOSEONG PIEUP */
    {               0,           0 }, /* 1108	ᄈ	e1 84 88	HANGUL CHOSEONG SSANGPIEUP */
    {               0,           0 }, /* 1109	ᄉ	e1 84 89	HANGUL CHOSEONG SIOS */
    {               0,           0 }, /* 110A	ᄊ	e1 84 8a	HANGUL CHOSEONG SSANGSIOS */
    {               0,           0 }, /* 110B	ᄋ	e1 84 8b	HANGUL CHOSEONG IEUNG */
    {               0,           0 }, /* 110C	ᄌ	e1 84 8c	HANGUL CHOSEONG CIEUC */
    {               0,           0 }, /* 110D	ᄍ	e1 84 8d	HANGUL CHOSEONG SSANGCIEUC */
    {               0,           0 }, /* 110E	ᄎ	e1 84 8e	HANGUL CHOSEONG CHIEUCH */
    {               0,           0 }, /* 110F	ᄏ	e1 84 8f	HANGUL CHOSEONG KHIEUKH */
    {               0,           0 }, /* 1110	ᄐ	e1 84 90	HANGUL CHOSEONG THIEUTH */
    {               0,           0 }, /* 1111	ᄑ	e1 84 91	HANGUL CHOSEONG PHIEUPH */
    {               0,           0 }, /* 1112	ᄒ	e1 84 92	HANGUL CHOSEONG HIEUH */
    {               0,           0 }, /* 1113	ᄓ	e1 84 93	HANGUL CHOSEONG NIEUN-KIYEOK */
    {               0,           0 }, /* 1114	ᄔ	e1 84 94	HANGUL CHOSEONG SSANGNIEUN */
    {               0,           0 }, /* 1115	ᄕ	e1 84 95	HANGUL CHOSEONG NIEUN-TIKEUT */
    {               0,           0 }, /* 1116	ᄖ	e1 84 96	HANGUL CHOSEONG NIEUN-PIEUP */
    {               0,           0 }, /* 1117	ᄗ	e1 84 97	HANGUL CHOSEONG TIKEUT-KIYEOK */
    {               0,           0 }, /* 1118	ᄘ	e1 84 98	HANGUL CHOSEONG RIEUL-NIEUN */
    {               0,           0 }, /* 1119	ᄙ	e1 84 99	HANGUL CHOSEONG SSANGRIEUL */
    {               0,           0 }, /* 111A	ᄚ	e1 84 9a	HANGUL CHOSEONG RIEUL-HIEUH */
    {               0,           0 }, /* 111B	ᄛ	e1 84 9b	HANGUL CHOSEONG KAPYEOUNRIEUL */
    {               0,           0 }, /* 111C	ᄜ	e1 84 9c	HANGUL CHOSEONG MIEUM-PIEUP */
    {               0,           0 }, /* 111D	ᄝ	e1 84 9d	HANGUL CHOSEONG KAPYEOUNMIEUM */
    {               0,           0 }, /* 111E	ᄞ	e1 84 9e	HANGUL CHOSEONG PIEUP-KIYEOK */
    {               0,           0 }, /* 111F	ᄟ	e1 84 9f	HANGUL CHOSEONG PIEUP-NIEUN */
    {               0,           0 }, /* 1120	ᄠ	e1 84 a0	HANGUL CHOSEONG PIEUP-TIKEUT */
    {               0,           0 }, /* 1121	ᄡ	e1 84 a1	HANGUL CHOSEONG PIEUP-SIOS */
    {               0,           0 }, /* 1122	ᄢ	e1 84 a2	HANGUL CHOSEONG PIEUP-SIOS-KIYEOK */
    {               0,           0 }, /* 1123	ᄣ	e1 84 a3	HANGUL CHOSEONG PIEUP-SIOS-TIKEUT */
    {               0,           0 }, /* 1124	ᄤ	e1 84 a4	HANGUL CHOSEONG PIEUP-SIOS-PIEUP */
    {               0,           0 }, /* 1125	ᄥ	e1 84 a5	HANGUL CHOSEONG PIEUP-SSANGSIOS */
    {               0,           0 }, /* 1126	ᄦ	e1 84 a6	HANGUL CHOSEONG PIEUP-SIOS-CIEUC */
    {               0,           0 }, /* 1127	ᄧ	e1 84 a7	HANGUL CHOSEONG PIEUP-CIEUC */
    {               0,           0 }, /* 1128	ᄨ	e1 84 a8	HANGUL CHOSEONG PIEUP-CHIEUCH */
    {               0,           0 }, /* 1129	ᄩ	e1 84 a9	HANGUL CHOSEONG PIEUP-THIEUTH */
    {               0,           0 }, /* 112A	ᄪ	e1 84 aa	HANGUL CHOSEONG PIEUP-PHIEUPH */
    {               0,           0 }, /* 112B	ᄫ	e1 84 ab	HANGUL CHOSEONG KAPYEOUNPIEUP */
    {               0,           0 }, /* 112C	ᄬ	e1 84 ac	HANGUL CHOSEONG KAPYEOUNSSANGPIEUP */
    {               0,           0 }, /* 112D	ᄭ	e1 84 ad	HANGUL CHOSEONG SIOS-KIYEOK */
    {               0,           0 }, /* 112E	ᄮ	e1 84 ae	HANGUL CHOSEONG SIOS-NIEUN */
    {               0,           0 }, /* 112F	ᄯ	e1 84 af	HANGUL CHOSEONG SIOS-TIKEUT */
    {               0,           0 }, /* 1130	ᄰ	e1 84 b0	HANGUL CHOSEONG SIOS-RIEUL */
    {               0,           0 }, /* 1131	ᄱ	e1 84 b1	HANGUL CHOSEONG SIOS-MIEUM */
    {               0,           0 }, /* 1132	ᄲ	e1 84 b2	HANGUL CHOSEONG SIOS-PIEUP */
    {               0,           0 }, /* 1133	ᄳ	e1 84 b3	HANGUL CHOSEONG SIOS-PIEUP-KIYEOK */
    {               0,           0 }, /* 1134	ᄴ	e1 84 b4	HANGUL CHOSEONG SIOS-SSANGSIOS */
    {               0,           0 }, /* 1135	ᄵ	e1 84 b5	HANGUL CHOSEONG SIOS-IEUNG */
    {               0,           0 }, /* 1136	ᄶ	e1 84 b6	HANGUL CHOSEONG SIOS-CIEUC */
    {               0,           0 }, /* 1137	ᄷ	e1 84 b7	HANGUL CHOSEONG SIOS-CHIEUCH */
    {               0,           0 }, /* 1138	ᄸ	e1 84 b8	HANGUL CHOSEONG SIOS-KHIEUKH */
    {               0,           0 }, /* 1139	ᄹ	e1 84 b9	HANGUL CHOSEONG SIOS-THIEUTH */
    {               0,           0 }, /* 113A	ᄺ	e1 84 ba	HANGUL CHOSEONG SIOS-PHIEUPH */
    {               0,           0 }, /* 113B	ᄻ	e1 84 bb	HANGUL CHOSEONG SIOS-HIEUH */
    {               0,           0 }, /* 113C	ᄼ	e1 84 bc	HANGUL CHOSEONG CHITUEUMSIOS */
    {               0,           0 }, /* 113D	ᄽ	e1 84 bd	HANGUL CHOSEONG CHITUEUMSSANGSIOS */
    {               0,           0 }, /* 113E	ᄾ	e1 84 be	HANGUL CHOSEONG CEONGCHIEUMSIOS */
    {               0,           0 }, /* 113F	ᄿ	e1 84 bf	HANGUL CHOSEONG CEONGCHIEUMSSANGSIOS */
    {               0,           0 }, /* 1140	ᅀ	e1 85 80	HANGUL CHOSEONG PANSIOS */
    {               0,           0 }, /* 1141	ᅁ	e1 85 81	HANGUL CHOSEONG IEUNG-KIYEOK */
    {               0,           0 }, /* 1142	ᅂ	e1 85 82	HANGUL CHOSEONG IEUNG-TIKEUT */
    {               0,           0 }, /* 1143	ᅃ	e1 85 83	HANGUL CHOSEONG IEUNG-MIEUM */
    {               0,           0 }, /* 1144	ᅄ	e1 85 84	HANGUL CHOSEONG IEUNG-PIEUP */
    {               0,           0 }, /* 1145	ᅅ	e1 85 85	HANGUL CHOSEONG IEUNG-SIOS */
    {               0,           0 }, /* 1146	ᅆ	e1 85 86	HANGUL CHOSEONG IEUNG-PANSIOS */
    {               0,           0 }, /* 1147	ᅇ	e1 85 87	HANGUL CHOSEONG SSANGIEUNG */
    {               0,           0 }, /* 1148	ᅈ	e1 85 88	HANGUL CHOSEONG IEUNG-CIEUC */
    {               0,           0 }, /* 1149	ᅉ	e1 85 89	HANGUL CHOSEONG IEUNG-CHIEUCH */
    {               0,           0 }, /* 114A	ᅊ	e1 85 8a	HANGUL CHOSEONG IEUNG-THIEUTH */
    {               0,           0 }, /* 114B	ᅋ	e1 85 8b	HANGUL CHOSEONG IEUNG-PHIEUPH */
    {               0,           0 }, /* 114C	ᅌ	e1 85 8c	HANGUL CHOSEONG YESIEUNG */
    {               0,           0 }, /* 114D	ᅍ	e1 85 8d	HANGUL CHOSEONG CIEUC-IEUNG */
    {               0,           0 }, /* 114E	ᅎ	e1 85 8e	HANGUL CHOSEONG CHITUEUMCIEUC */
    {               0,           0 }, /* 114F	ᅏ	e1 85 8f	HANGUL CHOSEONG CHITUEUMSSANGCIEUC */
    {               0,           0 }, /* 1150	ᅐ	e1 85 90	HANGUL CHOSEONG CEONGCHIEUMCIEUC */
    {               0,           0 }, /* 1151	ᅑ	e1 85 91	HANGUL CHOSEONG CEONGCHIEUMSSANGCIEUC */
    {               0,           0 }, /* 1152	ᅒ	e1 85 92	HANGUL CHOSEONG CHIEUCH-KHIEUKH */
    {               0,           0 }, /* 1153	ᅓ	e1 85 93	HANGUL CHOSEONG CHIEUCH-HIEUH */
    {               0,           0 }, /* 1154	ᅔ	e1 85 94	HANGUL CHOSEONG CHITUEUMCHIEUCH */
    {               0,           0 }, /* 1155	ᅕ	e1 85 95	HANGUL CHOSEONG CEONGCHIEUMCHIEUCH */
    {               0,           0 }, /* 1156	ᅖ	e1 85 96	HANGUL CHOSEONG PHIEUPH-PIEUP */
    {               0,           0 }, /* 1157	ᅗ	e1 85 97	HANGUL CHOSEONG KAPYEOUNPHIEUPH */
    {               0,           0 }, /* 1158	ᅘ	e1 85 98	HANGUL CHOSEONG SSANGHIEUH */
    {               0,           0 }, /* 1159	ᅙ	e1 85 99	HANGUL CHOSEONG YEORINHIEUH */
    {               0,           0 }, /* 115A	ᅚ	e1 85 9a	HANGUL CHOSEONG KIYEOK-TIKEUT */
    {               0,           0 }, /* 115B	ᅛ	e1 85 9b	HANGUL CHOSEONG NIEUN-SIOS */
    {               0,           0 }, /* 115C	ᅜ	e1 85 9c	HANGUL CHOSEONG NIEUN-CIEUC */
    {               0,           0 }, /* 115D	ᅝ	e1 85 9d	HANGUL CHOSEONG NIEUN-HIEUH */
    {               0,           0 }, /* 115E	ᅞ	e1 85 9e	HANGUL CHOSEONG TIKEUT-RIEUL */
    {               0,           0 }, /* 115F	ᅟ	e1 85 9f	HANGUL CHOSEONG FILLER */
    {               0,           0 }, /* 1160	ᅠ	e1 85 a0	HANGUL JUNGSEONG FILLER */
    {               0,           0 }, /* 1161	ᅡ	e1 85 a1	HANGUL JUNGSEONG A */
    {               0,           0 }, /* 1162	ᅢ	e1 85 a2	HANGUL JUNGSEONG AE */
    {               0,           0 }, /* 1163	ᅣ	e1 85 a3	HANGUL JUNGSEONG YA */
    {               0,           0 }, /* 1164	ᅤ	e1 85 a4	HANGUL JUNGSEONG YAE */
    {               0,           0 }, /* 1165	ᅥ	e1 85 a5	HANGUL JUNGSEONG EO */
    {               0,           0 }, /* 1166	ᅦ	e1 85 a6	HANGUL JUNGSEONG E */
    {               0,           0 }, /* 1167	ᅧ	e1 85 a7	HANGUL JUNGSEONG YEO */
    {               0,           0 }, /* 1168	ᅨ	e1 85 a8	HANGUL JUNGSEONG YE */
    {               0,           0 }, /* 1169	ᅩ	e1 85 a9	HANGUL JUNGSEONG O */
    {               0,           0 }, /* 116A	ᅪ	e1 85 aa	HANGUL JUNGSEONG WA */
    {               0,           0 }, /* 116B	ᅫ	e1 85 ab	HANGUL JUNGSEONG WAE */
    {               0,           0 }, /* 116C	ᅬ	e1 85 ac	HANGUL JUNGSEONG OE */
    {               0,           0 }, /* 116D	ᅭ	e1 85 ad	HANGUL JUNGSEONG YO */
    {               0,           0 }, /* 116E	ᅮ	e1 85 ae	HANGUL JUNGSEONG U */
    {               0,           0 }, /* 116F	ᅯ	e1 85 af	HANGUL JUNGSEONG WEO */
    {               0,           0 }, /* 1170	ᅰ	e1 85 b0	HANGUL JUNGSEONG WE */
    {               0,           0 }, /* 1171	ᅱ	e1 85 b1	HANGUL JUNGSEONG WI */
    {               0,           0 }, /* 1172	ᅲ	e1 85 b2	HANGUL JUNGSEONG YU */
    {               0,           0 }, /* 1173	ᅳ	e1 85 b3	HANGUL JUNGSEONG EU */
    {               0,           0 }, /* 1174	ᅴ	e1 85 b4	HANGUL JUNGSEONG YI */
    {               0,           0 }, /* 1175	ᅵ	e1 85 b5	HANGUL JUNGSEONG I */
    {               0,           0 }, /* 1176	ᅶ	e1 85 b6	HANGUL JUNGSEONG A-O */
    {               0,           0 }, /* 1177	ᅷ	e1 85 b7	HANGUL JUNGSEONG A-U */
    {               0,           0 }, /* 1178	ᅸ	e1 85 b8	HANGUL JUNGSEONG YA-O */
    {               0,           0 }, /* 1179	ᅹ	e1 85 b9	HANGUL JUNGSEONG YA-YO */
    {               0,           0 }, /* 117A	ᅺ	e1 85 ba	HANGUL JUNGSEONG EO-O */
    {               0,           0 }, /* 117B	ᅻ	e1 85 bb	HANGUL JUNGSEONG EO-U */
    {               0,           0 }, /* 117C	ᅼ	e1 85 bc	HANGUL JUNGSEONG EO-EU */
    {               0,           0 }, /* 117D	ᅽ	e1 85 bd	HANGUL JUNGSEONG YEO-O */
    {               0,           0 }, /* 117E	ᅾ	e1 85 be	HANGUL JUNGSEONG YEO-U */
    {               0,           0 }, /* 117F	ᅿ	e1 85 bf	HANGUL JUNGSEONG O-EO */
    {               0,           0 }, /* 1180	ᆀ	e1 86 80	HANGUL JUNGSEONG O-E */
    {               0,           0 }, /* 1181	ᆁ	e1 86 81	HANGUL JUNGSEONG O-YE */
    {               0,           0 }, /* 1182	ᆂ	e1 86 82	HANGUL JUNGSEONG O-O */
    {               0,           0 }, /* 1183	ᆃ	e1 86 83	HANGUL JUNGSEONG O-U */
    {               0,           0 }, /* 1184	ᆄ	e1 86 84	HANGUL JUNGSEONG YO-YA */
    {               0,           0 }, /* 1185	ᆅ	e1 86 85	HANGUL JUNGSEONG YO-YAE */
    {               0,           0 }, /* 1186	ᆆ	e1 86 86	HANGUL JUNGSEONG YO-YEO */
    {               0,           0 }, /* 1187	ᆇ	e1 86 87	HANGUL JUNGSEONG YO-O */
    {               0,           0 }, /* 1188	ᆈ	e1 86 88	HANGUL JUNGSEONG YO-I */
    {               0,           0 }, /* 1189	ᆉ	e1 86 89	HANGUL JUNGSEONG U-A */
    {               0,           0 }, /* 118A	ᆊ	e1 86 8a	HANGUL JUNGSEONG U-AE */
    {               0,           0 }, /* 118B	ᆋ	e1 86 8b	HANGUL JUNGSEONG U-EO-EU */
    {               0,           0 }, /* 118C	ᆌ	e1 86 8c	HANGUL JUNGSEONG U-YE */
    {               0,           0 }, /* 118D	ᆍ	e1 86 8d	HANGUL JUNGSEONG U-U */
    {               0,           0 }, /* 118E	ᆎ	e1 86 8e	HANGUL JUNGSEONG YU-A */
    {               0,           0 }, /* 118F	ᆏ	e1 86 8f	HANGUL JUNGSEONG YU-EO */
    {               0,           0 }, /* 1190	ᆐ	e1 86 90	HANGUL JUNGSEONG YU-E */
    {               0,           0 }, /* 1191	ᆑ	e1 86 91	HANGUL JUNGSEONG YU-YEO */
    {               0,           0 }, /* 1192	ᆒ	e1 86 92	HANGUL JUNGSEONG YU-YE */
    {               0,           0 }, /* 1193	ᆓ	e1 86 93	HANGUL JUNGSEONG YU-U */
    {               0,           0 }, /* 1194	ᆔ	e1 86 94	HANGUL JUNGSEONG YU-I */
    {               0,           0 }, /* 1195	ᆕ	e1 86 95	HANGUL JUNGSEONG EU-U */
    {               0,           0 }, /* 1196	ᆖ	e1 86 96	HANGUL JUNGSEONG EU-EU */
    {               0,           0 }, /* 1197	ᆗ	e1 86 97	HANGUL JUNGSEONG YI-U */
    {               0,           0 }, /* 1198	ᆘ	e1 86 98	HANGUL JUNGSEONG I-A */
    {               0,           0 }, /* 1199	ᆙ	e1 86 99	HANGUL JUNGSEONG I-YA */
    {               0,           0 }, /* 119A	ᆚ	e1 86 9a	HANGUL JUNGSEONG I-O */
    {               0,           0 }, /* 119B	ᆛ	e1 86 9b	HANGUL JUNGSEONG I-U */
    {               0,           0 }, /* 119C	ᆜ	e1 86 9c	HANGUL JUNGSEONG I-EU */
    {               0,           0 }, /* 119D	ᆝ	e1 86 9d	HANGUL JUNGSEONG I-ARAEA */
    {               0,           0 }, /* 119E	ᆞ	e1 86 9e	HANGUL JUNGSEONG ARAEA */
    {               0,           0 }, /* 119F	ᆟ	e1 86 9f	HANGUL JUNGSEONG ARAEA-EO */
    {               0,           0 }, /* 11A0	ᆠ	e1 86 a0	HANGUL JUNGSEONG ARAEA-U */
    {               0,           0 }, /* 11A1	ᆡ	e1 86 a1	HANGUL JUNGSEONG ARAEA-I */
    {               0,           0 }, /* 11A2	ᆢ	e1 86 a2	HANGUL JUNGSEONG SSANGARAEA */
    {               0,           0 }, /* 11A3	ᆣ	e1 86 a3	HANGUL JUNGSEONG A-EU */
    {               0,           0 }, /* 11A4	ᆤ	e1 86 a4	HANGUL JUNGSEONG YA-U */
    {               0,           0 }, /* 11A5	ᆥ	e1 86 a5	HANGUL JUNGSEONG YEO-YA */
    {               0,           0 }, /* 11A6	ᆦ	e1 86 a6	HANGUL JUNGSEONG O-YA */
    {               0,           0 }, /* 11A7	ᆧ	e1 86 a7	HANGUL JUNGSEONG O-YAE */
    {               0,           0 }, /* 11A8	ᆨ	e1 86 a8	HANGUL JONGSEONG KIYEOK */
    {               0,           0 }, /* 11A9	ᆩ	e1 86 a9	HANGUL JONGSEONG SSANGKIYEOK */
    {               0,           0 }, /* 11AA	ᆪ	e1 86 aa	HANGUL JONGSEONG KIYEOK-SIOS */
    {               0,           0 }, /* 11AB	ᆫ	e1 86 ab	HANGUL JONGSEONG NIEUN */
    {               0,           0 }, /* 11AC	ᆬ	e1 86 ac	HANGUL JONGSEONG NIEUN-CIEUC */
    {               0,           0 }, /* 11AD	ᆭ	e1 86 ad	HANGUL JONGSEONG NIEUN-HIEUH */
    {               0,           0 }, /* 11AE	ᆮ	e1 86 ae	HANGUL JONGSEONG TIKEUT */
    {               0,           0 }, /* 11AF	ᆯ	e1 86 af	HANGUL JONGSEONG RIEUL */
    {               0,           0 }, /* 11B0	ᆰ	e1 86 b0	HANGUL JONGSEONG RIEUL-KIYEOK */
    {               0,           0 }, /* 11B1	ᆱ	e1 86 b1	HANGUL JONGSEONG RIEUL-MIEUM */
    {               0,           0 }, /* 11B2	ᆲ	e1 86 b2	HANGUL JONGSEONG RIEUL-PIEUP */
    {               0,           0 }, /* 11B3	ᆳ	e1 86 b3	HANGUL JONGSEONG RIEUL-SIOS */
    {               0,           0 }, /* 11B4	ᆴ	e1 86 b4	HANGUL JONGSEONG RIEUL-THIEUTH */
    {               0,           0 }, /* 11B5	ᆵ	e1 86 b5	HANGUL JONGSEONG RIEUL-PHIEUPH */
    {               0,           0 }, /* 11B6	ᆶ	e1 86 b6	HANGUL JONGSEONG RIEUL-HIEUH */
    {               0,           0 }, /* 11B7	ᆷ	e1 86 b7	HANGUL JONGSEONG MIEUM */
    {               0,           0 }, /* 11B8	ᆸ	e1 86 b8	HANGUL JONGSEONG PIEUP */
    {               0,           0 }, /* 11B9	ᆹ	e1 86 b9	HANGUL JONGSEONG PIEUP-SIOS */
    {               0,           0 }, /* 11BA	ᆺ	e1 86 ba	HANGUL JONGSEONG SIOS */
    {               0,           0 }, /* 11BB	ᆻ	e1 86 bb	HANGUL JONGSEONG SSANGSIOS */
    {               0,           0 }, /* 11BC	ᆼ	e1 86 bc	HANGUL JONGSEONG IEUNG */
    {               0,           0 }, /* 11BD	ᆽ	e1 86 bd	HANGUL JONGSEONG CIEUC */
    {               0,           0 }, /* 11BE	ᆾ	e1 86 be	HANGUL JONGSEONG CHIEUCH */
    {               0,           0 }, /* 11BF	ᆿ	e1 86 bf	HANGUL JONGSEONG KHIEUKH */
    {               0,           0 }, /* 11C0	ᇀ	e1 87 80	HANGUL JONGSEONG THIEUTH */
    {               0,           0 }, /* 11C1	ᇁ	e1 87 81	HANGUL JONGSEONG PHIEUPH */
    {               0,           0 }, /* 11C2	ᇂ	e1 87 82	HANGUL JONGSEONG HIEUH */
    {               0,           0 }, /* 11C3	ᇃ	e1 87 83	HANGUL JONGSEONG KIYEOK-RIEUL */
    {               0,           0 }, /* 11C4	ᇄ	e1 87 84	HANGUL JONGSEONG KIYEOK-SIOS-KIYEOK */
    {               0,           0 }, /* 11C5	ᇅ	e1 87 85	HANGUL JONGSEONG NIEUN-KIYEOK */
    {               0,           0 }, /* 11C6	ᇆ	e1 87 86	HANGUL JONGSEONG NIEUN-TIKEUT */
    {               0,           0 }, /* 11C7	ᇇ	e1 87 87	HANGUL JONGSEONG NIEUN-SIOS */
    {               0,           0 }, /* 11C8	ᇈ	e1 87 88	HANGUL JONGSEONG NIEUN-PANSIOS */
    {               0,           0 }, /* 11C9	ᇉ	e1 87 89	HANGUL JONGSEONG NIEUN-THIEUTH */
    {               0,           0 }, /* 11CA	ᇊ	e1 87 8a	HANGUL JONGSEONG TIKEUT-KIYEOK */
    {               0,           0 }, /* 11CB	ᇋ	e1 87 8b	HANGUL JONGSEONG TIKEUT-RIEUL */
    {               0,           0 }, /* 11CC	ᇌ	e1 87 8c	HANGUL JONGSEONG RIEUL-KIYEOK-SIOS */
    {               0,           0 }, /* 11CD	ᇍ	e1 87 8d	HANGUL JONGSEONG RIEUL-NIEUN */
    {               0,           0 }, /* 11CE	ᇎ	e1 87 8e	HANGUL JONGSEONG RIEUL-TIKEUT */
    {               0,           0 }, /* 11CF	ᇏ	e1 87 8f	HANGUL JONGSEONG RIEUL-TIKEUT-HIEUH */
    {               0,           0 }, /* 11D0	ᇐ	e1 87 90	HANGUL JONGSEONG SSANGRIEUL */
    {               0,           0 }, /* 11D1	ᇑ	e1 87 91	HANGUL JONGSEONG RIEUL-MIEUM-KIYEOK */
    {               0,           0 }, /* 11D2	ᇒ	e1 87 92	HANGUL JONGSEONG RIEUL-MIEUM-SIOS */
    {               0,           0 }, /* 11D3	ᇓ	e1 87 93	HANGUL JONGSEONG RIEUL-PIEUP-SIOS */
    {               0,           0 }, /* 11D4	ᇔ	e1 87 94	HANGUL JONGSEONG RIEUL-PIEUP-HIEUH */
    {               0,           0 }, /* 11D5	ᇕ	e1 87 95	HANGUL JONGSEONG RIEUL-KAPYEOUNPIEUP */
    {               0,           0 }, /* 11D6	ᇖ	e1 87 96	HANGUL JONGSEONG RIEUL-SSANGSIOS */
    {               0,           0 }, /* 11D7	ᇗ	e1 87 97	HANGUL JONGSEONG RIEUL-PANSIOS */
    {               0,           0 }, /* 11D8	ᇘ	e1 87 98	HANGUL JONGSEONG RIEUL-KHIEUKH */
    {               0,           0 }, /* 11D9	ᇙ	e1 87 99	HANGUL JONGSEONG RIEUL-YEORINHIEUH */
    {               0,           0 }, /* 11DA	ᇚ	e1 87 9a	HANGUL JONGSEONG MIEUM-KIYEOK */
    {               0,           0 }, /* 11DB	ᇛ	e1 87 9b	HANGUL JONGSEONG MIEUM-RIEUL */
    {               0,           0 }, /* 11DC	ᇜ	e1 87 9c	HANGUL JONGSEONG MIEUM-PIEUP */
    {               0,           0 }, /* 11DD	ᇝ	e1 87 9d	HANGUL JONGSEONG MIEUM-SIOS */
    {               0,           0 }, /* 11DE	ᇞ	e1 87 9e	HANGUL JONGSEONG MIEUM-SSANGSIOS */
    {               0,           0 }, /* 11DF	ᇟ	e1 87 9f	HANGUL JONGSEONG MIEUM-PANSIOS */
    {               0,           0 }, /* 11E0	ᇠ	e1 87 a0	HANGUL JONGSEONG MIEUM-CHIEUCH */
    {               0,           0 }, /* 11E1	ᇡ	e1 87 a1	HANGUL JONGSEONG MIEUM-HIEUH */
    {               0,           0 }, /* 11E2	ᇢ	e1 87 a2	HANGUL JONGSEONG KAPYEOUNMIEUM */
    {               0,           0 }, /* 11E3	ᇣ	e1 87 a3	HANGUL JONGSEONG PIEUP-RIEUL */
    {               0,           0 }, /* 11E4	ᇤ	e1 87 a4	HANGUL JONGSEONG PIEUP-PHIEUPH */
    {               0,           0 }, /* 11E5	ᇥ	e1 87 a5	HANGUL JONGSEONG PIEUP-HIEUH */
    {               0,           0 }, /* 11E6	ᇦ	e1 87 a6	HANGUL JONGSEONG KAPYEOUNPIEUP */
    {               0,           0 }, /* 11E7	ᇧ	e1 87 a7	HANGUL JONGSEONG SIOS-KIYEOK */
    {               0,           0 }, /* 11E8	ᇨ	e1 87 a8	HANGUL JONGSEONG SIOS-TIKEUT */
    {               0,           0 }, /* 11E9	ᇩ	e1 87 a9	HANGUL JONGSEONG SIOS-RIEUL */
    {               0,           0 }, /* 11EA	ᇪ	e1 87 aa	HANGUL JONGSEONG SIOS-PIEUP */
    {               0,           0 }, /* 11EB	ᇫ	e1 87 ab	HANGUL JONGSEONG PANSIOS */
    {               0,           0 }, /* 11EC	ᇬ	e1 87 ac	HANGUL JONGSEONG IEUNG-KIYEOK */
    {               0,           0 }, /* 11ED	ᇭ	e1 87 ad	HANGUL JONGSEONG IEUNG-SSANGKIYEOK */
    {               0,           0 }, /* 11EE	ᇮ	e1 87 ae	HANGUL JONGSEONG SSANGIEUNG */
    {               0,           0 }, /* 11EF	ᇯ	e1 87 af	HANGUL JONGSEONG IEUNG-KHIEUKH */
    {               0,           0 }, /* 11F0	ᇰ	e1 87 b0	HANGUL JONGSEONG YESIEUNG */
    {               0,           0 }, /* 11F1	ᇱ	e1 87 b1	HANGUL JONGSEONG YESIEUNG-SIOS */
    {               0,           0 }, /* 11F2	ᇲ	e1 87 b2	HANGUL JONGSEONG YESIEUNG-PANSIOS */
    {               0,           0 }, /* 11F3	ᇳ	e1 87 b3	HANGUL JONGSEONG PHIEUPH-PIEUP */
    {               0,           0 }, /* 11F4	ᇴ	e1 87 b4	HANGUL JONGSEONG KAPYEOUNPHIEUPH */
    {               0,           0 }, /* 11F5	ᇵ	e1 87 b5	HANGUL JONGSEONG HIEUH-NIEUN */
    {               0,           0 }, /* 11F6	ᇶ	e1 87 b6	HANGUL JONGSEONG HIEUH-RIEUL */
    {               0,           0 }, /* 11F7	ᇷ	e1 87 b7	HANGUL JONGSEONG HIEUH-MIEUM */
    {               0,           0 }, /* 11F8	ᇸ	e1 87 b8	HANGUL JONGSEONG HIEUH-PIEUP */
    {               0,           0 }, /* 11F9	ᇹ	e1 87 b9	HANGUL JONGSEONG YEORINHIEUH */
    {               0,           0 }, /* 11FA	ᇺ	e1 87 ba	HANGUL JONGSEONG KIYEOK-NIEUN */
    {               0,           0 }, /* 11FB	ᇻ	e1 87 bb	HANGUL JONGSEONG KIYEOK-PIEUP */
    {               0,           0 }, /* 11FC	ᇼ	e1 87 bc	HANGUL JONGSEONG KIYEOK-CHIEUCH */
    {               0,           0 }, /* 11FD	ᇽ	e1 87 bd	HANGUL JONGSEONG KIYEOK-KHIEUKH */
    {               0,           0 }, /* 11FE	ᇾ	e1 87 be	HANGUL JONGSEONG KIYEOK-HIEUH */
    {               0,           0 }, /* 11FF	ᇿ	e1 87 bf	HANGUL JONGSEONG SSANGNIEUN */
    {               0,           0 }, /* 1200	ሀ	e1 88 80	ETHIOPIC SYLLABLE HA */
    {               0,           0 }, /* 1201	ሁ	e1 88 81	ETHIOPIC SYLLABLE HU */
    {               0,           0 }, /* 1202	ሂ	e1 88 82	ETHIOPIC SYLLABLE HI */
    {               0,           0 }, /* 1203	ሃ	e1 88 83	ETHIOPIC SYLLABLE HAA */
    {               0,           0 }, /* 1204	ሄ	e1 88 84	ETHIOPIC SYLLABLE HEE */
    {               0,           0 }, /* 1205	ህ	e1 88 85	ETHIOPIC SYLLABLE HE */
    {               0,           0 }, /* 1206	ሆ	e1 88 86	ETHIOPIC SYLLABLE HO */
    {               0,           0 }, /* 1207	ሇ	e1 88 87	ETHIOPIC SYLLABLE HOA */
    {               0,           0 }, /* 1208	ለ	e1 88 88	ETHIOPIC SYLLABLE LA */
    {               0,           0 }, /* 1209	ሉ	e1 88 89	ETHIOPIC SYLLABLE LU */
    {               0,           0 }, /* 120A	ሊ	e1 88 8a	ETHIOPIC SYLLABLE LI */
    {               0,           0 }, /* 120B	ላ	e1 88 8b	ETHIOPIC SYLLABLE LAA */
    {               0,           0 }, /* 120C	ሌ	e1 88 8c	ETHIOPIC SYLLABLE LEE */
    {               0,           0 }, /* 120D	ል	e1 88 8d	ETHIOPIC SYLLABLE LE */
    {               0,           0 }, /* 120E	ሎ	e1 88 8e	ETHIOPIC SYLLABLE LO */
    {               0,           0 }, /* 120F	ሏ	e1 88 8f	ETHIOPIC SYLLABLE LWA */
    {               0,           0 }, /* 1210	ሐ	e1 88 90	ETHIOPIC SYLLABLE HHA */
    {               0,           0 }, /* 1211	ሑ	e1 88 91	ETHIOPIC SYLLABLE HHU */
    {               0,           0 }, /* 1212	ሒ	e1 88 92	ETHIOPIC SYLLABLE HHI */
    {               0,           0 }, /* 1213	ሓ	e1 88 93	ETHIOPIC SYLLABLE HHAA */
    {               0,           0 }, /* 1214	ሔ	e1 88 94	ETHIOPIC SYLLABLE HHEE */
    {               0,           0 }, /* 1215	ሕ	e1 88 95	ETHIOPIC SYLLABLE HHE */
    {               0,           0 }, /* 1216	ሖ	e1 88 96	ETHIOPIC SYLLABLE HHO */
    {               0,           0 }, /* 1217	ሗ	e1 88 97	ETHIOPIC SYLLABLE HHWA */
    {               0,           0 }, /* 1218	መ	e1 88 98	ETHIOPIC SYLLABLE MA */
    {               0,           0 }, /* 1219	ሙ	e1 88 99	ETHIOPIC SYLLABLE MU */
    {               0,           0 }, /* 121A	ሚ	e1 88 9a	ETHIOPIC SYLLABLE MI */
    {               0,           0 }, /* 121B	ማ	e1 88 9b	ETHIOPIC SYLLABLE MAA */
    {               0,           0 }, /* 121C	ሜ	e1 88 9c	ETHIOPIC SYLLABLE MEE */
    {               0,           0 }, /* 121D	ም	e1 88 9d	ETHIOPIC SYLLABLE ME */
    {               0,           0 }, /* 121E	ሞ	e1 88 9e	ETHIOPIC SYLLABLE MO */
    {               0,           0 }, /* 121F	ሟ	e1 88 9f	ETHIOPIC SYLLABLE MWA */
    {               0,           0 }, /* 1220	ሠ	e1 88 a0	ETHIOPIC SYLLABLE SZA */
    {               0,           0 }, /* 1221	ሡ	e1 88 a1	ETHIOPIC SYLLABLE SZU */
    {               0,           0 }, /* 1222	ሢ	e1 88 a2	ETHIOPIC SYLLABLE SZI */
    {               0,           0 }, /* 1223	ሣ	e1 88 a3	ETHIOPIC SYLLABLE SZAA */
    {               0,           0 }, /* 1224	ሤ	e1 88 a4	ETHIOPIC SYLLABLE SZEE */
    {               0,           0 }, /* 1225	ሥ	e1 88 a5	ETHIOPIC SYLLABLE SZE */
    {               0,           0 }, /* 1226	ሦ	e1 88 a6	ETHIOPIC SYLLABLE SZO */
    {               0,           0 }, /* 1227	ሧ	e1 88 a7	ETHIOPIC SYLLABLE SZWA */
    {               0,           0 }, /* 1228	ረ	e1 88 a8	ETHIOPIC SYLLABLE RA */
    {               0,           0 }, /* 1229	ሩ	e1 88 a9	ETHIOPIC SYLLABLE RU */
    {               0,           0 }, /* 122A	ሪ	e1 88 aa	ETHIOPIC SYLLABLE RI */
    {               0,           0 }, /* 122B	ራ	e1 88 ab	ETHIOPIC SYLLABLE RAA */
    {               0,           0 }, /* 122C	ሬ	e1 88 ac	ETHIOPIC SYLLABLE REE */
    {               0,           0 }, /* 122D	ር	e1 88 ad	ETHIOPIC SYLLABLE RE */
    {               0,           0 }, /* 122E	ሮ	e1 88 ae	ETHIOPIC SYLLABLE RO */
    {               0,           0 }, /* 122F	ሯ	e1 88 af	ETHIOPIC SYLLABLE RWA */
    {               0,           0 }, /* 1230	ሰ	e1 88 b0	ETHIOPIC SYLLABLE SA */
    {               0,           0 }, /* 1231	ሱ	e1 88 b1	ETHIOPIC SYLLABLE SU */
    {               0,           0 }, /* 1232	ሲ	e1 88 b2	ETHIOPIC SYLLABLE SI */
    {               0,           0 }, /* 1233	ሳ	e1 88 b3	ETHIOPIC SYLLABLE SAA */
    {               0,           0 }, /* 1234	ሴ	e1 88 b4	ETHIOPIC SYLLABLE SEE */
    {               0,           0 }, /* 1235	ስ	e1 88 b5	ETHIOPIC SYLLABLE SE */
    {               0,           0 }, /* 1236	ሶ	e1 88 b6	ETHIOPIC SYLLABLE SO */
    {               0,           0 }, /* 1237	ሷ	e1 88 b7	ETHIOPIC SYLLABLE SWA */
    {               0,           0 }, /* 1238	ሸ	e1 88 b8	ETHIOPIC SYLLABLE SHA */
    {               0,           0 }, /* 1239	ሹ	e1 88 b9	ETHIOPIC SYLLABLE SHU */
    {               0,           0 }, /* 123A	ሺ	e1 88 ba	ETHIOPIC SYLLABLE SHI */
    {               0,           0 }, /* 123B	ሻ	e1 88 bb	ETHIOPIC SYLLABLE SHAA */
    {               0,           0 }, /* 123C	ሼ	e1 88 bc	ETHIOPIC SYLLABLE SHEE */
    {               0,           0 }, /* 123D	ሽ	e1 88 bd	ETHIOPIC SYLLABLE SHE */
    {               0,           0 }, /* 123E	ሾ	e1 88 be	ETHIOPIC SYLLABLE SHO */
    {               0,           0 }, /* 123F	ሿ	e1 88 bf	ETHIOPIC SYLLABLE SHWA */
    {               0,           0 }, /* 1240	ቀ	e1 89 80	ETHIOPIC SYLLABLE QA */
    {               0,           0 }, /* 1241	ቁ	e1 89 81	ETHIOPIC SYLLABLE QU */
    {               0,           0 }, /* 1242	ቂ	e1 89 82	ETHIOPIC SYLLABLE QI */
    {               0,           0 }, /* 1243	ቃ	e1 89 83	ETHIOPIC SYLLABLE QAA */
    {               0,           0 }, /* 1244	ቄ	e1 89 84	ETHIOPIC SYLLABLE QEE */
    {               0,           0 }, /* 1245	ቅ	e1 89 85	ETHIOPIC SYLLABLE QE */
    {               0,           0 }, /* 1246	ቆ	e1 89 86	ETHIOPIC SYLLABLE QO */
    {               0,           0 }, /* 1247	ቇ	e1 89 87	ETHIOPIC SYLLABLE QOA */
    {               0,           0 }, /* 1248	ቈ	e1 89 88	ETHIOPIC SYLLABLE QWA */
    {               0,           0 }, /* 1249	቉	e1 89 89	 */
    {               0,           0 }, /* 124A	ቊ	e1 89 8a	ETHIOPIC SYLLABLE QWI */
    {               0,           0 }, /* 124B	ቋ	e1 89 8b	ETHIOPIC SYLLABLE QWAA */
    {               0,           0 }, /* 124C	ቌ	e1 89 8c	ETHIOPIC SYLLABLE QWEE */
    {               0,           0 }, /* 124D	ቍ	e1 89 8d	ETHIOPIC SYLLABLE QWE */
    {               0,           0 }, /* 124E	቎	e1 89 8e	 */
    {               0,           0 }, /* 124F	቏	e1 89 8f	 */
    {               0,           0 }, /* 1250	ቐ	e1 89 90	ETHIOPIC SYLLABLE QHA */
    {               0,           0 }, /* 1251	ቑ	e1 89 91	ETHIOPIC SYLLABLE QHU */
    {               0,           0 }, /* 1252	ቒ	e1 89 92	ETHIOPIC SYLLABLE QHI */
    {               0,           0 }, /* 1253	ቓ	e1 89 93	ETHIOPIC SYLLABLE QHAA */
    {               0,           0 }, /* 1254	ቔ	e1 89 94	ETHIOPIC SYLLABLE QHEE */
    {               0,           0 }, /* 1255	ቕ	e1 89 95	ETHIOPIC SYLLABLE QHE */
    {               0,           0 }, /* 1256	ቖ	e1 89 96	ETHIOPIC SYLLABLE QHO */
    {               0,           0 }, /* 1257	቗	e1 89 97	 */
    {               0,           0 }, /* 1258	ቘ	e1 89 98	ETHIOPIC SYLLABLE QHWA */
    {               0,           0 }, /* 1259	቙	e1 89 99	 */
    {               0,           0 }, /* 125A	ቚ	e1 89 9a	ETHIOPIC SYLLABLE QHWI */
    {               0,           0 }, /* 125B	ቛ	e1 89 9b	ETHIOPIC SYLLABLE QHWAA */
    {               0,           0 }, /* 125C	ቜ	e1 89 9c	ETHIOPIC SYLLABLE QHWEE */
    {               0,           0 }, /* 125D	ቝ	e1 89 9d	ETHIOPIC SYLLABLE QHWE */
    {               0,           0 }, /* 125E	቞	e1 89 9e	 */
    {               0,           0 }, /* 125F	቟	e1 89 9f	 */
    {               0,           0 }, /* 1260	በ	e1 89 a0	ETHIOPIC SYLLABLE BA */
    {               0,           0 }, /* 1261	ቡ	e1 89 a1	ETHIOPIC SYLLABLE BU */
    {               0,           0 }, /* 1262	ቢ	e1 89 a2	ETHIOPIC SYLLABLE BI */
    {               0,           0 }, /* 1263	ባ	e1 89 a3	ETHIOPIC SYLLABLE BAA */
    {               0,           0 }, /* 1264	ቤ	e1 89 a4	ETHIOPIC SYLLABLE BEE */
    {               0,           0 }, /* 1265	ብ	e1 89 a5	ETHIOPIC SYLLABLE BE */
    {               0,           0 }, /* 1266	ቦ	e1 89 a6	ETHIOPIC SYLLABLE BO */
    {               0,           0 }, /* 1267	ቧ	e1 89 a7	ETHIOPIC SYLLABLE BWA */
    {               0,           0 }, /* 1268	ቨ	e1 89 a8	ETHIOPIC SYLLABLE VA */
    {               0,           0 }, /* 1269	ቩ	e1 89 a9	ETHIOPIC SYLLABLE VU */
    {               0,           0 }, /* 126A	ቪ	e1 89 aa	ETHIOPIC SYLLABLE VI */
    {               0,           0 }, /* 126B	ቫ	e1 89 ab	ETHIOPIC SYLLABLE VAA */
    {               0,           0 }, /* 126C	ቬ	e1 89 ac	ETHIOPIC SYLLABLE VEE */
    {               0,           0 }, /* 126D	ቭ	e1 89 ad	ETHIOPIC SYLLABLE VE */
    {               0,           0 }, /* 126E	ቮ	e1 89 ae	ETHIOPIC SYLLABLE VO */
    {               0,           0 }, /* 126F	ቯ	e1 89 af	ETHIOPIC SYLLABLE VWA */
    {               0,           0 }, /* 1270	ተ	e1 89 b0	ETHIOPIC SYLLABLE TA */
    {               0,           0 }, /* 1271	ቱ	e1 89 b1	ETHIOPIC SYLLABLE TU */
    {               0,           0 }, /* 1272	ቲ	e1 89 b2	ETHIOPIC SYLLABLE TI */
    {               0,           0 }, /* 1273	ታ	e1 89 b3	ETHIOPIC SYLLABLE TAA */
    {               0,           0 }, /* 1274	ቴ	e1 89 b4	ETHIOPIC SYLLABLE TEE */
    {               0,           0 }, /* 1275	ት	e1 89 b5	ETHIOPIC SYLLABLE TE */
    {               0,           0 }, /* 1276	ቶ	e1 89 b6	ETHIOPIC SYLLABLE TO */
    {               0,           0 }, /* 1277	ቷ	e1 89 b7	ETHIOPIC SYLLABLE TWA */
    {               0,           0 }, /* 1278	ቸ	e1 89 b8	ETHIOPIC SYLLABLE CA */
    {               0,           0 }, /* 1279	ቹ	e1 89 b9	ETHIOPIC SYLLABLE CU */
    {               0,           0 }, /* 127A	ቺ	e1 89 ba	ETHIOPIC SYLLABLE CI */
    {               0,           0 }, /* 127B	ቻ	e1 89 bb	ETHIOPIC SYLLABLE CAA */
    {               0,           0 }, /* 127C	ቼ	e1 89 bc	ETHIOPIC SYLLABLE CEE */
    {               0,           0 }, /* 127D	ች	e1 89 bd	ETHIOPIC SYLLABLE CE */
    {               0,           0 }, /* 127E	ቾ	e1 89 be	ETHIOPIC SYLLABLE CO */
    {               0,           0 }, /* 127F	ቿ	e1 89 bf	ETHIOPIC SYLLABLE CWA */
    {               0,           0 }, /* 1280	ኀ	e1 8a 80	ETHIOPIC SYLLABLE XA */
    {               0,           0 }, /* 1281	ኁ	e1 8a 81	ETHIOPIC SYLLABLE XU */
    {               0,           0 }, /* 1282	ኂ	e1 8a 82	ETHIOPIC SYLLABLE XI */
    {               0,           0 }, /* 1283	ኃ	e1 8a 83	ETHIOPIC SYLLABLE XAA */
    {               0,           0 }, /* 1284	ኄ	e1 8a 84	ETHIOPIC SYLLABLE XEE */
    {               0,           0 }, /* 1285	ኅ	e1 8a 85	ETHIOPIC SYLLABLE XE */
    {               0,           0 }, /* 1286	ኆ	e1 8a 86	ETHIOPIC SYLLABLE XO */
    {               0,           0 }, /* 1287	ኇ	e1 8a 87	ETHIOPIC SYLLABLE XOA */
    {               0,           0 }, /* 1288	ኈ	e1 8a 88	ETHIOPIC SYLLABLE XWA */
    {               0,           0 }, /* 1289	኉	e1 8a 89	 */
    {               0,           0 }, /* 128A	ኊ	e1 8a 8a	ETHIOPIC SYLLABLE XWI */
    {               0,           0 }, /* 128B	ኋ	e1 8a 8b	ETHIOPIC SYLLABLE XWAA */
    {               0,           0 }, /* 128C	ኌ	e1 8a 8c	ETHIOPIC SYLLABLE XWEE */
    {               0,           0 }, /* 128D	ኍ	e1 8a 8d	ETHIOPIC SYLLABLE XWE */
    {               0,           0 }, /* 128E	኎	e1 8a 8e	 */
    {               0,           0 }, /* 128F	኏	e1 8a 8f	 */
    {               0,           0 }, /* 1290	ነ	e1 8a 90	ETHIOPIC SYLLABLE NA */
    {               0,           0 }, /* 1291	ኑ	e1 8a 91	ETHIOPIC SYLLABLE NU */
    {               0,           0 }, /* 1292	ኒ	e1 8a 92	ETHIOPIC SYLLABLE NI */
    {               0,           0 }, /* 1293	ና	e1 8a 93	ETHIOPIC SYLLABLE NAA */
    {               0,           0 }, /* 1294	ኔ	e1 8a 94	ETHIOPIC SYLLABLE NEE */
    {               0,           0 }, /* 1295	ን	e1 8a 95	ETHIOPIC SYLLABLE NE */
    {               0,           0 }, /* 1296	ኖ	e1 8a 96	ETHIOPIC SYLLABLE NO */
    {               0,           0 }, /* 1297	ኗ	e1 8a 97	ETHIOPIC SYLLABLE NWA */
    {               0,           0 }, /* 1298	ኘ	e1 8a 98	ETHIOPIC SYLLABLE NYA */
    {               0,           0 }, /* 1299	ኙ	e1 8a 99	ETHIOPIC SYLLABLE NYU */
    {               0,           0 }, /* 129A	ኚ	e1 8a 9a	ETHIOPIC SYLLABLE NYI */
    {               0,           0 }, /* 129B	ኛ	e1 8a 9b	ETHIOPIC SYLLABLE NYAA */
    {               0,           0 }, /* 129C	ኜ	e1 8a 9c	ETHIOPIC SYLLABLE NYEE */
    {               0,           0 }, /* 129D	ኝ	e1 8a 9d	ETHIOPIC SYLLABLE NYE */
    {               0,           0 }, /* 129E	ኞ	e1 8a 9e	ETHIOPIC SYLLABLE NYO */
    {               0,           0 }, /* 129F	ኟ	e1 8a 9f	ETHIOPIC SYLLABLE NYWA */
    {               0,           0 }, /* 12A0	አ	e1 8a a0	ETHIOPIC SYLLABLE GLOTTAL A */
    {               0,           0 }, /* 12A1	ኡ	e1 8a a1	ETHIOPIC SYLLABLE GLOTTAL U */
    {               0,           0 }, /* 12A2	ኢ	e1 8a a2	ETHIOPIC SYLLABLE GLOTTAL I */
    {               0,           0 }, /* 12A3	ኣ	e1 8a a3	ETHIOPIC SYLLABLE GLOTTAL AA */
    {               0,           0 }, /* 12A4	ኤ	e1 8a a4	ETHIOPIC SYLLABLE GLOTTAL EE */
    {               0,           0 }, /* 12A5	እ	e1 8a a5	ETHIOPIC SYLLABLE GLOTTAL E */
    {               0,           0 }, /* 12A6	ኦ	e1 8a a6	ETHIOPIC SYLLABLE GLOTTAL O */
    {               0,           0 }, /* 12A7	ኧ	e1 8a a7	ETHIOPIC SYLLABLE GLOTTAL WA */
    {               0,           0 }, /* 12A8	ከ	e1 8a a8	ETHIOPIC SYLLABLE KA */
    {               0,           0 }, /* 12A9	ኩ	e1 8a a9	ETHIOPIC SYLLABLE KU */
    {               0,           0 }, /* 12AA	ኪ	e1 8a aa	ETHIOPIC SYLLABLE KI */
    {               0,           0 }, /* 12AB	ካ	e1 8a ab	ETHIOPIC SYLLABLE KAA */
    {               0,           0 }, /* 12AC	ኬ	e1 8a ac	ETHIOPIC SYLLABLE KEE */
    {               0,           0 }, /* 12AD	ክ	e1 8a ad	ETHIOPIC SYLLABLE KE */
    {               0,           0 }, /* 12AE	ኮ	e1 8a ae	ETHIOPIC SYLLABLE KO */
    {               0,           0 }, /* 12AF	ኯ	e1 8a af	ETHIOPIC SYLLABLE KOA */
    {               0,           0 }, /* 12B0	ኰ	e1 8a b0	ETHIOPIC SYLLABLE KWA */
    {               0,           0 }, /* 12B1	኱	e1 8a b1	 */
    {               0,           0 }, /* 12B2	ኲ	e1 8a b2	ETHIOPIC SYLLABLE KWI */
    {               0,           0 }, /* 12B3	ኳ	e1 8a b3	ETHIOPIC SYLLABLE KWAA */
    {               0,           0 }, /* 12B4	ኴ	e1 8a b4	ETHIOPIC SYLLABLE KWEE */
    {               0,           0 }, /* 12B5	ኵ	e1 8a b5	ETHIOPIC SYLLABLE KWE */
    {               0,           0 }, /* 12B6	኶	e1 8a b6	 */
    {               0,           0 }, /* 12B7	኷	e1 8a b7	 */
    {               0,           0 }, /* 12B8	ኸ	e1 8a b8	ETHIOPIC SYLLABLE KXA */
    {               0,           0 }, /* 12B9	ኹ	e1 8a b9	ETHIOPIC SYLLABLE KXU */
    {               0,           0 }, /* 12BA	ኺ	e1 8a ba	ETHIOPIC SYLLABLE KXI */
    {               0,           0 }, /* 12BB	ኻ	e1 8a bb	ETHIOPIC SYLLABLE KXAA */
    {               0,           0 }, /* 12BC	ኼ	e1 8a bc	ETHIOPIC SYLLABLE KXEE */
    {               0,           0 }, /* 12BD	ኽ	e1 8a bd	ETHIOPIC SYLLABLE KXE */
    {               0,           0 }, /* 12BE	ኾ	e1 8a be	ETHIOPIC SYLLABLE KXO */
    {               0,           0 }, /* 12BF	኿	e1 8a bf	 */
    {               0,           0 }, /* 12C0	ዀ	e1 8b 80	ETHIOPIC SYLLABLE KXWA */
    {               0,           0 }, /* 12C1	዁	e1 8b 81	 */
    {               0,           0 }, /* 12C2	ዂ	e1 8b 82	ETHIOPIC SYLLABLE KXWI */
    {               0,           0 }, /* 12C3	ዃ	e1 8b 83	ETHIOPIC SYLLABLE KXWAA */
    {               0,           0 }, /* 12C4	ዄ	e1 8b 84	ETHIOPIC SYLLABLE KXWEE */
    {               0,           0 }, /* 12C5	ዅ	e1 8b 85	ETHIOPIC SYLLABLE KXWE */
    {               0,           0 }, /* 12C6	዆	e1 8b 86	 */
    {               0,           0 }, /* 12C7	዇	e1 8b 87	 */
    {               0,           0 }, /* 12C8	ወ	e1 8b 88	ETHIOPIC SYLLABLE WA */
    {               0,           0 }, /* 12C9	ዉ	e1 8b 89	ETHIOPIC SYLLABLE WU */
    {               0,           0 }, /* 12CA	ዊ	e1 8b 8a	ETHIOPIC SYLLABLE WI */
    {               0,           0 }, /* 12CB	ዋ	e1 8b 8b	ETHIOPIC SYLLABLE WAA */
    {               0,           0 }, /* 12CC	ዌ	e1 8b 8c	ETHIOPIC SYLLABLE WEE */
    {               0,           0 }, /* 12CD	ው	e1 8b 8d	ETHIOPIC SYLLABLE WE */
    {               0,           0 }, /* 12CE	ዎ	e1 8b 8e	ETHIOPIC SYLLABLE WO */
    {               0,           0 }, /* 12CF	ዏ	e1 8b 8f	ETHIOPIC SYLLABLE WOA */
    {               0,           0 }, /* 12D0	ዐ	e1 8b 90	ETHIOPIC SYLLABLE PHARYNGEAL A */
    {               0,           0 }, /* 12D1	ዑ	e1 8b 91	ETHIOPIC SYLLABLE PHARYNGEAL U */
    {               0,           0 }, /* 12D2	ዒ	e1 8b 92	ETHIOPIC SYLLABLE PHARYNGEAL I */
    {               0,           0 }, /* 12D3	ዓ	e1 8b 93	ETHIOPIC SYLLABLE PHARYNGEAL AA */
    {               0,           0 }, /* 12D4	ዔ	e1 8b 94	ETHIOPIC SYLLABLE PHARYNGEAL EE */
    {               0,           0 }, /* 12D5	ዕ	e1 8b 95	ETHIOPIC SYLLABLE PHARYNGEAL E */
    {               0,           0 }, /* 12D6	ዖ	e1 8b 96	ETHIOPIC SYLLABLE PHARYNGEAL O */
    {               0,           0 }, /* 12D7	዗	e1 8b 97	 */
    {               0,           0 }, /* 12D8	ዘ	e1 8b 98	ETHIOPIC SYLLABLE ZA */
    {               0,           0 }, /* 12D9	ዙ	e1 8b 99	ETHIOPIC SYLLABLE ZU */
    {               0,           0 }, /* 12DA	ዚ	e1 8b 9a	ETHIOPIC SYLLABLE ZI */
    {               0,           0 }, /* 12DB	ዛ	e1 8b 9b	ETHIOPIC SYLLABLE ZAA */
    {               0,           0 }, /* 12DC	ዜ	e1 8b 9c	ETHIOPIC SYLLABLE ZEE */
    {               0,           0 }, /* 12DD	ዝ	e1 8b 9d	ETHIOPIC SYLLABLE ZE */
    {               0,           0 }, /* 12DE	ዞ	e1 8b 9e	ETHIOPIC SYLLABLE ZO */
    {               0,           0 }, /* 12DF	ዟ	e1 8b 9f	ETHIOPIC SYLLABLE ZWA */
    {               0,           0 }, /* 12E0	ዠ	e1 8b a0	ETHIOPIC SYLLABLE ZHA */
    {               0,           0 }, /* 12E1	ዡ	e1 8b a1	ETHIOPIC SYLLABLE ZHU */
    {               0,           0 }, /* 12E2	ዢ	e1 8b a2	ETHIOPIC SYLLABLE ZHI */
    {               0,           0 }, /* 12E3	ዣ	e1 8b a3	ETHIOPIC SYLLABLE ZHAA */
    {               0,           0 }, /* 12E4	ዤ	e1 8b a4	ETHIOPIC SYLLABLE ZHEE */
    {               0,           0 }, /* 12E5	ዥ	e1 8b a5	ETHIOPIC SYLLABLE ZHE */
    {               0,           0 }, /* 12E6	ዦ	e1 8b a6	ETHIOPIC SYLLABLE ZHO */
    {               0,           0 }, /* 12E7	ዧ	e1 8b a7	ETHIOPIC SYLLABLE ZHWA */
    {               0,           0 }, /* 12E8	የ	e1 8b a8	ETHIOPIC SYLLABLE YA */
    {               0,           0 }, /* 12E9	ዩ	e1 8b a9	ETHIOPIC SYLLABLE YU */
    {               0,           0 }, /* 12EA	ዪ	e1 8b aa	ETHIOPIC SYLLABLE YI */
    {               0,           0 }, /* 12EB	ያ	e1 8b ab	ETHIOPIC SYLLABLE YAA */
    {               0,           0 }, /* 12EC	ዬ	e1 8b ac	ETHIOPIC SYLLABLE YEE */
    {               0,           0 }, /* 12ED	ይ	e1 8b ad	ETHIOPIC SYLLABLE YE */
    {               0,           0 }, /* 12EE	ዮ	e1 8b ae	ETHIOPIC SYLLABLE YO */
    {               0,           0 }, /* 12EF	ዯ	e1 8b af	ETHIOPIC SYLLABLE YOA */
    {               0,           0 }, /* 12F0	ደ	e1 8b b0	ETHIOPIC SYLLABLE DA */
    {               0,           0 }, /* 12F1	ዱ	e1 8b b1	ETHIOPIC SYLLABLE DU */
    {               0,           0 }, /* 12F2	ዲ	e1 8b b2	ETHIOPIC SYLLABLE DI */
    {               0,           0 }, /* 12F3	ዳ	e1 8b b3	ETHIOPIC SYLLABLE DAA */
    {               0,           0 }, /* 12F4	ዴ	e1 8b b4	ETHIOPIC SYLLABLE DEE */
    {               0,           0 }, /* 12F5	ድ	e1 8b b5	ETHIOPIC SYLLABLE DE */
    {               0,           0 }, /* 12F6	ዶ	e1 8b b6	ETHIOPIC SYLLABLE DO */
    {               0,           0 }, /* 12F7	ዷ	e1 8b b7	ETHIOPIC SYLLABLE DWA */
    {               0,           0 }, /* 12F8	ዸ	e1 8b b8	ETHIOPIC SYLLABLE DDA */
    {               0,           0 }, /* 12F9	ዹ	e1 8b b9	ETHIOPIC SYLLABLE DDU */
    {               0,           0 }, /* 12FA	ዺ	e1 8b ba	ETHIOPIC SYLLABLE DDI */
    {               0,           0 }, /* 12FB	ዻ	e1 8b bb	ETHIOPIC SYLLABLE DDAA */
    {               0,           0 }, /* 12FC	ዼ	e1 8b bc	ETHIOPIC SYLLABLE DDEE */
    {               0,           0 }, /* 12FD	ዽ	e1 8b bd	ETHIOPIC SYLLABLE DDE */
    {               0,           0 }, /* 12FE	ዾ	e1 8b be	ETHIOPIC SYLLABLE DDO */
    {               0,           0 }, /* 12FF	ዿ	e1 8b bf	ETHIOPIC SYLLABLE DDWA */
    {               0,           0 }, /* 1300	ጀ	e1 8c 80	ETHIOPIC SYLLABLE JA */
    {               0,           0 }, /* 1301	ጁ	e1 8c 81	ETHIOPIC SYLLABLE JU */
    {               0,           0 }, /* 1302	ጂ	e1 8c 82	ETHIOPIC SYLLABLE JI */
    {               0,           0 }, /* 1303	ጃ	e1 8c 83	ETHIOPIC SYLLABLE JAA */
    {               0,           0 }, /* 1304	ጄ	e1 8c 84	ETHIOPIC SYLLABLE JEE */
    {               0,           0 }, /* 1305	ጅ	e1 8c 85	ETHIOPIC SYLLABLE JE */
    {               0,           0 }, /* 1306	ጆ	e1 8c 86	ETHIOPIC SYLLABLE JO */
    {               0,           0 }, /* 1307	ጇ	e1 8c 87	ETHIOPIC SYLLABLE JWA */
    {               0,           0 }, /* 1308	ገ	e1 8c 88	ETHIOPIC SYLLABLE GA */
    {               0,           0 }, /* 1309	ጉ	e1 8c 89	ETHIOPIC SYLLABLE GU */
    {               0,           0 }, /* 130A	ጊ	e1 8c 8a	ETHIOPIC SYLLABLE GI */
    {               0,           0 }, /* 130B	ጋ	e1 8c 8b	ETHIOPIC SYLLABLE GAA */
    {               0,           0 }, /* 130C	ጌ	e1 8c 8c	ETHIOPIC SYLLABLE GEE */
    {               0,           0 }, /* 130D	ግ	e1 8c 8d	ETHIOPIC SYLLABLE GE */
    {               0,           0 }, /* 130E	ጎ	e1 8c 8e	ETHIOPIC SYLLABLE GO */
    {               0,           0 }, /* 130F	ጏ	e1 8c 8f	ETHIOPIC SYLLABLE GOA */
    {               0,           0 }, /* 1310	ጐ	e1 8c 90	ETHIOPIC SYLLABLE GWA */
    {               0,           0 }, /* 1311	጑	e1 8c 91	 */
    {               0,           0 }, /* 1312	ጒ	e1 8c 92	ETHIOPIC SYLLABLE GWI */
    {               0,           0 }, /* 1313	ጓ	e1 8c 93	ETHIOPIC SYLLABLE GWAA */
    {               0,           0 }, /* 1314	ጔ	e1 8c 94	ETHIOPIC SYLLABLE GWEE */
    {               0,           0 }, /* 1315	ጕ	e1 8c 95	ETHIOPIC SYLLABLE GWE */
    {               0,           0 }, /* 1316	጖	e1 8c 96	 */
    {               0,           0 }, /* 1317	጗	e1 8c 97	 */
    {               0,           0 }, /* 1318	ጘ	e1 8c 98	ETHIOPIC SYLLABLE GGA */
    {               0,           0 }, /* 1319	ጙ	e1 8c 99	ETHIOPIC SYLLABLE GGU */
    {               0,           0 }, /* 131A	ጚ	e1 8c 9a	ETHIOPIC SYLLABLE GGI */
    {               0,           0 }, /* 131B	ጛ	e1 8c 9b	ETHIOPIC SYLLABLE GGAA */
    {               0,           0 }, /* 131C	ጜ	e1 8c 9c	ETHIOPIC SYLLABLE GGEE */
    {               0,           0 }, /* 131D	ጝ	e1 8c 9d	ETHIOPIC SYLLABLE GGE */
    {               0,           0 }, /* 131E	ጞ	e1 8c 9e	ETHIOPIC SYLLABLE GGO */
    {               0,           0 }, /* 131F	ጟ	e1 8c 9f	ETHIOPIC SYLLABLE GGWAA */
    {               0,           0 }, /* 1320	ጠ	e1 8c a0	ETHIOPIC SYLLABLE THA */
    {               0,           0 }, /* 1321	ጡ	e1 8c a1	ETHIOPIC SYLLABLE THU */
    {               0,           0 }, /* 1322	ጢ	e1 8c a2	ETHIOPIC SYLLABLE THI */
    {               0,           0 }, /* 1323	ጣ	e1 8c a3	ETHIOPIC SYLLABLE THAA */
    {               0,           0 }, /* 1324	ጤ	e1 8c a4	ETHIOPIC SYLLABLE THEE */
    {               0,           0 }, /* 1325	ጥ	e1 8c a5	ETHIOPIC SYLLABLE THE */
    {               0,           0 }, /* 1326	ጦ	e1 8c a6	ETHIOPIC SYLLABLE THO */
    {               0,           0 }, /* 1327	ጧ	e1 8c a7	ETHIOPIC SYLLABLE THWA */
    {               0,           0 }, /* 1328	ጨ	e1 8c a8	ETHIOPIC SYLLABLE CHA */
    {               0,           0 }, /* 1329	ጩ	e1 8c a9	ETHIOPIC SYLLABLE CHU */
    {               0,           0 }, /* 132A	ጪ	e1 8c aa	ETHIOPIC SYLLABLE CHI */
    {               0,           0 }, /* 132B	ጫ	e1 8c ab	ETHIOPIC SYLLABLE CHAA */
    {               0,           0 }, /* 132C	ጬ	e1 8c ac	ETHIOPIC SYLLABLE CHEE */
    {               0,           0 }, /* 132D	ጭ	e1 8c ad	ETHIOPIC SYLLABLE CHE */
    {               0,           0 }, /* 132E	ጮ	e1 8c ae	ETHIOPIC SYLLABLE CHO */
    {               0,           0 }, /* 132F	ጯ	e1 8c af	ETHIOPIC SYLLABLE CHWA */
    {               0,           0 }, /* 1330	ጰ	e1 8c b0	ETHIOPIC SYLLABLE PHA */
    {               0,           0 }, /* 1331	ጱ	e1 8c b1	ETHIOPIC SYLLABLE PHU */
    {               0,           0 }, /* 1332	ጲ	e1 8c b2	ETHIOPIC SYLLABLE PHI */
    {               0,           0 }, /* 1333	ጳ	e1 8c b3	ETHIOPIC SYLLABLE PHAA */
    {               0,           0 }, /* 1334	ጴ	e1 8c b4	ETHIOPIC SYLLABLE PHEE */
    {               0,           0 }, /* 1335	ጵ	e1 8c b5	ETHIOPIC SYLLABLE PHE */
    {               0,           0 }, /* 1336	ጶ	e1 8c b6	ETHIOPIC SYLLABLE PHO */
    {               0,           0 }, /* 1337	ጷ	e1 8c b7	ETHIOPIC SYLLABLE PHWA */
    {               0,           0 }, /* 1338	ጸ	e1 8c b8	ETHIOPIC SYLLABLE TSA */
    {               0,           0 }, /* 1339	ጹ	e1 8c b9	ETHIOPIC SYLLABLE TSU */
    {               0,           0 }, /* 133A	ጺ	e1 8c ba	ETHIOPIC SYLLABLE TSI */
    {               0,           0 }, /* 133B	ጻ	e1 8c bb	ETHIOPIC SYLLABLE TSAA */
    {               0,           0 }, /* 133C	ጼ	e1 8c bc	ETHIOPIC SYLLABLE TSEE */
    {               0,           0 }, /* 133D	ጽ	e1 8c bd	ETHIOPIC SYLLABLE TSE */
    {               0,           0 }, /* 133E	ጾ	e1 8c be	ETHIOPIC SYLLABLE TSO */
    {               0,           0 }, /* 133F	ጿ	e1 8c bf	ETHIOPIC SYLLABLE TSWA */
    {               0,           0 }, /* 1340	ፀ	e1 8d 80	ETHIOPIC SYLLABLE TZA */
    {               0,           0 }, /* 1341	ፁ	e1 8d 81	ETHIOPIC SYLLABLE TZU */
    {               0,           0 }, /* 1342	ፂ	e1 8d 82	ETHIOPIC SYLLABLE TZI */
    {               0,           0 }, /* 1343	ፃ	e1 8d 83	ETHIOPIC SYLLABLE TZAA */
    {               0,           0 }, /* 1344	ፄ	e1 8d 84	ETHIOPIC SYLLABLE TZEE */
    {               0,           0 }, /* 1345	ፅ	e1 8d 85	ETHIOPIC SYLLABLE TZE */
    {               0,           0 }, /* 1346	ፆ	e1 8d 86	ETHIOPIC SYLLABLE TZO */
    {               0,           0 }, /* 1347	ፇ	e1 8d 87	ETHIOPIC SYLLABLE TZOA */
    {               0,           0 }, /* 1348	ፈ	e1 8d 88	ETHIOPIC SYLLABLE FA */
    {               0,           0 }, /* 1349	ፉ	e1 8d 89	ETHIOPIC SYLLABLE FU */
    {               0,           0 }, /* 134A	ፊ	e1 8d 8a	ETHIOPIC SYLLABLE FI */
    {               0,           0 }, /* 134B	ፋ	e1 8d 8b	ETHIOPIC SYLLABLE FAA */
    {               0,           0 }, /* 134C	ፌ	e1 8d 8c	ETHIOPIC SYLLABLE FEE */
    {               0,           0 }, /* 134D	ፍ	e1 8d 8d	ETHIOPIC SYLLABLE FE */
    {               0,           0 }, /* 134E	ፎ	e1 8d 8e	ETHIOPIC SYLLABLE FO */
    {               0,           0 }, /* 134F	ፏ	e1 8d 8f	ETHIOPIC SYLLABLE FWA */
    {               0,           0 }, /* 1350	ፐ	e1 8d 90	ETHIOPIC SYLLABLE PA */
    {               0,           0 }, /* 1351	ፑ	e1 8d 91	ETHIOPIC SYLLABLE PU */
    {               0,           0 }, /* 1352	ፒ	e1 8d 92	ETHIOPIC SYLLABLE PI */
    {               0,           0 }, /* 1353	ፓ	e1 8d 93	ETHIOPIC SYLLABLE PAA */
    {               0,           0 }, /* 1354	ፔ	e1 8d 94	ETHIOPIC SYLLABLE PEE */
    {               0,           0 }, /* 1355	ፕ	e1 8d 95	ETHIOPIC SYLLABLE PE */
    {               0,           0 }, /* 1356	ፖ	e1 8d 96	ETHIOPIC SYLLABLE PO */
    {               0,           0 }, /* 1357	ፗ	e1 8d 97	ETHIOPIC SYLLABLE PWA */
    {               0,           0 }, /* 1358	ፘ	e1 8d 98	ETHIOPIC SYLLABLE RYA */
    {               0,           0 }, /* 1359	ፙ	e1 8d 99	ETHIOPIC SYLLABLE MYA */
    {               0,           0 }, /* 135A	ፚ	e1 8d 9a	ETHIOPIC SYLLABLE FYA */
    {               0,           0 }, /* 135B	፛	e1 8d 9b	 */
    {               0,           0 }, /* 135C	፜	e1 8d 9c	 */
    {               0,           0 }, /* 135D	፝	e1 8d 9d	ETHIOPIC COMBINING GEMINATION AND VOWEL LENGTH MARK */
    {               0,           0 }, /* 135E	፞	e1 8d 9e	ETHIOPIC COMBINING VOWEL LENGTH MARK */
    {               0,           0 }, /* 135F	፟	e1 8d 9f	ETHIOPIC COMBINING GEMINATION MARK */
    {               0,           0 }, /* 1360	፠	e1 8d a0	ETHIOPIC SECTION MARK */
    {               0,           0 }, /* 1361	፡	e1 8d a1	ETHIOPIC WORDSPACE */
    {               0,           0 }, /* 1362	።	e1 8d a2	ETHIOPIC FULL STOP */
    {               0,           0 }, /* 1363	፣	e1 8d a3	ETHIOPIC COMMA */
    {               0,           0 }, /* 1364	፤	e1 8d a4	ETHIOPIC SEMICOLON */
    {               0,           0 }, /* 1365	፥	e1 8d a5	ETHIOPIC COLON */
    {               0,           0 }, /* 1366	፦	e1 8d a6	ETHIOPIC PREFACE COLON */
    {               0,           0 }, /* 1367	፧	e1 8d a7	ETHIOPIC QUESTION MARK */
    {               0,           0 }, /* 1368	፨	e1 8d a8	ETHIOPIC PARAGRAPH SEPARATOR */
    {               0,           0 }, /* 1369	፩	e1 8d a9	ETHIOPIC DIGIT ONE */
    {               0,           0 }, /* 136A	፪	e1 8d aa	ETHIOPIC DIGIT TWO */
    {               0,           0 }, /* 136B	፫	e1 8d ab	ETHIOPIC DIGIT THREE */
    {               0,           0 }, /* 136C	፬	e1 8d ac	ETHIOPIC DIGIT FOUR */
    {               0,           0 }, /* 136D	፭	e1 8d ad	ETHIOPIC DIGIT FIVE */
    {               0,           0 }, /* 136E	፮	e1 8d ae	ETHIOPIC DIGIT SIX */
    {               0,           0 }, /* 136F	፯	e1 8d af	ETHIOPIC DIGIT SEVEN */
    {               0,           0 }, /* 1370	፰	e1 8d b0	ETHIOPIC DIGIT EIGHT */
    {               0,           0 }, /* 1371	፱	e1 8d b1	ETHIOPIC DIGIT NINE */
    {               0,           0 }, /* 1372	፲	e1 8d b2	ETHIOPIC NUMBER TEN */
    {               0,           0 }, /* 1373	፳	e1 8d b3	ETHIOPIC NUMBER TWENTY */
    {               0,           0 }, /* 1374	፴	e1 8d b4	ETHIOPIC NUMBER THIRTY */
    {               0,           0 }, /* 1375	፵	e1 8d b5	ETHIOPIC NUMBER FORTY */
    {               0,           0 }, /* 1376	፶	e1 8d b6	ETHIOPIC NUMBER FIFTY */
    {               0,           0 }, /* 1377	፷	e1 8d b7	ETHIOPIC NUMBER SIXTY */
    {               0,           0 }, /* 1378	፸	e1 8d b8	ETHIOPIC NUMBER SEVENTY */
    {               0,           0 }, /* 1379	፹	e1 8d b9	ETHIOPIC NUMBER EIGHTY */
    {               0,           0 }, /* 137A	፺	e1 8d ba	ETHIOPIC NUMBER NINETY */
    {               0,           0 }, /* 137B	፻	e1 8d bb	ETHIOPIC NUMBER HUNDRED */
    {               0,           0 }, /* 137C	፼	e1 8d bc	ETHIOPIC NUMBER TEN THOUSAND */
    {               0,           0 }, /* 137D	፽	e1 8d bd	 */
    {               0,           0 }, /* 137E	፾	e1 8d be	 */
    {               0,           0 }, /* 137F	፿	e1 8d bf	 */
    {               0,           0 }, /* 1380	ᎀ	e1 8e 80	ETHIOPIC SYLLABLE SEBATBEIT MWA */
    {               0,           0 }, /* 1381	ᎁ	e1 8e 81	ETHIOPIC SYLLABLE MWI */
    {               0,           0 }, /* 1382	ᎂ	e1 8e 82	ETHIOPIC SYLLABLE MWEE */
    {               0,           0 }, /* 1383	ᎃ	e1 8e 83	ETHIOPIC SYLLABLE MWE */
    {               0,           0 }, /* 1384	ᎄ	e1 8e 84	ETHIOPIC SYLLABLE SEBATBEIT BWA */
    {               0,           0 }, /* 1385	ᎅ	e1 8e 85	ETHIOPIC SYLLABLE BWI */
    {               0,           0 }, /* 1386	ᎆ	e1 8e 86	ETHIOPIC SYLLABLE BWEE */
    {               0,           0 }, /* 1387	ᎇ	e1 8e 87	ETHIOPIC SYLLABLE BWE */
    {               0,           0 }, /* 1388	ᎈ	e1 8e 88	ETHIOPIC SYLLABLE SEBATBEIT FWA */
    {               0,           0 }, /* 1389	ᎉ	e1 8e 89	ETHIOPIC SYLLABLE FWI */
    {               0,           0 }, /* 138A	ᎊ	e1 8e 8a	ETHIOPIC SYLLABLE FWEE */
    {               0,           0 }, /* 138B	ᎋ	e1 8e 8b	ETHIOPIC SYLLABLE FWE */
    {               0,           0 }, /* 138C	ᎌ	e1 8e 8c	ETHIOPIC SYLLABLE SEBATBEIT PWA */
    {               0,           0 }, /* 138D	ᎍ	e1 8e 8d	ETHIOPIC SYLLABLE PWI */
    {               0,           0 }, /* 138E	ᎎ	e1 8e 8e	ETHIOPIC SYLLABLE PWEE */
    {               0,           0 }, /* 138F	ᎏ	e1 8e 8f	ETHIOPIC SYLLABLE PWE */
    {               0,           0 }, /* 1390	᎐	e1 8e 90	ETHIOPIC TONAL MARK YIZET */
    {               0,           0 }, /* 1391	᎑	e1 8e 91	ETHIOPIC TONAL MARK DERET */
    {               0,           0 }, /* 1392	᎒	e1 8e 92	ETHIOPIC TONAL MARK RIKRIK */
    {               0,           0 }, /* 1393	᎓	e1 8e 93	ETHIOPIC TONAL MARK SHORT RIKRIK */
    {               0,           0 }, /* 1394	᎔	e1 8e 94	ETHIOPIC TONAL MARK DIFAT */
    {               0,           0 }, /* 1395	᎕	e1 8e 95	ETHIOPIC TONAL MARK KENAT */
    {               0,           0 }, /* 1396	᎖	e1 8e 96	ETHIOPIC TONAL MARK CHIRET */
    {               0,           0 }, /* 1397	᎗	e1 8e 97	ETHIOPIC TONAL MARK HIDET */
    {               0,           0 }, /* 1398	᎘	e1 8e 98	ETHIOPIC TONAL MARK DERET-HIDET */
    {               0,           0 }, /* 1399	᎙	e1 8e 99	ETHIOPIC TONAL MARK KURT */
    {               0,           0 }, /* 139A	᎚	e1 8e 9a	 */
    {               0,           0 }, /* 139B	᎛	e1 8e 9b	 */
    {               0,           0 }, /* 139C	᎜	e1 8e 9c	 */
    {               0,           0 }, /* 139D	᎝	e1 8e 9d	 */
    {               0,           0 }, /* 139E	᎞	e1 8e 9e	 */
    {               0,           0 }, /* 139F	᎟	e1 8e 9f	 */
    {               0,           0 }, /* 13A0	Ꭰ	e1 8e a0	CHEROKEE LETTER A */
    {               0,           0 }, /* 13A1	Ꭱ	e1 8e a1	CHEROKEE LETTER E */
    {               0,           0 }, /* 13A2	Ꭲ	e1 8e a2	CHEROKEE LETTER I */
    {               0,           0 }, /* 13A3	Ꭳ	e1 8e a3	CHEROKEE LETTER O */
    {               0,           0 }, /* 13A4	Ꭴ	e1 8e a4	CHEROKEE LETTER U */
    {               0,           0 }, /* 13A5	Ꭵ	e1 8e a5	CHEROKEE LETTER V */
    {               0,           0 }, /* 13A6	Ꭶ	e1 8e a6	CHEROKEE LETTER GA */
    {               0,           0 }, /* 13A7	Ꭷ	e1 8e a7	CHEROKEE LETTER KA */
    {               0,           0 }, /* 13A8	Ꭸ	e1 8e a8	CHEROKEE LETTER GE */
    {               0,           0 }, /* 13A9	Ꭹ	e1 8e a9	CHEROKEE LETTER GI */
    {               0,           0 }, /* 13AA	Ꭺ	e1 8e aa	CHEROKEE LETTER GO */
    {               0,           0 }, /* 13AB	Ꭻ	e1 8e ab	CHEROKEE LETTER GU */
    {               0,           0 }, /* 13AC	Ꭼ	e1 8e ac	CHEROKEE LETTER GV */
    {               0,           0 }, /* 13AD	Ꭽ	e1 8e ad	CHEROKEE LETTER HA */
    {               0,           0 }, /* 13AE	Ꭾ	e1 8e ae	CHEROKEE LETTER HE */
    {               0,           0 }, /* 13AF	Ꭿ	e1 8e af	CHEROKEE LETTER HI */
    {               0,           0 }, /* 13B0	Ꮀ	e1 8e b0	CHEROKEE LETTER HO */
    {               0,           0 }, /* 13B1	Ꮁ	e1 8e b1	CHEROKEE LETTER HU */
    {               0,           0 }, /* 13B2	Ꮂ	e1 8e b2	CHEROKEE LETTER HV */
    {               0,           0 }, /* 13B3	Ꮃ	e1 8e b3	CHEROKEE LETTER LA */
    {               0,           0 }, /* 13B4	Ꮄ	e1 8e b4	CHEROKEE LETTER LE */
    {               0,           0 }, /* 13B5	Ꮅ	e1 8e b5	CHEROKEE LETTER LI */
    {               0,           0 }, /* 13B6	Ꮆ	e1 8e b6	CHEROKEE LETTER LO */
    {               0,           0 }, /* 13B7	Ꮇ	e1 8e b7	CHEROKEE LETTER LU */
    {               0,           0 }, /* 13B8	Ꮈ	e1 8e b8	CHEROKEE LETTER LV */
    {               0,           0 }, /* 13B9	Ꮉ	e1 8e b9	CHEROKEE LETTER MA */
    {               0,           0 }, /* 13BA	Ꮊ	e1 8e ba	CHEROKEE LETTER ME */
    {               0,           0 }, /* 13BB	Ꮋ	e1 8e bb	CHEROKEE LETTER MI */
    {               0,           0 }, /* 13BC	Ꮌ	e1 8e bc	CHEROKEE LETTER MO */
    {               0,           0 }, /* 13BD	Ꮍ	e1 8e bd	CHEROKEE LETTER MU */
    {               0,           0 }, /* 13BE	Ꮎ	e1 8e be	CHEROKEE LETTER NA */
    {               0,           0 }, /* 13BF	Ꮏ	e1 8e bf	CHEROKEE LETTER HNA */
    {               0,           0 }, /* 13C0	Ꮐ	e1 8f 80	CHEROKEE LETTER NAH */
    {               0,           0 }, /* 13C1	Ꮑ	e1 8f 81	CHEROKEE LETTER NE */
    {               0,           0 }, /* 13C2	Ꮒ	e1 8f 82	CHEROKEE LETTER NI */
    {               0,           0 }, /* 13C3	Ꮓ	e1 8f 83	CHEROKEE LETTER NO */
    {               0,           0 }, /* 13C4	Ꮔ	e1 8f 84	CHEROKEE LETTER NU */
    {               0,           0 }, /* 13C5	Ꮕ	e1 8f 85	CHEROKEE LETTER NV */
    {               0,           0 }, /* 13C6	Ꮖ	e1 8f 86	CHEROKEE LETTER QUA */
    {               0,           0 }, /* 13C7	Ꮗ	e1 8f 87	CHEROKEE LETTER QUE */
    {               0,           0 }, /* 13C8	Ꮘ	e1 8f 88	CHEROKEE LETTER QUI */
    {               0,           0 }, /* 13C9	Ꮙ	e1 8f 89	CHEROKEE LETTER QUO */
    {               0,           0 }, /* 13CA	Ꮚ	e1 8f 8a	CHEROKEE LETTER QUU */
    {               0,           0 }, /* 13CB	Ꮛ	e1 8f 8b	CHEROKEE LETTER QUV */
    {               0,           0 }, /* 13CC	Ꮜ	e1 8f 8c	CHEROKEE LETTER SA */
    {               0,           0 }, /* 13CD	Ꮝ	e1 8f 8d	CHEROKEE LETTER S */
    {               0,           0 }, /* 13CE	Ꮞ	e1 8f 8e	CHEROKEE LETTER SE */
    {               0,           0 }, /* 13CF	Ꮟ	e1 8f 8f	CHEROKEE LETTER SI */
    {               0,           0 }, /* 13D0	Ꮠ	e1 8f 90	CHEROKEE LETTER SO */
    {               0,           0 }, /* 13D1	Ꮡ	e1 8f 91	CHEROKEE LETTER SU */
    {               0,           0 }, /* 13D2	Ꮢ	e1 8f 92	CHEROKEE LETTER SV */
    {               0,           0 }, /* 13D3	Ꮣ	e1 8f 93	CHEROKEE LETTER DA */
    {               0,           0 }, /* 13D4	Ꮤ	e1 8f 94	CHEROKEE LETTER TA */
    {               0,           0 }, /* 13D5	Ꮥ	e1 8f 95	CHEROKEE LETTER DE */
    {               0,           0 }, /* 13D6	Ꮦ	e1 8f 96	CHEROKEE LETTER TE */
    {               0,           0 }, /* 13D7	Ꮧ	e1 8f 97	CHEROKEE LETTER DI */
    {               0,           0 }, /* 13D8	Ꮨ	e1 8f 98	CHEROKEE LETTER TI */
    {               0,           0 }, /* 13D9	Ꮩ	e1 8f 99	CHEROKEE LETTER DO */
    {               0,           0 }, /* 13DA	Ꮪ	e1 8f 9a	CHEROKEE LETTER DU */
    {               0,           0 }, /* 13DB	Ꮫ	e1 8f 9b	CHEROKEE LETTER DV */
    {               0,           0 }, /* 13DC	Ꮬ	e1 8f 9c	CHEROKEE LETTER DLA */
    {               0,           0 }, /* 13DD	Ꮭ	e1 8f 9d	CHEROKEE LETTER TLA */
    {               0,           0 }, /* 13DE	Ꮮ	e1 8f 9e	CHEROKEE LETTER TLE */
    {               0,           0 }, /* 13DF	Ꮯ	e1 8f 9f	CHEROKEE LETTER TLI */
    {               0,           0 }, /* 13E0	Ꮰ	e1 8f a0	CHEROKEE LETTER TLO */
    {               0,           0 }, /* 13E1	Ꮱ	e1 8f a1	CHEROKEE LETTER TLU */
    {               0,           0 }, /* 13E2	Ꮲ	e1 8f a2	CHEROKEE LETTER TLV */
    {               0,           0 }, /* 13E3	Ꮳ	e1 8f a3	CHEROKEE LETTER TSA */
    {               0,           0 }, /* 13E4	Ꮴ	e1 8f a4	CHEROKEE LETTER TSE */
    {               0,           0 }, /* 13E5	Ꮵ	e1 8f a5	CHEROKEE LETTER TSI */
    {               0,           0 }, /* 13E6	Ꮶ	e1 8f a6	CHEROKEE LETTER TSO */
    {               0,           0 }, /* 13E7	Ꮷ	e1 8f a7	CHEROKEE LETTER TSU */
    {               0,           0 }, /* 13E8	Ꮸ	e1 8f a8	CHEROKEE LETTER TSV */
    {               0,           0 }, /* 13E9	Ꮹ	e1 8f a9	CHEROKEE LETTER WA */
    {               0,           0 }, /* 13EA	Ꮺ	e1 8f aa	CHEROKEE LETTER WE */
    {               0,           0 }, /* 13EB	Ꮻ	e1 8f ab	CHEROKEE LETTER WI */
    {               0,           0 }, /* 13EC	Ꮼ	e1 8f ac	CHEROKEE LETTER WO */
    {               0,           0 }, /* 13ED	Ꮽ	e1 8f ad	CHEROKEE LETTER WU */
    {               0,           0 }, /* 13EE	Ꮾ	e1 8f ae	CHEROKEE LETTER WV */
    {               0,           0 }, /* 13EF	Ꮿ	e1 8f af	CHEROKEE LETTER YA */
    {               0,           0 }, /* 13F0	Ᏸ	e1 8f b0	CHEROKEE LETTER YE */
    {               0,           0 }, /* 13F1	Ᏹ	e1 8f b1	CHEROKEE LETTER YI */
    {               0,           0 }, /* 13F2	Ᏺ	e1 8f b2	CHEROKEE LETTER YO */
    {               0,           0 }, /* 13F3	Ᏻ	e1 8f b3	CHEROKEE LETTER YU */
    {               0,           0 }, /* 13F4	Ᏼ	e1 8f b4	CHEROKEE LETTER YV */
    {               0,           0 }, /* 13F5	Ᏽ	e1 8f b5	 */
    {               0,           0 }, /* 13F6	᏶	e1 8f b6	 */
    {               0,           0 }, /* 13F7	᏷	e1 8f b7	 */
    {               0,           0 }, /* 13F8	ᏸ	e1 8f b8	 */
    {               0,           0 }, /* 13F9	ᏹ	e1 8f b9	 */
    {               0,           0 }, /* 13FA	ᏺ	e1 8f ba	 */
    {               0,           0 }, /* 13FB	ᏻ	e1 8f bb	 */
    {               0,           0 }, /* 13FC	ᏼ	e1 8f bc	 */
    {               0,           0 }, /* 13FD	ᏽ	e1 8f bd	 */
    {               0,           0 }, /* 13FE	᏾	e1 8f be	 */
    {               0,           0 }, /* 13FF	᏿	e1 8f bf	 */
    {               0,           0 }, /* 1400	᐀	e1 90 80	CANADIAN SYLLABICS HYPHEN */
    {               0,           0 }, /* 1401	ᐁ	e1 90 81	CANADIAN SYLLABICS E */
    {               0,           0 }, /* 1402	ᐂ	e1 90 82	CANADIAN SYLLABICS AAI */
    {               0,           0 }, /* 1403	ᐃ	e1 90 83	CANADIAN SYLLABICS I */
    {               0,           0 }, /* 1404	ᐄ	e1 90 84	CANADIAN SYLLABICS II */
    {               0,           0 }, /* 1405	ᐅ	e1 90 85	CANADIAN SYLLABICS O */
    {               0,           0 }, /* 1406	ᐆ	e1 90 86	CANADIAN SYLLABICS OO */
    {               0,           0 }, /* 1407	ᐇ	e1 90 87	CANADIAN SYLLABICS Y-CREE OO */
    {               0,           0 }, /* 1408	ᐈ	e1 90 88	CANADIAN SYLLABICS CARRIER EE */
    {               0,           0 }, /* 1409	ᐉ	e1 90 89	CANADIAN SYLLABICS CARRIER I */
    {               0,           0 }, /* 140A	ᐊ	e1 90 8a	CANADIAN SYLLABICS A */
    {               0,           0 }, /* 140B	ᐋ	e1 90 8b	CANADIAN SYLLABICS AA */
    {               0,           0 }, /* 140C	ᐌ	e1 90 8c	CANADIAN SYLLABICS WE */
    {               0,           0 }, /* 140D	ᐍ	e1 90 8d	CANADIAN SYLLABICS WEST-CREE WE */
    {               0,           0 }, /* 140E	ᐎ	e1 90 8e	CANADIAN SYLLABICS WI */
    {               0,           0 }, /* 140F	ᐏ	e1 90 8f	CANADIAN SYLLABICS WEST-CREE WI */
    {               0,           0 }, /* 1410	ᐐ	e1 90 90	CANADIAN SYLLABICS WII */
    {               0,           0 }, /* 1411	ᐑ	e1 90 91	CANADIAN SYLLABICS WEST-CREE WII */
    {               0,           0 }, /* 1412	ᐒ	e1 90 92	CANADIAN SYLLABICS WO */
    {               0,           0 }, /* 1413	ᐓ	e1 90 93	CANADIAN SYLLABICS WEST-CREE WO */
    {               0,           0 }, /* 1414	ᐔ	e1 90 94	CANADIAN SYLLABICS WOO */
    {               0,           0 }, /* 1415	ᐕ	e1 90 95	CANADIAN SYLLABICS WEST-CREE WOO */
    {               0,           0 }, /* 1416	ᐖ	e1 90 96	CANADIAN SYLLABICS NASKAPI WOO */
    {               0,           0 }, /* 1417	ᐗ	e1 90 97	CANADIAN SYLLABICS WA */
    {               0,           0 }, /* 1418	ᐘ	e1 90 98	CANADIAN SYLLABICS WEST-CREE WA */
    {               0,           0 }, /* 1419	ᐙ	e1 90 99	CANADIAN SYLLABICS WAA */
    {               0,           0 }, /* 141A	ᐚ	e1 90 9a	CANADIAN SYLLABICS WEST-CREE WAA */
    {               0,           0 }, /* 141B	ᐛ	e1 90 9b	CANADIAN SYLLABICS NASKAPI WAA */
    {               0,           0 }, /* 141C	ᐜ	e1 90 9c	CANADIAN SYLLABICS AI */
    {               0,           0 }, /* 141D	ᐝ	e1 90 9d	CANADIAN SYLLABICS Y-CREE W */
    {               0,           0 }, /* 141E	ᐞ	e1 90 9e	CANADIAN SYLLABICS GLOTTAL STOP */
    {               0,           0 }, /* 141F	ᐟ	e1 90 9f	CANADIAN SYLLABICS FINAL ACUTE */
    {               0,           0 }, /* 1420	ᐠ	e1 90 a0	CANADIAN SYLLABICS FINAL GRAVE */
    {               0,           0 }, /* 1421	ᐡ	e1 90 a1	CANADIAN SYLLABICS FINAL BOTTOM HALF RING */
    {               0,           0 }, /* 1422	ᐢ	e1 90 a2	CANADIAN SYLLABICS FINAL TOP HALF RING */
    {               0,           0 }, /* 1423	ᐣ	e1 90 a3	CANADIAN SYLLABICS FINAL RIGHT HALF RING */
    {               0,           0 }, /* 1424	ᐤ	e1 90 a4	CANADIAN SYLLABICS FINAL RING */
    {               0,           0 }, /* 1425	ᐥ	e1 90 a5	CANADIAN SYLLABICS FINAL DOUBLE ACUTE */
    {               0,           0 }, /* 1426	ᐦ	e1 90 a6	CANADIAN SYLLABICS FINAL DOUBLE SHORT VERTICAL STROKES */
    {               0,           0 }, /* 1427	ᐧ	e1 90 a7	CANADIAN SYLLABICS FINAL MIDDLE DOT */
    {               0,           0 }, /* 1428	ᐨ	e1 90 a8	CANADIAN SYLLABICS FINAL SHORT HORIZONTAL STROKE */
    {               0,           0 }, /* 1429	ᐩ	e1 90 a9	CANADIAN SYLLABICS FINAL PLUS */
    {               0,           0 }, /* 142A	ᐪ	e1 90 aa	CANADIAN SYLLABICS FINAL DOWN TACK */
    {               0,           0 }, /* 142B	ᐫ	e1 90 ab	CANADIAN SYLLABICS EN */
    {               0,           0 }, /* 142C	ᐬ	e1 90 ac	CANADIAN SYLLABICS IN */
    {               0,           0 }, /* 142D	ᐭ	e1 90 ad	CANADIAN SYLLABICS ON */
    {               0,           0 }, /* 142E	ᐮ	e1 90 ae	CANADIAN SYLLABICS AN */
    {               0,           0 }, /* 142F	ᐯ	e1 90 af	CANADIAN SYLLABICS PE */
    {               0,           0 }, /* 1430	ᐰ	e1 90 b0	CANADIAN SYLLABICS PAAI */
    {               0,           0 }, /* 1431	ᐱ	e1 90 b1	CANADIAN SYLLABICS PI */
    {               0,           0 }, /* 1432	ᐲ	e1 90 b2	CANADIAN SYLLABICS PII */
    {               0,           0 }, /* 1433	ᐳ	e1 90 b3	CANADIAN SYLLABICS PO */
    {               0,           0 }, /* 1434	ᐴ	e1 90 b4	CANADIAN SYLLABICS POO */
    {               0,           0 }, /* 1435	ᐵ	e1 90 b5	CANADIAN SYLLABICS Y-CREE POO */
    {               0,           0 }, /* 1436	ᐶ	e1 90 b6	CANADIAN SYLLABICS CARRIER HEE */
    {               0,           0 }, /* 1437	ᐷ	e1 90 b7	CANADIAN SYLLABICS CARRIER HI */
    {               0,           0 }, /* 1438	ᐸ	e1 90 b8	CANADIAN SYLLABICS PA */
    {               0,           0 }, /* 1439	ᐹ	e1 90 b9	CANADIAN SYLLABICS PAA */
    {               0,           0 }, /* 143A	ᐺ	e1 90 ba	CANADIAN SYLLABICS PWE */
    {               0,           0 }, /* 143B	ᐻ	e1 90 bb	CANADIAN SYLLABICS WEST-CREE PWE */
    {               0,           0 }, /* 143C	ᐼ	e1 90 bc	CANADIAN SYLLABICS PWI */
    {               0,           0 }, /* 143D	ᐽ	e1 90 bd	CANADIAN SYLLABICS WEST-CREE PWI */
    {               0,           0 }, /* 143E	ᐾ	e1 90 be	CANADIAN SYLLABICS PWII */
    {               0,           0 }, /* 143F	ᐿ	e1 90 bf	CANADIAN SYLLABICS WEST-CREE PWII */
    {               0,           0 }, /* 1440	ᑀ	e1 91 80	CANADIAN SYLLABICS PWO */
    {               0,           0 }, /* 1441	ᑁ	e1 91 81	CANADIAN SYLLABICS WEST-CREE PWO */
    {               0,           0 }, /* 1442	ᑂ	e1 91 82	CANADIAN SYLLABICS PWOO */
    {               0,           0 }, /* 1443	ᑃ	e1 91 83	CANADIAN SYLLABICS WEST-CREE PWOO */
    {               0,           0 }, /* 1444	ᑄ	e1 91 84	CANADIAN SYLLABICS PWA */
    {               0,           0 }, /* 1445	ᑅ	e1 91 85	CANADIAN SYLLABICS WEST-CREE PWA */
    {               0,           0 }, /* 1446	ᑆ	e1 91 86	CANADIAN SYLLABICS PWAA */
    {               0,           0 }, /* 1447	ᑇ	e1 91 87	CANADIAN SYLLABICS WEST-CREE PWAA */
    {               0,           0 }, /* 1448	ᑈ	e1 91 88	CANADIAN SYLLABICS Y-CREE PWAA */
    {               0,           0 }, /* 1449	ᑉ	e1 91 89	CANADIAN SYLLABICS P */
    {               0,           0 }, /* 144A	ᑊ	e1 91 8a	CANADIAN SYLLABICS WEST-CREE P */
    {               0,           0 }, /* 144B	ᑋ	e1 91 8b	CANADIAN SYLLABICS CARRIER H */
    {               0,           0 }, /* 144C	ᑌ	e1 91 8c	CANADIAN SYLLABICS TE */
    {               0,           0 }, /* 144D	ᑍ	e1 91 8d	CANADIAN SYLLABICS TAAI */
    {               0,           0 }, /* 144E	ᑎ	e1 91 8e	CANADIAN SYLLABICS TI */
    {               0,           0 }, /* 144F	ᑏ	e1 91 8f	CANADIAN SYLLABICS TII */
    {               0,           0 }, /* 1450	ᑐ	e1 91 90	CANADIAN SYLLABICS TO */
    {               0,           0 }, /* 1451	ᑑ	e1 91 91	CANADIAN SYLLABICS TOO */
    {               0,           0 }, /* 1452	ᑒ	e1 91 92	CANADIAN SYLLABICS Y-CREE TOO */
    {               0,           0 }, /* 1453	ᑓ	e1 91 93	CANADIAN SYLLABICS CARRIER DEE */
    {               0,           0 }, /* 1454	ᑔ	e1 91 94	CANADIAN SYLLABICS CARRIER DI */
    {               0,           0 }, /* 1455	ᑕ	e1 91 95	CANADIAN SYLLABICS TA */
    {               0,           0 }, /* 1456	ᑖ	e1 91 96	CANADIAN SYLLABICS TAA */
    {               0,           0 }, /* 1457	ᑗ	e1 91 97	CANADIAN SYLLABICS TWE */
    {               0,           0 }, /* 1458	ᑘ	e1 91 98	CANADIAN SYLLABICS WEST-CREE TWE */
    {               0,           0 }, /* 1459	ᑙ	e1 91 99	CANADIAN SYLLABICS TWI */
    {               0,           0 }, /* 145A	ᑚ	e1 91 9a	CANADIAN SYLLABICS WEST-CREE TWI */
    {               0,           0 }, /* 145B	ᑛ	e1 91 9b	CANADIAN SYLLABICS TWII */
    {               0,           0 }, /* 145C	ᑜ	e1 91 9c	CANADIAN SYLLABICS WEST-CREE TWII */
    {               0,           0 }, /* 145D	ᑝ	e1 91 9d	CANADIAN SYLLABICS TWO */
    {               0,           0 }, /* 145E	ᑞ	e1 91 9e	CANADIAN SYLLABICS WEST-CREE TWO */
    {               0,           0 }, /* 145F	ᑟ	e1 91 9f	CANADIAN SYLLABICS TWOO */
    {               0,           0 }, /* 1460	ᑠ	e1 91 a0	CANADIAN SYLLABICS WEST-CREE TWOO */
    {               0,           0 }, /* 1461	ᑡ	e1 91 a1	CANADIAN SYLLABICS TWA */
    {               0,           0 }, /* 1462	ᑢ	e1 91 a2	CANADIAN SYLLABICS WEST-CREE TWA */
    {               0,           0 }, /* 1463	ᑣ	e1 91 a3	CANADIAN SYLLABICS TWAA */
    {               0,           0 }, /* 1464	ᑤ	e1 91 a4	CANADIAN SYLLABICS WEST-CREE TWAA */
    {               0,           0 }, /* 1465	ᑥ	e1 91 a5	CANADIAN SYLLABICS NASKAPI TWAA */
    {               0,           0 }, /* 1466	ᑦ	e1 91 a6	CANADIAN SYLLABICS T */
    {               0,           0 }, /* 1467	ᑧ	e1 91 a7	CANADIAN SYLLABICS TTE */
    {               0,           0 }, /* 1468	ᑨ	e1 91 a8	CANADIAN SYLLABICS TTI */
    {               0,           0 }, /* 1469	ᑩ	e1 91 a9	CANADIAN SYLLABICS TTO */
    {               0,           0 }, /* 146A	ᑪ	e1 91 aa	CANADIAN SYLLABICS TTA */
    {               0,           0 }, /* 146B	ᑫ	e1 91 ab	CANADIAN SYLLABICS KE */
    {               0,           0 }, /* 146C	ᑬ	e1 91 ac	CANADIAN SYLLABICS KAAI */
    {               0,           0 }, /* 146D	ᑭ	e1 91 ad	CANADIAN SYLLABICS KI */
    {               0,           0 }, /* 146E	ᑮ	e1 91 ae	CANADIAN SYLLABICS KII */
    {               0,           0 }, /* 146F	ᑯ	e1 91 af	CANADIAN SYLLABICS KO */
    {               0,           0 }, /* 1470	ᑰ	e1 91 b0	CANADIAN SYLLABICS KOO */
    {               0,           0 }, /* 1471	ᑱ	e1 91 b1	CANADIAN SYLLABICS Y-CREE KOO */
    {               0,           0 }, /* 1472	ᑲ	e1 91 b2	CANADIAN SYLLABICS KA */
    {               0,           0 }, /* 1473	ᑳ	e1 91 b3	CANADIAN SYLLABICS KAA */
    {               0,           0 }, /* 1474	ᑴ	e1 91 b4	CANADIAN SYLLABICS KWE */
    {               0,           0 }, /* 1475	ᑵ	e1 91 b5	CANADIAN SYLLABICS WEST-CREE KWE */
    {               0,           0 }, /* 1476	ᑶ	e1 91 b6	CANADIAN SYLLABICS KWI */
    {               0,           0 }, /* 1477	ᑷ	e1 91 b7	CANADIAN SYLLABICS WEST-CREE KWI */
    {               0,           0 }, /* 1478	ᑸ	e1 91 b8	CANADIAN SYLLABICS KWII */
    {               0,           0 }, /* 1479	ᑹ	e1 91 b9	CANADIAN SYLLABICS WEST-CREE KWII */
    {               0,           0 }, /* 147A	ᑺ	e1 91 ba	CANADIAN SYLLABICS KWO */
    {               0,           0 }, /* 147B	ᑻ	e1 91 bb	CANADIAN SYLLABICS WEST-CREE KWO */
    {               0,           0 }, /* 147C	ᑼ	e1 91 bc	CANADIAN SYLLABICS KWOO */
    {               0,           0 }, /* 147D	ᑽ	e1 91 bd	CANADIAN SYLLABICS WEST-CREE KWOO */
    {               0,           0 }, /* 147E	ᑾ	e1 91 be	CANADIAN SYLLABICS KWA */
    {               0,           0 }, /* 147F	ᑿ	e1 91 bf	CANADIAN SYLLABICS WEST-CREE KWA */
    {               0,           0 }, /* 1480	ᒀ	e1 92 80	CANADIAN SYLLABICS KWAA */
    {               0,           0 }, /* 1481	ᒁ	e1 92 81	CANADIAN SYLLABICS WEST-CREE KWAA */
    {               0,           0 }, /* 1482	ᒂ	e1 92 82	CANADIAN SYLLABICS NASKAPI KWAA */
    {               0,           0 }, /* 1483	ᒃ	e1 92 83	CANADIAN SYLLABICS K */
    {               0,           0 }, /* 1484	ᒄ	e1 92 84	CANADIAN SYLLABICS KW */
    {               0,           0 }, /* 1485	ᒅ	e1 92 85	CANADIAN SYLLABICS SOUTH-SLAVEY KEH */
    {               0,           0 }, /* 1486	ᒆ	e1 92 86	CANADIAN SYLLABICS SOUTH-SLAVEY KIH */
    {               0,           0 }, /* 1487	ᒇ	e1 92 87	CANADIAN SYLLABICS SOUTH-SLAVEY KOH */
    {               0,           0 }, /* 1488	ᒈ	e1 92 88	CANADIAN SYLLABICS SOUTH-SLAVEY KAH */
    {               0,           0 }, /* 1489	ᒉ	e1 92 89	CANADIAN SYLLABICS CE */
    {               0,           0 }, /* 148A	ᒊ	e1 92 8a	CANADIAN SYLLABICS CAAI */
    {               0,           0 }, /* 148B	ᒋ	e1 92 8b	CANADIAN SYLLABICS CI */
    {               0,           0 }, /* 148C	ᒌ	e1 92 8c	CANADIAN SYLLABICS CII */
    {               0,           0 }, /* 148D	ᒍ	e1 92 8d	CANADIAN SYLLABICS CO */
    {               0,           0 }, /* 148E	ᒎ	e1 92 8e	CANADIAN SYLLABICS COO */
    {               0,           0 }, /* 148F	ᒏ	e1 92 8f	CANADIAN SYLLABICS Y-CREE COO */
    {               0,           0 }, /* 1490	ᒐ	e1 92 90	CANADIAN SYLLABICS CA */
    {               0,           0 }, /* 1491	ᒑ	e1 92 91	CANADIAN SYLLABICS CAA */
    {               0,           0 }, /* 1492	ᒒ	e1 92 92	CANADIAN SYLLABICS CWE */
    {               0,           0 }, /* 1493	ᒓ	e1 92 93	CANADIAN SYLLABICS WEST-CREE CWE */
    {               0,           0 }, /* 1494	ᒔ	e1 92 94	CANADIAN SYLLABICS CWI */
    {               0,           0 }, /* 1495	ᒕ	e1 92 95	CANADIAN SYLLABICS WEST-CREE CWI */
    {               0,           0 }, /* 1496	ᒖ	e1 92 96	CANADIAN SYLLABICS CWII */
    {               0,           0 }, /* 1497	ᒗ	e1 92 97	CANADIAN SYLLABICS WEST-CREE CWII */
    {               0,           0 }, /* 1498	ᒘ	e1 92 98	CANADIAN SYLLABICS CWO */
    {               0,           0 }, /* 1499	ᒙ	e1 92 99	CANADIAN SYLLABICS WEST-CREE CWO */
    {               0,           0 }, /* 149A	ᒚ	e1 92 9a	CANADIAN SYLLABICS CWOO */
    {               0,           0 }, /* 149B	ᒛ	e1 92 9b	CANADIAN SYLLABICS WEST-CREE CWOO */
    {               0,           0 }, /* 149C	ᒜ	e1 92 9c	CANADIAN SYLLABICS CWA */
    {               0,           0 }, /* 149D	ᒝ	e1 92 9d	CANADIAN SYLLABICS WEST-CREE CWA */
    {               0,           0 }, /* 149E	ᒞ	e1 92 9e	CANADIAN SYLLABICS CWAA */
    {               0,           0 }, /* 149F	ᒟ	e1 92 9f	CANADIAN SYLLABICS WEST-CREE CWAA */
    {               0,           0 }, /* 14A0	ᒠ	e1 92 a0	CANADIAN SYLLABICS NASKAPI CWAA */
    {               0,           0 }, /* 14A1	ᒡ	e1 92 a1	CANADIAN SYLLABICS C */
    {               0,           0 }, /* 14A2	ᒢ	e1 92 a2	CANADIAN SYLLABICS SAYISI TH */
    {               0,           0 }, /* 14A3	ᒣ	e1 92 a3	CANADIAN SYLLABICS ME */
    {               0,           0 }, /* 14A4	ᒤ	e1 92 a4	CANADIAN SYLLABICS MAAI */
    {               0,           0 }, /* 14A5	ᒥ	e1 92 a5	CANADIAN SYLLABICS MI */
    {               0,           0 }, /* 14A6	ᒦ	e1 92 a6	CANADIAN SYLLABICS MII */
    {               0,           0 }, /* 14A7	ᒧ	e1 92 a7	CANADIAN SYLLABICS MO */
    {               0,           0 }, /* 14A8	ᒨ	e1 92 a8	CANADIAN SYLLABICS MOO */
    {               0,           0 }, /* 14A9	ᒩ	e1 92 a9	CANADIAN SYLLABICS Y-CREE MOO */
    {               0,           0 }, /* 14AA	ᒪ	e1 92 aa	CANADIAN SYLLABICS MA */
    {               0,           0 }, /* 14AB	ᒫ	e1 92 ab	CANADIAN SYLLABICS MAA */
    {               0,           0 }, /* 14AC	ᒬ	e1 92 ac	CANADIAN SYLLABICS MWE */
    {               0,           0 }, /* 14AD	ᒭ	e1 92 ad	CANADIAN SYLLABICS WEST-CREE MWE */
    {               0,           0 }, /* 14AE	ᒮ	e1 92 ae	CANADIAN SYLLABICS MWI */
    {               0,           0 }, /* 14AF	ᒯ	e1 92 af	CANADIAN SYLLABICS WEST-CREE MWI */
    {               0,           0 }, /* 14B0	ᒰ	e1 92 b0	CANADIAN SYLLABICS MWII */
    {               0,           0 }, /* 14B1	ᒱ	e1 92 b1	CANADIAN SYLLABICS WEST-CREE MWII */
    {               0,           0 }, /* 14B2	ᒲ	e1 92 b2	CANADIAN SYLLABICS MWO */
    {               0,           0 }, /* 14B3	ᒳ	e1 92 b3	CANADIAN SYLLABICS WEST-CREE MWO */
    {               0,           0 }, /* 14B4	ᒴ	e1 92 b4	CANADIAN SYLLABICS MWOO */
    {               0,           0 }, /* 14B5	ᒵ	e1 92 b5	CANADIAN SYLLABICS WEST-CREE MWOO */
    {               0,           0 }, /* 14B6	ᒶ	e1 92 b6	CANADIAN SYLLABICS MWA */
    {               0,           0 }, /* 14B7	ᒷ	e1 92 b7	CANADIAN SYLLABICS WEST-CREE MWA */
    {               0,           0 }, /* 14B8	ᒸ	e1 92 b8	CANADIAN SYLLABICS MWAA */
    {               0,           0 }, /* 14B9	ᒹ	e1 92 b9	CANADIAN SYLLABICS WEST-CREE MWAA */
    {               0,           0 }, /* 14BA	ᒺ	e1 92 ba	CANADIAN SYLLABICS NASKAPI MWAA */
    {               0,           0 }, /* 14BB	ᒻ	e1 92 bb	CANADIAN SYLLABICS M */
    {               0,           0 }, /* 14BC	ᒼ	e1 92 bc	CANADIAN SYLLABICS WEST-CREE M */
    {               0,           0 }, /* 14BD	ᒽ	e1 92 bd	CANADIAN SYLLABICS MH */
    {               0,           0 }, /* 14BE	ᒾ	e1 92 be	CANADIAN SYLLABICS ATHAPASCAN M */
    {               0,           0 }, /* 14BF	ᒿ	e1 92 bf	CANADIAN SYLLABICS SAYISI M */
    {               0,           0 }, /* 14C0	ᓀ	e1 93 80	CANADIAN SYLLABICS NE */
    {               0,           0 }, /* 14C1	ᓁ	e1 93 81	CANADIAN SYLLABICS NAAI */
    {               0,           0 }, /* 14C2	ᓂ	e1 93 82	CANADIAN SYLLABICS NI */
    {               0,           0 }, /* 14C3	ᓃ	e1 93 83	CANADIAN SYLLABICS NII */
    {               0,           0 }, /* 14C4	ᓄ	e1 93 84	CANADIAN SYLLABICS NO */
    {               0,           0 }, /* 14C5	ᓅ	e1 93 85	CANADIAN SYLLABICS NOO */
    {               0,           0 }, /* 14C6	ᓆ	e1 93 86	CANADIAN SYLLABICS Y-CREE NOO */
    {               0,           0 }, /* 14C7	ᓇ	e1 93 87	CANADIAN SYLLABICS NA */
    {               0,           0 }, /* 14C8	ᓈ	e1 93 88	CANADIAN SYLLABICS NAA */
    {               0,           0 }, /* 14C9	ᓉ	e1 93 89	CANADIAN SYLLABICS NWE */
    {               0,           0 }, /* 14CA	ᓊ	e1 93 8a	CANADIAN SYLLABICS WEST-CREE NWE */
    {               0,           0 }, /* 14CB	ᓋ	e1 93 8b	CANADIAN SYLLABICS NWA */
    {               0,           0 }, /* 14CC	ᓌ	e1 93 8c	CANADIAN SYLLABICS WEST-CREE NWA */
    {               0,           0 }, /* 14CD	ᓍ	e1 93 8d	CANADIAN SYLLABICS NWAA */
    {               0,           0 }, /* 14CE	ᓎ	e1 93 8e	CANADIAN SYLLABICS WEST-CREE NWAA */
    {               0,           0 }, /* 14CF	ᓏ	e1 93 8f	CANADIAN SYLLABICS NASKAPI NWAA */
    {               0,           0 }, /* 14D0	ᓐ	e1 93 90	CANADIAN SYLLABICS N */
    {               0,           0 }, /* 14D1	ᓑ	e1 93 91	CANADIAN SYLLABICS CARRIER NG */
    {               0,           0 }, /* 14D2	ᓒ	e1 93 92	CANADIAN SYLLABICS NH */
    {               0,           0 }, /* 14D3	ᓓ	e1 93 93	CANADIAN SYLLABICS LE */
    {               0,           0 }, /* 14D4	ᓔ	e1 93 94	CANADIAN SYLLABICS LAAI */
    {               0,           0 }, /* 14D5	ᓕ	e1 93 95	CANADIAN SYLLABICS LI */
    {               0,           0 }, /* 14D6	ᓖ	e1 93 96	CANADIAN SYLLABICS LII */
    {               0,           0 }, /* 14D7	ᓗ	e1 93 97	CANADIAN SYLLABICS LO */
    {               0,           0 }, /* 14D8	ᓘ	e1 93 98	CANADIAN SYLLABICS LOO */
    {               0,           0 }, /* 14D9	ᓙ	e1 93 99	CANADIAN SYLLABICS Y-CREE LOO */
    {               0,           0 }, /* 14DA	ᓚ	e1 93 9a	CANADIAN SYLLABICS LA */
    {               0,           0 }, /* 14DB	ᓛ	e1 93 9b	CANADIAN SYLLABICS LAA */
    {               0,           0 }, /* 14DC	ᓜ	e1 93 9c	CANADIAN SYLLABICS LWE */
    {               0,           0 }, /* 14DD	ᓝ	e1 93 9d	CANADIAN SYLLABICS WEST-CREE LWE */
    {               0,           0 }, /* 14DE	ᓞ	e1 93 9e	CANADIAN SYLLABICS LWI */
    {               0,           0 }, /* 14DF	ᓟ	e1 93 9f	CANADIAN SYLLABICS WEST-CREE LWI */
    {               0,           0 }, /* 14E0	ᓠ	e1 93 a0	CANADIAN SYLLABICS LWII */
    {               0,           0 }, /* 14E1	ᓡ	e1 93 a1	CANADIAN SYLLABICS WEST-CREE LWII */
    {               0,           0 }, /* 14E2	ᓢ	e1 93 a2	CANADIAN SYLLABICS LWO */
    {               0,           0 }, /* 14E3	ᓣ	e1 93 a3	CANADIAN SYLLABICS WEST-CREE LWO */
    {               0,           0 }, /* 14E4	ᓤ	e1 93 a4	CANADIAN SYLLABICS LWOO */
    {               0,           0 }, /* 14E5	ᓥ	e1 93 a5	CANADIAN SYLLABICS WEST-CREE LWOO */
    {               0,           0 }, /* 14E6	ᓦ	e1 93 a6	CANADIAN SYLLABICS LWA */
    {               0,           0 }, /* 14E7	ᓧ	e1 93 a7	CANADIAN SYLLABICS WEST-CREE LWA */
    {               0,           0 }, /* 14E8	ᓨ	e1 93 a8	CANADIAN SYLLABICS LWAA */
    {               0,           0 }, /* 14E9	ᓩ	e1 93 a9	CANADIAN SYLLABICS WEST-CREE LWAA */
    {               0,           0 }, /* 14EA	ᓪ	e1 93 aa	CANADIAN SYLLABICS L */
    {               0,           0 }, /* 14EB	ᓫ	e1 93 ab	CANADIAN SYLLABICS WEST-CREE L */
    {               0,           0 }, /* 14EC	ᓬ	e1 93 ac	CANADIAN SYLLABICS MEDIAL L */
    {               0,           0 }, /* 14ED	ᓭ	e1 93 ad	CANADIAN SYLLABICS SE */
    {               0,           0 }, /* 14EE	ᓮ	e1 93 ae	CANADIAN SYLLABICS SAAI */
    {               0,           0 }, /* 14EF	ᓯ	e1 93 af	CANADIAN SYLLABICS SI */
    {               0,           0 }, /* 14F0	ᓰ	e1 93 b0	CANADIAN SYLLABICS SII */
    {               0,           0 }, /* 14F1	ᓱ	e1 93 b1	CANADIAN SYLLABICS SO */
    {               0,           0 }, /* 14F2	ᓲ	e1 93 b2	CANADIAN SYLLABICS SOO */
    {               0,           0 }, /* 14F3	ᓳ	e1 93 b3	CANADIAN SYLLABICS Y-CREE SOO */
    {               0,           0 }, /* 14F4	ᓴ	e1 93 b4	CANADIAN SYLLABICS SA */
    {               0,           0 }, /* 14F5	ᓵ	e1 93 b5	CANADIAN SYLLABICS SAA */
    {               0,           0 }, /* 14F6	ᓶ	e1 93 b6	CANADIAN SYLLABICS SWE */
    {               0,           0 }, /* 14F7	ᓷ	e1 93 b7	CANADIAN SYLLABICS WEST-CREE SWE */
    {               0,           0 }, /* 14F8	ᓸ	e1 93 b8	CANADIAN SYLLABICS SWI */
    {               0,           0 }, /* 14F9	ᓹ	e1 93 b9	CANADIAN SYLLABICS WEST-CREE SWI */
    {               0,           0 }, /* 14FA	ᓺ	e1 93 ba	CANADIAN SYLLABICS SWII */
    {               0,           0 }, /* 14FB	ᓻ	e1 93 bb	CANADIAN SYLLABICS WEST-CREE SWII */
    {               0,           0 }, /* 14FC	ᓼ	e1 93 bc	CANADIAN SYLLABICS SWO */
    {               0,           0 }, /* 14FD	ᓽ	e1 93 bd	CANADIAN SYLLABICS WEST-CREE SWO */
    {               0,           0 }, /* 14FE	ᓾ	e1 93 be	CANADIAN SYLLABICS SWOO */
    {               0,           0 }, /* 14FF	ᓿ	e1 93 bf	CANADIAN SYLLABICS WEST-CREE SWOO */
    {               0,           0 }, /* 1500	ᔀ	e1 94 80	CANADIAN SYLLABICS SWA */
    {               0,           0 }, /* 1501	ᔁ	e1 94 81	CANADIAN SYLLABICS WEST-CREE SWA */
    {               0,           0 }, /* 1502	ᔂ	e1 94 82	CANADIAN SYLLABICS SWAA */
    {               0,           0 }, /* 1503	ᔃ	e1 94 83	CANADIAN SYLLABICS WEST-CREE SWAA */
    {               0,           0 }, /* 1504	ᔄ	e1 94 84	CANADIAN SYLLABICS NASKAPI SWAA */
    {               0,           0 }, /* 1505	ᔅ	e1 94 85	CANADIAN SYLLABICS S */
    {               0,           0 }, /* 1506	ᔆ	e1 94 86	CANADIAN SYLLABICS ATHAPASCAN S */
    {               0,           0 }, /* 1507	ᔇ	e1 94 87	CANADIAN SYLLABICS SW */
    {               0,           0 }, /* 1508	ᔈ	e1 94 88	CANADIAN SYLLABICS BLACKFOOT S */
    {               0,           0 }, /* 1509	ᔉ	e1 94 89	CANADIAN SYLLABICS MOOSE-CREE SK */
    {               0,           0 }, /* 150A	ᔊ	e1 94 8a	CANADIAN SYLLABICS NASKAPI SKW */
    {               0,           0 }, /* 150B	ᔋ	e1 94 8b	CANADIAN SYLLABICS NASKAPI S-W */
    {               0,           0 }, /* 150C	ᔌ	e1 94 8c	CANADIAN SYLLABICS NASKAPI SPWA */
    {               0,           0 }, /* 150D	ᔍ	e1 94 8d	CANADIAN SYLLABICS NASKAPI STWA */
    {               0,           0 }, /* 150E	ᔎ	e1 94 8e	CANADIAN SYLLABICS NASKAPI SKWA */
    {               0,           0 }, /* 150F	ᔏ	e1 94 8f	CANADIAN SYLLABICS NASKAPI SCWA */
    {               0,           0 }, /* 1510	ᔐ	e1 94 90	CANADIAN SYLLABICS SHE */
    {               0,           0 }, /* 1511	ᔑ	e1 94 91	CANADIAN SYLLABICS SHI */
    {               0,           0 }, /* 1512	ᔒ	e1 94 92	CANADIAN SYLLABICS SHII */
    {               0,           0 }, /* 1513	ᔓ	e1 94 93	CANADIAN SYLLABICS SHO */
    {               0,           0 }, /* 1514	ᔔ	e1 94 94	CANADIAN SYLLABICS SHOO */
    {               0,           0 }, /* 1515	ᔕ	e1 94 95	CANADIAN SYLLABICS SHA */
    {               0,           0 }, /* 1516	ᔖ	e1 94 96	CANADIAN SYLLABICS SHAA */
    {               0,           0 }, /* 1517	ᔗ	e1 94 97	CANADIAN SYLLABICS SHWE */
    {               0,           0 }, /* 1518	ᔘ	e1 94 98	CANADIAN SYLLABICS WEST-CREE SHWE */
    {               0,           0 }, /* 1519	ᔙ	e1 94 99	CANADIAN SYLLABICS SHWI */
    {               0,           0 }, /* 151A	ᔚ	e1 94 9a	CANADIAN SYLLABICS WEST-CREE SHWI */
    {               0,           0 }, /* 151B	ᔛ	e1 94 9b	CANADIAN SYLLABICS SHWII */
    {               0,           0 }, /* 151C	ᔜ	e1 94 9c	CANADIAN SYLLABICS WEST-CREE SHWII */
    {               0,           0 }, /* 151D	ᔝ	e1 94 9d	CANADIAN SYLLABICS SHWO */
    {               0,           0 }, /* 151E	ᔞ	e1 94 9e	CANADIAN SYLLABICS WEST-CREE SHWO */
    {               0,           0 }, /* 151F	ᔟ	e1 94 9f	CANADIAN SYLLABICS SHWOO */
    {               0,           0 }, /* 1520	ᔠ	e1 94 a0	CANADIAN SYLLABICS WEST-CREE SHWOO */
    {               0,           0 }, /* 1521	ᔡ	e1 94 a1	CANADIAN SYLLABICS SHWA */
    {               0,           0 }, /* 1522	ᔢ	e1 94 a2	CANADIAN SYLLABICS WEST-CREE SHWA */
    {               0,           0 }, /* 1523	ᔣ	e1 94 a3	CANADIAN SYLLABICS SHWAA */
    {               0,           0 }, /* 1524	ᔤ	e1 94 a4	CANADIAN SYLLABICS WEST-CREE SHWAA */
    {               0,           0 }, /* 1525	ᔥ	e1 94 a5	CANADIAN SYLLABICS SH */
    {               0,           0 }, /* 1526	ᔦ	e1 94 a6	CANADIAN SYLLABICS YE */
    {               0,           0 }, /* 1527	ᔧ	e1 94 a7	CANADIAN SYLLABICS YAAI */
    {               0,           0 }, /* 1528	ᔨ	e1 94 a8	CANADIAN SYLLABICS YI */
    {               0,           0 }, /* 1529	ᔩ	e1 94 a9	CANADIAN SYLLABICS YII */
    {               0,           0 }, /* 152A	ᔪ	e1 94 aa	CANADIAN SYLLABICS YO */
    {               0,           0 }, /* 152B	ᔫ	e1 94 ab	CANADIAN SYLLABICS YOO */
    {               0,           0 }, /* 152C	ᔬ	e1 94 ac	CANADIAN SYLLABICS Y-CREE YOO */
    {               0,           0 }, /* 152D	ᔭ	e1 94 ad	CANADIAN SYLLABICS YA */
    {               0,           0 }, /* 152E	ᔮ	e1 94 ae	CANADIAN SYLLABICS YAA */
    {               0,           0 }, /* 152F	ᔯ	e1 94 af	CANADIAN SYLLABICS YWE */
    {               0,           0 }, /* 1530	ᔰ	e1 94 b0	CANADIAN SYLLABICS WEST-CREE YWE */
    {               0,           0 }, /* 1531	ᔱ	e1 94 b1	CANADIAN SYLLABICS YWI */
    {               0,           0 }, /* 1532	ᔲ	e1 94 b2	CANADIAN SYLLABICS WEST-CREE YWI */
    {               0,           0 }, /* 1533	ᔳ	e1 94 b3	CANADIAN SYLLABICS YWII */
    {               0,           0 }, /* 1534	ᔴ	e1 94 b4	CANADIAN SYLLABICS WEST-CREE YWII */
    {               0,           0 }, /* 1535	ᔵ	e1 94 b5	CANADIAN SYLLABICS YWO */
    {               0,           0 }, /* 1536	ᔶ	e1 94 b6	CANADIAN SYLLABICS WEST-CREE YWO */
    {               0,           0 }, /* 1537	ᔷ	e1 94 b7	CANADIAN SYLLABICS YWOO */
    {               0,           0 }, /* 1538	ᔸ	e1 94 b8	CANADIAN SYLLABICS WEST-CREE YWOO */
    {               0,           0 }, /* 1539	ᔹ	e1 94 b9	CANADIAN SYLLABICS YWA */
    {               0,           0 }, /* 153A	ᔺ	e1 94 ba	CANADIAN SYLLABICS WEST-CREE YWA */
    {               0,           0 }, /* 153B	ᔻ	e1 94 bb	CANADIAN SYLLABICS YWAA */
    {               0,           0 }, /* 153C	ᔼ	e1 94 bc	CANADIAN SYLLABICS WEST-CREE YWAA */
    {               0,           0 }, /* 153D	ᔽ	e1 94 bd	CANADIAN SYLLABICS NASKAPI YWAA */
    {               0,           0 }, /* 153E	ᔾ	e1 94 be	CANADIAN SYLLABICS Y */
    {               0,           0 }, /* 153F	ᔿ	e1 94 bf	CANADIAN SYLLABICS BIBLE-CREE Y */
    {               0,           0 }, /* 1540	ᕀ	e1 95 80	CANADIAN SYLLABICS WEST-CREE Y */
    {               0,           0 }, /* 1541	ᕁ	e1 95 81	CANADIAN SYLLABICS SAYISI YI */
    {               0,           0 }, /* 1542	ᕂ	e1 95 82	CANADIAN SYLLABICS RE */
    {               0,           0 }, /* 1543	ᕃ	e1 95 83	CANADIAN SYLLABICS R-CREE RE */
    {               0,           0 }, /* 1544	ᕄ	e1 95 84	CANADIAN SYLLABICS WEST-CREE LE */
    {               0,           0 }, /* 1545	ᕅ	e1 95 85	CANADIAN SYLLABICS RAAI */
    {               0,           0 }, /* 1546	ᕆ	e1 95 86	CANADIAN SYLLABICS RI */
    {               0,           0 }, /* 1547	ᕇ	e1 95 87	CANADIAN SYLLABICS RII */
    {               0,           0 }, /* 1548	ᕈ	e1 95 88	CANADIAN SYLLABICS RO */
    {               0,           0 }, /* 1549	ᕉ	e1 95 89	CANADIAN SYLLABICS ROO */
    {               0,           0 }, /* 154A	ᕊ	e1 95 8a	CANADIAN SYLLABICS WEST-CREE LO */
    {               0,           0 }, /* 154B	ᕋ	e1 95 8b	CANADIAN SYLLABICS RA */
    {               0,           0 }, /* 154C	ᕌ	e1 95 8c	CANADIAN SYLLABICS RAA */
    {               0,           0 }, /* 154D	ᕍ	e1 95 8d	CANADIAN SYLLABICS WEST-CREE LA */
    {               0,           0 }, /* 154E	ᕎ	e1 95 8e	CANADIAN SYLLABICS RWAA */
    {               0,           0 }, /* 154F	ᕏ	e1 95 8f	CANADIAN SYLLABICS WEST-CREE RWAA */
    {               0,           0 }, /* 1550	ᕐ	e1 95 90	CANADIAN SYLLABICS R */
    {               0,           0 }, /* 1551	ᕑ	e1 95 91	CANADIAN SYLLABICS WEST-CREE R */
    {               0,           0 }, /* 1552	ᕒ	e1 95 92	CANADIAN SYLLABICS MEDIAL R */
    {               0,           0 }, /* 1553	ᕓ	e1 95 93	CANADIAN SYLLABICS FE */
    {               0,           0 }, /* 1554	ᕔ	e1 95 94	CANADIAN SYLLABICS FAAI */
    {               0,           0 }, /* 1555	ᕕ	e1 95 95	CANADIAN SYLLABICS FI */
    {               0,           0 }, /* 1556	ᕖ	e1 95 96	CANADIAN SYLLABICS FII */
    {               0,           0 }, /* 1557	ᕗ	e1 95 97	CANADIAN SYLLABICS FO */
    {               0,           0 }, /* 1558	ᕘ	e1 95 98	CANADIAN SYLLABICS FOO */
    {               0,           0 }, /* 1559	ᕙ	e1 95 99	CANADIAN SYLLABICS FA */
    {               0,           0 }, /* 155A	ᕚ	e1 95 9a	CANADIAN SYLLABICS FAA */
    {               0,           0 }, /* 155B	ᕛ	e1 95 9b	CANADIAN SYLLABICS FWAA */
    {               0,           0 }, /* 155C	ᕜ	e1 95 9c	CANADIAN SYLLABICS WEST-CREE FWAA */
    {               0,           0 }, /* 155D	ᕝ	e1 95 9d	CANADIAN SYLLABICS F */
    {               0,           0 }, /* 155E	ᕞ	e1 95 9e	CANADIAN SYLLABICS THE */
    {               0,           0 }, /* 155F	ᕟ	e1 95 9f	CANADIAN SYLLABICS N-CREE THE */
    {               0,           0 }, /* 1560	ᕠ	e1 95 a0	CANADIAN SYLLABICS THI */
    {               0,           0 }, /* 1561	ᕡ	e1 95 a1	CANADIAN SYLLABICS N-CREE THI */
    {               0,           0 }, /* 1562	ᕢ	e1 95 a2	CANADIAN SYLLABICS THII */
    {               0,           0 }, /* 1563	ᕣ	e1 95 a3	CANADIAN SYLLABICS N-CREE THII */
    {               0,           0 }, /* 1564	ᕤ	e1 95 a4	CANADIAN SYLLABICS THO */
    {               0,           0 }, /* 1565	ᕥ	e1 95 a5	CANADIAN SYLLABICS THOO */
    {               0,           0 }, /* 1566	ᕦ	e1 95 a6	CANADIAN SYLLABICS THA */
    {               0,           0 }, /* 1567	ᕧ	e1 95 a7	CANADIAN SYLLABICS THAA */
    {               0,           0 }, /* 1568	ᕨ	e1 95 a8	CANADIAN SYLLABICS THWAA */
    {               0,           0 }, /* 1569	ᕩ	e1 95 a9	CANADIAN SYLLABICS WEST-CREE THWAA */
    {               0,           0 }, /* 156A	ᕪ	e1 95 aa	CANADIAN SYLLABICS TH */
    {               0,           0 }, /* 156B	ᕫ	e1 95 ab	CANADIAN SYLLABICS TTHE */
    {               0,           0 }, /* 156C	ᕬ	e1 95 ac	CANADIAN SYLLABICS TTHI */
    {               0,           0 }, /* 156D	ᕭ	e1 95 ad	CANADIAN SYLLABICS TTHO */
    {               0,           0 }, /* 156E	ᕮ	e1 95 ae	CANADIAN SYLLABICS TTHA */
    {               0,           0 }, /* 156F	ᕯ	e1 95 af	CANADIAN SYLLABICS TTH */
    {               0,           0 }, /* 1570	ᕰ	e1 95 b0	CANADIAN SYLLABICS TYE */
    {               0,           0 }, /* 1571	ᕱ	e1 95 b1	CANADIAN SYLLABICS TYI */
    {               0,           0 }, /* 1572	ᕲ	e1 95 b2	CANADIAN SYLLABICS TYO */
    {               0,           0 }, /* 1573	ᕳ	e1 95 b3	CANADIAN SYLLABICS TYA */
    {               0,           0 }, /* 1574	ᕴ	e1 95 b4	CANADIAN SYLLABICS NUNAVIK HE */
    {               0,           0 }, /* 1575	ᕵ	e1 95 b5	CANADIAN SYLLABICS NUNAVIK HI */
    {               0,           0 }, /* 1576	ᕶ	e1 95 b6	CANADIAN SYLLABICS NUNAVIK HII */
    {               0,           0 }, /* 1577	ᕷ	e1 95 b7	CANADIAN SYLLABICS NUNAVIK HO */
    {               0,           0 }, /* 1578	ᕸ	e1 95 b8	CANADIAN SYLLABICS NUNAVIK HOO */
    {               0,           0 }, /* 1579	ᕹ	e1 95 b9	CANADIAN SYLLABICS NUNAVIK HA */
    {               0,           0 }, /* 157A	ᕺ	e1 95 ba	CANADIAN SYLLABICS NUNAVIK HAA */
    {               0,           0 }, /* 157B	ᕻ	e1 95 bb	CANADIAN SYLLABICS NUNAVIK H */
    {               0,           0 }, /* 157C	ᕼ	e1 95 bc	CANADIAN SYLLABICS NUNAVUT H */
    {               0,           0 }, /* 157D	ᕽ	e1 95 bd	CANADIAN SYLLABICS HK */
    {               0,           0 }, /* 157E	ᕾ	e1 95 be	CANADIAN SYLLABICS QAAI */
    {               0,           0 }, /* 157F	ᕿ	e1 95 bf	CANADIAN SYLLABICS QI */
    {               0,           0 }, /* 1580	ᖀ	e1 96 80	CANADIAN SYLLABICS QII */
    {               0,           0 }, /* 1581	ᖁ	e1 96 81	CANADIAN SYLLABICS QO */
    {               0,           0 }, /* 1582	ᖂ	e1 96 82	CANADIAN SYLLABICS QOO */
    {               0,           0 }, /* 1583	ᖃ	e1 96 83	CANADIAN SYLLABICS QA */
    {               0,           0 }, /* 1584	ᖄ	e1 96 84	CANADIAN SYLLABICS QAA */
    {               0,           0 }, /* 1585	ᖅ	e1 96 85	CANADIAN SYLLABICS Q */
    {               0,           0 }, /* 1586	ᖆ	e1 96 86	CANADIAN SYLLABICS TLHE */
    {               0,           0 }, /* 1587	ᖇ	e1 96 87	CANADIAN SYLLABICS TLHI */
    {               0,           0 }, /* 1588	ᖈ	e1 96 88	CANADIAN SYLLABICS TLHO */
    {               0,           0 }, /* 1589	ᖉ	e1 96 89	CANADIAN SYLLABICS TLHA */
    {               0,           0 }, /* 158A	ᖊ	e1 96 8a	CANADIAN SYLLABICS WEST-CREE RE */
    {               0,           0 }, /* 158B	ᖋ	e1 96 8b	CANADIAN SYLLABICS WEST-CREE RI */
    {               0,           0 }, /* 158C	ᖌ	e1 96 8c	CANADIAN SYLLABICS WEST-CREE RO */
    {               0,           0 }, /* 158D	ᖍ	e1 96 8d	CANADIAN SYLLABICS WEST-CREE RA */
    {               0,           0 }, /* 158E	ᖎ	e1 96 8e	CANADIAN SYLLABICS NGAAI */
    {               0,           0 }, /* 158F	ᖏ	e1 96 8f	CANADIAN SYLLABICS NGI */
    {               0,           0 }, /* 1590	ᖐ	e1 96 90	CANADIAN SYLLABICS NGII */
    {               0,           0 }, /* 1591	ᖑ	e1 96 91	CANADIAN SYLLABICS NGO */
    {               0,           0 }, /* 1592	ᖒ	e1 96 92	CANADIAN SYLLABICS NGOO */
    {               0,           0 }, /* 1593	ᖓ	e1 96 93	CANADIAN SYLLABICS NGA */
    {               0,           0 }, /* 1594	ᖔ	e1 96 94	CANADIAN SYLLABICS NGAA */
    {               0,           0 }, /* 1595	ᖕ	e1 96 95	CANADIAN SYLLABICS NG */
    {               0,           0 }, /* 1596	ᖖ	e1 96 96	CANADIAN SYLLABICS NNG */
    {               0,           0 }, /* 1597	ᖗ	e1 96 97	CANADIAN SYLLABICS SAYISI SHE */
    {               0,           0 }, /* 1598	ᖘ	e1 96 98	CANADIAN SYLLABICS SAYISI SHI */
    {               0,           0 }, /* 1599	ᖙ	e1 96 99	CANADIAN SYLLABICS SAYISI SHO */
    {               0,           0 }, /* 159A	ᖚ	e1 96 9a	CANADIAN SYLLABICS SAYISI SHA */
    {               0,           0 }, /* 159B	ᖛ	e1 96 9b	CANADIAN SYLLABICS WOODS-CREE THE */
    {               0,           0 }, /* 159C	ᖜ	e1 96 9c	CANADIAN SYLLABICS WOODS-CREE THI */
    {               0,           0 }, /* 159D	ᖝ	e1 96 9d	CANADIAN SYLLABICS WOODS-CREE THO */
    {               0,           0 }, /* 159E	ᖞ	e1 96 9e	CANADIAN SYLLABICS WOODS-CREE THA */
    {               0,           0 }, /* 159F	ᖟ	e1 96 9f	CANADIAN SYLLABICS WOODS-CREE TH */
    {               0,           0 }, /* 15A0	ᖠ	e1 96 a0	CANADIAN SYLLABICS LHI */
    {               0,           0 }, /* 15A1	ᖡ	e1 96 a1	CANADIAN SYLLABICS LHII */
    {               0,           0 }, /* 15A2	ᖢ	e1 96 a2	CANADIAN SYLLABICS LHO */
    {               0,           0 }, /* 15A3	ᖣ	e1 96 a3	CANADIAN SYLLABICS LHOO */
    {               0,           0 }, /* 15A4	ᖤ	e1 96 a4	CANADIAN SYLLABICS LHA */
    {               0,           0 }, /* 15A5	ᖥ	e1 96 a5	CANADIAN SYLLABICS LHAA */
    {               0,           0 }, /* 15A6	ᖦ	e1 96 a6	CANADIAN SYLLABICS LH */
    {               0,           0 }, /* 15A7	ᖧ	e1 96 a7	CANADIAN SYLLABICS TH-CREE THE */
    {               0,           0 }, /* 15A8	ᖨ	e1 96 a8	CANADIAN SYLLABICS TH-CREE THI */
    {               0,           0 }, /* 15A9	ᖩ	e1 96 a9	CANADIAN SYLLABICS TH-CREE THII */
    {               0,           0 }, /* 15AA	ᖪ	e1 96 aa	CANADIAN SYLLABICS TH-CREE THO */
    {               0,           0 }, /* 15AB	ᖫ	e1 96 ab	CANADIAN SYLLABICS TH-CREE THOO */
    {               0,           0 }, /* 15AC	ᖬ	e1 96 ac	CANADIAN SYLLABICS TH-CREE THA */
    {               0,           0 }, /* 15AD	ᖭ	e1 96 ad	CANADIAN SYLLABICS TH-CREE THAA */
    {               0,           0 }, /* 15AE	ᖮ	e1 96 ae	CANADIAN SYLLABICS TH-CREE TH */
    {               0,           0 }, /* 15AF	ᖯ	e1 96 af	CANADIAN SYLLABICS AIVILIK B */
    {               0,           0 }, /* 15B0	ᖰ	e1 96 b0	CANADIAN SYLLABICS BLACKFOOT E */
    {               0,           0 }, /* 15B1	ᖱ	e1 96 b1	CANADIAN SYLLABICS BLACKFOOT I */
    {               0,           0 }, /* 15B2	ᖲ	e1 96 b2	CANADIAN SYLLABICS BLACKFOOT O */
    {               0,           0 }, /* 15B3	ᖳ	e1 96 b3	CANADIAN SYLLABICS BLACKFOOT A */
    {               0,           0 }, /* 15B4	ᖴ	e1 96 b4	CANADIAN SYLLABICS BLACKFOOT WE */
    {               0,           0 }, /* 15B5	ᖵ	e1 96 b5	CANADIAN SYLLABICS BLACKFOOT WI */
    {               0,           0 }, /* 15B6	ᖶ	e1 96 b6	CANADIAN SYLLABICS BLACKFOOT WO */
    {               0,           0 }, /* 15B7	ᖷ	e1 96 b7	CANADIAN SYLLABICS BLACKFOOT WA */
    {               0,           0 }, /* 15B8	ᖸ	e1 96 b8	CANADIAN SYLLABICS BLACKFOOT NE */
    {               0,           0 }, /* 15B9	ᖹ	e1 96 b9	CANADIAN SYLLABICS BLACKFOOT NI */
    {               0,           0 }, /* 15BA	ᖺ	e1 96 ba	CANADIAN SYLLABICS BLACKFOOT NO */
    {               0,           0 }, /* 15BB	ᖻ	e1 96 bb	CANADIAN SYLLABICS BLACKFOOT NA */
    {               0,           0 }, /* 15BC	ᖼ	e1 96 bc	CANADIAN SYLLABICS BLACKFOOT KE */
    {               0,           0 }, /* 15BD	ᖽ	e1 96 bd	CANADIAN SYLLABICS BLACKFOOT KI */
    {               0,           0 }, /* 15BE	ᖾ	e1 96 be	CANADIAN SYLLABICS BLACKFOOT KO */
    {               0,           0 }, /* 15BF	ᖿ	e1 96 bf	CANADIAN SYLLABICS BLACKFOOT KA */
    {               0,           0 }, /* 15C0	ᗀ	e1 97 80	CANADIAN SYLLABICS SAYISI HE */
    {               0,           0 }, /* 15C1	ᗁ	e1 97 81	CANADIAN SYLLABICS SAYISI HI */
    {               0,           0 }, /* 15C2	ᗂ	e1 97 82	CANADIAN SYLLABICS SAYISI HO */
    {               0,           0 }, /* 15C3	ᗃ	e1 97 83	CANADIAN SYLLABICS SAYISI HA */
    {               0,           0 }, /* 15C4	ᗄ	e1 97 84	CANADIAN SYLLABICS CARRIER GHU */
    {               0,           0 }, /* 15C5	ᗅ	e1 97 85	CANADIAN SYLLABICS CARRIER GHO */
    {               0,           0 }, /* 15C6	ᗆ	e1 97 86	CANADIAN SYLLABICS CARRIER GHE */
    {               0,           0 }, /* 15C7	ᗇ	e1 97 87	CANADIAN SYLLABICS CARRIER GHEE */
    {               0,           0 }, /* 15C8	ᗈ	e1 97 88	CANADIAN SYLLABICS CARRIER GHI */
    {               0,           0 }, /* 15C9	ᗉ	e1 97 89	CANADIAN SYLLABICS CARRIER GHA */
    {               0,           0 }, /* 15CA	ᗊ	e1 97 8a	CANADIAN SYLLABICS CARRIER RU */
    {               0,           0 }, /* 15CB	ᗋ	e1 97 8b	CANADIAN SYLLABICS CARRIER RO */
    {               0,           0 }, /* 15CC	ᗌ	e1 97 8c	CANADIAN SYLLABICS CARRIER RE */
    {               0,           0 }, /* 15CD	ᗍ	e1 97 8d	CANADIAN SYLLABICS CARRIER REE */
    {               0,           0 }, /* 15CE	ᗎ	e1 97 8e	CANADIAN SYLLABICS CARRIER RI */
    {               0,           0 }, /* 15CF	ᗏ	e1 97 8f	CANADIAN SYLLABICS CARRIER RA */
    {               0,           0 }, /* 15D0	ᗐ	e1 97 90	CANADIAN SYLLABICS CARRIER WU */
    {               0,           0 }, /* 15D1	ᗑ	e1 97 91	CANADIAN SYLLABICS CARRIER WO */
    {               0,           0 }, /* 15D2	ᗒ	e1 97 92	CANADIAN SYLLABICS CARRIER WE */
    {               0,           0 }, /* 15D3	ᗓ	e1 97 93	CANADIAN SYLLABICS CARRIER WEE */
    {               0,           0 }, /* 15D4	ᗔ	e1 97 94	CANADIAN SYLLABICS CARRIER WI */
    {               0,           0 }, /* 15D5	ᗕ	e1 97 95	CANADIAN SYLLABICS CARRIER WA */
    {               0,           0 }, /* 15D6	ᗖ	e1 97 96	CANADIAN SYLLABICS CARRIER HWU */
    {               0,           0 }, /* 15D7	ᗗ	e1 97 97	CANADIAN SYLLABICS CARRIER HWO */
    {               0,           0 }, /* 15D8	ᗘ	e1 97 98	CANADIAN SYLLABICS CARRIER HWE */
    {               0,           0 }, /* 15D9	ᗙ	e1 97 99	CANADIAN SYLLABICS CARRIER HWEE */
    {               0,           0 }, /* 15DA	ᗚ	e1 97 9a	CANADIAN SYLLABICS CARRIER HWI */
    {               0,           0 }, /* 15DB	ᗛ	e1 97 9b	CANADIAN SYLLABICS CARRIER HWA */
    {               0,           0 }, /* 15DC	ᗜ	e1 97 9c	CANADIAN SYLLABICS CARRIER THU */
    {               0,           0 }, /* 15DD	ᗝ	e1 97 9d	CANADIAN SYLLABICS CARRIER THO */
    {               0,           0 }, /* 15DE	ᗞ	e1 97 9e	CANADIAN SYLLABICS CARRIER THE */
    {               0,           0 }, /* 15DF	ᗟ	e1 97 9f	CANADIAN SYLLABICS CARRIER THEE */
    {               0,           0 }, /* 15E0	ᗠ	e1 97 a0	CANADIAN SYLLABICS CARRIER THI */
    {               0,           0 }, /* 15E1	ᗡ	e1 97 a1	CANADIAN SYLLABICS CARRIER THA */
    {               0,           0 }, /* 15E2	ᗢ	e1 97 a2	CANADIAN SYLLABICS CARRIER TTU */
    {               0,           0 }, /* 15E3	ᗣ	e1 97 a3	CANADIAN SYLLABICS CARRIER TTO */
    {               0,           0 }, /* 15E4	ᗤ	e1 97 a4	CANADIAN SYLLABICS CARRIER TTE */
    {               0,           0 }, /* 15E5	ᗥ	e1 97 a5	CANADIAN SYLLABICS CARRIER TTEE */
    {               0,           0 }, /* 15E6	ᗦ	e1 97 a6	CANADIAN SYLLABICS CARRIER TTI */
    {               0,           0 }, /* 15E7	ᗧ	e1 97 a7	CANADIAN SYLLABICS CARRIER TTA */
    {               0,           0 }, /* 15E8	ᗨ	e1 97 a8	CANADIAN SYLLABICS CARRIER PU */
    {               0,           0 }, /* 15E9	ᗩ	e1 97 a9	CANADIAN SYLLABICS CARRIER PO */
    {               0,           0 }, /* 15EA	ᗪ	e1 97 aa	CANADIAN SYLLABICS CARRIER PE */
    {               0,           0 }, /* 15EB	ᗫ	e1 97 ab	CANADIAN SYLLABICS CARRIER PEE */
    {               0,           0 }, /* 15EC	ᗬ	e1 97 ac	CANADIAN SYLLABICS CARRIER PI */
    {               0,           0 }, /* 15ED	ᗭ	e1 97 ad	CANADIAN SYLLABICS CARRIER PA */
    {               0,           0 }, /* 15EE	ᗮ	e1 97 ae	CANADIAN SYLLABICS CARRIER P */
    {               0,           0 }, /* 15EF	ᗯ	e1 97 af	CANADIAN SYLLABICS CARRIER GU */
    {               0,           0 }, /* 15F0	ᗰ	e1 97 b0	CANADIAN SYLLABICS CARRIER GO */
    {               0,           0 }, /* 15F1	ᗱ	e1 97 b1	CANADIAN SYLLABICS CARRIER GE */
    {               0,           0 }, /* 15F2	ᗲ	e1 97 b2	CANADIAN SYLLABICS CARRIER GEE */
    {               0,           0 }, /* 15F3	ᗳ	e1 97 b3	CANADIAN SYLLABICS CARRIER GI */
    {               0,           0 }, /* 15F4	ᗴ	e1 97 b4	CANADIAN SYLLABICS CARRIER GA */
    {               0,           0 }, /* 15F5	ᗵ	e1 97 b5	CANADIAN SYLLABICS CARRIER KHU */
    {               0,           0 }, /* 15F6	ᗶ	e1 97 b6	CANADIAN SYLLABICS CARRIER KHO */
    {               0,           0 }, /* 15F7	ᗷ	e1 97 b7	CANADIAN SYLLABICS CARRIER KHE */
    {               0,           0 }, /* 15F8	ᗸ	e1 97 b8	CANADIAN SYLLABICS CARRIER KHEE */
    {               0,           0 }, /* 15F9	ᗹ	e1 97 b9	CANADIAN SYLLABICS CARRIER KHI */
    {               0,           0 }, /* 15FA	ᗺ	e1 97 ba	CANADIAN SYLLABICS CARRIER KHA */
    {               0,           0 }, /* 15FB	ᗻ	e1 97 bb	CANADIAN SYLLABICS CARRIER KKU */
    {               0,           0 }, /* 15FC	ᗼ	e1 97 bc	CANADIAN SYLLABICS CARRIER KKO */
    {               0,           0 }, /* 15FD	ᗽ	e1 97 bd	CANADIAN SYLLABICS CARRIER KKE */
    {               0,           0 }, /* 15FE	ᗾ	e1 97 be	CANADIAN SYLLABICS CARRIER KKEE */
    {               0,           0 }, /* 15FF	ᗿ	e1 97 bf	CANADIAN SYLLABICS CARRIER KKI */
    {               0,           0 }, /* 1600	ᘀ	e1 98 80	CANADIAN SYLLABICS CARRIER KKA */
    {               0,           0 }, /* 1601	ᘁ	e1 98 81	CANADIAN SYLLABICS CARRIER KK */
    {               0,           0 }, /* 1602	ᘂ	e1 98 82	CANADIAN SYLLABICS CARRIER NU */
    {               0,           0 }, /* 1603	ᘃ	e1 98 83	CANADIAN SYLLABICS CARRIER NO */
    {               0,           0 }, /* 1604	ᘄ	e1 98 84	CANADIAN SYLLABICS CARRIER NE */
    {               0,           0 }, /* 1605	ᘅ	e1 98 85	CANADIAN SYLLABICS CARRIER NEE */
    {               0,           0 }, /* 1606	ᘆ	e1 98 86	CANADIAN SYLLABICS CARRIER NI */
    {               0,           0 }, /* 1607	ᘇ	e1 98 87	CANADIAN SYLLABICS CARRIER NA */
    {               0,           0 }, /* 1608	ᘈ	e1 98 88	CANADIAN SYLLABICS CARRIER MU */
    {               0,           0 }, /* 1609	ᘉ	e1 98 89	CANADIAN SYLLABICS CARRIER MO */
    {               0,           0 }, /* 160A	ᘊ	e1 98 8a	CANADIAN SYLLABICS CARRIER ME */
    {               0,           0 }, /* 160B	ᘋ	e1 98 8b	CANADIAN SYLLABICS CARRIER MEE */
    {               0,           0 }, /* 160C	ᘌ	e1 98 8c	CANADIAN SYLLABICS CARRIER MI */
    {               0,           0 }, /* 160D	ᘍ	e1 98 8d	CANADIAN SYLLABICS CARRIER MA */
    {               0,           0 }, /* 160E	ᘎ	e1 98 8e	CANADIAN SYLLABICS CARRIER YU */
    {               0,           0 }, /* 160F	ᘏ	e1 98 8f	CANADIAN SYLLABICS CARRIER YO */
    {               0,           0 }, /* 1610	ᘐ	e1 98 90	CANADIAN SYLLABICS CARRIER YE */
    {               0,           0 }, /* 1611	ᘑ	e1 98 91	CANADIAN SYLLABICS CARRIER YEE */
    {               0,           0 }, /* 1612	ᘒ	e1 98 92	CANADIAN SYLLABICS CARRIER YI */
    {               0,           0 }, /* 1613	ᘓ	e1 98 93	CANADIAN SYLLABICS CARRIER YA */
    {               0,           0 }, /* 1614	ᘔ	e1 98 94	CANADIAN SYLLABICS CARRIER JU */
    {               0,           0 }, /* 1615	ᘕ	e1 98 95	CANADIAN SYLLABICS SAYISI JU */
    {               0,           0 }, /* 1616	ᘖ	e1 98 96	CANADIAN SYLLABICS CARRIER JO */
    {               0,           0 }, /* 1617	ᘗ	e1 98 97	CANADIAN SYLLABICS CARRIER JE */
    {               0,           0 }, /* 1618	ᘘ	e1 98 98	CANADIAN SYLLABICS CARRIER JEE */
    {               0,           0 }, /* 1619	ᘙ	e1 98 99	CANADIAN SYLLABICS CARRIER JI */
    {               0,           0 }, /* 161A	ᘚ	e1 98 9a	CANADIAN SYLLABICS SAYISI JI */
    {               0,           0 }, /* 161B	ᘛ	e1 98 9b	CANADIAN SYLLABICS CARRIER JA */
    {               0,           0 }, /* 161C	ᘜ	e1 98 9c	CANADIAN SYLLABICS CARRIER JJU */
    {               0,           0 }, /* 161D	ᘝ	e1 98 9d	CANADIAN SYLLABICS CARRIER JJO */
    {               0,           0 }, /* 161E	ᘞ	e1 98 9e	CANADIAN SYLLABICS CARRIER JJE */
    {               0,           0 }, /* 161F	ᘟ	e1 98 9f	CANADIAN SYLLABICS CARRIER JJEE */
    {               0,           0 }, /* 1620	ᘠ	e1 98 a0	CANADIAN SYLLABICS CARRIER JJI */
    {               0,           0 }, /* 1621	ᘡ	e1 98 a1	CANADIAN SYLLABICS CARRIER JJA */
    {               0,           0 }, /* 1622	ᘢ	e1 98 a2	CANADIAN SYLLABICS CARRIER LU */
    {               0,           0 }, /* 1623	ᘣ	e1 98 a3	CANADIAN SYLLABICS CARRIER LO */
    {               0,           0 }, /* 1624	ᘤ	e1 98 a4	CANADIAN SYLLABICS CARRIER LE */
    {               0,           0 }, /* 1625	ᘥ	e1 98 a5	CANADIAN SYLLABICS CARRIER LEE */
    {               0,           0 }, /* 1626	ᘦ	e1 98 a6	CANADIAN SYLLABICS CARRIER LI */
    {               0,           0 }, /* 1627	ᘧ	e1 98 a7	CANADIAN SYLLABICS CARRIER LA */
    {               0,           0 }, /* 1628	ᘨ	e1 98 a8	CANADIAN SYLLABICS CARRIER DLU */
    {               0,           0 }, /* 1629	ᘩ	e1 98 a9	CANADIAN SYLLABICS CARRIER DLO */
    {               0,           0 }, /* 162A	ᘪ	e1 98 aa	CANADIAN SYLLABICS CARRIER DLE */
    {               0,           0 }, /* 162B	ᘫ	e1 98 ab	CANADIAN SYLLABICS CARRIER DLEE */
    {               0,           0 }, /* 162C	ᘬ	e1 98 ac	CANADIAN SYLLABICS CARRIER DLI */
    {               0,           0 }, /* 162D	ᘭ	e1 98 ad	CANADIAN SYLLABICS CARRIER DLA */
    {               0,           0 }, /* 162E	ᘮ	e1 98 ae	CANADIAN SYLLABICS CARRIER LHU */
    {               0,           0 }, /* 162F	ᘯ	e1 98 af	CANADIAN SYLLABICS CARRIER LHO */
    {               0,           0 }, /* 1630	ᘰ	e1 98 b0	CANADIAN SYLLABICS CARRIER LHE */
    {               0,           0 }, /* 1631	ᘱ	e1 98 b1	CANADIAN SYLLABICS CARRIER LHEE */
    {               0,           0 }, /* 1632	ᘲ	e1 98 b2	CANADIAN SYLLABICS CARRIER LHI */
    {               0,           0 }, /* 1633	ᘳ	e1 98 b3	CANADIAN SYLLABICS CARRIER LHA */
    {               0,           0 }, /* 1634	ᘴ	e1 98 b4	CANADIAN SYLLABICS CARRIER TLHU */
    {               0,           0 }, /* 1635	ᘵ	e1 98 b5	CANADIAN SYLLABICS CARRIER TLHO */
    {               0,           0 }, /* 1636	ᘶ	e1 98 b6	CANADIAN SYLLABICS CARRIER TLHE */
    {               0,           0 }, /* 1637	ᘷ	e1 98 b7	CANADIAN SYLLABICS CARRIER TLHEE */
    {               0,           0 }, /* 1638	ᘸ	e1 98 b8	CANADIAN SYLLABICS CARRIER TLHI */
    {               0,           0 }, /* 1639	ᘹ	e1 98 b9	CANADIAN SYLLABICS CARRIER TLHA */
    {               0,           0 }, /* 163A	ᘺ	e1 98 ba	CANADIAN SYLLABICS CARRIER TLU */
    {               0,           0 }, /* 163B	ᘻ	e1 98 bb	CANADIAN SYLLABICS CARRIER TLO */
    {               0,           0 }, /* 163C	ᘼ	e1 98 bc	CANADIAN SYLLABICS CARRIER TLE */
    {               0,           0 }, /* 163D	ᘽ	e1 98 bd	CANADIAN SYLLABICS CARRIER TLEE */
    {               0,           0 }, /* 163E	ᘾ	e1 98 be	CANADIAN SYLLABICS CARRIER TLI */
    {               0,           0 }, /* 163F	ᘿ	e1 98 bf	CANADIAN SYLLABICS CARRIER TLA */
    {               0,           0 }, /* 1640	ᙀ	e1 99 80	CANADIAN SYLLABICS CARRIER ZU */
    {               0,           0 }, /* 1641	ᙁ	e1 99 81	CANADIAN SYLLABICS CARRIER ZO */
    {               0,           0 }, /* 1642	ᙂ	e1 99 82	CANADIAN SYLLABICS CARRIER ZE */
    {               0,           0 }, /* 1643	ᙃ	e1 99 83	CANADIAN SYLLABICS CARRIER ZEE */
    {               0,           0 }, /* 1644	ᙄ	e1 99 84	CANADIAN SYLLABICS CARRIER ZI */
    {               0,           0 }, /* 1645	ᙅ	e1 99 85	CANADIAN SYLLABICS CARRIER ZA */
    {               0,           0 }, /* 1646	ᙆ	e1 99 86	CANADIAN SYLLABICS CARRIER Z */
    {               0,           0 }, /* 1647	ᙇ	e1 99 87	CANADIAN SYLLABICS CARRIER INITIAL Z */
    {               0,           0 }, /* 1648	ᙈ	e1 99 88	CANADIAN SYLLABICS CARRIER DZU */
    {               0,           0 }, /* 1649	ᙉ	e1 99 89	CANADIAN SYLLABICS CARRIER DZO */
    {               0,           0 }, /* 164A	ᙊ	e1 99 8a	CANADIAN SYLLABICS CARRIER DZE */
    {               0,           0 }, /* 164B	ᙋ	e1 99 8b	CANADIAN SYLLABICS CARRIER DZEE */
    {               0,           0 }, /* 164C	ᙌ	e1 99 8c	CANADIAN SYLLABICS CARRIER DZI */
    {               0,           0 }, /* 164D	ᙍ	e1 99 8d	CANADIAN SYLLABICS CARRIER DZA */
    {               0,           0 }, /* 164E	ᙎ	e1 99 8e	CANADIAN SYLLABICS CARRIER SU */
    {               0,           0 }, /* 164F	ᙏ	e1 99 8f	CANADIAN SYLLABICS CARRIER SO */
    {               0,           0 }, /* 1650	ᙐ	e1 99 90	CANADIAN SYLLABICS CARRIER SE */
    {               0,           0 }, /* 1651	ᙑ	e1 99 91	CANADIAN SYLLABICS CARRIER SEE */
    {               0,           0 }, /* 1652	ᙒ	e1 99 92	CANADIAN SYLLABICS CARRIER SI */
    {               0,           0 }, /* 1653	ᙓ	e1 99 93	CANADIAN SYLLABICS CARRIER SA */
    {               0,           0 }, /* 1654	ᙔ	e1 99 94	CANADIAN SYLLABICS CARRIER SHU */
    {               0,           0 }, /* 1655	ᙕ	e1 99 95	CANADIAN SYLLABICS CARRIER SHO */
    {               0,           0 }, /* 1656	ᙖ	e1 99 96	CANADIAN SYLLABICS CARRIER SHE */
    {               0,           0 }, /* 1657	ᙗ	e1 99 97	CANADIAN SYLLABICS CARRIER SHEE */
    {               0,           0 }, /* 1658	ᙘ	e1 99 98	CANADIAN SYLLABICS CARRIER SHI */
    {               0,           0 }, /* 1659	ᙙ	e1 99 99	CANADIAN SYLLABICS CARRIER SHA */
    {               0,           0 }, /* 165A	ᙚ	e1 99 9a	CANADIAN SYLLABICS CARRIER SH */
    {               0,           0 }, /* 165B	ᙛ	e1 99 9b	CANADIAN SYLLABICS CARRIER TSU */
    {               0,           0 }, /* 165C	ᙜ	e1 99 9c	CANADIAN SYLLABICS CARRIER TSO */
    {               0,           0 }, /* 165D	ᙝ	e1 99 9d	CANADIAN SYLLABICS CARRIER TSE */
    {               0,           0 }, /* 165E	ᙞ	e1 99 9e	CANADIAN SYLLABICS CARRIER TSEE */
    {               0,           0 }, /* 165F	ᙟ	e1 99 9f	CANADIAN SYLLABICS CARRIER TSI */
    {               0,           0 }, /* 1660	ᙠ	e1 99 a0	CANADIAN SYLLABICS CARRIER TSA */
    {               0,           0 }, /* 1661	ᙡ	e1 99 a1	CANADIAN SYLLABICS CARRIER CHU */
    {               0,           0 }, /* 1662	ᙢ	e1 99 a2	CANADIAN SYLLABICS CARRIER CHO */
    {               0,           0 }, /* 1663	ᙣ	e1 99 a3	CANADIAN SYLLABICS CARRIER CHE */
    {               0,           0 }, /* 1664	ᙤ	e1 99 a4	CANADIAN SYLLABICS CARRIER CHEE */
    {               0,           0 }, /* 1665	ᙥ	e1 99 a5	CANADIAN SYLLABICS CARRIER CHI */
    {               0,           0 }, /* 1666	ᙦ	e1 99 a6	CANADIAN SYLLABICS CARRIER CHA */
    {               0,           0 }, /* 1667	ᙧ	e1 99 a7	CANADIAN SYLLABICS CARRIER TTSU */
    {               0,           0 }, /* 1668	ᙨ	e1 99 a8	CANADIAN SYLLABICS CARRIER TTSO */
    {               0,           0 }, /* 1669	ᙩ	e1 99 a9	CANADIAN SYLLABICS CARRIER TTSE */
    {               0,           0 }, /* 166A	ᙪ	e1 99 aa	CANADIAN SYLLABICS CARRIER TTSEE */
    {               0,           0 }, /* 166B	ᙫ	e1 99 ab	CANADIAN SYLLABICS CARRIER TTSI */
    {               0,           0 }, /* 166C	ᙬ	e1 99 ac	CANADIAN SYLLABICS CARRIER TTSA */
    {               0,           0 }, /* 166D	᙭	e1 99 ad	CANADIAN SYLLABICS CHI SIGN */
    {               0,           0 }, /* 166E	᙮	e1 99 ae	CANADIAN SYLLABICS FULL STOP */
    {               0,           0 }, /* 166F	ᙯ	e1 99 af	CANADIAN SYLLABICS QAI */
    {               0,           0 }, /* 1670	ᙰ	e1 99 b0	CANADIAN SYLLABICS NGAI */
    {               0,           0 }, /* 1671	ᙱ	e1 99 b1	CANADIAN SYLLABICS NNGI */
    {               0,           0 }, /* 1672	ᙲ	e1 99 b2	CANADIAN SYLLABICS NNGII */
    {               0,           0 }, /* 1673	ᙳ	e1 99 b3	CANADIAN SYLLABICS NNGO */
    {               0,           0 }, /* 1674	ᙴ	e1 99 b4	CANADIAN SYLLABICS NNGOO */
    {               0,           0 }, /* 1675	ᙵ	e1 99 b5	CANADIAN SYLLABICS NNGA */
    {               0,           0 }, /* 1676	ᙶ	e1 99 b6	CANADIAN SYLLABICS NNGAA */
    {               0,           0 }, /* 1677	ᙷ	e1 99 b7	CANADIAN SYLLABICS WOODS-CREE THWEE */
    {               0,           0 }, /* 1678	ᙸ	e1 99 b8	CANADIAN SYLLABICS WOODS-CREE THWI */
    {               0,           0 }, /* 1679	ᙹ	e1 99 b9	CANADIAN SYLLABICS WOODS-CREE THWII */
    {               0,           0 }, /* 167A	ᙺ	e1 99 ba	CANADIAN SYLLABICS WOODS-CREE THWO */
    {               0,           0 }, /* 167B	ᙻ	e1 99 bb	CANADIAN SYLLABICS WOODS-CREE THWOO */
    {               0,           0 }, /* 167C	ᙼ	e1 99 bc	CANADIAN SYLLABICS WOODS-CREE THWA */
    {               0,           0 }, /* 167D	ᙽ	e1 99 bd	CANADIAN SYLLABICS WOODS-CREE THWAA */
    {               0,           0 }, /* 167E	ᙾ	e1 99 be	CANADIAN SYLLABICS WOODS-CREE FINAL TH */
    {               0,           0 }, /* 167F	ᙿ	e1 99 bf	CANADIAN SYLLABICS BLACKFOOT W */
    {               0,           0 }, /* 1680	 	e1 9a 80	OGHAM SPACE MARK */
    {               0,           0 }, /* 1681	ᚁ	e1 9a 81	OGHAM LETTER BEITH */
    {               0,           0 }, /* 1682	ᚂ	e1 9a 82	OGHAM LETTER LUIS */
    {               0,           0 }, /* 1683	ᚃ	e1 9a 83	OGHAM LETTER FEARN */
    {               0,           0 }, /* 1684	ᚄ	e1 9a 84	OGHAM LETTER SAIL */
    {               0,           0 }, /* 1685	ᚅ	e1 9a 85	OGHAM LETTER NION */
    {               0,           0 }, /* 1686	ᚆ	e1 9a 86	OGHAM LETTER UATH */
    {               0,           0 }, /* 1687	ᚇ	e1 9a 87	OGHAM LETTER DAIR */
    {               0,           0 }, /* 1688	ᚈ	e1 9a 88	OGHAM LETTER TINNE */
    {               0,           0 }, /* 1689	ᚉ	e1 9a 89	OGHAM LETTER COLL */
    {               0,           0 }, /* 168A	ᚊ	e1 9a 8a	OGHAM LETTER CEIRT */
    {               0,           0 }, /* 168B	ᚋ	e1 9a 8b	OGHAM LETTER MUIN */
    {               0,           0 }, /* 168C	ᚌ	e1 9a 8c	OGHAM LETTER GORT */
    {               0,           0 }, /* 168D	ᚍ	e1 9a 8d	OGHAM LETTER NGEADAL */
    {               0,           0 }, /* 168E	ᚎ	e1 9a 8e	OGHAM LETTER STRAIF */
    {               0,           0 }, /* 168F	ᚏ	e1 9a 8f	OGHAM LETTER RUIS */
    {               0,           0 }, /* 1690	ᚐ	e1 9a 90	OGHAM LETTER AILM */
    {               0,           0 }, /* 1691	ᚑ	e1 9a 91	OGHAM LETTER ONN */
    {               0,           0 }, /* 1692	ᚒ	e1 9a 92	OGHAM LETTER UR */
    {               0,           0 }, /* 1693	ᚓ	e1 9a 93	OGHAM LETTER EADHADH */
    {               0,           0 }, /* 1694	ᚔ	e1 9a 94	OGHAM LETTER IODHADH */
    {               0,           0 }, /* 1695	ᚕ	e1 9a 95	OGHAM LETTER EABHADH */
    {               0,           0 }, /* 1696	ᚖ	e1 9a 96	OGHAM LETTER OR */
    {               0,           0 }, /* 1697	ᚗ	e1 9a 97	OGHAM LETTER UILLEANN */
    {               0,           0 }, /* 1698	ᚘ	e1 9a 98	OGHAM LETTER IFIN */
    {               0,           0 }, /* 1699	ᚙ	e1 9a 99	OGHAM LETTER EAMHANCHOLL */
    {               0,           0 }, /* 169A	ᚚ	e1 9a 9a	OGHAM LETTER PEITH */
    {               0,           0 }, /* 169B	᚛	e1 9a 9b	OGHAM FEATHER MARK */
    {               0,           0 }, /* 169C	᚜	e1 9a 9c	OGHAM REVERSED FEATHER MARK */
    {               0,           0 }, /* 169D	᚝	e1 9a 9d	 */
    {               0,           0 }, /* 169E	᚞	e1 9a 9e	 */
    {               0,           0 }, /* 169F	᚟	e1 9a 9f	 */
    {               0,           0 }, /* 16A0	ᚠ	e1 9a a0	RUNIC LETTER FEHU FEOH FE F */
    {               0,           0 }, /* 16A1	ᚡ	e1 9a a1	RUNIC LETTER V */
    {               0,           0 }, /* 16A2	ᚢ	e1 9a a2	RUNIC LETTER URUZ UR U */
    {               0,           0 }, /* 16A3	ᚣ	e1 9a a3	RUNIC LETTER YR */
    {               0,           0 }, /* 16A4	ᚤ	e1 9a a4	RUNIC LETTER Y */
    {               0,           0 }, /* 16A5	ᚥ	e1 9a a5	RUNIC LETTER W */
    {               0,           0 }, /* 16A6	ᚦ	e1 9a a6	RUNIC LETTER THURISAZ THURS THORN */
    {               0,           0 }, /* 16A7	ᚧ	e1 9a a7	RUNIC LETTER ETH */
    {               0,           0 }, /* 16A8	ᚨ	e1 9a a8	RUNIC LETTER ANSUZ A */
    {               0,           0 }, /* 16A9	ᚩ	e1 9a a9	RUNIC LETTER OS O */
    {               0,           0 }, /* 16AA	ᚪ	e1 9a aa	RUNIC LETTER AC A */
    {               0,           0 }, /* 16AB	ᚫ	e1 9a ab	RUNIC LETTER AESC */
    {               0,           0 }, /* 16AC	ᚬ	e1 9a ac	RUNIC LETTER LONG-BRANCH-OSS O */
    {               0,           0 }, /* 16AD	ᚭ	e1 9a ad	RUNIC LETTER SHORT-TWIG-OSS O */
    {               0,           0 }, /* 16AE	ᚮ	e1 9a ae	RUNIC LETTER O */
    {               0,           0 }, /* 16AF	ᚯ	e1 9a af	RUNIC LETTER OE */
    {               0,           0 }, /* 16B0	ᚰ	e1 9a b0	RUNIC LETTER ON */
    {               0,           0 }, /* 16B1	ᚱ	e1 9a b1	RUNIC LETTER RAIDO RAD REID R */
    {               0,           0 }, /* 16B2	ᚲ	e1 9a b2	RUNIC LETTER KAUNA */
    {               0,           0 }, /* 16B3	ᚳ	e1 9a b3	RUNIC LETTER CEN */
    {               0,           0 }, /* 16B4	ᚴ	e1 9a b4	RUNIC LETTER KAUN K */
    {               0,           0 }, /* 16B5	ᚵ	e1 9a b5	RUNIC LETTER G */
    {               0,           0 }, /* 16B6	ᚶ	e1 9a b6	RUNIC LETTER ENG */
    {               0,           0 }, /* 16B7	ᚷ	e1 9a b7	RUNIC LETTER GEBO GYFU G */
    {               0,           0 }, /* 16B8	ᚸ	e1 9a b8	RUNIC LETTER GAR */
    {               0,           0 }, /* 16B9	ᚹ	e1 9a b9	RUNIC LETTER WUNJO WYNN W */
    {               0,           0 }, /* 16BA	ᚺ	e1 9a ba	RUNIC LETTER HAGLAZ H */
    {               0,           0 }, /* 16BB	ᚻ	e1 9a bb	RUNIC LETTER HAEGL H */
    {               0,           0 }, /* 16BC	ᚼ	e1 9a bc	RUNIC LETTER LONG-BRANCH-HAGALL H */
    {               0,           0 }, /* 16BD	ᚽ	e1 9a bd	RUNIC LETTER SHORT-TWIG-HAGALL H */
    {               0,           0 }, /* 16BE	ᚾ	e1 9a be	RUNIC LETTER NAUDIZ NYD NAUD N */
    {               0,           0 }, /* 16BF	ᚿ	e1 9a bf	RUNIC LETTER SHORT-TWIG-NAUD N */
    {               0,           0 }, /* 16C0	ᛀ	e1 9b 80	RUNIC LETTER DOTTED-N */
    {               0,           0 }, /* 16C1	ᛁ	e1 9b 81	RUNIC LETTER ISAZ IS ISS I */
    {               0,           0 }, /* 16C2	ᛂ	e1 9b 82	RUNIC LETTER E */
    {               0,           0 }, /* 16C3	ᛃ	e1 9b 83	RUNIC LETTER JERAN J */
    {               0,           0 }, /* 16C4	ᛄ	e1 9b 84	RUNIC LETTER GER */
    {               0,           0 }, /* 16C5	ᛅ	e1 9b 85	RUNIC LETTER LONG-BRANCH-AR AE */
    {               0,           0 }, /* 16C6	ᛆ	e1 9b 86	RUNIC LETTER SHORT-TWIG-AR A */
    {               0,           0 }, /* 16C7	ᛇ	e1 9b 87	RUNIC LETTER IWAZ EOH */
    {               0,           0 }, /* 16C8	ᛈ	e1 9b 88	RUNIC LETTER PERTHO PEORTH P */
    {               0,           0 }, /* 16C9	ᛉ	e1 9b 89	RUNIC LETTER ALGIZ EOLHX */
    {               0,           0 }, /* 16CA	ᛊ	e1 9b 8a	RUNIC LETTER SOWILO S */
    {               0,           0 }, /* 16CB	ᛋ	e1 9b 8b	RUNIC LETTER SIGEL LONG-BRANCH-SOL S */
    {               0,           0 }, /* 16CC	ᛌ	e1 9b 8c	RUNIC LETTER SHORT-TWIG-SOL S */
    {               0,           0 }, /* 16CD	ᛍ	e1 9b 8d	RUNIC LETTER C */
    {               0,           0 }, /* 16CE	ᛎ	e1 9b 8e	RUNIC LETTER Z */
    {               0,           0 }, /* 16CF	ᛏ	e1 9b 8f	RUNIC LETTER TIWAZ TIR TYR T */
    {               0,           0 }, /* 16D0	ᛐ	e1 9b 90	RUNIC LETTER SHORT-TWIG-TYR T */
    {               0,           0 }, /* 16D1	ᛑ	e1 9b 91	RUNIC LETTER D */
    {               0,           0 }, /* 16D2	ᛒ	e1 9b 92	RUNIC LETTER BERKANAN BEORC BJARKAN B */
    {               0,           0 }, /* 16D3	ᛓ	e1 9b 93	RUNIC LETTER SHORT-TWIG-BJARKAN B */
    {               0,           0 }, /* 16D4	ᛔ	e1 9b 94	RUNIC LETTER DOTTED-P */
    {               0,           0 }, /* 16D5	ᛕ	e1 9b 95	RUNIC LETTER OPEN-P */
    {               0,           0 }, /* 16D6	ᛖ	e1 9b 96	RUNIC LETTER EHWAZ EH E */
    {               0,           0 }, /* 16D7	ᛗ	e1 9b 97	RUNIC LETTER MANNAZ MAN M */
    {               0,           0 }, /* 16D8	ᛘ	e1 9b 98	RUNIC LETTER LONG-BRANCH-MADR M */
    {               0,           0 }, /* 16D9	ᛙ	e1 9b 99	RUNIC LETTER SHORT-TWIG-MADR M */
    {               0,           0 }, /* 16DA	ᛚ	e1 9b 9a	RUNIC LETTER LAUKAZ LAGU LOGR L */
    {               0,           0 }, /* 16DB	ᛛ	e1 9b 9b	RUNIC LETTER DOTTED-L */
    {               0,           0 }, /* 16DC	ᛜ	e1 9b 9c	RUNIC LETTER INGWAZ */
    {               0,           0 }, /* 16DD	ᛝ	e1 9b 9d	RUNIC LETTER ING */
    {               0,           0 }, /* 16DE	ᛞ	e1 9b 9e	RUNIC LETTER DAGAZ DAEG D */
    {               0,           0 }, /* 16DF	ᛟ	e1 9b 9f	RUNIC LETTER OTHALAN ETHEL O */
    {               0,           0 }, /* 16E0	ᛠ	e1 9b a0	RUNIC LETTER EAR */
    {               0,           0 }, /* 16E1	ᛡ	e1 9b a1	RUNIC LETTER IOR */
    {               0,           0 }, /* 16E2	ᛢ	e1 9b a2	RUNIC LETTER CWEORTH */
    {               0,           0 }, /* 16E3	ᛣ	e1 9b a3	RUNIC LETTER CALC */
    {               0,           0 }, /* 16E4	ᛤ	e1 9b a4	RUNIC LETTER CEALC */
    {               0,           0 }, /* 16E5	ᛥ	e1 9b a5	RUNIC LETTER STAN */
    {               0,           0 }, /* 16E6	ᛦ	e1 9b a6	RUNIC LETTER LONG-BRANCH-YR */
    {               0,           0 }, /* 16E7	ᛧ	e1 9b a7	RUNIC LETTER SHORT-TWIG-YR */
    {               0,           0 }, /* 16E8	ᛨ	e1 9b a8	RUNIC LETTER ICELANDIC-YR */
    {               0,           0 }, /* 16E9	ᛩ	e1 9b a9	RUNIC LETTER Q */
    {               0,           0 }, /* 16EA	ᛪ	e1 9b aa	RUNIC LETTER X */
    {               0,           0 }, /* 16EB	᛫	e1 9b ab	RUNIC SINGLE PUNCTUATION */
    {               0,           0 }, /* 16EC	᛬	e1 9b ac	RUNIC MULTIPLE PUNCTUATION */
    {               0,           0 }, /* 16ED	᛭	e1 9b ad	RUNIC CROSS PUNCTUATION */
    {               0,           0 }, /* 16EE	ᛮ	e1 9b ae	RUNIC ARLAUG SYMBOL */
    {               0,           0 }, /* 16EF	ᛯ	e1 9b af	RUNIC TVIMADUR SYMBOL */
    {               0,           0 }, /* 16F0	ᛰ	e1 9b b0	RUNIC BELGTHOR SYMBOL */
    {               0,           0 }, /* 16F1	ᛱ	e1 9b b1	 */
    {               0,           0 }, /* 16F2	ᛲ	e1 9b b2	 */
    {               0,           0 }, /* 16F3	ᛳ	e1 9b b3	 */
    {               0,           0 }, /* 16F4	ᛴ	e1 9b b4	 */
    {               0,           0 }, /* 16F5	ᛵ	e1 9b b5	 */
    {               0,           0 }, /* 16F6	ᛶ	e1 9b b6	 */
    {               0,           0 }, /* 16F7	ᛷ	e1 9b b7	 */
    {               0,           0 }, /* 16F8	ᛸ	e1 9b b8	 */
    {               0,           0 }, /* 16F9	᛹	e1 9b b9	 */
    {               0,           0 }, /* 16FA	᛺	e1 9b ba	 */
    {               0,           0 }, /* 16FB	᛻	e1 9b bb	 */
    {               0,           0 }, /* 16FC	᛼	e1 9b bc	 */
    {               0,           0 }, /* 16FD	᛽	e1 9b bd	 */
    {               0,           0 }, /* 16FE	᛾	e1 9b be	 */
    {               0,           0 }, /* 16FF	᛿	e1 9b bf	 */
    {               0,           0 }, /* 1700	ᜀ	e1 9c 80	TAGALOG LETTER A */
    {               0,           0 }, /* 1701	ᜁ	e1 9c 81	TAGALOG LETTER I */
    {               0,           0 }, /* 1702	ᜂ	e1 9c 82	TAGALOG LETTER U */
    {               0,           0 }, /* 1703	ᜃ	e1 9c 83	TAGALOG LETTER KA */
    {               0,           0 }, /* 1704	ᜄ	e1 9c 84	TAGALOG LETTER GA */
    {               0,           0 }, /* 1705	ᜅ	e1 9c 85	TAGALOG LETTER NGA */
    {               0,           0 }, /* 1706	ᜆ	e1 9c 86	TAGALOG LETTER TA */
    {               0,           0 }, /* 1707	ᜇ	e1 9c 87	TAGALOG LETTER DA */
    {               0,           0 }, /* 1708	ᜈ	e1 9c 88	TAGALOG LETTER NA */
    {               0,           0 }, /* 1709	ᜉ	e1 9c 89	TAGALOG LETTER PA */
    {               0,           0 }, /* 170A	ᜊ	e1 9c 8a	TAGALOG LETTER BA */
    {               0,           0 }, /* 170B	ᜋ	e1 9c 8b	TAGALOG LETTER MA */
    {               0,           0 }, /* 170C	ᜌ	e1 9c 8c	TAGALOG LETTER YA */
    {               0,           0 }, /* 170D	ᜍ	e1 9c 8d	 */
    {               0,           0 }, /* 170E	ᜎ	e1 9c 8e	TAGALOG LETTER LA */
    {               0,           0 }, /* 170F	ᜏ	e1 9c 8f	TAGALOG LETTER WA */
    {               0,           0 }, /* 1710	ᜐ	e1 9c 90	TAGALOG LETTER SA */
    {               0,           0 }, /* 1711	ᜑ	e1 9c 91	TAGALOG LETTER HA */
    {               0,           0 }, /* 1712	ᜒ	e1 9c 92	TAGALOG VOWEL SIGN I */
    {               0,           0 }, /* 1713	ᜓ	e1 9c 93	TAGALOG VOWEL SIGN U */
    {               0,           0 }, /* 1714	᜔	e1 9c 94	TAGALOG SIGN VIRAMA */
    {               0,           0 }, /* 1715	᜕	e1 9c 95	 */
    {               0,           0 }, /* 1716	᜖	e1 9c 96	 */
    {               0,           0 }, /* 1717	᜗	e1 9c 97	 */
    {               0,           0 }, /* 1718	᜘	e1 9c 98	 */
    {               0,           0 }, /* 1719	᜙	e1 9c 99	 */
    {               0,           0 }, /* 171A	᜚	e1 9c 9a	 */
    {               0,           0 }, /* 171B	᜛	e1 9c 9b	 */
    {               0,           0 }, /* 171C	᜜	e1 9c 9c	 */
    {               0,           0 }, /* 171D	᜝	e1 9c 9d	 */
    {               0,           0 }, /* 171E	᜞	e1 9c 9e	 */
    {               0,           0 }, /* 171F	ᜟ	e1 9c 9f	 */
    {               0,           0 }, /* 1720	ᜠ	e1 9c a0	HANUNOO LETTER A */
    {               0,           0 }, /* 1721	ᜡ	e1 9c a1	HANUNOO LETTER I */
    {               0,           0 }, /* 1722	ᜢ	e1 9c a2	HANUNOO LETTER U */
    {               0,           0 }, /* 1723	ᜣ	e1 9c a3	HANUNOO LETTER KA */
    {               0,           0 }, /* 1724	ᜤ	e1 9c a4	HANUNOO LETTER GA */
    {               0,           0 }, /* 1725	ᜥ	e1 9c a5	HANUNOO LETTER NGA */
    {               0,           0 }, /* 1726	ᜦ	e1 9c a6	HANUNOO LETTER TA */
    {               0,           0 }, /* 1727	ᜧ	e1 9c a7	HANUNOO LETTER DA */
    {               0,           0 }, /* 1728	ᜨ	e1 9c a8	HANUNOO LETTER NA */
    {               0,           0 }, /* 1729	ᜩ	e1 9c a9	HANUNOO LETTER PA */
    {               0,           0 }, /* 172A	ᜪ	e1 9c aa	HANUNOO LETTER BA */
    {               0,           0 }, /* 172B	ᜫ	e1 9c ab	HANUNOO LETTER MA */
    {               0,           0 }, /* 172C	ᜬ	e1 9c ac	HANUNOO LETTER YA */
    {               0,           0 }, /* 172D	ᜭ	e1 9c ad	HANUNOO LETTER RA */
    {               0,           0 }, /* 172E	ᜮ	e1 9c ae	HANUNOO LETTER LA */
    {               0,           0 }, /* 172F	ᜯ	e1 9c af	HANUNOO LETTER WA */
    {               0,           0 }, /* 1730	ᜰ	e1 9c b0	HANUNOO LETTER SA */
    {               0,           0 }, /* 1731	ᜱ	e1 9c b1	HANUNOO LETTER HA */
    {               0,           0 }, /* 1732	ᜲ	e1 9c b2	HANUNOO VOWEL SIGN I */
    {               0,           0 }, /* 1733	ᜳ	e1 9c b3	HANUNOO VOWEL SIGN U */
    {               0,           0 }, /* 1734	᜴	e1 9c b4	HANUNOO SIGN PAMUDPOD */
    {               0,           0 }, /* 1735	᜵	e1 9c b5	PHILIPPINE SINGLE PUNCTUATION */
    {               0,           0 }, /* 1736	᜶	e1 9c b6	PHILIPPINE DOUBLE PUNCTUATION */
    {               0,           0 }, /* 1737	᜷	e1 9c b7	 */
    {               0,           0 }, /* 1738	᜸	e1 9c b8	 */
    {               0,           0 }, /* 1739	᜹	e1 9c b9	 */
    {               0,           0 }, /* 173A	᜺	e1 9c ba	 */
    {               0,           0 }, /* 173B	᜻	e1 9c bb	 */
    {               0,           0 }, /* 173C	᜼	e1 9c bc	 */
    {               0,           0 }, /* 173D	᜽	e1 9c bd	 */
    {               0,           0 }, /* 173E	᜾	e1 9c be	 */
    {               0,           0 }, /* 173F	᜿	e1 9c bf	 */
    {               0,           0 }, /* 1740	ᝀ	e1 9d 80	BUHID LETTER A */
    {               0,           0 }, /* 1741	ᝁ	e1 9d 81	BUHID LETTER I */
    {               0,           0 }, /* 1742	ᝂ	e1 9d 82	BUHID LETTER U */
    {               0,           0 }, /* 1743	ᝃ	e1 9d 83	BUHID LETTER KA */
    {               0,           0 }, /* 1744	ᝄ	e1 9d 84	BUHID LETTER GA */
    {               0,           0 }, /* 1745	ᝅ	e1 9d 85	BUHID LETTER NGA */
    {               0,           0 }, /* 1746	ᝆ	e1 9d 86	BUHID LETTER TA */
    {               0,           0 }, /* 1747	ᝇ	e1 9d 87	BUHID LETTER DA */
    {               0,           0 }, /* 1748	ᝈ	e1 9d 88	BUHID LETTER NA */
    {               0,           0 }, /* 1749	ᝉ	e1 9d 89	BUHID LETTER PA */
    {               0,           0 }, /* 174A	ᝊ	e1 9d 8a	BUHID LETTER BA */
    {               0,           0 }, /* 174B	ᝋ	e1 9d 8b	BUHID LETTER MA */
    {               0,           0 }, /* 174C	ᝌ	e1 9d 8c	BUHID LETTER YA */
    {               0,           0 }, /* 174D	ᝍ	e1 9d 8d	BUHID LETTER RA */
    {               0,           0 }, /* 174E	ᝎ	e1 9d 8e	BUHID LETTER LA */
    {               0,           0 }, /* 174F	ᝏ	e1 9d 8f	BUHID LETTER WA */
    {               0,           0 }, /* 1750	ᝐ	e1 9d 90	BUHID LETTER SA */
    {               0,           0 }, /* 1751	ᝑ	e1 9d 91	BUHID LETTER HA */
    {               0,           0 }, /* 1752	ᝒ	e1 9d 92	BUHID VOWEL SIGN I */
    {               0,           0 }, /* 1753	ᝓ	e1 9d 93	BUHID VOWEL SIGN U */
    {               0,           0 }, /* 1754	᝔	e1 9d 94	 */
    {               0,           0 }, /* 1755	᝕	e1 9d 95	 */
    {               0,           0 }, /* 1756	᝖	e1 9d 96	 */
    {               0,           0 }, /* 1757	᝗	e1 9d 97	 */
    {               0,           0 }, /* 1758	᝘	e1 9d 98	 */
    {               0,           0 }, /* 1759	᝙	e1 9d 99	 */
    {               0,           0 }, /* 175A	᝚	e1 9d 9a	 */
    {               0,           0 }, /* 175B	᝛	e1 9d 9b	 */
    {               0,           0 }, /* 175C	᝜	e1 9d 9c	 */
    {               0,           0 }, /* 175D	᝝	e1 9d 9d	 */
    {               0,           0 }, /* 175E	᝞	e1 9d 9e	 */
    {               0,           0 }, /* 175F	᝟	e1 9d 9f	 */
    {               0,           0 }, /* 1760	ᝠ	e1 9d a0	TAGBANWA LETTER A */
    {               0,           0 }, /* 1761	ᝡ	e1 9d a1	TAGBANWA LETTER I */
    {               0,           0 }, /* 1762	ᝢ	e1 9d a2	TAGBANWA LETTER U */
    {               0,           0 }, /* 1763	ᝣ	e1 9d a3	TAGBANWA LETTER KA */
    {               0,           0 }, /* 1764	ᝤ	e1 9d a4	TAGBANWA LETTER GA */
    {               0,           0 }, /* 1765	ᝥ	e1 9d a5	TAGBANWA LETTER NGA */
    {               0,           0 }, /* 1766	ᝦ	e1 9d a6	TAGBANWA LETTER TA */
    {               0,           0 }, /* 1767	ᝧ	e1 9d a7	TAGBANWA LETTER DA */
    {               0,           0 }, /* 1768	ᝨ	e1 9d a8	TAGBANWA LETTER NA */
    {               0,           0 }, /* 1769	ᝩ	e1 9d a9	TAGBANWA LETTER PA */
    {               0,           0 }, /* 176A	ᝪ	e1 9d aa	TAGBANWA LETTER BA */
    {               0,           0 }, /* 176B	ᝫ	e1 9d ab	TAGBANWA LETTER MA */
    {               0,           0 }, /* 176C	ᝬ	e1 9d ac	TAGBANWA LETTER YA */
    {               0,           0 }, /* 176D	᝭	e1 9d ad	 */
    {               0,           0 }, /* 176E	ᝮ	e1 9d ae	TAGBANWA LETTER LA */
    {               0,           0 }, /* 176F	ᝯ	e1 9d af	TAGBANWA LETTER WA */
    {               0,           0 }, /* 1770	ᝰ	e1 9d b0	TAGBANWA LETTER SA */
    {               0,           0 }, /* 1771	᝱	e1 9d b1	 */
    {               0,           0 }, /* 1772	ᝲ	e1 9d b2	TAGBANWA VOWEL SIGN I */
    {               0,           0 }, /* 1773	ᝳ	e1 9d b3	TAGBANWA VOWEL SIGN U */
    {               0,           0 }, /* 1774	᝴	e1 9d b4	 */
    {               0,           0 }, /* 1775	᝵	e1 9d b5	 */
    {               0,           0 }, /* 1776	᝶	e1 9d b6	 */
    {               0,           0 }, /* 1777	᝷	e1 9d b7	 */
    {               0,           0 }, /* 1778	᝸	e1 9d b8	 */
    {               0,           0 }, /* 1779	᝹	e1 9d b9	 */
    {               0,           0 }, /* 177A	᝺	e1 9d ba	 */
    {               0,           0 }, /* 177B	᝻	e1 9d bb	 */
    {               0,           0 }, /* 177C	᝼	e1 9d bc	 */
    {               0,           0 }, /* 177D	᝽	e1 9d bd	 */
    {               0,           0 }, /* 177E	᝾	e1 9d be	 */
    {               0,           0 }, /* 177F	᝿	e1 9d bf	 */
    {               0,           0 }, /* 1780	ក	e1 9e 80	KHMER LETTER KA */
    {               0,           0 }, /* 1781	ខ	e1 9e 81	KHMER LETTER KHA */
    {               0,           0 }, /* 1782	គ	e1 9e 82	KHMER LETTER KO */
    {               0,           0 }, /* 1783	ឃ	e1 9e 83	KHMER LETTER KHO */
    {               0,           0 }, /* 1784	ង	e1 9e 84	KHMER LETTER NGO */
    {               0,           0 }, /* 1785	ច	e1 9e 85	KHMER LETTER CA */
    {               0,           0 }, /* 1786	ឆ	e1 9e 86	KHMER LETTER CHA */
    {               0,           0 }, /* 1787	ជ	e1 9e 87	KHMER LETTER CO */
    {               0,           0 }, /* 1788	ឈ	e1 9e 88	KHMER LETTER CHO */
    {               0,           0 }, /* 1789	ញ	e1 9e 89	KHMER LETTER NYO */
    {               0,           0 }, /* 178A	ដ	e1 9e 8a	KHMER LETTER DA */
    {               0,           0 }, /* 178B	ឋ	e1 9e 8b	KHMER LETTER TTHA */
    {               0,           0 }, /* 178C	ឌ	e1 9e 8c	KHMER LETTER DO */
    {               0,           0 }, /* 178D	ឍ	e1 9e 8d	KHMER LETTER TTHO */
    {               0,           0 }, /* 178E	ណ	e1 9e 8e	KHMER LETTER NNO */
    {               0,           0 }, /* 178F	ត	e1 9e 8f	KHMER LETTER TA */
    {               0,           0 }, /* 1790	ថ	e1 9e 90	KHMER LETTER THA */
    {               0,           0 }, /* 1791	ទ	e1 9e 91	KHMER LETTER TO */
    {               0,           0 }, /* 1792	ធ	e1 9e 92	KHMER LETTER THO */
    {               0,           0 }, /* 1793	ន	e1 9e 93	KHMER LETTER NO */
    {               0,           0 }, /* 1794	ប	e1 9e 94	KHMER LETTER BA */
    {               0,           0 }, /* 1795	ផ	e1 9e 95	KHMER LETTER PHA */
    {               0,           0 }, /* 1796	ព	e1 9e 96	KHMER LETTER PO */
    {               0,           0 }, /* 1797	ភ	e1 9e 97	KHMER LETTER PHO */
    {               0,           0 }, /* 1798	ម	e1 9e 98	KHMER LETTER MO */
    {               0,           0 }, /* 1799	យ	e1 9e 99	KHMER LETTER YO */
    {               0,           0 }, /* 179A	រ	e1 9e 9a	KHMER LETTER RO */
    {               0,           0 }, /* 179B	ល	e1 9e 9b	KHMER LETTER LO */
    {               0,           0 }, /* 179C	វ	e1 9e 9c	KHMER LETTER VO */
    {               0,           0 }, /* 179D	ឝ	e1 9e 9d	KHMER LETTER SHA */
    {               0,           0 }, /* 179E	ឞ	e1 9e 9e	KHMER LETTER SSO */
    {               0,           0 }, /* 179F	ស	e1 9e 9f	KHMER LETTER SA */
    {               0,           0 }, /* 17A0	ហ	e1 9e a0	KHMER LETTER HA */
    {               0,           0 }, /* 17A1	ឡ	e1 9e a1	KHMER LETTER LA */
    {               0,           0 }, /* 17A2	អ	e1 9e a2	KHMER LETTER QA */
    {               0,           0 }, /* 17A3	ឣ	e1 9e a3	KHMER INDEPENDENT VOWEL QAQ */
    {               0,           0 }, /* 17A4	ឤ	e1 9e a4	KHMER INDEPENDENT VOWEL QAA */
    {               0,           0 }, /* 17A5	ឥ	e1 9e a5	KHMER INDEPENDENT VOWEL QI */
    {               0,           0 }, /* 17A6	ឦ	e1 9e a6	KHMER INDEPENDENT VOWEL QII */
    {               0,           0 }, /* 17A7	ឧ	e1 9e a7	KHMER INDEPENDENT VOWEL QU */
    {               0,           0 }, /* 17A8	ឨ	e1 9e a8	KHMER INDEPENDENT VOWEL QUK */
    {               0,           0 }, /* 17A9	ឩ	e1 9e a9	KHMER INDEPENDENT VOWEL QUU */
    {               0,           0 }, /* 17AA	ឪ	e1 9e aa	KHMER INDEPENDENT VOWEL QUUV */
    {               0,           0 }, /* 17AB	ឫ	e1 9e ab	KHMER INDEPENDENT VOWEL RY */
    {               0,           0 }, /* 17AC	ឬ	e1 9e ac	KHMER INDEPENDENT VOWEL RYY */
    {               0,           0 }, /* 17AD	ឭ	e1 9e ad	KHMER INDEPENDENT VOWEL LY */
    {               0,           0 }, /* 17AE	ឮ	e1 9e ae	KHMER INDEPENDENT VOWEL LYY */
    {               0,           0 }, /* 17AF	ឯ	e1 9e af	KHMER INDEPENDENT VOWEL QE */
    {               0,           0 }, /* 17B0	ឰ	e1 9e b0	KHMER INDEPENDENT VOWEL QAI */
    {               0,           0 }, /* 17B1	ឱ	e1 9e b1	KHMER INDEPENDENT VOWEL QOO TYPE ONE */
    {               0,           0 }, /* 17B2	ឲ	e1 9e b2	KHMER INDEPENDENT VOWEL QOO TYPE TWO */
    {               0,           0 }, /* 17B3	ឳ	e1 9e b3	KHMER INDEPENDENT VOWEL QAU */
    {               0,           0 }, /* 17B4	឴	e1 9e b4	KHMER VOWEL INHERENT AQ */
    {               0,           0 }, /* 17B5	឵	e1 9e b5	KHMER VOWEL INHERENT AA */
    {               0,           0 }, /* 17B6	ា	e1 9e b6	KHMER VOWEL SIGN AA */
    {               0,           0 }, /* 17B7	ិ	e1 9e b7	KHMER VOWEL SIGN I */
    {               0,           0 }, /* 17B8	ី	e1 9e b8	KHMER VOWEL SIGN II */
    {               0,           0 }, /* 17B9	ឹ	e1 9e b9	KHMER VOWEL SIGN Y */
    {               0,           0 }, /* 17BA	ឺ	e1 9e ba	KHMER VOWEL SIGN YY */
    {               0,           0 }, /* 17BB	ុ	e1 9e bb	KHMER VOWEL SIGN U */
    {               0,           0 }, /* 17BC	ូ	e1 9e bc	KHMER VOWEL SIGN UU */
    {               0,           0 }, /* 17BD	ួ	e1 9e bd	KHMER VOWEL SIGN UA */
    {               0,           0 }, /* 17BE	ើ	e1 9e be	KHMER VOWEL SIGN OE */
    {               0,           0 }, /* 17BF	ឿ	e1 9e bf	KHMER VOWEL SIGN YA */
    {               0,           0 }, /* 17C0	ៀ	e1 9f 80	KHMER VOWEL SIGN IE */
    {               0,           0 }, /* 17C1	េ	e1 9f 81	KHMER VOWEL SIGN E */
    {               0,           0 }, /* 17C2	ែ	e1 9f 82	KHMER VOWEL SIGN AE */
    {               0,           0 }, /* 17C3	ៃ	e1 9f 83	KHMER VOWEL SIGN AI */
    {               0,           0 }, /* 17C4	ោ	e1 9f 84	KHMER VOWEL SIGN OO */
    {               0,           0 }, /* 17C5	ៅ	e1 9f 85	KHMER VOWEL SIGN AU */
    {               0,           0 }, /* 17C6	ំ	e1 9f 86	KHMER SIGN NIKAHIT */
    {               0,           0 }, /* 17C7	ះ	e1 9f 87	KHMER SIGN REAHMUK */
    {               0,           0 }, /* 17C8	ៈ	e1 9f 88	KHMER SIGN YUUKALEAPINTU */
    {               0,           0 }, /* 17C9	៉	e1 9f 89	KHMER SIGN MUUSIKATOAN */
    {               0,           0 }, /* 17CA	៊	e1 9f 8a	KHMER SIGN TRIISAP */
    {               0,           0 }, /* 17CB	់	e1 9f 8b	KHMER SIGN BANTOC */
    {               0,           0 }, /* 17CC	៌	e1 9f 8c	KHMER SIGN ROBAT */
    {               0,           0 }, /* 17CD	៍	e1 9f 8d	KHMER SIGN TOANDAKHIAT */
    {               0,           0 }, /* 17CE	៎	e1 9f 8e	KHMER SIGN KAKABAT */
    {               0,           0 }, /* 17CF	៏	e1 9f 8f	KHMER SIGN AHSDA */
    {               0,           0 }, /* 17D0	័	e1 9f 90	KHMER SIGN SAMYOK SANNYA */
    {               0,           0 }, /* 17D1	៑	e1 9f 91	KHMER SIGN VIRIAM */
    {               0,           0 }, /* 17D2	្	e1 9f 92	KHMER SIGN COENG */
    {               0,           0 }, /* 17D3	៓	e1 9f 93	KHMER SIGN BATHAMASAT */
    {               0,           0 }, /* 17D4	។	e1 9f 94	KHMER SIGN KHAN */
    {               0,           0 }, /* 17D5	៕	e1 9f 95	KHMER SIGN BARIYOOSAN */
    {               0,           0 }, /* 17D6	៖	e1 9f 96	KHMER SIGN CAMNUC PII KUUH */
    {               0,           0 }, /* 17D7	ៗ	e1 9f 97	KHMER SIGN LEK TOO */
    {               0,           0 }, /* 17D8	៘	e1 9f 98	KHMER SIGN BEYYAL */
    {               0,           0 }, /* 17D9	៙	e1 9f 99	KHMER SIGN PHNAEK MUAN */
    {               0,           0 }, /* 17DA	៚	e1 9f 9a	KHMER SIGN KOOMUUT */
    {               0,           0 }, /* 17DB	៛	e1 9f 9b	KHMER CURRENCY SYMBOL RIEL */
    {               0,           0 }, /* 17DC	ៜ	e1 9f 9c	KHMER SIGN AVAKRAHASANYA */
    {               0,           0 }, /* 17DD	៝	e1 9f 9d	KHMER SIGN ATTHACAN */
    {               0,           0 }, /* 17DE	៞	e1 9f 9e	 */
    {               0,           0 }, /* 17DF	៟	e1 9f 9f	 */
    {               0,           0 }, /* 17E0	០	e1 9f a0	KHMER DIGIT ZERO */
    {               0,           0 }, /* 17E1	១	e1 9f a1	KHMER DIGIT ONE */
    {               0,           0 }, /* 17E2	២	e1 9f a2	KHMER DIGIT TWO */
    {               0,           0 }, /* 17E3	៣	e1 9f a3	KHMER DIGIT THREE */
    {               0,           0 }, /* 17E4	៤	e1 9f a4	KHMER DIGIT FOUR */
    {               0,           0 }, /* 17E5	៥	e1 9f a5	KHMER DIGIT FIVE */
    {               0,           0 }, /* 17E6	៦	e1 9f a6	KHMER DIGIT SIX */
    {               0,           0 }, /* 17E7	៧	e1 9f a7	KHMER DIGIT SEVEN */
    {               0,           0 }, /* 17E8	៨	e1 9f a8	KHMER DIGIT EIGHT */
    {               0,           0 }, /* 17E9	៩	e1 9f a9	KHMER DIGIT NINE */
    {               0,           0 }, /* 17EA	៪	e1 9f aa	 */
    {               0,           0 }, /* 17EB	៫	e1 9f ab	 */
    {               0,           0 }, /* 17EC	៬	e1 9f ac	 */
    {               0,           0 }, /* 17ED	៭	e1 9f ad	 */
    {               0,           0 }, /* 17EE	៮	e1 9f ae	 */
    {               0,           0 }, /* 17EF	៯	e1 9f af	 */
    {               0,           0 }, /* 17F0	៰	e1 9f b0	KHMER SYMBOL LEK ATTAK SON */
    {               0,           0 }, /* 17F1	៱	e1 9f b1	KHMER SYMBOL LEK ATTAK MUOY */
    {               0,           0 }, /* 17F2	៲	e1 9f b2	KHMER SYMBOL LEK ATTAK PII */
    {               0,           0 }, /* 17F3	៳	e1 9f b3	KHMER SYMBOL LEK ATTAK BEI */
    {               0,           0 }, /* 17F4	៴	e1 9f b4	KHMER SYMBOL LEK ATTAK BUON */
    {               0,           0 }, /* 17F5	៵	e1 9f b5	KHMER SYMBOL LEK ATTAK PRAM */
    {               0,           0 }, /* 17F6	៶	e1 9f b6	KHMER SYMBOL LEK ATTAK PRAM-MUOY */
    {               0,           0 }, /* 17F7	៷	e1 9f b7	KHMER SYMBOL LEK ATTAK PRAM-PII */
    {               0,           0 }, /* 17F8	៸	e1 9f b8	KHMER SYMBOL LEK ATTAK PRAM-BEI */
    {               0,           0 }, /* 17F9	៹	e1 9f b9	KHMER SYMBOL LEK ATTAK PRAM-BUON */
    {               0,           0 }, /* 17FA	៺	e1 9f ba	 */
    {               0,           0 }, /* 17FB	៻	e1 9f bb	 */
    {               0,           0 }, /* 17FC	៼	e1 9f bc	 */
    {               0,           0 }, /* 17FD	៽	e1 9f bd	 */
    {               0,           0 }, /* 17FE	៾	e1 9f be	 */
    {               0,           0 }, /* 17FF	៿	e1 9f bf	 */
    {               0,           0 }, /* 1800	᠀	e1 a0 80	MONGOLIAN BIRGA */
    {               0,           0 }, /* 1801	᠁	e1 a0 81	MONGOLIAN ELLIPSIS */
    {               0,           0 }, /* 1802	᠂	e1 a0 82	MONGOLIAN COMMA */
    {               0,           0 }, /* 1803	᠃	e1 a0 83	MONGOLIAN FULL STOP */
    {               0,           0 }, /* 1804	᠄	e1 a0 84	MONGOLIAN COLON */
    {               0,           0 }, /* 1805	᠅	e1 a0 85	MONGOLIAN FOUR DOTS */
    {               0,           0 }, /* 1806	᠆	e1 a0 86	MONGOLIAN TODO SOFT HYPHEN */
    {               0,           0 }, /* 1807	᠇	e1 a0 87	MONGOLIAN SIBE SYLLABLE BOUNDARY MARKER */
    {               0,           0 }, /* 1808	᠈	e1 a0 88	MONGOLIAN MANCHU COMMA */
    {               0,           0 }, /* 1809	᠉	e1 a0 89	MONGOLIAN MANCHU FULL STOP */
    {               0,           0 }, /* 180A	᠊	e1 a0 8a	MONGOLIAN NIRUGU */
    {               0,           0 }, /* 180B	᠋	e1 a0 8b	MONGOLIAN FREE VARIATION SELECTOR ONE */
    {               0,           0 }, /* 180C	᠌	e1 a0 8c	MONGOLIAN FREE VARIATION SELECTOR TWO */
    {               0,           0 }, /* 180D	᠍	e1 a0 8d	MONGOLIAN FREE VARIATION SELECTOR THREE */
    {               0,           0 }, /* 180E	᠎	e1 a0 8e	MONGOLIAN VOWEL SEPARATOR */
    {               0,           0 }, /* 180F	᠏	e1 a0 8f	 */
    {               0,           0 }, /* 1810	᠐	e1 a0 90	MONGOLIAN DIGIT ZERO */
    {               0,           0 }, /* 1811	᠑	e1 a0 91	MONGOLIAN DIGIT ONE */
    {               0,           0 }, /* 1812	᠒	e1 a0 92	MONGOLIAN DIGIT TWO */
    {               0,           0 }, /* 1813	᠓	e1 a0 93	MONGOLIAN DIGIT THREE */
    {               0,           0 }, /* 1814	᠔	e1 a0 94	MONGOLIAN DIGIT FOUR */
    {               0,           0 }, /* 1815	᠕	e1 a0 95	MONGOLIAN DIGIT FIVE */
    {               0,           0 }, /* 1816	᠖	e1 a0 96	MONGOLIAN DIGIT SIX */
    {               0,           0 }, /* 1817	᠗	e1 a0 97	MONGOLIAN DIGIT SEVEN */
    {               0,           0 }, /* 1818	᠘	e1 a0 98	MONGOLIAN DIGIT EIGHT */
    {               0,           0 }, /* 1819	᠙	e1 a0 99	MONGOLIAN DIGIT NINE */
    {               0,           0 }, /* 181A	᠚	e1 a0 9a	 */
    {               0,           0 }, /* 181B	᠛	e1 a0 9b	 */
    {               0,           0 }, /* 181C	᠜	e1 a0 9c	 */
    {               0,           0 }, /* 181D	᠝	e1 a0 9d	 */
    {               0,           0 }, /* 181E	᠞	e1 a0 9e	 */
    {               0,           0 }, /* 181F	᠟	e1 a0 9f	 */
    {               0,           0 }, /* 1820	ᠠ	e1 a0 a0	MONGOLIAN LETTER A */
    {               0,           0 }, /* 1821	ᠡ	e1 a0 a1	MONGOLIAN LETTER E */
    {               0,           0 }, /* 1822	ᠢ	e1 a0 a2	MONGOLIAN LETTER I */
    {               0,           0 }, /* 1823	ᠣ	e1 a0 a3	MONGOLIAN LETTER O */
    {               0,           0 }, /* 1824	ᠤ	e1 a0 a4	MONGOLIAN LETTER U */
    {               0,           0 }, /* 1825	ᠥ	e1 a0 a5	MONGOLIAN LETTER OE */
    {               0,           0 }, /* 1826	ᠦ	e1 a0 a6	MONGOLIAN LETTER UE */
    {               0,           0 }, /* 1827	ᠧ	e1 a0 a7	MONGOLIAN LETTER EE */
    {               0,           0 }, /* 1828	ᠨ	e1 a0 a8	MONGOLIAN LETTER NA */
    {               0,           0 }, /* 1829	ᠩ	e1 a0 a9	MONGOLIAN LETTER ANG */
    {               0,           0 }, /* 182A	ᠪ	e1 a0 aa	MONGOLIAN LETTER BA */
    {               0,           0 }, /* 182B	ᠫ	e1 a0 ab	MONGOLIAN LETTER PA */
    {               0,           0 }, /* 182C	ᠬ	e1 a0 ac	MONGOLIAN LETTER QA */
    {               0,           0 }, /* 182D	ᠭ	e1 a0 ad	MONGOLIAN LETTER GA */
    {               0,           0 }, /* 182E	ᠮ	e1 a0 ae	MONGOLIAN LETTER MA */
    {               0,           0 }, /* 182F	ᠯ	e1 a0 af	MONGOLIAN LETTER LA */
    {               0,           0 }, /* 1830	ᠰ	e1 a0 b0	MONGOLIAN LETTER SA */
    {               0,           0 }, /* 1831	ᠱ	e1 a0 b1	MONGOLIAN LETTER SHA */
    {               0,           0 }, /* 1832	ᠲ	e1 a0 b2	MONGOLIAN LETTER TA */
    {               0,           0 }, /* 1833	ᠳ	e1 a0 b3	MONGOLIAN LETTER DA */
    {               0,           0 }, /* 1834	ᠴ	e1 a0 b4	MONGOLIAN LETTER CHA */
    {               0,           0 }, /* 1835	ᠵ	e1 a0 b5	MONGOLIAN LETTER JA */
    {               0,           0 }, /* 1836	ᠶ	e1 a0 b6	MONGOLIAN LETTER YA */
    {               0,           0 }, /* 1837	ᠷ	e1 a0 b7	MONGOLIAN LETTER RA */
    {               0,           0 }, /* 1838	ᠸ	e1 a0 b8	MONGOLIAN LETTER WA */
    {               0,           0 }, /* 1839	ᠹ	e1 a0 b9	MONGOLIAN LETTER FA */
    {               0,           0 }, /* 183A	ᠺ	e1 a0 ba	MONGOLIAN LETTER KA */
    {               0,           0 }, /* 183B	ᠻ	e1 a0 bb	MONGOLIAN LETTER KHA */
    {               0,           0 }, /* 183C	ᠼ	e1 a0 bc	MONGOLIAN LETTER TSA */
    {               0,           0 }, /* 183D	ᠽ	e1 a0 bd	MONGOLIAN LETTER ZA */
    {               0,           0 }, /* 183E	ᠾ	e1 a0 be	MONGOLIAN LETTER HAA */
    {               0,           0 }, /* 183F	ᠿ	e1 a0 bf	MONGOLIAN LETTER ZRA */
    {               0,           0 }, /* 1840	ᡀ	e1 a1 80	MONGOLIAN LETTER LHA */
    {               0,           0 }, /* 1841	ᡁ	e1 a1 81	MONGOLIAN LETTER ZHI */
    {               0,           0 }, /* 1842	ᡂ	e1 a1 82	MONGOLIAN LETTER CHI */
    {               0,           0 }, /* 1843	ᡃ	e1 a1 83	MONGOLIAN LETTER TODO LONG VOWEL SIGN */
    {               0,           0 }, /* 1844	ᡄ	e1 a1 84	MONGOLIAN LETTER TODO E */
    {               0,           0 }, /* 1845	ᡅ	e1 a1 85	MONGOLIAN LETTER TODO I */
    {               0,           0 }, /* 1846	ᡆ	e1 a1 86	MONGOLIAN LETTER TODO O */
    {               0,           0 }, /* 1847	ᡇ	e1 a1 87	MONGOLIAN LETTER TODO U */
    {               0,           0 }, /* 1848	ᡈ	e1 a1 88	MONGOLIAN LETTER TODO OE */
    {               0,           0 }, /* 1849	ᡉ	e1 a1 89	MONGOLIAN LETTER TODO UE */
    {               0,           0 }, /* 184A	ᡊ	e1 a1 8a	MONGOLIAN LETTER TODO ANG */
    {               0,           0 }, /* 184B	ᡋ	e1 a1 8b	MONGOLIAN LETTER TODO BA */
    {               0,           0 }, /* 184C	ᡌ	e1 a1 8c	MONGOLIAN LETTER TODO PA */
    {               0,           0 }, /* 184D	ᡍ	e1 a1 8d	MONGOLIAN LETTER TODO QA */
    {               0,           0 }, /* 184E	ᡎ	e1 a1 8e	MONGOLIAN LETTER TODO GA */
    {               0,           0 }, /* 184F	ᡏ	e1 a1 8f	MONGOLIAN LETTER TODO MA */
    {               0,           0 }, /* 1850	ᡐ	e1 a1 90	MONGOLIAN LETTER TODO TA */
    {               0,           0 }, /* 1851	ᡑ	e1 a1 91	MONGOLIAN LETTER TODO DA */
    {               0,           0 }, /* 1852	ᡒ	e1 a1 92	MONGOLIAN LETTER TODO CHA */
    {               0,           0 }, /* 1853	ᡓ	e1 a1 93	MONGOLIAN LETTER TODO JA */
    {               0,           0 }, /* 1854	ᡔ	e1 a1 94	MONGOLIAN LETTER TODO TSA */
    {               0,           0 }, /* 1855	ᡕ	e1 a1 95	MONGOLIAN LETTER TODO YA */
    {               0,           0 }, /* 1856	ᡖ	e1 a1 96	MONGOLIAN LETTER TODO WA */
    {               0,           0 }, /* 1857	ᡗ	e1 a1 97	MONGOLIAN LETTER TODO KA */
    {               0,           0 }, /* 1858	ᡘ	e1 a1 98	MONGOLIAN LETTER TODO GAA */
    {               0,           0 }, /* 1859	ᡙ	e1 a1 99	MONGOLIAN LETTER TODO HAA */
    {               0,           0 }, /* 185A	ᡚ	e1 a1 9a	MONGOLIAN LETTER TODO JIA */
    {               0,           0 }, /* 185B	ᡛ	e1 a1 9b	MONGOLIAN LETTER TODO NIA */
    {               0,           0 }, /* 185C	ᡜ	e1 a1 9c	MONGOLIAN LETTER TODO DZA */
    {               0,           0 }, /* 185D	ᡝ	e1 a1 9d	MONGOLIAN LETTER SIBE E */
    {               0,           0 }, /* 185E	ᡞ	e1 a1 9e	MONGOLIAN LETTER SIBE I */
    {               0,           0 }, /* 185F	ᡟ	e1 a1 9f	MONGOLIAN LETTER SIBE IY */
    {               0,           0 }, /* 1860	ᡠ	e1 a1 a0	MONGOLIAN LETTER SIBE UE */
    {               0,           0 }, /* 1861	ᡡ	e1 a1 a1	MONGOLIAN LETTER SIBE U */
    {               0,           0 }, /* 1862	ᡢ	e1 a1 a2	MONGOLIAN LETTER SIBE ANG */
    {               0,           0 }, /* 1863	ᡣ	e1 a1 a3	MONGOLIAN LETTER SIBE KA */
    {               0,           0 }, /* 1864	ᡤ	e1 a1 a4	MONGOLIAN LETTER SIBE GA */
    {               0,           0 }, /* 1865	ᡥ	e1 a1 a5	MONGOLIAN LETTER SIBE HA */
    {               0,           0 }, /* 1866	ᡦ	e1 a1 a6	MONGOLIAN LETTER SIBE PA */
    {               0,           0 }, /* 1867	ᡧ	e1 a1 a7	MONGOLIAN LETTER SIBE SHA */
    {               0,           0 }, /* 1868	ᡨ	e1 a1 a8	MONGOLIAN LETTER SIBE TA */
    {               0,           0 }, /* 1869	ᡩ	e1 a1 a9	MONGOLIAN LETTER SIBE DA */
    {               0,           0 }, /* 186A	ᡪ	e1 a1 aa	MONGOLIAN LETTER SIBE JA */
    {               0,           0 }, /* 186B	ᡫ	e1 a1 ab	MONGOLIAN LETTER SIBE FA */
    {               0,           0 }, /* 186C	ᡬ	e1 a1 ac	MONGOLIAN LETTER SIBE GAA */
    {               0,           0 }, /* 186D	ᡭ	e1 a1 ad	MONGOLIAN LETTER SIBE HAA */
    {               0,           0 }, /* 186E	ᡮ	e1 a1 ae	MONGOLIAN LETTER SIBE TSA */
    {               0,           0 }, /* 186F	ᡯ	e1 a1 af	MONGOLIAN LETTER SIBE ZA */
    {               0,           0 }, /* 1870	ᡰ	e1 a1 b0	MONGOLIAN LETTER SIBE RAA */
    {               0,           0 }, /* 1871	ᡱ	e1 a1 b1	MONGOLIAN LETTER SIBE CHA */
    {               0,           0 }, /* 1872	ᡲ	e1 a1 b2	MONGOLIAN LETTER SIBE ZHA */
    {               0,           0 }, /* 1873	ᡳ	e1 a1 b3	MONGOLIAN LETTER MANCHU I */
    {               0,           0 }, /* 1874	ᡴ	e1 a1 b4	MONGOLIAN LETTER MANCHU KA */
    {               0,           0 }, /* 1875	ᡵ	e1 a1 b5	MONGOLIAN LETTER MANCHU RA */
    {               0,           0 }, /* 1876	ᡶ	e1 a1 b6	MONGOLIAN LETTER MANCHU FA */
    {               0,           0 }, /* 1877	ᡷ	e1 a1 b7	MONGOLIAN LETTER MANCHU ZHA */
    {               0,           0 }, /* 1878	ᡸ	e1 a1 b8	 */
    {               0,           0 }, /* 1879	᡹	e1 a1 b9	 */
    {               0,           0 }, /* 187A	᡺	e1 a1 ba	 */
    {               0,           0 }, /* 187B	᡻	e1 a1 bb	 */
    {               0,           0 }, /* 187C	᡼	e1 a1 bc	 */
    {               0,           0 }, /* 187D	᡽	e1 a1 bd	 */
    {               0,           0 }, /* 187E	᡾	e1 a1 be	 */
    {               0,           0 }, /* 187F	᡿	e1 a1 bf	 */
    {               0,           0 }, /* 1880	ᢀ	e1 a2 80	MONGOLIAN LETTER ALI GALI ANUSVARA ONE */
    {               0,           0 }, /* 1881	ᢁ	e1 a2 81	MONGOLIAN LETTER ALI GALI VISARGA ONE */
    {               0,           0 }, /* 1882	ᢂ	e1 a2 82	MONGOLIAN LETTER ALI GALI DAMARU */
    {               0,           0 }, /* 1883	ᢃ	e1 a2 83	MONGOLIAN LETTER ALI GALI UBADAMA */
    {               0,           0 }, /* 1884	ᢄ	e1 a2 84	MONGOLIAN LETTER ALI GALI INVERTED UBADAMA */
    {               0,           0 }, /* 1885	ᢅ	e1 a2 85	MONGOLIAN LETTER ALI GALI BALUDA */
    {               0,           0 }, /* 1886	ᢆ	e1 a2 86	MONGOLIAN LETTER ALI GALI THREE BALUDA */
    {               0,           0 }, /* 1887	ᢇ	e1 a2 87	MONGOLIAN LETTER ALI GALI A */
    {               0,           0 }, /* 1888	ᢈ	e1 a2 88	MONGOLIAN LETTER ALI GALI I */
    {               0,           0 }, /* 1889	ᢉ	e1 a2 89	MONGOLIAN LETTER ALI GALI KA */
    {               0,           0 }, /* 188A	ᢊ	e1 a2 8a	MONGOLIAN LETTER ALI GALI NGA */
    {               0,           0 }, /* 188B	ᢋ	e1 a2 8b	MONGOLIAN LETTER ALI GALI CA */
    {               0,           0 }, /* 188C	ᢌ	e1 a2 8c	MONGOLIAN LETTER ALI GALI TTA */
    {               0,           0 }, /* 188D	ᢍ	e1 a2 8d	MONGOLIAN LETTER ALI GALI TTHA */
    {               0,           0 }, /* 188E	ᢎ	e1 a2 8e	MONGOLIAN LETTER ALI GALI DDA */
    {               0,           0 }, /* 188F	ᢏ	e1 a2 8f	MONGOLIAN LETTER ALI GALI NNA */
    {               0,           0 }, /* 1890	ᢐ	e1 a2 90	MONGOLIAN LETTER ALI GALI TA */
    {               0,           0 }, /* 1891	ᢑ	e1 a2 91	MONGOLIAN LETTER ALI GALI DA */
    {               0,           0 }, /* 1892	ᢒ	e1 a2 92	MONGOLIAN LETTER ALI GALI PA */
    {               0,           0 }, /* 1893	ᢓ	e1 a2 93	MONGOLIAN LETTER ALI GALI PHA */
    {               0,           0 }, /* 1894	ᢔ	e1 a2 94	MONGOLIAN LETTER ALI GALI SSA */
    {               0,           0 }, /* 1895	ᢕ	e1 a2 95	MONGOLIAN LETTER ALI GALI ZHA */
    {               0,           0 }, /* 1896	ᢖ	e1 a2 96	MONGOLIAN LETTER ALI GALI ZA */
    {               0,           0 }, /* 1897	ᢗ	e1 a2 97	MONGOLIAN LETTER ALI GALI AH */
    {               0,           0 }, /* 1898	ᢘ	e1 a2 98	MONGOLIAN LETTER TODO ALI GALI TA */
    {               0,           0 }, /* 1899	ᢙ	e1 a2 99	MONGOLIAN LETTER TODO ALI GALI ZHA */
    {               0,           0 }, /* 189A	ᢚ	e1 a2 9a	MONGOLIAN LETTER MANCHU ALI GALI GHA */
    {               0,           0 }, /* 189B	ᢛ	e1 a2 9b	MONGOLIAN LETTER MANCHU ALI GALI NGA */
    {               0,           0 }, /* 189C	ᢜ	e1 a2 9c	MONGOLIAN LETTER MANCHU ALI GALI CA */
    {               0,           0 }, /* 189D	ᢝ	e1 a2 9d	MONGOLIAN LETTER MANCHU ALI GALI JHA */
    {               0,           0 }, /* 189E	ᢞ	e1 a2 9e	MONGOLIAN LETTER MANCHU ALI GALI TTA */
    {               0,           0 }, /* 189F	ᢟ	e1 a2 9f	MONGOLIAN LETTER MANCHU ALI GALI DDHA */
    {               0,           0 }, /* 18A0	ᢠ	e1 a2 a0	MONGOLIAN LETTER MANCHU ALI GALI TA */
    {               0,           0 }, /* 18A1	ᢡ	e1 a2 a1	MONGOLIAN LETTER MANCHU ALI GALI DHA */
    {               0,           0 }, /* 18A2	ᢢ	e1 a2 a2	MONGOLIAN LETTER MANCHU ALI GALI SSA */
    {               0,           0 }, /* 18A3	ᢣ	e1 a2 a3	MONGOLIAN LETTER MANCHU ALI GALI CYA */
    {               0,           0 }, /* 18A4	ᢤ	e1 a2 a4	MONGOLIAN LETTER MANCHU ALI GALI ZHA */
    {               0,           0 }, /* 18A5	ᢥ	e1 a2 a5	MONGOLIAN LETTER MANCHU ALI GALI ZA */
    {               0,           0 }, /* 18A6	ᢦ	e1 a2 a6	MONGOLIAN LETTER ALI GALI HALF U */
    {               0,           0 }, /* 18A7	ᢧ	e1 a2 a7	MONGOLIAN LETTER ALI GALI HALF YA */
    {               0,           0 }, /* 18A8	ᢨ	e1 a2 a8	MONGOLIAN LETTER MANCHU ALI GALI BHA */
    {               0,           0 }, /* 18A9	ᢩ	e1 a2 a9	MONGOLIAN LETTER ALI GALI DAGALGA */
    {               0,           0 }, /* 18AA	ᢪ	e1 a2 aa	MONGOLIAN LETTER MANCHU ALI GALI LHA */
    {               0,           0 }, /* 18AB	᢫	e1 a2 ab	 */
    {               0,           0 }, /* 18AC	᢬	e1 a2 ac	 */
    {               0,           0 }, /* 18AD	᢭	e1 a2 ad	 */
    {               0,           0 }, /* 18AE	᢮	e1 a2 ae	 */
    {               0,           0 }, /* 18AF	᢯	e1 a2 af	 */
    {               0,           0 }, /* 18B0	ᢰ	e1 a2 b0	CANADIAN SYLLABICS OY */
    {               0,           0 }, /* 18B1	ᢱ	e1 a2 b1	CANADIAN SYLLABICS AY */
    {               0,           0 }, /* 18B2	ᢲ	e1 a2 b2	CANADIAN SYLLABICS AAY */
    {               0,           0 }, /* 18B3	ᢳ	e1 a2 b3	CANADIAN SYLLABICS WAY */
    {               0,           0 }, /* 18B4	ᢴ	e1 a2 b4	CANADIAN SYLLABICS POY */
    {               0,           0 }, /* 18B5	ᢵ	e1 a2 b5	CANADIAN SYLLABICS PAY */
    {               0,           0 }, /* 18B6	ᢶ	e1 a2 b6	CANADIAN SYLLABICS PWOY */
    {               0,           0 }, /* 18B7	ᢷ	e1 a2 b7	CANADIAN SYLLABICS TAY */
    {               0,           0 }, /* 18B8	ᢸ	e1 a2 b8	CANADIAN SYLLABICS KAY */
    {               0,           0 }, /* 18B9	ᢹ	e1 a2 b9	CANADIAN SYLLABICS KWAY */
    {               0,           0 }, /* 18BA	ᢺ	e1 a2 ba	CANADIAN SYLLABICS MAY */
    {               0,           0 }, /* 18BB	ᢻ	e1 a2 bb	CANADIAN SYLLABICS NOY */
    {               0,           0 }, /* 18BC	ᢼ	e1 a2 bc	CANADIAN SYLLABICS NAY */
    {               0,           0 }, /* 18BD	ᢽ	e1 a2 bd	CANADIAN SYLLABICS LAY */
    {               0,           0 }, /* 18BE	ᢾ	e1 a2 be	CANADIAN SYLLABICS SOY */
    {               0,           0 }, /* 18BF	ᢿ	e1 a2 bf	CANADIAN SYLLABICS SAY */
    {               0,           0 }, /* 18C0	ᣀ	e1 a3 80	CANADIAN SYLLABICS SHOY */
    {               0,           0 }, /* 18C1	ᣁ	e1 a3 81	CANADIAN SYLLABICS SHAY */
    {               0,           0 }, /* 18C2	ᣂ	e1 a3 82	CANADIAN SYLLABICS SHWOY */
    {               0,           0 }, /* 18C3	ᣃ	e1 a3 83	CANADIAN SYLLABICS YOY */
    {               0,           0 }, /* 18C4	ᣄ	e1 a3 84	CANADIAN SYLLABICS YAY */
    {               0,           0 }, /* 18C5	ᣅ	e1 a3 85	CANADIAN SYLLABICS RAY */
    {               0,           0 }, /* 18C6	ᣆ	e1 a3 86	CANADIAN SYLLABICS NWI */
    {               0,           0 }, /* 18C7	ᣇ	e1 a3 87	CANADIAN SYLLABICS OJIBWAY NWI */
    {               0,           0 }, /* 18C8	ᣈ	e1 a3 88	CANADIAN SYLLABICS NWII */
    {               0,           0 }, /* 18C9	ᣉ	e1 a3 89	CANADIAN SYLLABICS OJIBWAY NWII */
    {               0,           0 }, /* 18CA	ᣊ	e1 a3 8a	CANADIAN SYLLABICS NWO */
    {               0,           0 }, /* 18CB	ᣋ	e1 a3 8b	CANADIAN SYLLABICS OJIBWAY NWO */
    {               0,           0 }, /* 18CC	ᣌ	e1 a3 8c	CANADIAN SYLLABICS NWOO */
    {               0,           0 }, /* 18CD	ᣍ	e1 a3 8d	CANADIAN SYLLABICS OJIBWAY NWOO */
    {               0,           0 }, /* 18CE	ᣎ	e1 a3 8e	CANADIAN SYLLABICS RWEE */
    {               0,           0 }, /* 18CF	ᣏ	e1 a3 8f	CANADIAN SYLLABICS RWI */
    {               0,           0 }, /* 18D0	ᣐ	e1 a3 90	CANADIAN SYLLABICS RWII */
    {               0,           0 }, /* 18D1	ᣑ	e1 a3 91	CANADIAN SYLLABICS RWO */
    {               0,           0 }, /* 18D2	ᣒ	e1 a3 92	CANADIAN SYLLABICS RWOO */
    {               0,           0 }, /* 18D3	ᣓ	e1 a3 93	CANADIAN SYLLABICS RWA */
    {               0,           0 }, /* 18D4	ᣔ	e1 a3 94	CANADIAN SYLLABICS OJIBWAY P */
    {               0,           0 }, /* 18D5	ᣕ	e1 a3 95	CANADIAN SYLLABICS OJIBWAY T */
    {               0,           0 }, /* 18D6	ᣖ	e1 a3 96	CANADIAN SYLLABICS OJIBWAY K */
    {               0,           0 }, /* 18D7	ᣗ	e1 a3 97	CANADIAN SYLLABICS OJIBWAY C */
    {               0,           0 }, /* 18D8	ᣘ	e1 a3 98	CANADIAN SYLLABICS OJIBWAY M */
    {               0,           0 }, /* 18D9	ᣙ	e1 a3 99	CANADIAN SYLLABICS OJIBWAY N */
    {               0,           0 }, /* 18DA	ᣚ	e1 a3 9a	CANADIAN SYLLABICS OJIBWAY S */
    {               0,           0 }, /* 18DB	ᣛ	e1 a3 9b	CANADIAN SYLLABICS OJIBWAY SH */
    {               0,           0 }, /* 18DC	ᣜ	e1 a3 9c	CANADIAN SYLLABICS EASTERN W */
    {               0,           0 }, /* 18DD	ᣝ	e1 a3 9d	CANADIAN SYLLABICS WESTERN W */
    {               0,           0 }, /* 18DE	ᣞ	e1 a3 9e	CANADIAN SYLLABICS FINAL SMALL RING */
    {               0,           0 }, /* 18DF	ᣟ	e1 a3 9f	CANADIAN SYLLABICS FINAL RAISED DOT */
    {               0,           0 }, /* 18E0	ᣠ	e1 a3 a0	CANADIAN SYLLABICS R-CREE RWE */
    {               0,           0 }, /* 18E1	ᣡ	e1 a3 a1	CANADIAN SYLLABICS WEST-CREE LOO */
    {               0,           0 }, /* 18E2	ᣢ	e1 a3 a2	CANADIAN SYLLABICS WEST-CREE LAA */
    {               0,           0 }, /* 18E3	ᣣ	e1 a3 a3	CANADIAN SYLLABICS THWE */
    {               0,           0 }, /* 18E4	ᣤ	e1 a3 a4	CANADIAN SYLLABICS THWA */
    {               0,           0 }, /* 18E5	ᣥ	e1 a3 a5	CANADIAN SYLLABICS TTHWE */
    {               0,           0 }, /* 18E6	ᣦ	e1 a3 a6	CANADIAN SYLLABICS TTHOO */
    {               0,           0 }, /* 18E7	ᣧ	e1 a3 a7	CANADIAN SYLLABICS TTHAA */
    {               0,           0 }, /* 18E8	ᣨ	e1 a3 a8	CANADIAN SYLLABICS TLHWE */
    {               0,           0 }, /* 18E9	ᣩ	e1 a3 a9	CANADIAN SYLLABICS TLHOO */
    {               0,           0 }, /* 18EA	ᣪ	e1 a3 aa	CANADIAN SYLLABICS SAYISI SHWE */
    {               0,           0 }, /* 18EB	ᣫ	e1 a3 ab	CANADIAN SYLLABICS SAYISI SHOO */
    {               0,           0 }, /* 18EC	ᣬ	e1 a3 ac	CANADIAN SYLLABICS SAYISI HOO */
    {               0,           0 }, /* 18ED	ᣭ	e1 a3 ad	CANADIAN SYLLABICS CARRIER GWU */
    {               0,           0 }, /* 18EE	ᣮ	e1 a3 ae	CANADIAN SYLLABICS CARRIER DENE GEE */
    {               0,           0 }, /* 18EF	ᣯ	e1 a3 af	CANADIAN SYLLABICS CARRIER GAA */
    {               0,           0 }, /* 18F0	ᣰ	e1 a3 b0	CANADIAN SYLLABICS CARRIER GWA */
    {               0,           0 }, /* 18F1	ᣱ	e1 a3 b1	CANADIAN SYLLABICS SAYISI JUU */
    {               0,           0 }, /* 18F2	ᣲ	e1 a3 b2	CANADIAN SYLLABICS CARRIER JWA */
    {               0,           0 }, /* 18F3	ᣳ	e1 a3 b3	CANADIAN SYLLABICS BEAVER DENE L */
    {               0,           0 }, /* 18F4	ᣴ	e1 a3 b4	CANADIAN SYLLABICS BEAVER DENE R */
    {               0,           0 }, /* 18F5	ᣵ	e1 a3 b5	CANADIAN SYLLABICS CARRIER DENTAL S */
    {               0,           0 }, /* 18F6	᣶	e1 a3 b6	 */
    {               0,           0 }, /* 18F7	᣷	e1 a3 b7	 */
    {               0,           0 }, /* 18F8	᣸	e1 a3 b8	 */
    {               0,           0 }, /* 18F9	᣹	e1 a3 b9	 */
    {               0,           0 }, /* 18FA	᣺	e1 a3 ba	 */
    {               0,           0 }, /* 18FB	᣻	e1 a3 bb	 */
    {               0,           0 }, /* 18FC	᣼	e1 a3 bc	 */
    {               0,           0 }, /* 18FD	᣽	e1 a3 bd	 */
    {               0,           0 }, /* 18FE	᣾	e1 a3 be	 */
    {               0,           0 }, /* 18FF	᣿	e1 a3 bf	 */
    {               0,           0 }, /* 1900	ᤀ	e1 a4 80	LIMBU VOWEL-CARRIER LETTER */
    {               0,           0 }, /* 1901	ᤁ	e1 a4 81	LIMBU LETTER KA */
    {               0,           0 }, /* 1902	ᤂ	e1 a4 82	LIMBU LETTER KHA */
    {               0,           0 }, /* 1903	ᤃ	e1 a4 83	LIMBU LETTER GA */
    {               0,           0 }, /* 1904	ᤄ	e1 a4 84	LIMBU LETTER GHA */
    {               0,           0 }, /* 1905	ᤅ	e1 a4 85	LIMBU LETTER NGA */
    {               0,           0 }, /* 1906	ᤆ	e1 a4 86	LIMBU LETTER CA */
    {               0,           0 }, /* 1907	ᤇ	e1 a4 87	LIMBU LETTER CHA */
    {               0,           0 }, /* 1908	ᤈ	e1 a4 88	LIMBU LETTER JA */
    {               0,           0 }, /* 1909	ᤉ	e1 a4 89	LIMBU LETTER JHA */
    {               0,           0 }, /* 190A	ᤊ	e1 a4 8a	LIMBU LETTER YAN */
    {               0,           0 }, /* 190B	ᤋ	e1 a4 8b	LIMBU LETTER TA */
    {               0,           0 }, /* 190C	ᤌ	e1 a4 8c	LIMBU LETTER THA */
    {               0,           0 }, /* 190D	ᤍ	e1 a4 8d	LIMBU LETTER DA */
    {               0,           0 }, /* 190E	ᤎ	e1 a4 8e	LIMBU LETTER DHA */
    {               0,           0 }, /* 190F	ᤏ	e1 a4 8f	LIMBU LETTER NA */
    {               0,           0 }, /* 1910	ᤐ	e1 a4 90	LIMBU LETTER PA */
    {               0,           0 }, /* 1911	ᤑ	e1 a4 91	LIMBU LETTER PHA */
    {               0,           0 }, /* 1912	ᤒ	e1 a4 92	LIMBU LETTER BA */
    {               0,           0 }, /* 1913	ᤓ	e1 a4 93	LIMBU LETTER BHA */
    {               0,           0 }, /* 1914	ᤔ	e1 a4 94	LIMBU LETTER MA */
    {               0,           0 }, /* 1915	ᤕ	e1 a4 95	LIMBU LETTER YA */
    {               0,           0 }, /* 1916	ᤖ	e1 a4 96	LIMBU LETTER RA */
    {               0,           0 }, /* 1917	ᤗ	e1 a4 97	LIMBU LETTER LA */
    {               0,           0 }, /* 1918	ᤘ	e1 a4 98	LIMBU LETTER WA */
    {               0,           0 }, /* 1919	ᤙ	e1 a4 99	LIMBU LETTER SHA */
    {               0,           0 }, /* 191A	ᤚ	e1 a4 9a	LIMBU LETTER SSA */
    {               0,           0 }, /* 191B	ᤛ	e1 a4 9b	LIMBU LETTER SA */
    {               0,           0 }, /* 191C	ᤜ	e1 a4 9c	LIMBU LETTER HA */
    {               0,           0 }, /* 191D	ᤝ	e1 a4 9d	 */
    {               0,           0 }, /* 191E	ᤞ	e1 a4 9e	 */
    {               0,           0 }, /* 191F	᤟	e1 a4 9f	 */
    {               0,           0 }, /* 1920	ᤠ	e1 a4 a0	LIMBU VOWEL SIGN A */
    {               0,           0 }, /* 1921	ᤡ	e1 a4 a1	LIMBU VOWEL SIGN I */
    {               0,           0 }, /* 1922	ᤢ	e1 a4 a2	LIMBU VOWEL SIGN U */
    {               0,           0 }, /* 1923	ᤣ	e1 a4 a3	LIMBU VOWEL SIGN EE */
    {               0,           0 }, /* 1924	ᤤ	e1 a4 a4	LIMBU VOWEL SIGN AI */
    {               0,           0 }, /* 1925	ᤥ	e1 a4 a5	LIMBU VOWEL SIGN OO */
    {               0,           0 }, /* 1926	ᤦ	e1 a4 a6	LIMBU VOWEL SIGN AU */
    {               0,           0 }, /* 1927	ᤧ	e1 a4 a7	LIMBU VOWEL SIGN E */
    {               0,           0 }, /* 1928	ᤨ	e1 a4 a8	LIMBU VOWEL SIGN O */
    {               0,           0 }, /* 1929	ᤩ	e1 a4 a9	LIMBU SUBJOINED LETTER YA */
    {               0,           0 }, /* 192A	ᤪ	e1 a4 aa	LIMBU SUBJOINED LETTER RA */
    {               0,           0 }, /* 192B	ᤫ	e1 a4 ab	LIMBU SUBJOINED LETTER WA */
    {               0,           0 }, /* 192C	᤬	e1 a4 ac	 */
    {               0,           0 }, /* 192D	᤭	e1 a4 ad	 */
    {               0,           0 }, /* 192E	᤮	e1 a4 ae	 */
    {               0,           0 }, /* 192F	᤯	e1 a4 af	 */
    {               0,           0 }, /* 1930	ᤰ	e1 a4 b0	LIMBU SMALL LETTER KA */
    {               0,           0 }, /* 1931	ᤱ	e1 a4 b1	LIMBU SMALL LETTER NGA */
    {               0,           0 }, /* 1932	ᤲ	e1 a4 b2	LIMBU SMALL LETTER ANUSVARA */
    {               0,           0 }, /* 1933	ᤳ	e1 a4 b3	LIMBU SMALL LETTER TA */
    {               0,           0 }, /* 1934	ᤴ	e1 a4 b4	LIMBU SMALL LETTER NA */
    {               0,           0 }, /* 1935	ᤵ	e1 a4 b5	LIMBU SMALL LETTER PA */
    {               0,           0 }, /* 1936	ᤶ	e1 a4 b6	LIMBU SMALL LETTER MA */
    {               0,           0 }, /* 1937	ᤷ	e1 a4 b7	LIMBU SMALL LETTER RA */
    {               0,           0 }, /* 1938	ᤸ	e1 a4 b8	LIMBU SMALL LETTER LA */
    {               0,           0 }, /* 1939	᤹	e1 a4 b9	LIMBU SIGN MUKPHRENG */
    {               0,           0 }, /* 193A	᤺	e1 a4 ba	LIMBU SIGN KEMPHRENG */
    {               0,           0 }, /* 193B	᤻	e1 a4 bb	LIMBU SIGN SA-I */
    {               0,           0 }, /* 193C	᤼	e1 a4 bc	 */
    {               0,           0 }, /* 193D	᤽	e1 a4 bd	 */
    {               0,           0 }, /* 193E	᤾	e1 a4 be	 */
    {               0,           0 }, /* 193F	᤿	e1 a4 bf	 */
    {               0,           0 }, /* 1940	᥀	e1 a5 80	LIMBU SIGN LOO */
    {               0,           0 }, /* 1941	᥁	e1 a5 81	 */
    {               0,           0 }, /* 1942	᥂	e1 a5 82	 */
    {               0,           0 }, /* 1943	᥃	e1 a5 83	 */
    {               0,           0 }, /* 1944	᥄	e1 a5 84	LIMBU EXCLAMATION MARK */
    {               0,           0 }, /* 1945	᥅	e1 a5 85	LIMBU QUESTION MARK */
    {               0,           0 }, /* 1946	᥆	e1 a5 86	LIMBU DIGIT ZERO */
    {               0,           0 }, /* 1947	᥇	e1 a5 87	LIMBU DIGIT ONE */
    {               0,           0 }, /* 1948	᥈	e1 a5 88	LIMBU DIGIT TWO */
    {               0,           0 }, /* 1949	᥉	e1 a5 89	LIMBU DIGIT THREE */
    {               0,           0 }, /* 194A	᥊	e1 a5 8a	LIMBU DIGIT FOUR */
    {               0,           0 }, /* 194B	᥋	e1 a5 8b	LIMBU DIGIT FIVE */
    {               0,           0 }, /* 194C	᥌	e1 a5 8c	LIMBU DIGIT SIX */
    {               0,           0 }, /* 194D	᥍	e1 a5 8d	LIMBU DIGIT SEVEN */
    {               0,           0 }, /* 194E	᥎	e1 a5 8e	LIMBU DIGIT EIGHT */
    {               0,           0 }, /* 194F	᥏	e1 a5 8f	LIMBU DIGIT NINE */
    {               0,           0 }, /* 1950	ᥐ	e1 a5 90	TAI LE LETTER KA */
    {               0,           0 }, /* 1951	ᥑ	e1 a5 91	TAI LE LETTER XA */
    {               0,           0 }, /* 1952	ᥒ	e1 a5 92	TAI LE LETTER NGA */
    {               0,           0 }, /* 1953	ᥓ	e1 a5 93	TAI LE LETTER TSA */
    {               0,           0 }, /* 1954	ᥔ	e1 a5 94	TAI LE LETTER SA */
    {               0,           0 }, /* 1955	ᥕ	e1 a5 95	TAI LE LETTER YA */
    {               0,           0 }, /* 1956	ᥖ	e1 a5 96	TAI LE LETTER TA */
    {               0,           0 }, /* 1957	ᥗ	e1 a5 97	TAI LE LETTER THA */
    {               0,           0 }, /* 1958	ᥘ	e1 a5 98	TAI LE LETTER LA */
    {               0,           0 }, /* 1959	ᥙ	e1 a5 99	TAI LE LETTER PA */
    {               0,           0 }, /* 195A	ᥚ	e1 a5 9a	TAI LE LETTER PHA */
    {               0,           0 }, /* 195B	ᥛ	e1 a5 9b	TAI LE LETTER MA */
    {               0,           0 }, /* 195C	ᥜ	e1 a5 9c	TAI LE LETTER FA */
    {               0,           0 }, /* 195D	ᥝ	e1 a5 9d	TAI LE LETTER VA */
    {               0,           0 }, /* 195E	ᥞ	e1 a5 9e	TAI LE LETTER HA */
    {               0,           0 }, /* 195F	ᥟ	e1 a5 9f	TAI LE LETTER QA */
    {               0,           0 }, /* 1960	ᥠ	e1 a5 a0	TAI LE LETTER KHA */
    {               0,           0 }, /* 1961	ᥡ	e1 a5 a1	TAI LE LETTER TSHA */
    {               0,           0 }, /* 1962	ᥢ	e1 a5 a2	TAI LE LETTER NA */
    {               0,           0 }, /* 1963	ᥣ	e1 a5 a3	TAI LE LETTER A */
    {               0,           0 }, /* 1964	ᥤ	e1 a5 a4	TAI LE LETTER I */
    {               0,           0 }, /* 1965	ᥥ	e1 a5 a5	TAI LE LETTER EE */
    {               0,           0 }, /* 1966	ᥦ	e1 a5 a6	TAI LE LETTER EH */
    {               0,           0 }, /* 1967	ᥧ	e1 a5 a7	TAI LE LETTER U */
    {               0,           0 }, /* 1968	ᥨ	e1 a5 a8	TAI LE LETTER OO */
    {               0,           0 }, /* 1969	ᥩ	e1 a5 a9	TAI LE LETTER O */
    {               0,           0 }, /* 196A	ᥪ	e1 a5 aa	TAI LE LETTER UE */
    {               0,           0 }, /* 196B	ᥫ	e1 a5 ab	TAI LE LETTER E */
    {               0,           0 }, /* 196C	ᥬ	e1 a5 ac	TAI LE LETTER AUE */
    {               0,           0 }, /* 196D	ᥭ	e1 a5 ad	TAI LE LETTER AI */
    {               0,           0 }, /* 196E	᥮	e1 a5 ae	 */
    {               0,           0 }, /* 196F	᥯	e1 a5 af	 */
    {               0,           0 }, /* 1970	ᥰ	e1 a5 b0	TAI LE LETTER TONE-2 */
    {               0,           0 }, /* 1971	ᥱ	e1 a5 b1	TAI LE LETTER TONE-3 */
    {               0,           0 }, /* 1972	ᥲ	e1 a5 b2	TAI LE LETTER TONE-4 */
    {               0,           0 }, /* 1973	ᥳ	e1 a5 b3	TAI LE LETTER TONE-5 */
    {               0,           0 }, /* 1974	ᥴ	e1 a5 b4	TAI LE LETTER TONE-6 */
    {               0,           0 }, /* 1975	᥵	e1 a5 b5	 */
    {               0,           0 }, /* 1976	᥶	e1 a5 b6	 */
    {               0,           0 }, /* 1977	᥷	e1 a5 b7	 */
    {               0,           0 }, /* 1978	᥸	e1 a5 b8	 */
    {               0,           0 }, /* 1979	᥹	e1 a5 b9	 */
    {               0,           0 }, /* 197A	᥺	e1 a5 ba	 */
    {               0,           0 }, /* 197B	᥻	e1 a5 bb	 */
    {               0,           0 }, /* 197C	᥼	e1 a5 bc	 */
    {               0,           0 }, /* 197D	᥽	e1 a5 bd	 */
    {               0,           0 }, /* 197E	᥾	e1 a5 be	 */
    {               0,           0 }, /* 197F	᥿	e1 a5 bf	 */
    {               0,           0 }, /* 1980	ᦀ	e1 a6 80	NEW TAI LUE LETTER HIGH QA */
    {               0,           0 }, /* 1981	ᦁ	e1 a6 81	NEW TAI LUE LETTER LOW QA */
    {               0,           0 }, /* 1982	ᦂ	e1 a6 82	NEW TAI LUE LETTER HIGH KA */
    {               0,           0 }, /* 1983	ᦃ	e1 a6 83	NEW TAI LUE LETTER HIGH XA */
    {               0,           0 }, /* 1984	ᦄ	e1 a6 84	NEW TAI LUE LETTER HIGH NGA */
    {               0,           0 }, /* 1985	ᦅ	e1 a6 85	NEW TAI LUE LETTER LOW KA */
    {               0,           0 }, /* 1986	ᦆ	e1 a6 86	NEW TAI LUE LETTER LOW XA */
    {               0,           0 }, /* 1987	ᦇ	e1 a6 87	NEW TAI LUE LETTER LOW NGA */
    {               0,           0 }, /* 1988	ᦈ	e1 a6 88	NEW TAI LUE LETTER HIGH TSA */
    {               0,           0 }, /* 1989	ᦉ	e1 a6 89	NEW TAI LUE LETTER HIGH SA */
    {               0,           0 }, /* 198A	ᦊ	e1 a6 8a	NEW TAI LUE LETTER HIGH YA */
    {               0,           0 }, /* 198B	ᦋ	e1 a6 8b	NEW TAI LUE LETTER LOW TSA */
    {               0,           0 }, /* 198C	ᦌ	e1 a6 8c	NEW TAI LUE LETTER LOW SA */
    {               0,           0 }, /* 198D	ᦍ	e1 a6 8d	NEW TAI LUE LETTER LOW YA */
    {               0,           0 }, /* 198E	ᦎ	e1 a6 8e	NEW TAI LUE LETTER HIGH TA */
    {               0,           0 }, /* 198F	ᦏ	e1 a6 8f	NEW TAI LUE LETTER HIGH THA */
    {               0,           0 }, /* 1990	ᦐ	e1 a6 90	NEW TAI LUE LETTER HIGH NA */
    {               0,           0 }, /* 1991	ᦑ	e1 a6 91	NEW TAI LUE LETTER LOW TA */
    {               0,           0 }, /* 1992	ᦒ	e1 a6 92	NEW TAI LUE LETTER LOW THA */
    {               0,           0 }, /* 1993	ᦓ	e1 a6 93	NEW TAI LUE LETTER LOW NA */
    {               0,           0 }, /* 1994	ᦔ	e1 a6 94	NEW TAI LUE LETTER HIGH PA */
    {               0,           0 }, /* 1995	ᦕ	e1 a6 95	NEW TAI LUE LETTER HIGH PHA */
    {               0,           0 }, /* 1996	ᦖ	e1 a6 96	NEW TAI LUE LETTER HIGH MA */
    {               0,           0 }, /* 1997	ᦗ	e1 a6 97	NEW TAI LUE LETTER LOW PA */
    {               0,           0 }, /* 1998	ᦘ	e1 a6 98	NEW TAI LUE LETTER LOW PHA */
    {               0,           0 }, /* 1999	ᦙ	e1 a6 99	NEW TAI LUE LETTER LOW MA */
    {               0,           0 }, /* 199A	ᦚ	e1 a6 9a	NEW TAI LUE LETTER HIGH FA */
    {               0,           0 }, /* 199B	ᦛ	e1 a6 9b	NEW TAI LUE LETTER HIGH VA */
    {               0,           0 }, /* 199C	ᦜ	e1 a6 9c	NEW TAI LUE LETTER HIGH LA */
    {               0,           0 }, /* 199D	ᦝ	e1 a6 9d	NEW TAI LUE LETTER LOW FA */
    {               0,           0 }, /* 199E	ᦞ	e1 a6 9e	NEW TAI LUE LETTER LOW VA */
    {               0,           0 }, /* 199F	ᦟ	e1 a6 9f	NEW TAI LUE LETTER LOW LA */
    {               0,           0 }, /* 19A0	ᦠ	e1 a6 a0	NEW TAI LUE LETTER HIGH HA */
    {               0,           0 }, /* 19A1	ᦡ	e1 a6 a1	NEW TAI LUE LETTER HIGH DA */
    {               0,           0 }, /* 19A2	ᦢ	e1 a6 a2	NEW TAI LUE LETTER HIGH BA */
    {               0,           0 }, /* 19A3	ᦣ	e1 a6 a3	NEW TAI LUE LETTER LOW HA */
    {               0,           0 }, /* 19A4	ᦤ	e1 a6 a4	NEW TAI LUE LETTER LOW DA */
    {               0,           0 }, /* 19A5	ᦥ	e1 a6 a5	NEW TAI LUE LETTER LOW BA */
    {               0,           0 }, /* 19A6	ᦦ	e1 a6 a6	NEW TAI LUE LETTER HIGH KVA */
    {               0,           0 }, /* 19A7	ᦧ	e1 a6 a7	NEW TAI LUE LETTER HIGH XVA */
    {               0,           0 }, /* 19A8	ᦨ	e1 a6 a8	NEW TAI LUE LETTER LOW KVA */
    {               0,           0 }, /* 19A9	ᦩ	e1 a6 a9	NEW TAI LUE LETTER LOW XVA */
    {               0,           0 }, /* 19AA	ᦪ	e1 a6 aa	NEW TAI LUE LETTER HIGH SUA */
    {               0,           0 }, /* 19AB	ᦫ	e1 a6 ab	NEW TAI LUE LETTER LOW SUA */
    {               0,           0 }, /* 19AC	᦬	e1 a6 ac	 */
    {               0,           0 }, /* 19AD	᦭	e1 a6 ad	 */
    {               0,           0 }, /* 19AE	᦮	e1 a6 ae	 */
    {               0,           0 }, /* 19AF	᦯	e1 a6 af	 */
    {               0,           0 }, /* 19B0	ᦰ	e1 a6 b0	NEW TAI LUE VOWEL SIGN VOWEL SHORTENER */
    {               0,           0 }, /* 19B1	ᦱ	e1 a6 b1	NEW TAI LUE VOWEL SIGN AA */
    {               0,           0 }, /* 19B2	ᦲ	e1 a6 b2	NEW TAI LUE VOWEL SIGN II */
    {               0,           0 }, /* 19B3	ᦳ	e1 a6 b3	NEW TAI LUE VOWEL SIGN U */
    {               0,           0 }, /* 19B4	ᦴ	e1 a6 b4	NEW TAI LUE VOWEL SIGN UU */
    {               0,           0 }, /* 19B5	ᦵ	e1 a6 b5	NEW TAI LUE VOWEL SIGN E */
    {               0,           0 }, /* 19B6	ᦶ	e1 a6 b6	NEW TAI LUE VOWEL SIGN AE */
    {               0,           0 }, /* 19B7	ᦷ	e1 a6 b7	NEW TAI LUE VOWEL SIGN O */
    {               0,           0 }, /* 19B8	ᦸ	e1 a6 b8	NEW TAI LUE VOWEL SIGN OA */
    {               0,           0 }, /* 19B9	ᦹ	e1 a6 b9	NEW TAI LUE VOWEL SIGN UE */
    {               0,           0 }, /* 19BA	ᦺ	e1 a6 ba	NEW TAI LUE VOWEL SIGN AY */
    {               0,           0 }, /* 19BB	ᦻ	e1 a6 bb	NEW TAI LUE VOWEL SIGN AAY */
    {               0,           0 }, /* 19BC	ᦼ	e1 a6 bc	NEW TAI LUE VOWEL SIGN UY */
    {               0,           0 }, /* 19BD	ᦽ	e1 a6 bd	NEW TAI LUE VOWEL SIGN OY */
    {               0,           0 }, /* 19BE	ᦾ	e1 a6 be	NEW TAI LUE VOWEL SIGN OAY */
    {               0,           0 }, /* 19BF	ᦿ	e1 a6 bf	NEW TAI LUE VOWEL SIGN UEY */
    {               0,           0 }, /* 19C0	ᧀ	e1 a7 80	NEW TAI LUE VOWEL SIGN IY */
    {               0,           0 }, /* 19C1	ᧁ	e1 a7 81	NEW TAI LUE LETTER FINAL V */
    {               0,           0 }, /* 19C2	ᧂ	e1 a7 82	NEW TAI LUE LETTER FINAL NG */
    {               0,           0 }, /* 19C3	ᧃ	e1 a7 83	NEW TAI LUE LETTER FINAL N */
    {               0,           0 }, /* 19C4	ᧄ	e1 a7 84	NEW TAI LUE LETTER FINAL M */
    {               0,           0 }, /* 19C5	ᧅ	e1 a7 85	NEW TAI LUE LETTER FINAL K */
    {               0,           0 }, /* 19C6	ᧆ	e1 a7 86	NEW TAI LUE LETTER FINAL D */
    {               0,           0 }, /* 19C7	ᧇ	e1 a7 87	NEW TAI LUE LETTER FINAL B */
    {               0,           0 }, /* 19C8	ᧈ	e1 a7 88	NEW TAI LUE TONE MARK-1 */
    {               0,           0 }, /* 19C9	ᧉ	e1 a7 89	NEW TAI LUE TONE MARK-2 */
    {               0,           0 }, /* 19CA	᧊	e1 a7 8a	 */
    {               0,           0 }, /* 19CB	᧋	e1 a7 8b	 */
    {               0,           0 }, /* 19CC	᧌	e1 a7 8c	 */
    {               0,           0 }, /* 19CD	᧍	e1 a7 8d	 */
    {               0,           0 }, /* 19CE	᧎	e1 a7 8e	 */
    {               0,           0 }, /* 19CF	᧏	e1 a7 8f	 */
    {               0,           0 }, /* 19D0	᧐	e1 a7 90	NEW TAI LUE DIGIT ZERO */
    {               0,           0 }, /* 19D1	᧑	e1 a7 91	NEW TAI LUE DIGIT ONE */
    {               0,           0 }, /* 19D2	᧒	e1 a7 92	NEW TAI LUE DIGIT TWO */
    {               0,           0 }, /* 19D3	᧓	e1 a7 93	NEW TAI LUE DIGIT THREE */
    {               0,           0 }, /* 19D4	᧔	e1 a7 94	NEW TAI LUE DIGIT FOUR */
    {               0,           0 }, /* 19D5	᧕	e1 a7 95	NEW TAI LUE DIGIT FIVE */
    {               0,           0 }, /* 19D6	᧖	e1 a7 96	NEW TAI LUE DIGIT SIX */
    {               0,           0 }, /* 19D7	᧗	e1 a7 97	NEW TAI LUE DIGIT SEVEN */
    {               0,           0 }, /* 19D8	᧘	e1 a7 98	NEW TAI LUE DIGIT EIGHT */
    {               0,           0 }, /* 19D9	᧙	e1 a7 99	NEW TAI LUE DIGIT NINE */
    {               0,           0 }, /* 19DA	᧚	e1 a7 9a	NEW TAI LUE THAM DIGIT ONE */
    {               0,           0 }, /* 19DB	᧛	e1 a7 9b	 */
    {               0,           0 }, /* 19DC	᧜	e1 a7 9c	 */
    {               0,           0 }, /* 19DD	᧝	e1 a7 9d	 */
    {               0,           0 }, /* 19DE	᧞	e1 a7 9e	NEW TAI LUE SIGN LAE */
    {               0,           0 }, /* 19DF	᧟	e1 a7 9f	NEW TAI LUE SIGN LAEV */
    {               0,           0 }, /* 19E0	᧠	e1 a7 a0	KHMER SYMBOL PATHAMASAT */
    {               0,           0 }, /* 19E1	᧡	e1 a7 a1	KHMER SYMBOL MUOY KOET */
    {               0,           0 }, /* 19E2	᧢	e1 a7 a2	KHMER SYMBOL PII KOET */
    {               0,           0 }, /* 19E3	᧣	e1 a7 a3	KHMER SYMBOL BEI KOET */
    {               0,           0 }, /* 19E4	᧤	e1 a7 a4	KHMER SYMBOL BUON KOET */
    {               0,           0 }, /* 19E5	᧥	e1 a7 a5	KHMER SYMBOL PRAM KOET */
    {               0,           0 }, /* 19E6	᧦	e1 a7 a6	KHMER SYMBOL PRAM-MUOY KOET */
    {               0,           0 }, /* 19E7	᧧	e1 a7 a7	KHMER SYMBOL PRAM-PII KOET */
    {               0,           0 }, /* 19E8	᧨	e1 a7 a8	KHMER SYMBOL PRAM-BEI KOET */
    {               0,           0 }, /* 19E9	᧩	e1 a7 a9	KHMER SYMBOL PRAM-BUON KOET */
    {               0,           0 }, /* 19EA	᧪	e1 a7 aa	KHMER SYMBOL DAP KOET */
    {               0,           0 }, /* 19EB	᧫	e1 a7 ab	KHMER SYMBOL DAP-MUOY KOET */
    {               0,           0 }, /* 19EC	᧬	e1 a7 ac	KHMER SYMBOL DAP-PII KOET */
    {               0,           0 }, /* 19ED	᧭	e1 a7 ad	KHMER SYMBOL DAP-BEI KOET */
    {               0,           0 }, /* 19EE	᧮	e1 a7 ae	KHMER SYMBOL DAP-BUON KOET */
    {               0,           0 }, /* 19EF	᧯	e1 a7 af	KHMER SYMBOL DAP-PRAM KOET */
    {               0,           0 }, /* 19F0	᧰	e1 a7 b0	KHMER SYMBOL TUTEYASAT */
    {               0,           0 }, /* 19F1	᧱	e1 a7 b1	KHMER SYMBOL MUOY ROC */
    {               0,           0 }, /* 19F2	᧲	e1 a7 b2	KHMER SYMBOL PII ROC */
    {               0,           0 }, /* 19F3	᧳	e1 a7 b3	KHMER SYMBOL BEI ROC */
    {               0,           0 }, /* 19F4	᧴	e1 a7 b4	KHMER SYMBOL BUON ROC */
    {               0,           0 }, /* 19F5	᧵	e1 a7 b5	KHMER SYMBOL PRAM ROC */
    {               0,           0 }, /* 19F6	᧶	e1 a7 b6	KHMER SYMBOL PRAM-MUOY ROC */
    {               0,           0 }, /* 19F7	᧷	e1 a7 b7	KHMER SYMBOL PRAM-PII ROC */
    {               0,           0 }, /* 19F8	᧸	e1 a7 b8	KHMER SYMBOL PRAM-BEI ROC */
    {               0,           0 }, /* 19F9	᧹	e1 a7 b9	KHMER SYMBOL PRAM-BUON ROC */
    {               0,           0 }, /* 19FA	᧺	e1 a7 ba	KHMER SYMBOL DAP ROC */
    {               0,           0 }, /* 19FB	᧻	e1 a7 bb	KHMER SYMBOL DAP-MUOY ROC */
    {               0,           0 }, /* 19FC	᧼	e1 a7 bc	KHMER SYMBOL DAP-PII ROC */
    {               0,           0 }, /* 19FD	᧽	e1 a7 bd	KHMER SYMBOL DAP-BEI ROC */
    {               0,           0 }, /* 19FE	᧾	e1 a7 be	KHMER SYMBOL DAP-BUON ROC */
    {               0,           0 }, /* 19FF	᧿	e1 a7 bf	KHMER SYMBOL DAP-PRAM ROC */
    {               0,           0 }, /* 1A00	ᨀ	e1 a8 80	BUGINESE LETTER KA */
    {               0,           0 }, /* 1A01	ᨁ	e1 a8 81	BUGINESE LETTER GA */
    {               0,           0 }, /* 1A02	ᨂ	e1 a8 82	BUGINESE LETTER NGA */
    {               0,           0 }, /* 1A03	ᨃ	e1 a8 83	BUGINESE LETTER NGKA */
    {               0,           0 }, /* 1A04	ᨄ	e1 a8 84	BUGINESE LETTER PA */
    {               0,           0 }, /* 1A05	ᨅ	e1 a8 85	BUGINESE LETTER BA */
    {               0,           0 }, /* 1A06	ᨆ	e1 a8 86	BUGINESE LETTER MA */
    {               0,           0 }, /* 1A07	ᨇ	e1 a8 87	BUGINESE LETTER MPA */
    {               0,           0 }, /* 1A08	ᨈ	e1 a8 88	BUGINESE LETTER TA */
    {               0,           0 }, /* 1A09	ᨉ	e1 a8 89	BUGINESE LETTER DA */
    {               0,           0 }, /* 1A0A	ᨊ	e1 a8 8a	BUGINESE LETTER NA */
    {               0,           0 }, /* 1A0B	ᨋ	e1 a8 8b	BUGINESE LETTER NRA */
    {               0,           0 }, /* 1A0C	ᨌ	e1 a8 8c	BUGINESE LETTER CA */
    {               0,           0 }, /* 1A0D	ᨍ	e1 a8 8d	BUGINESE LETTER JA */
    {               0,           0 }, /* 1A0E	ᨎ	e1 a8 8e	BUGINESE LETTER NYA */
    {               0,           0 }, /* 1A0F	ᨏ	e1 a8 8f	BUGINESE LETTER NYCA */
    {               0,           0 }, /* 1A10	ᨐ	e1 a8 90	BUGINESE LETTER YA */
    {               0,           0 }, /* 1A11	ᨑ	e1 a8 91	BUGINESE LETTER RA */
    {               0,           0 }, /* 1A12	ᨒ	e1 a8 92	BUGINESE LETTER LA */
    {               0,           0 }, /* 1A13	ᨓ	e1 a8 93	BUGINESE LETTER VA */
    {               0,           0 }, /* 1A14	ᨔ	e1 a8 94	BUGINESE LETTER SA */
    {               0,           0 }, /* 1A15	ᨕ	e1 a8 95	BUGINESE LETTER A */
    {               0,           0 }, /* 1A16	ᨖ	e1 a8 96	BUGINESE LETTER HA */
    {               0,           0 }, /* 1A17	ᨗ	e1 a8 97	BUGINESE VOWEL SIGN I */
    {               0,           0 }, /* 1A18	ᨘ	e1 a8 98	BUGINESE VOWEL SIGN U */
    {               0,           0 }, /* 1A19	ᨙ	e1 a8 99	BUGINESE VOWEL SIGN E */
    {               0,           0 }, /* 1A1A	ᨚ	e1 a8 9a	BUGINESE VOWEL SIGN O */
    {               0,           0 }, /* 1A1B	ᨛ	e1 a8 9b	BUGINESE VOWEL SIGN AE */
    {               0,           0 }, /* 1A1C	᨜	e1 a8 9c	 */
    {               0,           0 }, /* 1A1D	᨝	e1 a8 9d	 */
    {               0,           0 }, /* 1A1E	᨞	e1 a8 9e	BUGINESE PALLAWA */
    {               0,           0 }, /* 1A1F	᨟	e1 a8 9f	BUGINESE END OF SECTION */
    {               0,           0 }, /* 1A20	ᨠ	e1 a8 a0	TAI THAM LETTER HIGH KA */
    {               0,           0 }, /* 1A21	ᨡ	e1 a8 a1	TAI THAM LETTER HIGH KHA */
    {               0,           0 }, /* 1A22	ᨢ	e1 a8 a2	TAI THAM LETTER HIGH KXA */
    {               0,           0 }, /* 1A23	ᨣ	e1 a8 a3	TAI THAM LETTER LOW KA */
    {               0,           0 }, /* 1A24	ᨤ	e1 a8 a4	TAI THAM LETTER LOW KXA */
    {               0,           0 }, /* 1A25	ᨥ	e1 a8 a5	TAI THAM LETTER LOW KHA */
    {               0,           0 }, /* 1A26	ᨦ	e1 a8 a6	TAI THAM LETTER NGA */
    {               0,           0 }, /* 1A27	ᨧ	e1 a8 a7	TAI THAM LETTER HIGH CA */
    {               0,           0 }, /* 1A28	ᨨ	e1 a8 a8	TAI THAM LETTER HIGH CHA */
    {               0,           0 }, /* 1A29	ᨩ	e1 a8 a9	TAI THAM LETTER LOW CA */
    {               0,           0 }, /* 1A2A	ᨪ	e1 a8 aa	TAI THAM LETTER LOW SA */
    {               0,           0 }, /* 1A2B	ᨫ	e1 a8 ab	TAI THAM LETTER LOW CHA */
    {               0,           0 }, /* 1A2C	ᨬ	e1 a8 ac	TAI THAM LETTER NYA */
    {               0,           0 }, /* 1A2D	ᨭ	e1 a8 ad	TAI THAM LETTER RATA */
    {               0,           0 }, /* 1A2E	ᨮ	e1 a8 ae	TAI THAM LETTER HIGH RATHA */
    {               0,           0 }, /* 1A2F	ᨯ	e1 a8 af	TAI THAM LETTER DA */
    {               0,           0 }, /* 1A30	ᨰ	e1 a8 b0	TAI THAM LETTER LOW RATHA */
    {               0,           0 }, /* 1A31	ᨱ	e1 a8 b1	TAI THAM LETTER RANA */
    {               0,           0 }, /* 1A32	ᨲ	e1 a8 b2	TAI THAM LETTER HIGH TA */
    {               0,           0 }, /* 1A33	ᨳ	e1 a8 b3	TAI THAM LETTER HIGH THA */
    {               0,           0 }, /* 1A34	ᨴ	e1 a8 b4	TAI THAM LETTER LOW TA */
    {               0,           0 }, /* 1A35	ᨵ	e1 a8 b5	TAI THAM LETTER LOW THA */
    {               0,           0 }, /* 1A36	ᨶ	e1 a8 b6	TAI THAM LETTER NA */
    {               0,           0 }, /* 1A37	ᨷ	e1 a8 b7	TAI THAM LETTER BA */
    {               0,           0 }, /* 1A38	ᨸ	e1 a8 b8	TAI THAM LETTER HIGH PA */
    {               0,           0 }, /* 1A39	ᨹ	e1 a8 b9	TAI THAM LETTER HIGH PHA */
    {               0,           0 }, /* 1A3A	ᨺ	e1 a8 ba	TAI THAM LETTER HIGH FA */
    {               0,           0 }, /* 1A3B	ᨻ	e1 a8 bb	TAI THAM LETTER LOW PA */
    {               0,           0 }, /* 1A3C	ᨼ	e1 a8 bc	TAI THAM LETTER LOW FA */
    {               0,           0 }, /* 1A3D	ᨽ	e1 a8 bd	TAI THAM LETTER LOW PHA */
    {               0,           0 }, /* 1A3E	ᨾ	e1 a8 be	TAI THAM LETTER MA */
    {               0,           0 }, /* 1A3F	ᨿ	e1 a8 bf	TAI THAM LETTER LOW YA */
    {               0,           0 }, /* 1A40	ᩀ	e1 a9 80	TAI THAM LETTER HIGH YA */
    {               0,           0 }, /* 1A41	ᩁ	e1 a9 81	TAI THAM LETTER RA */
    {               0,           0 }, /* 1A42	ᩂ	e1 a9 82	TAI THAM LETTER RUE */
    {               0,           0 }, /* 1A43	ᩃ	e1 a9 83	TAI THAM LETTER LA */
    {               0,           0 }, /* 1A44	ᩄ	e1 a9 84	TAI THAM LETTER LUE */
    {               0,           0 }, /* 1A45	ᩅ	e1 a9 85	TAI THAM LETTER WA */
    {               0,           0 }, /* 1A46	ᩆ	e1 a9 86	TAI THAM LETTER HIGH SHA */
    {               0,           0 }, /* 1A47	ᩇ	e1 a9 87	TAI THAM LETTER HIGH SSA */
    {               0,           0 }, /* 1A48	ᩈ	e1 a9 88	TAI THAM LETTER HIGH SA */
    {               0,           0 }, /* 1A49	ᩉ	e1 a9 89	TAI THAM LETTER HIGH HA */
    {               0,           0 }, /* 1A4A	ᩊ	e1 a9 8a	TAI THAM LETTER LLA */
    {               0,           0 }, /* 1A4B	ᩋ	e1 a9 8b	TAI THAM LETTER A */
    {               0,           0 }, /* 1A4C	ᩌ	e1 a9 8c	TAI THAM LETTER LOW HA */
    {               0,           0 }, /* 1A4D	ᩍ	e1 a9 8d	TAI THAM LETTER I */
    {               0,           0 }, /* 1A4E	ᩎ	e1 a9 8e	TAI THAM LETTER II */
    {               0,           0 }, /* 1A4F	ᩏ	e1 a9 8f	TAI THAM LETTER U */
    {               0,           0 }, /* 1A50	ᩐ	e1 a9 90	TAI THAM LETTER UU */
    {               0,           0 }, /* 1A51	ᩑ	e1 a9 91	TAI THAM LETTER EE */
    {               0,           0 }, /* 1A52	ᩒ	e1 a9 92	TAI THAM LETTER OO */
    {               0,           0 }, /* 1A53	ᩓ	e1 a9 93	TAI THAM LETTER LAE */
    {               0,           0 }, /* 1A54	ᩔ	e1 a9 94	TAI THAM LETTER GREAT SA */
    {               0,           0 }, /* 1A55	ᩕ	e1 a9 95	TAI THAM CONSONANT SIGN MEDIAL RA */
    {               0,           0 }, /* 1A56	ᩖ	e1 a9 96	TAI THAM CONSONANT SIGN MEDIAL LA */
    {               0,           0 }, /* 1A57	ᩗ	e1 a9 97	TAI THAM CONSONANT SIGN LA TANG LAI */
    {               0,           0 }, /* 1A58	ᩘ	e1 a9 98	TAI THAM SIGN MAI KANG LAI */
    {               0,           0 }, /* 1A59	ᩙ	e1 a9 99	TAI THAM CONSONANT SIGN FINAL NGA */
    {               0,           0 }, /* 1A5A	ᩚ	e1 a9 9a	TAI THAM CONSONANT SIGN LOW PA */
    {               0,           0 }, /* 1A5B	ᩛ	e1 a9 9b	TAI THAM CONSONANT SIGN HIGH RATHA OR LOW PA */
    {               0,           0 }, /* 1A5C	ᩜ	e1 a9 9c	TAI THAM CONSONANT SIGN MA */
    {               0,           0 }, /* 1A5D	ᩝ	e1 a9 9d	TAI THAM CONSONANT SIGN BA */
    {               0,           0 }, /* 1A5E	ᩞ	e1 a9 9e	TAI THAM CONSONANT SIGN SA */
    {               0,           0 }, /* 1A5F	᩟	e1 a9 9f	 */
    {               0,           0 }, /* 1A60	᩠	e1 a9 a0	TAI THAM SIGN SAKOT */
    {               0,           0 }, /* 1A61	ᩡ	e1 a9 a1	TAI THAM VOWEL SIGN A */
    {               0,           0 }, /* 1A62	ᩢ	e1 a9 a2	TAI THAM VOWEL SIGN MAI SAT */
    {               0,           0 }, /* 1A63	ᩣ	e1 a9 a3	TAI THAM VOWEL SIGN AA */
    {               0,           0 }, /* 1A64	ᩤ	e1 a9 a4	TAI THAM VOWEL SIGN TALL AA */
    {               0,           0 }, /* 1A65	ᩥ	e1 a9 a5	TAI THAM VOWEL SIGN I */
    {               0,           0 }, /* 1A66	ᩦ	e1 a9 a6	TAI THAM VOWEL SIGN II */
    {               0,           0 }, /* 1A67	ᩧ	e1 a9 a7	TAI THAM VOWEL SIGN UE */
    {               0,           0 }, /* 1A68	ᩨ	e1 a9 a8	TAI THAM VOWEL SIGN UUE */
    {               0,           0 }, /* 1A69	ᩩ	e1 a9 a9	TAI THAM VOWEL SIGN U */
    {               0,           0 }, /* 1A6A	ᩪ	e1 a9 aa	TAI THAM VOWEL SIGN UU */
    {               0,           0 }, /* 1A6B	ᩫ	e1 a9 ab	TAI THAM VOWEL SIGN O */
    {               0,           0 }, /* 1A6C	ᩬ	e1 a9 ac	TAI THAM VOWEL SIGN OA BELOW */
    {               0,           0 }, /* 1A6D	ᩭ	e1 a9 ad	TAI THAM VOWEL SIGN OY */
    {               0,           0 }, /* 1A6E	ᩮ	e1 a9 ae	TAI THAM VOWEL SIGN E */
    {               0,           0 }, /* 1A6F	ᩯ	e1 a9 af	TAI THAM VOWEL SIGN AE */
    {               0,           0 }, /* 1A70	ᩰ	e1 a9 b0	TAI THAM VOWEL SIGN OO */
    {               0,           0 }, /* 1A71	ᩱ	e1 a9 b1	TAI THAM VOWEL SIGN AI */
    {               0,           0 }, /* 1A72	ᩲ	e1 a9 b2	TAI THAM VOWEL SIGN THAM AI */
    {               0,           0 }, /* 1A73	ᩳ	e1 a9 b3	TAI THAM VOWEL SIGN OA ABOVE */
    {               0,           0 }, /* 1A74	ᩴ	e1 a9 b4	TAI THAM SIGN MAI KANG */
    {               0,           0 }, /* 1A75	᩵	e1 a9 b5	TAI THAM SIGN TONE-1 */
    {               0,           0 }, /* 1A76	᩶	e1 a9 b6	TAI THAM SIGN TONE-2 */
    {               0,           0 }, /* 1A77	᩷	e1 a9 b7	TAI THAM SIGN KHUEN TONE-3 */
    {               0,           0 }, /* 1A78	᩸	e1 a9 b8	TAI THAM SIGN KHUEN TONE-4 */
    {               0,           0 }, /* 1A79	᩹	e1 a9 b9	TAI THAM SIGN KHUEN TONE-5 */
    {               0,           0 }, /* 1A7A	᩺	e1 a9 ba	TAI THAM SIGN RA HAAM */
    {               0,           0 }, /* 1A7B	᩻	e1 a9 bb	TAI THAM SIGN MAI SAM */
    {               0,           0 }, /* 1A7C	᩼	e1 a9 bc	TAI THAM SIGN KHUEN-LUE KARAN */
    {               0,           0 }, /* 1A7D	᩽	e1 a9 bd	 */
    {               0,           0 }, /* 1A7E	᩾	e1 a9 be	 */
    {               0,           0 }, /* 1A7F	᩿	e1 a9 bf	TAI THAM COMBINING CRYPTOGRAMMIC DOT */
    {               0,           0 }, /* 1A80	᪀	e1 aa 80	TAI THAM HORA DIGIT ZERO */
    {               0,           0 }, /* 1A81	᪁	e1 aa 81	TAI THAM HORA DIGIT ONE */
    {               0,           0 }, /* 1A82	᪂	e1 aa 82	TAI THAM HORA DIGIT TWO */
    {               0,           0 }, /* 1A83	᪃	e1 aa 83	TAI THAM HORA DIGIT THREE */
    {               0,           0 }, /* 1A84	᪄	e1 aa 84	TAI THAM HORA DIGIT FOUR */
    {               0,           0 }, /* 1A85	᪅	e1 aa 85	TAI THAM HORA DIGIT FIVE */
    {               0,           0 }, /* 1A86	᪆	e1 aa 86	TAI THAM HORA DIGIT SIX */
    {               0,           0 }, /* 1A87	᪇	e1 aa 87	TAI THAM HORA DIGIT SEVEN */
    {               0,           0 }, /* 1A88	᪈	e1 aa 88	TAI THAM HORA DIGIT EIGHT */
    {               0,           0 }, /* 1A89	᪉	e1 aa 89	TAI THAM HORA DIGIT NINE */
    {               0,           0 }, /* 1A8A	᪊	e1 aa 8a	 */
    {               0,           0 }, /* 1A8B	᪋	e1 aa 8b	 */
    {               0,           0 }, /* 1A8C	᪌	e1 aa 8c	 */
    {               0,           0 }, /* 1A8D	᪍	e1 aa 8d	 */
    {               0,           0 }, /* 1A8E	᪎	e1 aa 8e	 */
    {               0,           0 }, /* 1A8F	᪏	e1 aa 8f	 */
    {               0,           0 }, /* 1A90	᪐	e1 aa 90	TAI THAM THAM DIGIT ZERO */
    {               0,           0 }, /* 1A91	᪑	e1 aa 91	TAI THAM THAM DIGIT ONE */
    {               0,           0 }, /* 1A92	᪒	e1 aa 92	TAI THAM THAM DIGIT TWO */
    {               0,           0 }, /* 1A93	᪓	e1 aa 93	TAI THAM THAM DIGIT THREE */
    {               0,           0 }, /* 1A94	᪔	e1 aa 94	TAI THAM THAM DIGIT FOUR */
    {               0,           0 }, /* 1A95	᪕	e1 aa 95	TAI THAM THAM DIGIT FIVE */
    {               0,           0 }, /* 1A96	᪖	e1 aa 96	TAI THAM THAM DIGIT SIX */
    {               0,           0 }, /* 1A97	᪗	e1 aa 97	TAI THAM THAM DIGIT SEVEN */
    {               0,           0 }, /* 1A98	᪘	e1 aa 98	TAI THAM THAM DIGIT EIGHT */
    {               0,           0 }, /* 1A99	᪙	e1 aa 99	TAI THAM THAM DIGIT NINE */
    {               0,           0 }, /* 1A9A	᪚	e1 aa 9a	 */
    {               0,           0 }, /* 1A9B	᪛	e1 aa 9b	 */
    {               0,           0 }, /* 1A9C	᪜	e1 aa 9c	 */
    {               0,           0 }, /* 1A9D	᪝	e1 aa 9d	 */
    {               0,           0 }, /* 1A9E	᪞	e1 aa 9e	 */
    {               0,           0 }, /* 1A9F	᪟	e1 aa 9f	 */
    {               0,           0 }, /* 1AA0	᪠	e1 aa a0	TAI THAM SIGN WIANG */
    {               0,           0 }, /* 1AA1	᪡	e1 aa a1	TAI THAM SIGN WIANGWAAK */
    {               0,           0 }, /* 1AA2	᪢	e1 aa a2	TAI THAM SIGN SAWAN */
    {               0,           0 }, /* 1AA3	᪣	e1 aa a3	TAI THAM SIGN KEOW */
    {               0,           0 }, /* 1AA4	᪤	e1 aa a4	TAI THAM SIGN HOY */
    {               0,           0 }, /* 1AA5	᪥	e1 aa a5	TAI THAM SIGN DOKMAI */
    {               0,           0 }, /* 1AA6	᪦	e1 aa a6	TAI THAM SIGN REVERSED ROTATED RANA */
    {               0,           0 }, /* 1AA7	ᪧ	e1 aa a7	TAI THAM SIGN MAI YAMOK */
    {               0,           0 }, /* 1AA8	᪨	e1 aa a8	TAI THAM SIGN KAAN */
    {               0,           0 }, /* 1AA9	᪩	e1 aa a9	TAI THAM SIGN KAANKUU */
    {               0,           0 }, /* 1AAA	᪪	e1 aa aa	TAI THAM SIGN SATKAAN */
    {               0,           0 }, /* 1AAB	᪫	e1 aa ab	TAI THAM SIGN SATKAANKUU */
    {               0,           0 }, /* 1AAC	᪬	e1 aa ac	TAI THAM SIGN HANG */
    {               0,           0 }, /* 1AAD	᪭	e1 aa ad	TAI THAM SIGN CAANG */
    {               0,           0 }, /* 1AAE	᪮	e1 aa ae	 */
    {               0,           0 }, /* 1AAF	᪯	e1 aa af	 */
    {               0,           0 }, /* 1AB0	᪰	e1 aa b0	 */
    {               0,           0 }, /* 1AB1	᪱	e1 aa b1	 */
    {               0,           0 }, /* 1AB2	᪲	e1 aa b2	 */
    {               0,           0 }, /* 1AB3	᪳	e1 aa b3	 */
    {               0,           0 }, /* 1AB4	᪴	e1 aa b4	 */
    {               0,           0 }, /* 1AB5	᪵	e1 aa b5	 */
    {               0,           0 }, /* 1AB6	᪶	e1 aa b6	 */
    {               0,           0 }, /* 1AB7	᪷	e1 aa b7	 */
    {               0,           0 }, /* 1AB8	᪸	e1 aa b8	 */
    {               0,           0 }, /* 1AB9	᪹	e1 aa b9	 */
    {               0,           0 }, /* 1ABA	᪺	e1 aa ba	 */
    {               0,           0 }, /* 1ABB	᪻	e1 aa bb	 */
    {               0,           0 }, /* 1ABC	᪼	e1 aa bc	 */
    {               0,           0 }, /* 1ABD	᪽	e1 aa bd	 */
    {               0,           0 }, /* 1ABE	᪾	e1 aa be	 */
    {               0,           0 }, /* 1ABF	ᪿ	e1 aa bf	 */
    {               0,           0 }, /* 1AC0	ᫀ	e1 ab 80	 */
    {               0,           0 }, /* 1AC1	᫁	e1 ab 81	 */
    {               0,           0 }, /* 1AC2	᫂	e1 ab 82	 */
    {               0,           0 }, /* 1AC3	᫃	e1 ab 83	 */
    {               0,           0 }, /* 1AC4	᫄	e1 ab 84	 */
    {               0,           0 }, /* 1AC5	᫅	e1 ab 85	 */
    {               0,           0 }, /* 1AC6	᫆	e1 ab 86	 */
    {               0,           0 }, /* 1AC7	᫇	e1 ab 87	 */
    {               0,           0 }, /* 1AC8	᫈	e1 ab 88	 */
    {               0,           0 }, /* 1AC9	᫉	e1 ab 89	 */
    {               0,           0 }, /* 1ACA	᫊	e1 ab 8a	 */
    {               0,           0 }, /* 1ACB	᫋	e1 ab 8b	 */
    {               0,           0 }, /* 1ACC	ᫌ	e1 ab 8c	 */
    {               0,           0 }, /* 1ACD	ᫍ	e1 ab 8d	 */
    {               0,           0 }, /* 1ACE	ᫎ	e1 ab 8e	 */
    {               0,           0 }, /* 1ACF	᫏	e1 ab 8f	 */
    {               0,           0 }, /* 1AD0	᫐	e1 ab 90	 */
    {               0,           0 }, /* 1AD1	᫑	e1 ab 91	 */
    {               0,           0 }, /* 1AD2	᫒	e1 ab 92	 */
    {               0,           0 }, /* 1AD3	᫓	e1 ab 93	 */
    {               0,           0 }, /* 1AD4	᫔	e1 ab 94	 */
    {               0,           0 }, /* 1AD5	᫕	e1 ab 95	 */
    {               0,           0 }, /* 1AD6	᫖	e1 ab 96	 */
    {               0,           0 }, /* 1AD7	᫗	e1 ab 97	 */
    {               0,           0 }, /* 1AD8	᫘	e1 ab 98	 */
    {               0,           0 }, /* 1AD9	᫙	e1 ab 99	 */
    {               0,           0 }, /* 1ADA	᫚	e1 ab 9a	 */
    {               0,           0 }, /* 1ADB	᫛	e1 ab 9b	 */
    {               0,           0 }, /* 1ADC	᫜	e1 ab 9c	 */
    {               0,           0 }, /* 1ADD	᫝	e1 ab 9d	 */
    {               0,           0 }, /* 1ADE	᫞	e1 ab 9e	 */
    {               0,           0 }, /* 1ADF	᫟	e1 ab 9f	 */
    {               0,           0 }, /* 1AE0	᫠	e1 ab a0	 */
    {               0,           0 }, /* 1AE1	᫡	e1 ab a1	 */
    {               0,           0 }, /* 1AE2	᫢	e1 ab a2	 */
    {               0,           0 }, /* 1AE3	᫣	e1 ab a3	 */
    {               0,           0 }, /* 1AE4	᫤	e1 ab a4	 */
    {               0,           0 }, /* 1AE5	᫥	e1 ab a5	 */
    {               0,           0 }, /* 1AE6	᫦	e1 ab a6	 */
    {               0,           0 }, /* 1AE7	᫧	e1 ab a7	 */
    {               0,           0 }, /* 1AE8	᫨	e1 ab a8	 */
    {               0,           0 }, /* 1AE9	᫩	e1 ab a9	 */
    {               0,           0 }, /* 1AEA	᫪	e1 ab aa	 */
    {               0,           0 }, /* 1AEB	᫫	e1 ab ab	 */
    {               0,           0 }, /* 1AEC	᫬	e1 ab ac	 */
    {               0,           0 }, /* 1AED	᫭	e1 ab ad	 */
    {               0,           0 }, /* 1AEE	᫮	e1 ab ae	 */
    {               0,           0 }, /* 1AEF	᫯	e1 ab af	 */
    {               0,           0 }, /* 1AF0	᫰	e1 ab b0	 */
    {               0,           0 }, /* 1AF1	᫱	e1 ab b1	 */
    {               0,           0 }, /* 1AF2	᫲	e1 ab b2	 */
    {               0,           0 }, /* 1AF3	᫳	e1 ab b3	 */
    {               0,           0 }, /* 1AF4	᫴	e1 ab b4	 */
    {               0,           0 }, /* 1AF5	᫵	e1 ab b5	 */
    {               0,           0 }, /* 1AF6	᫶	e1 ab b6	 */
    {               0,           0 }, /* 1AF7	᫷	e1 ab b7	 */
    {               0,           0 }, /* 1AF8	᫸	e1 ab b8	 */
    {               0,           0 }, /* 1AF9	᫹	e1 ab b9	 */
    {               0,           0 }, /* 1AFA	᫺	e1 ab ba	 */
    {               0,           0 }, /* 1AFB	᫻	e1 ab bb	 */
    {               0,           0 }, /* 1AFC	᫼	e1 ab bc	 */
    {               0,           0 }, /* 1AFD	᫽	e1 ab bd	 */
    {               0,           0 }, /* 1AFE	᫾	e1 ab be	 */
    {               0,           0 }, /* 1AFF	᫿	e1 ab bf	 */
    {               0,           0 }, /* 1B00	ᬀ	e1 ac 80	BALINESE SIGN ULU RICEM */
    {               0,           0 }, /* 1B01	ᬁ	e1 ac 81	BALINESE SIGN ULU CANDRA */
    {               0,           0 }, /* 1B02	ᬂ	e1 ac 82	BALINESE SIGN CECEK */
    {               0,           0 }, /* 1B03	ᬃ	e1 ac 83	BALINESE SIGN SURANG */
    {               0,           0 }, /* 1B04	ᬄ	e1 ac 84	BALINESE SIGN BISAH */
    {               0,           0 }, /* 1B05	ᬅ	e1 ac 85	BALINESE LETTER AKARA */
    {               0,           0 }, /* 1B06	ᬆ	e1 ac 86	BALINESE LETTER AKARA TEDUNG */
    {               0,           0 }, /* 1B07	ᬇ	e1 ac 87	BALINESE LETTER IKARA */
    {               0,           0 }, /* 1B08	ᬈ	e1 ac 88	BALINESE LETTER IKARA TEDUNG */
    {               0,           0 }, /* 1B09	ᬉ	e1 ac 89	BALINESE LETTER UKARA */
    {               0,           0 }, /* 1B0A	ᬊ	e1 ac 8a	BALINESE LETTER UKARA TEDUNG */
    {               0,           0 }, /* 1B0B	ᬋ	e1 ac 8b	BALINESE LETTER RA REPA */
    {               0,           0 }, /* 1B0C	ᬌ	e1 ac 8c	BALINESE LETTER RA REPA TEDUNG */
    {               0,           0 }, /* 1B0D	ᬍ	e1 ac 8d	BALINESE LETTER LA LENGA */
    {               0,           0 }, /* 1B0E	ᬎ	e1 ac 8e	BALINESE LETTER LA LENGA TEDUNG */
    {               0,           0 }, /* 1B0F	ᬏ	e1 ac 8f	BALINESE LETTER EKARA */
    {               0,           0 }, /* 1B10	ᬐ	e1 ac 90	BALINESE LETTER AIKARA */
    {               0,           0 }, /* 1B11	ᬑ	e1 ac 91	BALINESE LETTER OKARA */
    {               0,           0 }, /* 1B12	ᬒ	e1 ac 92	BALINESE LETTER OKARA TEDUNG */
    {               0,           0 }, /* 1B13	ᬓ	e1 ac 93	BALINESE LETTER KA */
    {               0,           0 }, /* 1B14	ᬔ	e1 ac 94	BALINESE LETTER KA MAHAPRANA */
    {               0,           0 }, /* 1B15	ᬕ	e1 ac 95	BALINESE LETTER GA */
    {               0,           0 }, /* 1B16	ᬖ	e1 ac 96	BALINESE LETTER GA GORA */
    {               0,           0 }, /* 1B17	ᬗ	e1 ac 97	BALINESE LETTER NGA */
    {               0,           0 }, /* 1B18	ᬘ	e1 ac 98	BALINESE LETTER CA */
    {               0,           0 }, /* 1B19	ᬙ	e1 ac 99	BALINESE LETTER CA LACA */
    {               0,           0 }, /* 1B1A	ᬚ	e1 ac 9a	BALINESE LETTER JA */
    {               0,           0 }, /* 1B1B	ᬛ	e1 ac 9b	BALINESE LETTER JA JERA */
    {               0,           0 }, /* 1B1C	ᬜ	e1 ac 9c	BALINESE LETTER NYA */
    {               0,           0 }, /* 1B1D	ᬝ	e1 ac 9d	BALINESE LETTER TA LATIK */
    {               0,           0 }, /* 1B1E	ᬞ	e1 ac 9e	BALINESE LETTER TA MURDA MAHAPRANA */
    {               0,           0 }, /* 1B1F	ᬟ	e1 ac 9f	BALINESE LETTER DA MURDA ALPAPRANA */
    {               0,           0 }, /* 1B20	ᬠ	e1 ac a0	BALINESE LETTER DA MURDA MAHAPRANA */
    {               0,           0 }, /* 1B21	ᬡ	e1 ac a1	BALINESE LETTER NA RAMBAT */
    {               0,           0 }, /* 1B22	ᬢ	e1 ac a2	BALINESE LETTER TA */
    {               0,           0 }, /* 1B23	ᬣ	e1 ac a3	BALINESE LETTER TA TAWA */
    {               0,           0 }, /* 1B24	ᬤ	e1 ac a4	BALINESE LETTER DA */
    {               0,           0 }, /* 1B25	ᬥ	e1 ac a5	BALINESE LETTER DA MADU */
    {               0,           0 }, /* 1B26	ᬦ	e1 ac a6	BALINESE LETTER NA */
    {               0,           0 }, /* 1B27	ᬧ	e1 ac a7	BALINESE LETTER PA */
    {               0,           0 }, /* 1B28	ᬨ	e1 ac a8	BALINESE LETTER PA KAPAL */
    {               0,           0 }, /* 1B29	ᬩ	e1 ac a9	BALINESE LETTER BA */
    {               0,           0 }, /* 1B2A	ᬪ	e1 ac aa	BALINESE LETTER BA KEMBANG */
    {               0,           0 }, /* 1B2B	ᬫ	e1 ac ab	BALINESE LETTER MA */
    {               0,           0 }, /* 1B2C	ᬬ	e1 ac ac	BALINESE LETTER YA */
    {               0,           0 }, /* 1B2D	ᬭ	e1 ac ad	BALINESE LETTER RA */
    {               0,           0 }, /* 1B2E	ᬮ	e1 ac ae	BALINESE LETTER LA */
    {               0,           0 }, /* 1B2F	ᬯ	e1 ac af	BALINESE LETTER WA */
    {               0,           0 }, /* 1B30	ᬰ	e1 ac b0	BALINESE LETTER SA SAGA */
    {               0,           0 }, /* 1B31	ᬱ	e1 ac b1	BALINESE LETTER SA SAPA */
    {               0,           0 }, /* 1B32	ᬲ	e1 ac b2	BALINESE LETTER SA */
    {               0,           0 }, /* 1B33	ᬳ	e1 ac b3	BALINESE LETTER HA */
    {               0,           0 }, /* 1B34	᬴	e1 ac b4	BALINESE SIGN REREKAN */
    {               0,           0 }, /* 1B35	ᬵ	e1 ac b5	BALINESE VOWEL SIGN TEDUNG */
    {               0,           0 }, /* 1B36	ᬶ	e1 ac b6	BALINESE VOWEL SIGN ULU */
    {               0,           0 }, /* 1B37	ᬷ	e1 ac b7	BALINESE VOWEL SIGN ULU SARI */
    {               0,           0 }, /* 1B38	ᬸ	e1 ac b8	BALINESE VOWEL SIGN SUKU */
    {               0,           0 }, /* 1B39	ᬹ	e1 ac b9	BALINESE VOWEL SIGN SUKU ILUT */
    {               0,           0 }, /* 1B3A	ᬺ	e1 ac ba	BALINESE VOWEL SIGN RA REPA */
    {               0,           0 }, /* 1B3B	ᬻ	e1 ac bb	BALINESE VOWEL SIGN RA REPA TEDUNG */
    {               0,           0 }, /* 1B3C	ᬼ	e1 ac bc	BALINESE VOWEL SIGN LA LENGA */
    {               0,           0 }, /* 1B3D	ᬽ	e1 ac bd	BALINESE VOWEL SIGN LA LENGA TEDUNG */
    {               0,           0 }, /* 1B3E	ᬾ	e1 ac be	BALINESE VOWEL SIGN TALING */
    {               0,           0 }, /* 1B3F	ᬿ	e1 ac bf	BALINESE VOWEL SIGN TALING REPA */
    {               0,           0 }, /* 1B40	ᭀ	e1 ad 80	BALINESE VOWEL SIGN TALING TEDUNG */
    {               0,           0 }, /* 1B41	ᭁ	e1 ad 81	BALINESE VOWEL SIGN TALING REPA TEDUNG */
    {               0,           0 }, /* 1B42	ᭂ	e1 ad 82	BALINESE VOWEL SIGN PEPET */
    {               0,           0 }, /* 1B43	ᭃ	e1 ad 83	BALINESE VOWEL SIGN PEPET TEDUNG */
    {               0,           0 }, /* 1B44	᭄	e1 ad 84	BALINESE ADEG ADEG */
    {               0,           0 }, /* 1B45	ᭅ	e1 ad 85	BALINESE LETTER KAF SASAK */
    {               0,           0 }, /* 1B46	ᭆ	e1 ad 86	BALINESE LETTER KHOT SASAK */
    {               0,           0 }, /* 1B47	ᭇ	e1 ad 87	BALINESE LETTER TZIR SASAK */
    {               0,           0 }, /* 1B48	ᭈ	e1 ad 88	BALINESE LETTER EF SASAK */
    {               0,           0 }, /* 1B49	ᭉ	e1 ad 89	BALINESE LETTER VE SASAK */
    {               0,           0 }, /* 1B4A	ᭊ	e1 ad 8a	BALINESE LETTER ZAL SASAK */
    {               0,           0 }, /* 1B4B	ᭋ	e1 ad 8b	BALINESE LETTER ASYURA SASAK */
    {               0,           0 }, /* 1B4C	ᭌ	e1 ad 8c	 */
    {               0,           0 }, /* 1B4D	᭍	e1 ad 8d	 */
    {               0,           0 }, /* 1B4E	᭎	e1 ad 8e	 */
    {               0,           0 }, /* 1B4F	᭏	e1 ad 8f	 */
    {               0,           0 }, /* 1B50	᭐	e1 ad 90	BALINESE DIGIT ZERO */
    {               0,           0 }, /* 1B51	᭑	e1 ad 91	BALINESE DIGIT ONE */
    {               0,           0 }, /* 1B52	᭒	e1 ad 92	BALINESE DIGIT TWO */
    {               0,           0 }, /* 1B53	᭓	e1 ad 93	BALINESE DIGIT THREE */
    {               0,           0 }, /* 1B54	᭔	e1 ad 94	BALINESE DIGIT FOUR */
    {               0,           0 }, /* 1B55	᭕	e1 ad 95	BALINESE DIGIT FIVE */
    {               0,           0 }, /* 1B56	᭖	e1 ad 96	BALINESE DIGIT SIX */
    {               0,           0 }, /* 1B57	᭗	e1 ad 97	BALINESE DIGIT SEVEN */
    {               0,           0 }, /* 1B58	᭘	e1 ad 98	BALINESE DIGIT EIGHT */
    {               0,           0 }, /* 1B59	᭙	e1 ad 99	BALINESE DIGIT NINE */
    {               0,           0 }, /* 1B5A	᭚	e1 ad 9a	BALINESE PANTI */
    {               0,           0 }, /* 1B5B	᭛	e1 ad 9b	BALINESE PAMADA */
    {               0,           0 }, /* 1B5C	᭜	e1 ad 9c	BALINESE WINDU */
    {               0,           0 }, /* 1B5D	᭝	e1 ad 9d	BALINESE CARIK PAMUNGKAH */
    {               0,           0 }, /* 1B5E	᭞	e1 ad 9e	BALINESE CARIK SIKI */
    {               0,           0 }, /* 1B5F	᭟	e1 ad 9f	BALINESE CARIK PAREREN */
    {               0,           0 }, /* 1B60	᭠	e1 ad a0	BALINESE PAMENENG */
    {               0,           0 }, /* 1B61	᭡	e1 ad a1	BALINESE MUSICAL SYMBOL DONG */
    {               0,           0 }, /* 1B62	᭢	e1 ad a2	BALINESE MUSICAL SYMBOL DENG */
    {               0,           0 }, /* 1B63	᭣	e1 ad a3	BALINESE MUSICAL SYMBOL DUNG */
    {               0,           0 }, /* 1B64	᭤	e1 ad a4	BALINESE MUSICAL SYMBOL DANG */
    {               0,           0 }, /* 1B65	᭥	e1 ad a5	BALINESE MUSICAL SYMBOL DANG SURANG */
    {               0,           0 }, /* 1B66	᭦	e1 ad a6	BALINESE MUSICAL SYMBOL DING */
    {               0,           0 }, /* 1B67	᭧	e1 ad a7	BALINESE MUSICAL SYMBOL DAENG */
    {               0,           0 }, /* 1B68	᭨	e1 ad a8	BALINESE MUSICAL SYMBOL DEUNG */
    {               0,           0 }, /* 1B69	᭩	e1 ad a9	BALINESE MUSICAL SYMBOL DAING */
    {               0,           0 }, /* 1B6A	᭪	e1 ad aa	BALINESE MUSICAL SYMBOL DANG GEDE */
    {               0,           0 }, /* 1B6B	᭫	e1 ad ab	BALINESE MUSICAL SYMBOL COMBINING TEGEH */
    {               0,           0 }, /* 1B6C	᭬	e1 ad ac	BALINESE MUSICAL SYMBOL COMBINING ENDEP */
    {               0,           0 }, /* 1B6D	᭭	e1 ad ad	BALINESE MUSICAL SYMBOL COMBINING KEMPUL */
    {               0,           0 }, /* 1B6E	᭮	e1 ad ae	BALINESE MUSICAL SYMBOL COMBINING KEMPLI */
    {               0,           0 }, /* 1B6F	᭯	e1 ad af	BALINESE MUSICAL SYMBOL COMBINING JEGOGAN */
    {               0,           0 }, /* 1B70	᭰	e1 ad b0	BALINESE MUSICAL SYMBOL COMBINING KEMPUL WITH JEGOGAN */
    {               0,           0 }, /* 1B71	᭱	e1 ad b1	BALINESE MUSICAL SYMBOL COMBINING KEMPLI WITH JEGOGAN */
    {               0,           0 }, /* 1B72	᭲	e1 ad b2	BALINESE MUSICAL SYMBOL COMBINING BENDE */
    {               0,           0 }, /* 1B73	᭳	e1 ad b3	BALINESE MUSICAL SYMBOL COMBINING GONG */
    {               0,           0 }, /* 1B74	᭴	e1 ad b4	BALINESE MUSICAL SYMBOL RIGHT-HAND OPEN DUG */
    {               0,           0 }, /* 1B75	᭵	e1 ad b5	BALINESE MUSICAL SYMBOL RIGHT-HAND OPEN DAG */
    {               0,           0 }, /* 1B76	᭶	e1 ad b6	BALINESE MUSICAL SYMBOL RIGHT-HAND CLOSED TUK */
    {               0,           0 }, /* 1B77	᭷	e1 ad b7	BALINESE MUSICAL SYMBOL RIGHT-HAND CLOSED TAK */
    {               0,           0 }, /* 1B78	᭸	e1 ad b8	BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PANG */
    {               0,           0 }, /* 1B79	᭹	e1 ad b9	BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PUNG */
    {               0,           0 }, /* 1B7A	᭺	e1 ad ba	BALINESE MUSICAL SYMBOL LEFT-HAND CLOSED PLAK */
    {               0,           0 }, /* 1B7B	᭻	e1 ad bb	BALINESE MUSICAL SYMBOL LEFT-HAND CLOSED PLUK */
    {               0,           0 }, /* 1B7C	᭼	e1 ad bc	BALINESE MUSICAL SYMBOL LEFT-HAND OPEN PING */
    {               0,           0 }, /* 1B7D	᭽	e1 ad bd	 */
    {               0,           0 }, /* 1B7E	᭾	e1 ad be	 */
    {               0,           0 }, /* 1B7F	᭿	e1 ad bf	 */
    {               0,           0 }, /* 1B80	ᮀ	e1 ae 80	SUNDANESE SIGN PANYECEK */
    {               0,           0 }, /* 1B81	ᮁ	e1 ae 81	SUNDANESE SIGN PANGLAYAR */
    {               0,           0 }, /* 1B82	ᮂ	e1 ae 82	SUNDANESE SIGN PANGWISAD */
    {               0,           0 }, /* 1B83	ᮃ	e1 ae 83	SUNDANESE LETTER A */
    {               0,           0 }, /* 1B84	ᮄ	e1 ae 84	SUNDANESE LETTER I */
    {               0,           0 }, /* 1B85	ᮅ	e1 ae 85	SUNDANESE LETTER U */
    {               0,           0 }, /* 1B86	ᮆ	e1 ae 86	SUNDANESE LETTER AE */
    {               0,           0 }, /* 1B87	ᮇ	e1 ae 87	SUNDANESE LETTER O */
    {               0,           0 }, /* 1B88	ᮈ	e1 ae 88	SUNDANESE LETTER E */
    {               0,           0 }, /* 1B89	ᮉ	e1 ae 89	SUNDANESE LETTER EU */
    {               0,           0 }, /* 1B8A	ᮊ	e1 ae 8a	SUNDANESE LETTER KA */
    {               0,           0 }, /* 1B8B	ᮋ	e1 ae 8b	SUNDANESE LETTER QA */
    {               0,           0 }, /* 1B8C	ᮌ	e1 ae 8c	SUNDANESE LETTER GA */
    {               0,           0 }, /* 1B8D	ᮍ	e1 ae 8d	SUNDANESE LETTER NGA */
    {               0,           0 }, /* 1B8E	ᮎ	e1 ae 8e	SUNDANESE LETTER CA */
    {               0,           0 }, /* 1B8F	ᮏ	e1 ae 8f	SUNDANESE LETTER JA */
    {               0,           0 }, /* 1B90	ᮐ	e1 ae 90	SUNDANESE LETTER ZA */
    {               0,           0 }, /* 1B91	ᮑ	e1 ae 91	SUNDANESE LETTER NYA */
    {               0,           0 }, /* 1B92	ᮒ	e1 ae 92	SUNDANESE LETTER TA */
    {               0,           0 }, /* 1B93	ᮓ	e1 ae 93	SUNDANESE LETTER DA */
    {               0,           0 }, /* 1B94	ᮔ	e1 ae 94	SUNDANESE LETTER NA */
    {               0,           0 }, /* 1B95	ᮕ	e1 ae 95	SUNDANESE LETTER PA */
    {               0,           0 }, /* 1B96	ᮖ	e1 ae 96	SUNDANESE LETTER FA */
    {               0,           0 }, /* 1B97	ᮗ	e1 ae 97	SUNDANESE LETTER VA */
    {               0,           0 }, /* 1B98	ᮘ	e1 ae 98	SUNDANESE LETTER BA */
    {               0,           0 }, /* 1B99	ᮙ	e1 ae 99	SUNDANESE LETTER MA */
    {               0,           0 }, /* 1B9A	ᮚ	e1 ae 9a	SUNDANESE LETTER YA */
    {               0,           0 }, /* 1B9B	ᮛ	e1 ae 9b	SUNDANESE LETTER RA */
    {               0,           0 }, /* 1B9C	ᮜ	e1 ae 9c	SUNDANESE LETTER LA */
    {               0,           0 }, /* 1B9D	ᮝ	e1 ae 9d	SUNDANESE LETTER WA */
    {               0,           0 }, /* 1B9E	ᮞ	e1 ae 9e	SUNDANESE LETTER SA */
    {               0,           0 }, /* 1B9F	ᮟ	e1 ae 9f	SUNDANESE LETTER XA */
    {               0,           0 }, /* 1BA0	ᮠ	e1 ae a0	SUNDANESE LETTER HA */
    {               0,           0 }, /* 1BA1	ᮡ	e1 ae a1	SUNDANESE CONSONANT SIGN PAMINGKAL */
    {               0,           0 }, /* 1BA2	ᮢ	e1 ae a2	SUNDANESE CONSONANT SIGN PANYAKRA */
    {               0,           0 }, /* 1BA3	ᮣ	e1 ae a3	SUNDANESE CONSONANT SIGN PANYIKU */
    {               0,           0 }, /* 1BA4	ᮤ	e1 ae a4	SUNDANESE VOWEL SIGN PANGHULU */
    {               0,           0 }, /* 1BA5	ᮥ	e1 ae a5	SUNDANESE VOWEL SIGN PANYUKU */
    {               0,           0 }, /* 1BA6	ᮦ	e1 ae a6	SUNDANESE VOWEL SIGN PANAELAENG */
    {               0,           0 }, /* 1BA7	ᮧ	e1 ae a7	SUNDANESE VOWEL SIGN PANOLONG */
    {               0,           0 }, /* 1BA8	ᮨ	e1 ae a8	SUNDANESE VOWEL SIGN PAMEPET */
    {               0,           0 }, /* 1BA9	ᮩ	e1 ae a9	SUNDANESE VOWEL SIGN PANEULEUNG */
    {               0,           0 }, /* 1BAA	᮪	e1 ae aa	SUNDANESE SIGN PAMAAEH */
    {               0,           0 }, /* 1BAB	᮫	e1 ae ab	 */
    {               0,           0 }, /* 1BAC	ᮬ	e1 ae ac	 */
    {               0,           0 }, /* 1BAD	ᮭ	e1 ae ad	 */
    {               0,           0 }, /* 1BAE	ᮮ	e1 ae ae	SUNDANESE LETTER KHA */
    {               0,           0 }, /* 1BAF	ᮯ	e1 ae af	SUNDANESE LETTER SYA */
    {               0,           0 }, /* 1BB0	᮰	e1 ae b0	SUNDANESE DIGIT ZERO */
    {               0,           0 }, /* 1BB1	᮱	e1 ae b1	SUNDANESE DIGIT ONE */
    {               0,           0 }, /* 1BB2	᮲	e1 ae b2	SUNDANESE DIGIT TWO */
    {               0,           0 }, /* 1BB3	᮳	e1 ae b3	SUNDANESE DIGIT THREE */
    {               0,           0 }, /* 1BB4	᮴	e1 ae b4	SUNDANESE DIGIT FOUR */
    {               0,           0 }, /* 1BB5	᮵	e1 ae b5	SUNDANESE DIGIT FIVE */
    {               0,           0 }, /* 1BB6	᮶	e1 ae b6	SUNDANESE DIGIT SIX */
    {               0,           0 }, /* 1BB7	᮷	e1 ae b7	SUNDANESE DIGIT SEVEN */
    {               0,           0 }, /* 1BB8	᮸	e1 ae b8	SUNDANESE DIGIT EIGHT */
    {               0,           0 }, /* 1BB9	᮹	e1 ae b9	SUNDANESE DIGIT NINE */
    {               0,           0 }, /* 1BBA	ᮺ	e1 ae ba	 */
    {               0,           0 }, /* 1BBB	ᮻ	e1 ae bb	 */
    {               0,           0 }, /* 1BBC	ᮼ	e1 ae bc	 */
    {               0,           0 }, /* 1BBD	ᮽ	e1 ae bd	 */
    {               0,           0 }, /* 1BBE	ᮾ	e1 ae be	 */
    {               0,           0 }, /* 1BBF	ᮿ	e1 ae bf	 */
    {               0,           0 }, /* 1BC0	ᯀ	e1 af 80	BATAK LETTER A */
    {               0,           0 }, /* 1BC1	ᯁ	e1 af 81	BATAK LETTER SIMALUNGUN A */
    {               0,           0 }, /* 1BC2	ᯂ	e1 af 82	BATAK LETTER HA */
    {               0,           0 }, /* 1BC3	ᯃ	e1 af 83	BATAK LETTER SIMALUNGUN HA */
    {               0,           0 }, /* 1BC4	ᯄ	e1 af 84	BATAK LETTER MANDAILING HA */
    {               0,           0 }, /* 1BC5	ᯅ	e1 af 85	BATAK LETTER BA */
    {               0,           0 }, /* 1BC6	ᯆ	e1 af 86	BATAK LETTER KARO BA */
    {               0,           0 }, /* 1BC7	ᯇ	e1 af 87	BATAK LETTER PA */
    {               0,           0 }, /* 1BC8	ᯈ	e1 af 88	BATAK LETTER SIMALUNGUN PA */
    {               0,           0 }, /* 1BC9	ᯉ	e1 af 89	BATAK LETTER NA */
    {               0,           0 }, /* 1BCA	ᯊ	e1 af 8a	BATAK LETTER MANDAILING NA */
    {               0,           0 }, /* 1BCB	ᯋ	e1 af 8b	BATAK LETTER WA */
    {               0,           0 }, /* 1BCC	ᯌ	e1 af 8c	BATAK LETTER SIMALUNGUN WA */
    {               0,           0 }, /* 1BCD	ᯍ	e1 af 8d	BATAK LETTER PAKPAK WA */
    {               0,           0 }, /* 1BCE	ᯎ	e1 af 8e	BATAK LETTER GA */
    {               0,           0 }, /* 1BCF	ᯏ	e1 af 8f	BATAK LETTER SIMALUNGUN GA */
    {               0,           0 }, /* 1BD0	ᯐ	e1 af 90	BATAK LETTER JA */
    {               0,           0 }, /* 1BD1	ᯑ	e1 af 91	BATAK LETTER DA */
    {               0,           0 }, /* 1BD2	ᯒ	e1 af 92	BATAK LETTER RA */
    {               0,           0 }, /* 1BD3	ᯓ	e1 af 93	BATAK LETTER SIMALUNGUN RA */
    {               0,           0 }, /* 1BD4	ᯔ	e1 af 94	BATAK LETTER MA */
    {               0,           0 }, /* 1BD5	ᯕ	e1 af 95	BATAK LETTER SIMALUNGUN MA */
    {               0,           0 }, /* 1BD6	ᯖ	e1 af 96	BATAK LETTER SOUTHERN TA */
    {               0,           0 }, /* 1BD7	ᯗ	e1 af 97	BATAK LETTER NORTHERN TA */
    {               0,           0 }, /* 1BD8	ᯘ	e1 af 98	BATAK LETTER SA */
    {               0,           0 }, /* 1BD9	ᯙ	e1 af 99	BATAK LETTER SIMALUNGUN SA */
    {               0,           0 }, /* 1BDA	ᯚ	e1 af 9a	BATAK LETTER MANDAILING SA */
    {               0,           0 }, /* 1BDB	ᯛ	e1 af 9b	BATAK LETTER YA */
    {               0,           0 }, /* 1BDC	ᯜ	e1 af 9c	BATAK LETTER SIMALUNGUN YA */
    {               0,           0 }, /* 1BDD	ᯝ	e1 af 9d	BATAK LETTER NGA */
    {               0,           0 }, /* 1BDE	ᯞ	e1 af 9e	BATAK LETTER LA */
    {               0,           0 }, /* 1BDF	ᯟ	e1 af 9f	BATAK LETTER SIMALUNGUN LA */
    {               0,           0 }, /* 1BE0	ᯠ	e1 af a0	BATAK LETTER NYA */
    {               0,           0 }, /* 1BE1	ᯡ	e1 af a1	BATAK LETTER CA */
    {               0,           0 }, /* 1BE2	ᯢ	e1 af a2	BATAK LETTER NDA */
    {               0,           0 }, /* 1BE3	ᯣ	e1 af a3	BATAK LETTER MBA */
    {               0,           0 }, /* 1BE4	ᯤ	e1 af a4	BATAK LETTER I */
    {               0,           0 }, /* 1BE5	ᯥ	e1 af a5	BATAK LETTER U */
    {               0,           0 }, /* 1BE6	᯦	e1 af a6	BATAK SIGN TOMPI */
    {               0,           0 }, /* 1BE7	ᯧ	e1 af a7	BATAK VOWEL SIGN E */
    {               0,           0 }, /* 1BE8	ᯨ	e1 af a8	BATAK VOWEL SIGN PAKPAK E */
    {               0,           0 }, /* 1BE9	ᯩ	e1 af a9	BATAK VOWEL SIGN EE */
    {               0,           0 }, /* 1BEA	ᯪ	e1 af aa	BATAK VOWEL SIGN I */
    {               0,           0 }, /* 1BEB	ᯫ	e1 af ab	BATAK VOWEL SIGN KARO I */
    {               0,           0 }, /* 1BEC	ᯬ	e1 af ac	BATAK VOWEL SIGN O */
    {               0,           0 }, /* 1BED	ᯭ	e1 af ad	BATAK VOWEL SIGN KARO O */
    {               0,           0 }, /* 1BEE	ᯮ	e1 af ae	BATAK VOWEL SIGN U */
    {               0,           0 }, /* 1BEF	ᯯ	e1 af af	BATAK VOWEL SIGN U FOR SIMALUNGUN SA */
    {               0,           0 }, /* 1BF0	ᯰ	e1 af b0	BATAK CONSONANT SIGN NG */
    {               0,           0 }, /* 1BF1	ᯱ	e1 af b1	BATAK CONSONANT SIGN H */
    {               0,           0 }, /* 1BF2	᯲	e1 af b2	BATAK PANGOLAT */
    {               0,           0 }, /* 1BF3	᯳	e1 af b3	BATAK PANONGONAN */
    {               0,           0 }, /* 1BF4	᯴	e1 af b4	 */
    {               0,           0 }, /* 1BF5	᯵	e1 af b5	 */
    {               0,           0 }, /* 1BF6	᯶	e1 af b6	 */
    {               0,           0 }, /* 1BF7	᯷	e1 af b7	 */
    {               0,           0 }, /* 1BF8	᯸	e1 af b8	 */
    {               0,           0 }, /* 1BF9	᯹	e1 af b9	 */
    {               0,           0 }, /* 1BFA	᯺	e1 af ba	 */
    {               0,           0 }, /* 1BFB	᯻	e1 af bb	 */
    {               0,           0 }, /* 1BFC	᯼	e1 af bc	BATAK SYMBOL BINDU NA METEK */
    {               0,           0 }, /* 1BFD	᯽	e1 af bd	BATAK SYMBOL BINDU PINARBORAS */
    {               0,           0 }, /* 1BFE	᯾	e1 af be	BATAK SYMBOL BINDU JUDUL */
    {               0,           0 }, /* 1BFF	᯿	e1 af bf	BATAK SYMBOL BINDU PANGOLAT */
    {               0,           0 }, /* 1C00	ᰀ	e1 b0 80	LEPCHA LETTER KA */
    {               0,           0 }, /* 1C01	ᰁ	e1 b0 81	LEPCHA LETTER KLA */
    {               0,           0 }, /* 1C02	ᰂ	e1 b0 82	LEPCHA LETTER KHA */
    {               0,           0 }, /* 1C03	ᰃ	e1 b0 83	LEPCHA LETTER GA */
    {               0,           0 }, /* 1C04	ᰄ	e1 b0 84	LEPCHA LETTER GLA */
    {               0,           0 }, /* 1C05	ᰅ	e1 b0 85	LEPCHA LETTER NGA */
    {               0,           0 }, /* 1C06	ᰆ	e1 b0 86	LEPCHA LETTER CA */
    {               0,           0 }, /* 1C07	ᰇ	e1 b0 87	LEPCHA LETTER CHA */
    {               0,           0 }, /* 1C08	ᰈ	e1 b0 88	LEPCHA LETTER JA */
    {               0,           0 }, /* 1C09	ᰉ	e1 b0 89	LEPCHA LETTER NYA */
    {               0,           0 }, /* 1C0A	ᰊ	e1 b0 8a	LEPCHA LETTER TA */
    {               0,           0 }, /* 1C0B	ᰋ	e1 b0 8b	LEPCHA LETTER THA */
    {               0,           0 }, /* 1C0C	ᰌ	e1 b0 8c	LEPCHA LETTER DA */
    {               0,           0 }, /* 1C0D	ᰍ	e1 b0 8d	LEPCHA LETTER NA */
    {               0,           0 }, /* 1C0E	ᰎ	e1 b0 8e	LEPCHA LETTER PA */
    {               0,           0 }, /* 1C0F	ᰏ	e1 b0 8f	LEPCHA LETTER PLA */
    {               0,           0 }, /* 1C10	ᰐ	e1 b0 90	LEPCHA LETTER PHA */
    {               0,           0 }, /* 1C11	ᰑ	e1 b0 91	LEPCHA LETTER FA */
    {               0,           0 }, /* 1C12	ᰒ	e1 b0 92	LEPCHA LETTER FLA */
    {               0,           0 }, /* 1C13	ᰓ	e1 b0 93	LEPCHA LETTER BA */
    {               0,           0 }, /* 1C14	ᰔ	e1 b0 94	LEPCHA LETTER BLA */
    {               0,           0 }, /* 1C15	ᰕ	e1 b0 95	LEPCHA LETTER MA */
    {               0,           0 }, /* 1C16	ᰖ	e1 b0 96	LEPCHA LETTER MLA */
    {               0,           0 }, /* 1C17	ᰗ	e1 b0 97	LEPCHA LETTER TSA */
    {               0,           0 }, /* 1C18	ᰘ	e1 b0 98	LEPCHA LETTER TSHA */
    {               0,           0 }, /* 1C19	ᰙ	e1 b0 99	LEPCHA LETTER DZA */
    {               0,           0 }, /* 1C1A	ᰚ	e1 b0 9a	LEPCHA LETTER YA */
    {               0,           0 }, /* 1C1B	ᰛ	e1 b0 9b	LEPCHA LETTER RA */
    {               0,           0 }, /* 1C1C	ᰜ	e1 b0 9c	LEPCHA LETTER LA */
    {               0,           0 }, /* 1C1D	ᰝ	e1 b0 9d	LEPCHA LETTER HA */
    {               0,           0 }, /* 1C1E	ᰞ	e1 b0 9e	LEPCHA LETTER HLA */
    {               0,           0 }, /* 1C1F	ᰟ	e1 b0 9f	LEPCHA LETTER VA */
    {               0,           0 }, /* 1C20	ᰠ	e1 b0 a0	LEPCHA LETTER SA */
    {               0,           0 }, /* 1C21	ᰡ	e1 b0 a1	LEPCHA LETTER SHA */
    {               0,           0 }, /* 1C22	ᰢ	e1 b0 a2	LEPCHA LETTER WA */
    {               0,           0 }, /* 1C23	ᰣ	e1 b0 a3	LEPCHA LETTER A */
    {               0,           0 }, /* 1C24	ᰤ	e1 b0 a4	LEPCHA SUBJOINED LETTER YA */
    {               0,           0 }, /* 1C25	ᰥ	e1 b0 a5	LEPCHA SUBJOINED LETTER RA */
    {               0,           0 }, /* 1C26	ᰦ	e1 b0 a6	LEPCHA VOWEL SIGN AA */
    {               0,           0 }, /* 1C27	ᰧ	e1 b0 a7	LEPCHA VOWEL SIGN I */
    {               0,           0 }, /* 1C28	ᰨ	e1 b0 a8	LEPCHA VOWEL SIGN O */
    {               0,           0 }, /* 1C29	ᰩ	e1 b0 a9	LEPCHA VOWEL SIGN OO */
    {               0,           0 }, /* 1C2A	ᰪ	e1 b0 aa	LEPCHA VOWEL SIGN U */
    {               0,           0 }, /* 1C2B	ᰫ	e1 b0 ab	LEPCHA VOWEL SIGN UU */
    {               0,           0 }, /* 1C2C	ᰬ	e1 b0 ac	LEPCHA VOWEL SIGN E */
    {               0,           0 }, /* 1C2D	ᰭ	e1 b0 ad	LEPCHA CONSONANT SIGN K */
    {               0,           0 }, /* 1C2E	ᰮ	e1 b0 ae	LEPCHA CONSONANT SIGN M */
    {               0,           0 }, /* 1C2F	ᰯ	e1 b0 af	LEPCHA CONSONANT SIGN L */
    {               0,           0 }, /* 1C30	ᰰ	e1 b0 b0	LEPCHA CONSONANT SIGN N */
    {               0,           0 }, /* 1C31	ᰱ	e1 b0 b1	LEPCHA CONSONANT SIGN P */
    {               0,           0 }, /* 1C32	ᰲ	e1 b0 b2	LEPCHA CONSONANT SIGN R */
    {               0,           0 }, /* 1C33	ᰳ	e1 b0 b3	LEPCHA CONSONANT SIGN T */
    {               0,           0 }, /* 1C34	ᰴ	e1 b0 b4	LEPCHA CONSONANT SIGN NYIN-DO */
    {               0,           0 }, /* 1C35	ᰵ	e1 b0 b5	LEPCHA CONSONANT SIGN KANG */
    {               0,           0 }, /* 1C36	ᰶ	e1 b0 b6	LEPCHA SIGN RAN */
    {               0,           0 }, /* 1C37	᰷	e1 b0 b7	LEPCHA SIGN NUKTA */
    {               0,           0 }, /* 1C38	᰸	e1 b0 b8	 */
    {               0,           0 }, /* 1C39	᰹	e1 b0 b9	 */
    {               0,           0 }, /* 1C3A	᰺	e1 b0 ba	 */
    {               0,           0 }, /* 1C3B	᰻	e1 b0 bb	LEPCHA PUNCTUATION TA-ROL */
    {               0,           0 }, /* 1C3C	᰼	e1 b0 bc	LEPCHA PUNCTUATION NYET THYOOM TA-ROL */
    {               0,           0 }, /* 1C3D	᰽	e1 b0 bd	LEPCHA PUNCTUATION CER-WA */
    {               0,           0 }, /* 1C3E	᰾	e1 b0 be	LEPCHA PUNCTUATION TSHOOK CER-WA */
    {               0,           0 }, /* 1C3F	᰿	e1 b0 bf	LEPCHA PUNCTUATION TSHOOK */
    {               0,           0 }, /* 1C40	᱀	e1 b1 80	LEPCHA DIGIT ZERO */
    {               0,           0 }, /* 1C41	᱁	e1 b1 81	LEPCHA DIGIT ONE */
    {               0,           0 }, /* 1C42	᱂	e1 b1 82	LEPCHA DIGIT TWO */
    {               0,           0 }, /* 1C43	᱃	e1 b1 83	LEPCHA DIGIT THREE */
    {               0,           0 }, /* 1C44	᱄	e1 b1 84	LEPCHA DIGIT FOUR */
    {               0,           0 }, /* 1C45	᱅	e1 b1 85	LEPCHA DIGIT FIVE */
    {               0,           0 }, /* 1C46	᱆	e1 b1 86	LEPCHA DIGIT SIX */
    {               0,           0 }, /* 1C47	᱇	e1 b1 87	LEPCHA DIGIT SEVEN */
    {               0,           0 }, /* 1C48	᱈	e1 b1 88	LEPCHA DIGIT EIGHT */
    {               0,           0 }, /* 1C49	᱉	e1 b1 89	LEPCHA DIGIT NINE */
    {               0,           0 }, /* 1C4A	᱊	e1 b1 8a	 */
    {               0,           0 }, /* 1C4B	᱋	e1 b1 8b	 */
    {               0,           0 }, /* 1C4C	᱌	e1 b1 8c	 */
    {               0,           0 }, /* 1C4D	ᱍ	e1 b1 8d	LEPCHA LETTER TTA */
    {               0,           0 }, /* 1C4E	ᱎ	e1 b1 8e	LEPCHA LETTER TTHA */
    {               0,           0 }, /* 1C4F	ᱏ	e1 b1 8f	LEPCHA LETTER DDA */
    {               0,           0 }, /* 1C50	᱐	e1 b1 90	OL CHIKI DIGIT ZERO */
    {               0,           0 }, /* 1C51	᱑	e1 b1 91	OL CHIKI DIGIT ONE */
    {               0,           0 }, /* 1C52	᱒	e1 b1 92	OL CHIKI DIGIT TWO */
    {               0,           0 }, /* 1C53	᱓	e1 b1 93	OL CHIKI DIGIT THREE */
    {               0,           0 }, /* 1C54	᱔	e1 b1 94	OL CHIKI DIGIT FOUR */
    {               0,           0 }, /* 1C55	᱕	e1 b1 95	OL CHIKI DIGIT FIVE */
    {               0,           0 }, /* 1C56	᱖	e1 b1 96	OL CHIKI DIGIT SIX */
    {               0,           0 }, /* 1C57	᱗	e1 b1 97	OL CHIKI DIGIT SEVEN */
    {               0,           0 }, /* 1C58	᱘	e1 b1 98	OL CHIKI DIGIT EIGHT */
    {               0,           0 }, /* 1C59	᱙	e1 b1 99	OL CHIKI DIGIT NINE */
    {               0,           0 }, /* 1C5A	ᱚ	e1 b1 9a	OL CHIKI LETTER LA */
    {               0,           0 }, /* 1C5B	ᱛ	e1 b1 9b	OL CHIKI LETTER AT */
    {               0,           0 }, /* 1C5C	ᱜ	e1 b1 9c	OL CHIKI LETTER AG */
    {               0,           0 }, /* 1C5D	ᱝ	e1 b1 9d	OL CHIKI LETTER ANG */
    {               0,           0 }, /* 1C5E	ᱞ	e1 b1 9e	OL CHIKI LETTER AL */
    {               0,           0 }, /* 1C5F	ᱟ	e1 b1 9f	OL CHIKI LETTER LAA */
    {               0,           0 }, /* 1C60	ᱠ	e1 b1 a0	OL CHIKI LETTER AAK */
    {               0,           0 }, /* 1C61	ᱡ	e1 b1 a1	OL CHIKI LETTER AAJ */
    {               0,           0 }, /* 1C62	ᱢ	e1 b1 a2	OL CHIKI LETTER AAM */
    {               0,           0 }, /* 1C63	ᱣ	e1 b1 a3	OL CHIKI LETTER AAW */
    {               0,           0 }, /* 1C64	ᱤ	e1 b1 a4	OL CHIKI LETTER LI */
    {               0,           0 }, /* 1C65	ᱥ	e1 b1 a5	OL CHIKI LETTER IS */
    {               0,           0 }, /* 1C66	ᱦ	e1 b1 a6	OL CHIKI LETTER IH */
    {               0,           0 }, /* 1C67	ᱧ	e1 b1 a7	OL CHIKI LETTER INY */
    {               0,           0 }, /* 1C68	ᱨ	e1 b1 a8	OL CHIKI LETTER IR */
    {               0,           0 }, /* 1C69	ᱩ	e1 b1 a9	OL CHIKI LETTER LU */
    {               0,           0 }, /* 1C6A	ᱪ	e1 b1 aa	OL CHIKI LETTER UC */
    {               0,           0 }, /* 1C6B	ᱫ	e1 b1 ab	OL CHIKI LETTER UD */
    {               0,           0 }, /* 1C6C	ᱬ	e1 b1 ac	OL CHIKI LETTER UNN */
    {               0,           0 }, /* 1C6D	ᱭ	e1 b1 ad	OL CHIKI LETTER UY */
    {               0,           0 }, /* 1C6E	ᱮ	e1 b1 ae	OL CHIKI LETTER LE */
    {               0,           0 }, /* 1C6F	ᱯ	e1 b1 af	OL CHIKI LETTER EP */
    {               0,           0 }, /* 1C70	ᱰ	e1 b1 b0	OL CHIKI LETTER EDD */
    {               0,           0 }, /* 1C71	ᱱ	e1 b1 b1	OL CHIKI LETTER EN */
    {               0,           0 }, /* 1C72	ᱲ	e1 b1 b2	OL CHIKI LETTER ERR */
    {               0,           0 }, /* 1C73	ᱳ	e1 b1 b3	OL CHIKI LETTER LO */
    {               0,           0 }, /* 1C74	ᱴ	e1 b1 b4	OL CHIKI LETTER OTT */
    {               0,           0 }, /* 1C75	ᱵ	e1 b1 b5	OL CHIKI LETTER OB */
    {               0,           0 }, /* 1C76	ᱶ	e1 b1 b6	OL CHIKI LETTER OV */
    {               0,           0 }, /* 1C77	ᱷ	e1 b1 b7	OL CHIKI LETTER OH */
    {               0,           0 }, /* 1C78	ᱸ	e1 b1 b8	OL CHIKI MU TTUDDAG */
    {               0,           0 }, /* 1C79	ᱹ	e1 b1 b9	OL CHIKI GAAHLAA TTUDDAAG */
    {               0,           0 }, /* 1C7A	ᱺ	e1 b1 ba	OL CHIKI MU-GAAHLAA TTUDDAAG */
    {               0,           0 }, /* 1C7B	ᱻ	e1 b1 bb	OL CHIKI RELAA */
    {               0,           0 }, /* 1C7C	ᱼ	e1 b1 bc	OL CHIKI PHAARKAA */
    {               0,           0 }, /* 1C7D	ᱽ	e1 b1 bd	OL CHIKI AHAD */
    {               0,           0 }, /* 1C7E	᱾	e1 b1 be	OL CHIKI PUNCTUATION MUCAAD */
    {               0,           0 }, /* 1C7F	᱿	e1 b1 bf	OL CHIKI PUNCTUATION DOUBLE MUCAAD */
    {               0,           0 }, /* 1C80	ᲀ	e1 b2 80	 */
    {               0,           0 }, /* 1C81	ᲁ	e1 b2 81	 */
    {               0,           0 }, /* 1C82	ᲂ	e1 b2 82	 */
    {               0,           0 }, /* 1C83	ᲃ	e1 b2 83	 */
    {               0,           0 }, /* 1C84	ᲄ	e1 b2 84	 */
    {               0,           0 }, /* 1C85	ᲅ	e1 b2 85	 */
    {               0,           0 }, /* 1C86	ᲆ	e1 b2 86	 */
    {               0,           0 }, /* 1C87	ᲇ	e1 b2 87	 */
    {               0,           0 }, /* 1C88	ᲈ	e1 b2 88	 */
    {               0,           0 }, /* 1C89	Ᲊ	e1 b2 89	 */
    {               0,           0 }, /* 1C8A	ᲊ	e1 b2 8a	 */
    {               0,           0 }, /* 1C8B	᲋	e1 b2 8b	 */
    {               0,           0 }, /* 1C8C	᲌	e1 b2 8c	 */
    {               0,           0 }, /* 1C8D	᲍	e1 b2 8d	 */
    {               0,           0 }, /* 1C8E	᲎	e1 b2 8e	 */
    {               0,           0 }, /* 1C8F	᲏	e1 b2 8f	 */
    {               0,           0 }, /* 1C90	Ა	e1 b2 90	 */
    {               0,           0 }, /* 1C91	Ბ	e1 b2 91	 */
    {               0,           0 }, /* 1C92	Გ	e1 b2 92	 */
    {               0,           0 }, /* 1C93	Დ	e1 b2 93	 */
    {               0,           0 }, /* 1C94	Ე	e1 b2 94	 */
    {               0,           0 }, /* 1C95	Ვ	e1 b2 95	 */
    {               0,           0 }, /* 1C96	Ზ	e1 b2 96	 */
    {               0,           0 }, /* 1C97	Თ	e1 b2 97	 */
    {               0,           0 }, /* 1C98	Ი	e1 b2 98	 */
    {               0,           0 }, /* 1C99	Კ	e1 b2 99	 */
    {               0,           0 }, /* 1C9A	Ლ	e1 b2 9a	 */
    {               0,           0 }, /* 1C9B	Მ	e1 b2 9b	 */
    {               0,           0 }, /* 1C9C	Ნ	e1 b2 9c	 */
    {               0,           0 }, /* 1C9D	Ო	e1 b2 9d	 */
    {               0,           0 }, /* 1C9E	Პ	e1 b2 9e	 */
    {               0,           0 }, /* 1C9F	Ჟ	e1 b2 9f	 */
    {               0,           0 }, /* 1CA0	Რ	e1 b2 a0	 */
    {               0,           0 }, /* 1CA1	Ს	e1 b2 a1	 */
    {               0,           0 }, /* 1CA2	Ტ	e1 b2 a2	 */
    {               0,           0 }, /* 1CA3	Უ	e1 b2 a3	 */
    {               0,           0 }, /* 1CA4	Ფ	e1 b2 a4	 */
    {               0,           0 }, /* 1CA5	Ქ	e1 b2 a5	 */
    {               0,           0 }, /* 1CA6	Ღ	e1 b2 a6	 */
    {               0,           0 }, /* 1CA7	Ყ	e1 b2 a7	 */
    {               0,           0 }, /* 1CA8	Შ	e1 b2 a8	 */
    {               0,           0 }, /* 1CA9	Ჩ	e1 b2 a9	 */
    {               0,           0 }, /* 1CAA	Ც	e1 b2 aa	 */
    {               0,           0 }, /* 1CAB	Ძ	e1 b2 ab	 */
    {               0,           0 }, /* 1CAC	Წ	e1 b2 ac	 */
    {               0,           0 }, /* 1CAD	Ჭ	e1 b2 ad	 */
    {               0,           0 }, /* 1CAE	Ხ	e1 b2 ae	 */
    {               0,           0 }, /* 1CAF	Ჯ	e1 b2 af	 */
    {               0,           0 }, /* 1CB0	Ჰ	e1 b2 b0	 */
    {               0,           0 }, /* 1CB1	Ჱ	e1 b2 b1	 */
    {               0,           0 }, /* 1CB2	Ჲ	e1 b2 b2	 */
    {               0,           0 }, /* 1CB3	Ჳ	e1 b2 b3	 */
    {               0,           0 }, /* 1CB4	Ჴ	e1 b2 b4	 */
    {               0,           0 }, /* 1CB5	Ჵ	e1 b2 b5	 */
    {               0,           0 }, /* 1CB6	Ჶ	e1 b2 b6	 */
    {               0,           0 }, /* 1CB7	Ჷ	e1 b2 b7	 */
    {               0,           0 }, /* 1CB8	Ჸ	e1 b2 b8	 */
    {               0,           0 }, /* 1CB9	Ჹ	e1 b2 b9	 */
    {               0,           0 }, /* 1CBA	Ჺ	e1 b2 ba	 */
    {               0,           0 }, /* 1CBB	᲻	e1 b2 bb	 */
    {               0,           0 }, /* 1CBC	᲼	e1 b2 bc	 */
    {               0,           0 }, /* 1CBD	Ჽ	e1 b2 bd	 */
    {               0,           0 }, /* 1CBE	Ჾ	e1 b2 be	 */
    {               0,           0 }, /* 1CBF	Ჿ	e1 b2 bf	 */
    {               0,           0 }, /* 1CC0	᳀	e1 b3 80	 */
    {               0,           0 }, /* 1CC1	᳁	e1 b3 81	 */
    {               0,           0 }, /* 1CC2	᳂	e1 b3 82	 */
    {               0,           0 }, /* 1CC3	᳃	e1 b3 83	 */
    {               0,           0 }, /* 1CC4	᳄	e1 b3 84	 */
    {               0,           0 }, /* 1CC5	᳅	e1 b3 85	 */
    {               0,           0 }, /* 1CC6	᳆	e1 b3 86	 */
    {               0,           0 }, /* 1CC7	᳇	e1 b3 87	 */
    {               0,           0 }, /* 1CC8	᳈	e1 b3 88	 */
    {               0,           0 }, /* 1CC9	᳉	e1 b3 89	 */
    {               0,           0 }, /* 1CCA	᳊	e1 b3 8a	 */
    {               0,           0 }, /* 1CCB	᳋	e1 b3 8b	 */
    {               0,           0 }, /* 1CCC	᳌	e1 b3 8c	 */
    {               0,           0 }, /* 1CCD	᳍	e1 b3 8d	 */
    {               0,           0 }, /* 1CCE	᳎	e1 b3 8e	 */
    {               0,           0 }, /* 1CCF	᳏	e1 b3 8f	 */
    {               0,           0 }, /* 1CD0	᳐	e1 b3 90	VEDIC TONE KARSHANA */
    {               0,           0 }, /* 1CD1	᳑	e1 b3 91	VEDIC TONE SHARA */
    {               0,           0 }, /* 1CD2	᳒	e1 b3 92	VEDIC TONE PRENKHA */
    {               0,           0 }, /* 1CD3	᳓	e1 b3 93	VEDIC SIGN NIHSHVASA */
    {               0,           0 }, /* 1CD4	᳔	e1 b3 94	VEDIC SIGN YAJURVEDIC MIDLINE SVARITA */
    {               0,           0 }, /* 1CD5	᳕	e1 b3 95	VEDIC TONE YAJURVEDIC AGGRAVATED INDEPENDENT SVARITA */
    {               0,           0 }, /* 1CD6	᳖	e1 b3 96	VEDIC TONE YAJURVEDIC INDEPENDENT SVARITA */
    {               0,           0 }, /* 1CD7	᳗	e1 b3 97	VEDIC TONE YAJURVEDIC KATHAKA INDEPENDENT SVARITA */
    {               0,           0 }, /* 1CD8	᳘	e1 b3 98	VEDIC TONE CANDRA BELOW */
    {               0,           0 }, /* 1CD9	᳙	e1 b3 99	VEDIC TONE YAJURVEDIC KATHAKA INDEPENDENT SVARITA SCHROEDER */
    {               0,           0 }, /* 1CDA	᳚	e1 b3 9a	VEDIC TONE DOUBLE SVARITA */
    {               0,           0 }, /* 1CDB	᳛	e1 b3 9b	VEDIC TONE TRIPLE SVARITA */
    {               0,           0 }, /* 1CDC	᳜	e1 b3 9c	VEDIC TONE KATHAKA ANUDATTA */
    {               0,           0 }, /* 1CDD	᳝	e1 b3 9d	VEDIC TONE DOT BELOW */
    {               0,           0 }, /* 1CDE	᳞	e1 b3 9e	VEDIC TONE TWO DOTS BELOW */
    {               0,           0 }, /* 1CDF	᳟	e1 b3 9f	VEDIC TONE THREE DOTS BELOW */
    {               0,           0 }, /* 1CE0	᳠	e1 b3 a0	VEDIC TONE RIGVEDIC KASHMIRI INDEPENDENT SVARITA */
    {               0,           0 }, /* 1CE1	᳡	e1 b3 a1	VEDIC TONE ATHARVAVEDIC INDEPENDENT SVARITA */
    {               0,           0 }, /* 1CE2	᳢	e1 b3 a2	VEDIC SIGN VISARGA SVARITA */
    {               0,           0 }, /* 1CE3	᳣	e1 b3 a3	VEDIC SIGN VISARGA UDATTA */
    {               0,           0 }, /* 1CE4	᳤	e1 b3 a4	VEDIC SIGN REVERSED VISARGA UDATTA */
    {               0,           0 }, /* 1CE5	᳥	e1 b3 a5	VEDIC SIGN VISARGA ANUDATTA */
    {               0,           0 }, /* 1CE6	᳦	e1 b3 a6	VEDIC SIGN REVERSED VISARGA ANUDATTA */
    {               0,           0 }, /* 1CE7	᳧	e1 b3 a7	VEDIC SIGN VISARGA UDATTA WITH TAIL */
    {               0,           0 }, /* 1CE8	᳨	e1 b3 a8	VEDIC SIGN VISARGA ANUDATTA WITH TAIL */
    {               0,           0 }, /* 1CE9	ᳩ	e1 b3 a9	VEDIC SIGN ANUSVARA ANTARGOMUKHA */
    {               0,           0 }, /* 1CEA	ᳪ	e1 b3 aa	VEDIC SIGN ANUSVARA BAHIRGOMUKHA */
    {               0,           0 }, /* 1CEB	ᳫ	e1 b3 ab	VEDIC SIGN ANUSVARA VAMAGOMUKHA */
    {               0,           0 }, /* 1CEC	ᳬ	e1 b3 ac	VEDIC SIGN ANUSVARA VAMAGOMUKHA WITH TAIL */
    {               0,           0 }, /* 1CED	᳭	e1 b3 ad	VEDIC SIGN TIRYAK */
    {               0,           0 }, /* 1CEE	ᳮ	e1 b3 ae	VEDIC SIGN HEXIFORM LONG ANUSVARA */
    {               0,           0 }, /* 1CEF	ᳯ	e1 b3 af	VEDIC SIGN LONG ANUSVARA */
    {               0,           0 }, /* 1CF0	ᳰ	e1 b3 b0	VEDIC SIGN RTHANG LONG ANUSVARA */
    {               0,           0 }, /* 1CF1	ᳱ	e1 b3 b1	VEDIC SIGN ANUSVARA UBHAYATO MUKHA */
    {               0,           0 }, /* 1CF2	ᳲ	e1 b3 b2	VEDIC SIGN ARDHAVISARGA */
    {               0,           0 }, /* 1CF3	ᳳ	e1 b3 b3	 */
    {               0,           0 }, /* 1CF4	᳴	e1 b3 b4	 */
    {               0,           0 }, /* 1CF5	ᳵ	e1 b3 b5	 */
    {               0,           0 }, /* 1CF6	ᳶ	e1 b3 b6	 */
    {               0,           0 }, /* 1CF7	᳷	e1 b3 b7	 */
    {               0,           0 }, /* 1CF8	᳸	e1 b3 b8	 */
    {               0,           0 }, /* 1CF9	᳹	e1 b3 b9	 */
    {               0,           0 }, /* 1CFA	ᳺ	e1 b3 ba	 */
    {               0,           0 }, /* 1CFB	᳻	e1 b3 bb	 */
    {               0,           0 }, /* 1CFC	᳼	e1 b3 bc	 */
    {               0,           0 }, /* 1CFD	᳽	e1 b3 bd	 */
    {               0,           0 }, /* 1CFE	᳾	e1 b3 be	 */
    {               0,           0 }, /* 1CFF	᳿	e1 b3 bf	 */
    {               0,           0 }, /* 1D00	ᴀ	e1 b4 80	LATIN LETTER SMALL CAPITAL A */
    {               0,           0 }, /* 1D01	ᴁ	e1 b4 81	LATIN LETTER SMALL CAPITAL AE */
    {               0,           0 }, /* 1D02	ᴂ	e1 b4 82	LATIN SMALL LETTER TURNED AE */
    {               0,           0 }, /* 1D03	ᴃ	e1 b4 83	LATIN LETTER SMALL CAPITAL BARRED B */
    {               0,           0 }, /* 1D04	ᴄ	e1 b4 84	LATIN LETTER SMALL CAPITAL C */
    {               0,           0 }, /* 1D05	ᴅ	e1 b4 85	LATIN LETTER SMALL CAPITAL D */
    {               0,           0 }, /* 1D06	ᴆ	e1 b4 86	LATIN LETTER SMALL CAPITAL ETH */
    {               0,           0 }, /* 1D07	ᴇ	e1 b4 87	LATIN LETTER SMALL CAPITAL E */
    {               0,           0 }, /* 1D08	ᴈ	e1 b4 88	LATIN SMALL LETTER TURNED OPEN E */
    {               0,           0 }, /* 1D09	ᴉ	e1 b4 89	LATIN SMALL LETTER TURNED I */
    {               0,           0 }, /* 1D0A	ᴊ	e1 b4 8a	LATIN LETTER SMALL CAPITAL J */
    {               0,           0 }, /* 1D0B	ᴋ	e1 b4 8b	LATIN LETTER SMALL CAPITAL K */
    {               0,           0 }, /* 1D0C	ᴌ	e1 b4 8c	LATIN LETTER SMALL CAPITAL L WITH STROKE */
    {               0,           0 }, /* 1D0D	ᴍ	e1 b4 8d	LATIN LETTER SMALL CAPITAL M */
    {               0,           0 }, /* 1D0E	ᴎ	e1 b4 8e	LATIN LETTER SMALL CAPITAL REVERSED N */
    {               0,           0 }, /* 1D0F	ᴏ	e1 b4 8f	LATIN LETTER SMALL CAPITAL O */
    {               0,           0 }, /* 1D10	ᴐ	e1 b4 90	LATIN LETTER SMALL CAPITAL OPEN O */
    {               0,           0 }, /* 1D11	ᴑ	e1 b4 91	LATIN SMALL LETTER SIDEWAYS O */
    {               0,           0 }, /* 1D12	ᴒ	e1 b4 92	LATIN SMALL LETTER SIDEWAYS OPEN O */
    {               0,           0 }, /* 1D13	ᴓ	e1 b4 93	LATIN SMALL LETTER SIDEWAYS O WITH STROKE */
    {               0,           0 }, /* 1D14	ᴔ	e1 b4 94	LATIN SMALL LETTER TURNED OE */
    {               0,           0 }, /* 1D15	ᴕ	e1 b4 95	LATIN LETTER SMALL CAPITAL OU */
    {               0,           0 }, /* 1D16	ᴖ	e1 b4 96	LATIN SMALL LETTER TOP HALF O */
    {               0,           0 }, /* 1D17	ᴗ	e1 b4 97	LATIN SMALL LETTER BOTTOM HALF O */
    {               0,           0 }, /* 1D18	ᴘ	e1 b4 98	LATIN LETTER SMALL CAPITAL P */
    {               0,           0 }, /* 1D19	ᴙ	e1 b4 99	LATIN LETTER SMALL CAPITAL REVERSED R */
    {               0,           0 }, /* 1D1A	ᴚ	e1 b4 9a	LATIN LETTER SMALL CAPITAL TURNED R */
    {               0,           0 }, /* 1D1B	ᴛ	e1 b4 9b	LATIN LETTER SMALL CAPITAL T */
    {               0,           0 }, /* 1D1C	ᴜ	e1 b4 9c	LATIN LETTER SMALL CAPITAL U */
    {               0,           0 }, /* 1D1D	ᴝ	e1 b4 9d	LATIN SMALL LETTER SIDEWAYS U */
    {               0,           0 }, /* 1D1E	ᴞ	e1 b4 9e	LATIN SMALL LETTER SIDEWAYS DIAERESIZED U */
    {               0,           0 }, /* 1D1F	ᴟ	e1 b4 9f	LATIN SMALL LETTER SIDEWAYS TURNED M */
    {               0,           0 }, /* 1D20	ᴠ	e1 b4 a0	LATIN LETTER SMALL CAPITAL V */
    {               0,           0 }, /* 1D21	ᴡ	e1 b4 a1	LATIN LETTER SMALL CAPITAL W */
    {               0,           0 }, /* 1D22	ᴢ	e1 b4 a2	LATIN LETTER SMALL CAPITAL Z */
    {               0,           0 }, /* 1D23	ᴣ	e1 b4 a3	LATIN LETTER SMALL CAPITAL EZH */
    {               0,           0 }, /* 1D24	ᴤ	e1 b4 a4	LATIN LETTER VOICED LARYNGEAL SPIRANT */
    {               0,           0 }, /* 1D25	ᴥ	e1 b4 a5	LATIN LETTER AIN */
    {               0,           0 }, /* 1D26	ᴦ	e1 b4 a6	GREEK LETTER SMALL CAPITAL GAMMA */
    {               0,           0 }, /* 1D27	ᴧ	e1 b4 a7	GREEK LETTER SMALL CAPITAL LAMDA */
    {               0,           0 }, /* 1D28	ᴨ	e1 b4 a8	GREEK LETTER SMALL CAPITAL PI */
    {               0,           0 }, /* 1D29	ᴩ	e1 b4 a9	GREEK LETTER SMALL CAPITAL RHO */
    {               0,           0 }, /* 1D2A	ᴪ	e1 b4 aa	GREEK LETTER SMALL CAPITAL PSI */
    {               0,           0 }, /* 1D2B	ᴫ	e1 b4 ab	CYRILLIC LETTER SMALL CAPITAL EL */
    {               0,           0 }, /* 1D2C	ᴬ	e1 b4 ac	MODIFIER LETTER CAPITAL A */
    {               0,           0 }, /* 1D2D	ᴭ	e1 b4 ad	MODIFIER LETTER CAPITAL AE */
    {               0,           0 }, /* 1D2E	ᴮ	e1 b4 ae	MODIFIER LETTER CAPITAL B */
    {               0,           0 }, /* 1D2F	ᴯ	e1 b4 af	MODIFIER LETTER CAPITAL BARRED B */
    {               0,           0 }, /* 1D30	ᴰ	e1 b4 b0	MODIFIER LETTER CAPITAL D */
    {               0,           0 }, /* 1D31	ᴱ	e1 b4 b1	MODIFIER LETTER CAPITAL E */
    {               0,           0 }, /* 1D32	ᴲ	e1 b4 b2	MODIFIER LETTER CAPITAL REVERSED E */
    {               0,           0 }, /* 1D33	ᴳ	e1 b4 b3	MODIFIER LETTER CAPITAL G */
    {               0,           0 }, /* 1D34	ᴴ	e1 b4 b4	MODIFIER LETTER CAPITAL H */
    {               0,           0 }, /* 1D35	ᴵ	e1 b4 b5	MODIFIER LETTER CAPITAL I */
    {               0,           0 }, /* 1D36	ᴶ	e1 b4 b6	MODIFIER LETTER CAPITAL J */
    {               0,           0 }, /* 1D37	ᴷ	e1 b4 b7	MODIFIER LETTER CAPITAL K */
    {               0,           0 }, /* 1D38	ᴸ	e1 b4 b8	MODIFIER LETTER CAPITAL L */
    {               0,           0 }, /* 1D39	ᴹ	e1 b4 b9	MODIFIER LETTER CAPITAL M */
    {               0,           0 }, /* 1D3A	ᴺ	e1 b4 ba	MODIFIER LETTER CAPITAL N */
    {               0,           0 }, /* 1D3B	ᴻ	e1 b4 bb	MODIFIER LETTER CAPITAL REVERSED N */
    {               0,           0 }, /* 1D3C	ᴼ	e1 b4 bc	MODIFIER LETTER CAPITAL O */
    {               0,           0 }, /* 1D3D	ᴽ	e1 b4 bd	MODIFIER LETTER CAPITAL OU */
    {               0,           0 }, /* 1D3E	ᴾ	e1 b4 be	MODIFIER LETTER CAPITAL P */
    {               0,           0 }, /* 1D3F	ᴿ	e1 b4 bf	MODIFIER LETTER CAPITAL R */
    {               0,           0 }, /* 1D40	ᵀ	e1 b5 80	MODIFIER LETTER CAPITAL T */
    {               0,           0 }, /* 1D41	ᵁ	e1 b5 81	MODIFIER LETTER CAPITAL U */
    {               0,           0 }, /* 1D42	ᵂ	e1 b5 82	MODIFIER LETTER CAPITAL W */
    {               0,           0 }, /* 1D43	ᵃ	e1 b5 83	MODIFIER LETTER SMALL A */
    {               0,           0 }, /* 1D44	ᵄ	e1 b5 84	MODIFIER LETTER SMALL TURNED A */
    {               0,           0 }, /* 1D45	ᵅ	e1 b5 85	MODIFIER LETTER SMALL ALPHA */
    {               0,           0 }, /* 1D46	ᵆ	e1 b5 86	MODIFIER LETTER SMALL TURNED AE */
    {               0,           0 }, /* 1D47	ᵇ	e1 b5 87	MODIFIER LETTER SMALL B */
    {               0,           0 }, /* 1D48	ᵈ	e1 b5 88	MODIFIER LETTER SMALL D */
    {               0,           0 }, /* 1D49	ᵉ	e1 b5 89	MODIFIER LETTER SMALL E */
    {               0,           0 }, /* 1D4A	ᵊ	e1 b5 8a	MODIFIER LETTER SMALL SCHWA */
    {               0,           0 }, /* 1D4B	ᵋ	e1 b5 8b	MODIFIER LETTER SMALL OPEN E */
    {               0,           0 }, /* 1D4C	ᵌ	e1 b5 8c	MODIFIER LETTER SMALL TURNED OPEN E */
    {               0,           0 }, /* 1D4D	ᵍ	e1 b5 8d	MODIFIER LETTER SMALL G */
    {               0,           0 }, /* 1D4E	ᵎ	e1 b5 8e	MODIFIER LETTER SMALL TURNED I */
    {               0,           0 }, /* 1D4F	ᵏ	e1 b5 8f	MODIFIER LETTER SMALL K */
    {               0,           0 }, /* 1D50	ᵐ	e1 b5 90	MODIFIER LETTER SMALL M */
    {               0,           0 }, /* 1D51	ᵑ	e1 b5 91	MODIFIER LETTER SMALL ENG */
    {               0,           0 }, /* 1D52	ᵒ	e1 b5 92	MODIFIER LETTER SMALL O */
    {               0,           0 }, /* 1D53	ᵓ	e1 b5 93	MODIFIER LETTER SMALL OPEN O */
    {               0,           0 }, /* 1D54	ᵔ	e1 b5 94	MODIFIER LETTER SMALL TOP HALF O */
    {               0,           0 }, /* 1D55	ᵕ	e1 b5 95	MODIFIER LETTER SMALL BOTTOM HALF O */
    {               0,           0 }, /* 1D56	ᵖ	e1 b5 96	MODIFIER LETTER SMALL P */
    {               0,           0 }, /* 1D57	ᵗ	e1 b5 97	MODIFIER LETTER SMALL T */
    {               0,           0 }, /* 1D58	ᵘ	e1 b5 98	MODIFIER LETTER SMALL U */
    {               0,           0 }, /* 1D59	ᵙ	e1 b5 99	MODIFIER LETTER SMALL SIDEWAYS U */
    {               0,           0 }, /* 1D5A	ᵚ	e1 b5 9a	MODIFIER LETTER SMALL TURNED M */
    {               0,           0 }, /* 1D5B	ᵛ	e1 b5 9b	MODIFIER LETTER SMALL V */
    {               0,           0 }, /* 1D5C	ᵜ	e1 b5 9c	MODIFIER LETTER SMALL AIN */
    {               0,           0 }, /* 1D5D	ᵝ	e1 b5 9d	MODIFIER LETTER SMALL BETA */
    {               0,           0 }, /* 1D5E	ᵞ	e1 b5 9e	MODIFIER LETTER SMALL GREEK GAMMA */
    {               0,           0 }, /* 1D5F	ᵟ	e1 b5 9f	MODIFIER LETTER SMALL DELTA */
    {               0,           0 }, /* 1D60	ᵠ	e1 b5 a0	MODIFIER LETTER SMALL GREEK PHI */
    {               0,           0 }, /* 1D61	ᵡ	e1 b5 a1	MODIFIER LETTER SMALL CHI */
    {               0,           0 }, /* 1D62	ᵢ	e1 b5 a2	LATIN SUBSCRIPT SMALL LETTER I */
    {               0,           0 }, /* 1D63	ᵣ	e1 b5 a3	LATIN SUBSCRIPT SMALL LETTER R */
    {               0,           0 }, /* 1D64	ᵤ	e1 b5 a4	LATIN SUBSCRIPT SMALL LETTER U */
    {               0,           0 }, /* 1D65	ᵥ	e1 b5 a5	LATIN SUBSCRIPT SMALL LETTER V */
    {               0,           0 }, /* 1D66	ᵦ	e1 b5 a6	GREEK SUBSCRIPT SMALL LETTER BETA */
    {               0,           0 }, /* 1D67	ᵧ	e1 b5 a7	GREEK SUBSCRIPT SMALL LETTER GAMMA */
    {               0,           0 }, /* 1D68	ᵨ	e1 b5 a8	GREEK SUBSCRIPT SMALL LETTER RHO */
    {               0,           0 }, /* 1D69	ᵩ	e1 b5 a9	GREEK SUBSCRIPT SMALL LETTER PHI */
    {               0,           0 }, /* 1D6A	ᵪ	e1 b5 aa	GREEK SUBSCRIPT SMALL LETTER CHI */
    {               0,           0 }, /* 1D6B	ᵫ	e1 b5 ab	LATIN SMALL LETTER UE */
    {               0,           0 }, /* 1D6C	ᵬ	e1 b5 ac	LATIN SMALL LETTER B WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D6D	ᵭ	e1 b5 ad	LATIN SMALL LETTER D WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D6E	ᵮ	e1 b5 ae	LATIN SMALL LETTER F WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D6F	ᵯ	e1 b5 af	LATIN SMALL LETTER M WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D70	ᵰ	e1 b5 b0	LATIN SMALL LETTER N WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D71	ᵱ	e1 b5 b1	LATIN SMALL LETTER P WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D72	ᵲ	e1 b5 b2	LATIN SMALL LETTER R WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D73	ᵳ	e1 b5 b3	LATIN SMALL LETTER R WITH FISHHOOK AND MIDDLE TILDE */
    {               0,           0 }, /* 1D74	ᵴ	e1 b5 b4	LATIN SMALL LETTER S WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D75	ᵵ	e1 b5 b5	LATIN SMALL LETTER T WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D76	ᵶ	e1 b5 b6	LATIN SMALL LETTER Z WITH MIDDLE TILDE */
    {               0,           0 }, /* 1D77	ᵷ	e1 b5 b7	LATIN SMALL LETTER TURNED G */
    {               0,           0 }, /* 1D78	ᵸ	e1 b5 b8	MODIFIER LETTER CYRILLIC EN */
    {               0,           0 }, /* 1D79	ᵹ	e1 b5 b9	LATIN SMALL LETTER INSULAR G */
    {               0,           0 }, /* 1D7A	ᵺ	e1 b5 ba	LATIN SMALL LETTER TH WITH STRIKETHROUGH */
    {               0,           0 }, /* 1D7B	ᵻ	e1 b5 bb	LATIN SMALL CAPITAL LETTER I WITH STROKE */
    {               0,           0 }, /* 1D7C	ᵼ	e1 b5 bc	LATIN SMALL LETTER IOTA WITH STROKE */
    {               0,           0 }, /* 1D7D	ᵽ	e1 b5 bd	LATIN SMALL LETTER P WITH STROKE */
    {               0,           0 }, /* 1D7E	ᵾ	e1 b5 be	LATIN SMALL CAPITAL LETTER U WITH STROKE */
    {               0,           0 }, /* 1D7F	ᵿ	e1 b5 bf	LATIN SMALL LETTER UPSILON WITH STROKE */
    {               0,           0 }, /* 1D80	ᶀ	e1 b6 80	LATIN SMALL LETTER B WITH PALATAL HOOK */
    {               0,           0 }, /* 1D81	ᶁ	e1 b6 81	LATIN SMALL LETTER D WITH PALATAL HOOK */
    {               0,           0 }, /* 1D82	ᶂ	e1 b6 82	LATIN SMALL LETTER F WITH PALATAL HOOK */
    {               0,           0 }, /* 1D83	ᶃ	e1 b6 83	LATIN SMALL LETTER G WITH PALATAL HOOK */
    {               0,           0 }, /* 1D84	ᶄ	e1 b6 84	LATIN SMALL LETTER K WITH PALATAL HOOK */
    {               0,           0 }, /* 1D85	ᶅ	e1 b6 85	LATIN SMALL LETTER L WITH PALATAL HOOK */
    {               0,           0 }, /* 1D86	ᶆ	e1 b6 86	LATIN SMALL LETTER M WITH PALATAL HOOK */
    {               0,           0 }, /* 1D87	ᶇ	e1 b6 87	LATIN SMALL LETTER N WITH PALATAL HOOK */
    {               0,           0 }, /* 1D88	ᶈ	e1 b6 88	LATIN SMALL LETTER P WITH PALATAL HOOK */
    {               0,           0 }, /* 1D89	ᶉ	e1 b6 89	LATIN SMALL LETTER R WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8A	ᶊ	e1 b6 8a	LATIN SMALL LETTER S WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8B	ᶋ	e1 b6 8b	LATIN SMALL LETTER ESH WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8C	ᶌ	e1 b6 8c	LATIN SMALL LETTER V WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8D	ᶍ	e1 b6 8d	LATIN SMALL LETTER X WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8E	ᶎ	e1 b6 8e	LATIN SMALL LETTER Z WITH PALATAL HOOK */
    {               0,           0 }, /* 1D8F	ᶏ	e1 b6 8f	LATIN SMALL LETTER A WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D90	ᶐ	e1 b6 90	LATIN SMALL LETTER ALPHA WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D91	ᶑ	e1 b6 91	LATIN SMALL LETTER D WITH HOOK AND TAIL */
    {               0,           0 }, /* 1D92	ᶒ	e1 b6 92	LATIN SMALL LETTER E WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D93	ᶓ	e1 b6 93	LATIN SMALL LETTER OPEN E WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D94	ᶔ	e1 b6 94	LATIN SMALL LETTER REVERSED OPEN E WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D95	ᶕ	e1 b6 95	LATIN SMALL LETTER SCHWA WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D96	ᶖ	e1 b6 96	LATIN SMALL LETTER I WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D97	ᶗ	e1 b6 97	LATIN SMALL LETTER OPEN O WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D98	ᶘ	e1 b6 98	LATIN SMALL LETTER ESH WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D99	ᶙ	e1 b6 99	LATIN SMALL LETTER U WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D9A	ᶚ	e1 b6 9a	LATIN SMALL LETTER EZH WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1D9B	ᶛ	e1 b6 9b	MODIFIER LETTER SMALL TURNED ALPHA */
    {               0,           0 }, /* 1D9C	ᶜ	e1 b6 9c	MODIFIER LETTER SMALL C */
    {               0,           0 }, /* 1D9D	ᶝ	e1 b6 9d	MODIFIER LETTER SMALL C WITH CURL */
    {               0,           0 }, /* 1D9E	ᶞ	e1 b6 9e	MODIFIER LETTER SMALL ETH */
    {               0,           0 }, /* 1D9F	ᶟ	e1 b6 9f	MODIFIER LETTER SMALL REVERSED OPEN E */
    {               0,           0 }, /* 1DA0	ᶠ	e1 b6 a0	MODIFIER LETTER SMALL F */
    {               0,           0 }, /* 1DA1	ᶡ	e1 b6 a1	MODIFIER LETTER SMALL DOTLESS J WITH STROKE */
    {               0,           0 }, /* 1DA2	ᶢ	e1 b6 a2	MODIFIER LETTER SMALL SCRIPT G */
    {               0,           0 }, /* 1DA3	ᶣ	e1 b6 a3	MODIFIER LETTER SMALL TURNED H */
    {               0,           0 }, /* 1DA4	ᶤ	e1 b6 a4	MODIFIER LETTER SMALL I WITH STROKE */
    {               0,           0 }, /* 1DA5	ᶥ	e1 b6 a5	MODIFIER LETTER SMALL IOTA */
    {               0,           0 }, /* 1DA6	ᶦ	e1 b6 a6	MODIFIER LETTER SMALL CAPITAL I */
    {               0,           0 }, /* 1DA7	ᶧ	e1 b6 a7	MODIFIER LETTER SMALL CAPITAL I WITH STROKE */
    {               0,           0 }, /* 1DA8	ᶨ	e1 b6 a8	MODIFIER LETTER SMALL J WITH CROSSED-TAIL */
    {               0,           0 }, /* 1DA9	ᶩ	e1 b6 a9	MODIFIER LETTER SMALL L WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1DAA	ᶪ	e1 b6 aa	MODIFIER LETTER SMALL L WITH PALATAL HOOK */
    {               0,           0 }, /* 1DAB	ᶫ	e1 b6 ab	MODIFIER LETTER SMALL CAPITAL L */
    {               0,           0 }, /* 1DAC	ᶬ	e1 b6 ac	MODIFIER LETTER SMALL M WITH HOOK */
    {               0,           0 }, /* 1DAD	ᶭ	e1 b6 ad	MODIFIER LETTER SMALL TURNED M WITH LONG LEG */
    {               0,           0 }, /* 1DAE	ᶮ	e1 b6 ae	MODIFIER LETTER SMALL N WITH LEFT HOOK */
    {               0,           0 }, /* 1DAF	ᶯ	e1 b6 af	MODIFIER LETTER SMALL N WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1DB0	ᶰ	e1 b6 b0	MODIFIER LETTER SMALL CAPITAL N */
    {               0,           0 }, /* 1DB1	ᶱ	e1 b6 b1	MODIFIER LETTER SMALL BARRED O */
    {               0,           0 }, /* 1DB2	ᶲ	e1 b6 b2	MODIFIER LETTER SMALL PHI */
    {               0,           0 }, /* 1DB3	ᶳ	e1 b6 b3	MODIFIER LETTER SMALL S WITH HOOK */
    {               0,           0 }, /* 1DB4	ᶴ	e1 b6 b4	MODIFIER LETTER SMALL ESH */
    {               0,           0 }, /* 1DB5	ᶵ	e1 b6 b5	MODIFIER LETTER SMALL T WITH PALATAL HOOK */
    {               0,           0 }, /* 1DB6	ᶶ	e1 b6 b6	MODIFIER LETTER SMALL U BAR */
    {               0,           0 }, /* 1DB7	ᶷ	e1 b6 b7	MODIFIER LETTER SMALL UPSILON */
    {               0,           0 }, /* 1DB8	ᶸ	e1 b6 b8	MODIFIER LETTER SMALL CAPITAL U */
    {               0,           0 }, /* 1DB9	ᶹ	e1 b6 b9	MODIFIER LETTER SMALL V WITH HOOK */
    {               0,           0 }, /* 1DBA	ᶺ	e1 b6 ba	MODIFIER LETTER SMALL TURNED V */
    {               0,           0 }, /* 1DBB	ᶻ	e1 b6 bb	MODIFIER LETTER SMALL Z */
    {               0,           0 }, /* 1DBC	ᶼ	e1 b6 bc	MODIFIER LETTER SMALL Z WITH RETROFLEX HOOK */
    {               0,           0 }, /* 1DBD	ᶽ	e1 b6 bd	MODIFIER LETTER SMALL Z WITH CURL */
    {               0,           0 }, /* 1DBE	ᶾ	e1 b6 be	MODIFIER LETTER SMALL EZH */
    {               0,           0 }, /* 1DBF	ᶿ	e1 b6 bf	MODIFIER LETTER SMALL THETA */
    {               0,           0 }, /* 1DC0	᷀	e1 b7 80	COMBINING DOTTED GRAVE ACCENT */
    {               0,           0 }, /* 1DC1	᷁	e1 b7 81	COMBINING DOTTED ACUTE ACCENT */
    {               0,           0 }, /* 1DC2	᷂	e1 b7 82	COMBINING SNAKE BELOW */
    {               0,           0 }, /* 1DC3	᷃	e1 b7 83	COMBINING SUSPENSION MARK */
    {               0,           0 }, /* 1DC4	᷄	e1 b7 84	COMBINING MACRON-ACUTE */
    {               0,           0 }, /* 1DC5	᷅	e1 b7 85	COMBINING GRAVE-MACRON */
    {               0,           0 }, /* 1DC6	᷆	e1 b7 86	COMBINING MACRON-GRAVE */
    {               0,           0 }, /* 1DC7	᷇	e1 b7 87	COMBINING ACUTE-MACRON */
    {               0,           0 }, /* 1DC8	᷈	e1 b7 88	COMBINING GRAVE-ACUTE-GRAVE */
    {               0,           0 }, /* 1DC9	᷉	e1 b7 89	COMBINING ACUTE-GRAVE-ACUTE */
    {               0,           0 }, /* 1DCA	᷊	e1 b7 8a	COMBINING LATIN SMALL LETTER R BELOW */
    {               0,           0 }, /* 1DCB	᷋	e1 b7 8b	COMBINING BREVE-MACRON */
    {               0,           0 }, /* 1DCC	᷌	e1 b7 8c	COMBINING MACRON-BREVE */
    {               0,           0 }, /* 1DCD	᷍	e1 b7 8d	COMBINING DOUBLE CIRCUMFLEX ABOVE */
    {               0,           0 }, /* 1DCE	᷎	e1 b7 8e	COMBINING OGONEK ABOVE */
    {               0,           0 }, /* 1DCF	᷏	e1 b7 8f	COMBINING ZIGZAG BELOW */
    {               0,           0 }, /* 1DD0	᷐	e1 b7 90	COMBINING IS BELOW */
    {               0,           0 }, /* 1DD1	᷑	e1 b7 91	COMBINING UR ABOVE */
    {               0,           0 }, /* 1DD2	᷒	e1 b7 92	COMBINING US ABOVE */
    {               0,           0 }, /* 1DD3	ᷓ	e1 b7 93	COMBINING LATIN SMALL LETTER FLATTENED OPEN A ABOVE */
    {               0,           0 }, /* 1DD4	ᷔ	e1 b7 94	COMBINING LATIN SMALL LETTER AE */
    {               0,           0 }, /* 1DD5	ᷕ	e1 b7 95	COMBINING LATIN SMALL LETTER AO */
    {               0,           0 }, /* 1DD6	ᷖ	e1 b7 96	COMBINING LATIN SMALL LETTER AV */
    {               0,           0 }, /* 1DD7	ᷗ	e1 b7 97	COMBINING LATIN SMALL LETTER C CEDILLA */
    {               0,           0 }, /* 1DD8	ᷘ	e1 b7 98	COMBINING LATIN SMALL LETTER INSULAR D */
    {               0,           0 }, /* 1DD9	ᷙ	e1 b7 99	COMBINING LATIN SMALL LETTER ETH */
    {               0,           0 }, /* 1DDA	ᷚ	e1 b7 9a	COMBINING LATIN SMALL LETTER G */
    {               0,           0 }, /* 1DDB	ᷛ	e1 b7 9b	COMBINING LATIN LETTER SMALL CAPITAL G */
    {               0,           0 }, /* 1DDC	ᷜ	e1 b7 9c	COMBINING LATIN SMALL LETTER K */
    {               0,           0 }, /* 1DDD	ᷝ	e1 b7 9d	COMBINING LATIN SMALL LETTER L */
    {               0,           0 }, /* 1DDE	ᷞ	e1 b7 9e	COMBINING LATIN LETTER SMALL CAPITAL L */
    {               0,           0 }, /* 1DDF	ᷟ	e1 b7 9f	COMBINING LATIN LETTER SMALL CAPITAL M */
    {               0,           0 }, /* 1DE0	ᷠ	e1 b7 a0	COMBINING LATIN SMALL LETTER N */
    {               0,           0 }, /* 1DE1	ᷡ	e1 b7 a1	COMBINING LATIN LETTER SMALL CAPITAL N */
    {               0,           0 }, /* 1DE2	ᷢ	e1 b7 a2	COMBINING LATIN LETTER SMALL CAPITAL R */
    {               0,           0 }, /* 1DE3	ᷣ	e1 b7 a3	COMBINING LATIN SMALL LETTER R ROTUNDA */
    {               0,           0 }, /* 1DE4	ᷤ	e1 b7 a4	COMBINING LATIN SMALL LETTER S */
    {               0,           0 }, /* 1DE5	ᷥ	e1 b7 a5	COMBINING LATIN SMALL LETTER LONG S */
    {               0,           0 }, /* 1DE6	ᷦ	e1 b7 a6	COMBINING LATIN SMALL LETTER Z */
    {               0,           0 }, /* 1DE7	ᷧ	e1 b7 a7	 */
    {               0,           0 }, /* 1DE8	ᷨ	e1 b7 a8	 */
    {               0,           0 }, /* 1DE9	ᷩ	e1 b7 a9	 */
    {               0,           0 }, /* 1DEA	ᷪ	e1 b7 aa	 */
    {               0,           0 }, /* 1DEB	ᷫ	e1 b7 ab	 */
    {               0,           0 }, /* 1DEC	ᷬ	e1 b7 ac	 */
    {               0,           0 }, /* 1DED	ᷭ	e1 b7 ad	 */
    {               0,           0 }, /* 1DEE	ᷮ	e1 b7 ae	 */
    {               0,           0 }, /* 1DEF	ᷯ	e1 b7 af	 */
    {               0,           0 }, /* 1DF0	ᷰ	e1 b7 b0	 */
    {               0,           0 }, /* 1DF1	ᷱ	e1 b7 b1	 */
    {               0,           0 }, /* 1DF2	ᷲ	e1 b7 b2	 */
    {               0,           0 }, /* 1DF3	ᷳ	e1 b7 b3	 */
    {               0,           0 }, /* 1DF4	ᷴ	e1 b7 b4	 */
    {               0,           0 }, /* 1DF5	᷵	e1 b7 b5	 */
    {               0,           0 }, /* 1DF6	᷶	e1 b7 b6	 */
    {               0,           0 }, /* 1DF7	᷷	e1 b7 b7	 */
    {               0,           0 }, /* 1DF8	᷸	e1 b7 b8	 */
    {               0,           0 }, /* 1DF9	᷹	e1 b7 b9	 */
    {               0,           0 }, /* 1DFA	᷺	e1 b7 ba	 */
    {               0,           0 }, /* 1DFB	᷻	e1 b7 bb	 */
    {               0,           0 }, /* 1DFC	᷼	e1 b7 bc	COMBINING DOUBLE INVERTED BREVE BELOW */
    {               0,           0 }, /* 1DFD	᷽	e1 b7 bd	COMBINING ALMOST EQUAL TO BELOW */
    {               0,           0 }, /* 1DFE	᷾	e1 b7 be	COMBINING LEFT ARROWHEAD ABOVE */
    {               0,           0 }, /* 1DFF	᷿	e1 b7 bf	COMBINING RIGHT ARROWHEAD AND DOWN ARROWHEAD BELOW */
    {               0,           0 }, /* 1E00	Ḁ	e1 b8 80	LATIN CAPITAL LETTER A WITH RING BELOW */
    {               0,           0 }, /* 1E01	ḁ	e1 b8 81	LATIN SMALL LETTER A WITH RING BELOW */
    {               0,           0 }, /* 1E02	Ḃ	e1 b8 82	LATIN CAPITAL LETTER B WITH DOT ABOVE */
    {               0,           0 }, /* 1E03	ḃ	e1 b8 83	LATIN SMALL LETTER B WITH DOT ABOVE */
    {               0,           0 }, /* 1E04	Ḅ	e1 b8 84	LATIN CAPITAL LETTER B WITH DOT BELOW */
    {               0,           0 }, /* 1E05	ḅ	e1 b8 85	LATIN SMALL LETTER B WITH DOT BELOW */
    {               0,           0 }, /* 1E06	Ḇ	e1 b8 86	LATIN CAPITAL LETTER B WITH LINE BELOW */
    {               0,           0 }, /* 1E07	ḇ	e1 b8 87	LATIN SMALL LETTER B WITH LINE BELOW */
    {               0,           0 }, /* 1E08	Ḉ	e1 b8 88	LATIN CAPITAL LETTER C WITH CEDILLA AND ACUTE */
    {               0,           0 }, /* 1E09	ḉ	e1 b8 89	LATIN SMALL LETTER C WITH CEDILLA AND ACUTE */
    {               0,           0 }, /* 1E0A	Ḋ	e1 b8 8a	LATIN CAPITAL LETTER D WITH DOT ABOVE */
    {               0,           0 }, /* 1E0B	ḋ	e1 b8 8b	LATIN SMALL LETTER D WITH DOT ABOVE */
    {               0,           0 }, /* 1E0C	Ḍ	e1 b8 8c	LATIN CAPITAL LETTER D WITH DOT BELOW */
    {               0,           0 }, /* 1E0D	ḍ	e1 b8 8d	LATIN SMALL LETTER D WITH DOT BELOW */
    {               0,           0 }, /* 1E0E	Ḏ	e1 b8 8e	LATIN CAPITAL LETTER D WITH LINE BELOW */
    {               0,           0 }, /* 1E0F	ḏ	e1 b8 8f	LATIN SMALL LETTER D WITH LINE BELOW */
    {               0,           0 }, /* 1E10	Ḑ	e1 b8 90	LATIN CAPITAL LETTER D WITH CEDILLA */
    {               0,           0 }, /* 1E11	ḑ	e1 b8 91	LATIN SMALL LETTER D WITH CEDILLA */
    {               0,           0 }, /* 1E12	Ḓ	e1 b8 92	LATIN CAPITAL LETTER D WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E13	ḓ	e1 b8 93	LATIN SMALL LETTER D WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E14	Ḕ	e1 b8 94	LATIN CAPITAL LETTER E WITH MACRON AND GRAVE */
    {               0,           0 }, /* 1E15	ḕ	e1 b8 95	LATIN SMALL LETTER E WITH MACRON AND GRAVE */
    {               0,           0 }, /* 1E16	Ḗ	e1 b8 96	LATIN CAPITAL LETTER E WITH MACRON AND ACUTE */
    {               0,           0 }, /* 1E17	ḗ	e1 b8 97	LATIN SMALL LETTER E WITH MACRON AND ACUTE */
    {               0,           0 }, /* 1E18	Ḙ	e1 b8 98	LATIN CAPITAL LETTER E WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E19	ḙ	e1 b8 99	LATIN SMALL LETTER E WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E1A	Ḛ	e1 b8 9a	LATIN CAPITAL LETTER E WITH TILDE BELOW */
    {               0,           0 }, /* 1E1B	ḛ	e1 b8 9b	LATIN SMALL LETTER E WITH TILDE BELOW */
    {               0,           0 }, /* 1E1C	Ḝ	e1 b8 9c	LATIN CAPITAL LETTER E WITH CEDILLA AND BREVE */
    {               0,           0 }, /* 1E1D	ḝ	e1 b8 9d	LATIN SMALL LETTER E WITH CEDILLA AND BREVE */
    {               0,           0 }, /* 1E1E	Ḟ	e1 b8 9e	LATIN CAPITAL LETTER F WITH DOT ABOVE */
    {               0,           0 }, /* 1E1F	ḟ	e1 b8 9f	LATIN SMALL LETTER F WITH DOT ABOVE */
    {               0,           0 }, /* 1E20	Ḡ	e1 b8 a0	LATIN CAPITAL LETTER G WITH MACRON */
    {               0,           0 }, /* 1E21	ḡ	e1 b8 a1	LATIN SMALL LETTER G WITH MACRON */
    {               0,           0 }, /* 1E22	Ḣ	e1 b8 a2	LATIN CAPITAL LETTER H WITH DOT ABOVE */
    {               0,           0 }, /* 1E23	ḣ	e1 b8 a3	LATIN SMALL LETTER H WITH DOT ABOVE */
    {               0,           0 }, /* 1E24	Ḥ	e1 b8 a4	LATIN CAPITAL LETTER H WITH DOT BELOW */
    {               0,           0 }, /* 1E25	ḥ	e1 b8 a5	LATIN SMALL LETTER H WITH DOT BELOW */
    {               0,           0 }, /* 1E26	Ḧ	e1 b8 a6	LATIN CAPITAL LETTER H WITH DIAERESIS */
    {               0,           0 }, /* 1E27	ḧ	e1 b8 a7	LATIN SMALL LETTER H WITH DIAERESIS */
    {               0,           0 }, /* 1E28	Ḩ	e1 b8 a8	LATIN CAPITAL LETTER H WITH CEDILLA */
    {               0,           0 }, /* 1E29	ḩ	e1 b8 a9	LATIN SMALL LETTER H WITH CEDILLA */
    {               0,           0 }, /* 1E2A	Ḫ	e1 b8 aa	LATIN CAPITAL LETTER H WITH BREVE BELOW */
    {               0,           0 }, /* 1E2B	ḫ	e1 b8 ab	LATIN SMALL LETTER H WITH BREVE BELOW */
    {               0,           0 }, /* 1E2C	Ḭ	e1 b8 ac	LATIN CAPITAL LETTER I WITH TILDE BELOW */
    {               0,           0 }, /* 1E2D	ḭ	e1 b8 ad	LATIN SMALL LETTER I WITH TILDE BELOW */
    {               0,           0 }, /* 1E2E	Ḯ	e1 b8 ae	LATIN CAPITAL LETTER I WITH DIAERESIS AND ACUTE */
    {               0,           0 }, /* 1E2F	ḯ	e1 b8 af	LATIN SMALL LETTER I WITH DIAERESIS AND ACUTE */
    {               0,           0 }, /* 1E30	Ḱ	e1 b8 b0	LATIN CAPITAL LETTER K WITH ACUTE */
    {               0,           0 }, /* 1E31	ḱ	e1 b8 b1	LATIN SMALL LETTER K WITH ACUTE */
    {               0,           0 }, /* 1E32	Ḳ	e1 b8 b2	LATIN CAPITAL LETTER K WITH DOT BELOW */
    {               0,           0 }, /* 1E33	ḳ	e1 b8 b3	LATIN SMALL LETTER K WITH DOT BELOW */
    {               0,           0 }, /* 1E34	Ḵ	e1 b8 b4	LATIN CAPITAL LETTER K WITH LINE BELOW */
    {               0,           0 }, /* 1E35	ḵ	e1 b8 b5	LATIN SMALL LETTER K WITH LINE BELOW */
    {               0,           0 }, /* 1E36	Ḷ	e1 b8 b6	LATIN CAPITAL LETTER L WITH DOT BELOW */
    {               0,           0 }, /* 1E37	ḷ	e1 b8 b7	LATIN SMALL LETTER L WITH DOT BELOW */
    {               0,           0 }, /* 1E38	Ḹ	e1 b8 b8	LATIN CAPITAL LETTER L WITH DOT BELOW AND MACRON */
    {               0,           0 }, /* 1E39	ḹ	e1 b8 b9	LATIN SMALL LETTER L WITH DOT BELOW AND MACRON */
    {               0,           0 }, /* 1E3A	Ḻ	e1 b8 ba	LATIN CAPITAL LETTER L WITH LINE BELOW */
    {               0,           0 }, /* 1E3B	ḻ	e1 b8 bb	LATIN SMALL LETTER L WITH LINE BELOW */
    {               0,           0 }, /* 1E3C	Ḽ	e1 b8 bc	LATIN CAPITAL LETTER L WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E3D	ḽ	e1 b8 bd	LATIN SMALL LETTER L WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E3E	Ḿ	e1 b8 be	LATIN CAPITAL LETTER M WITH ACUTE */
    {               0,           0 }, /* 1E3F	ḿ	e1 b8 bf	LATIN SMALL LETTER M WITH ACUTE */
    {               0,           0 }, /* 1E40	Ṁ	e1 b9 80	LATIN CAPITAL LETTER M WITH DOT ABOVE */
    {               0,           0 }, /* 1E41	ṁ	e1 b9 81	LATIN SMALL LETTER M WITH DOT ABOVE */
    {               0,           0 }, /* 1E42	Ṃ	e1 b9 82	LATIN CAPITAL LETTER M WITH DOT BELOW */
    {               0,           0 }, /* 1E43	ṃ	e1 b9 83	LATIN SMALL LETTER M WITH DOT BELOW */
    {               0,           0 }, /* 1E44	Ṅ	e1 b9 84	LATIN CAPITAL LETTER N WITH DOT ABOVE */
    {               0,           0 }, /* 1E45	ṅ	e1 b9 85	LATIN SMALL LETTER N WITH DOT ABOVE */
    {               0,           0 }, /* 1E46	Ṇ	e1 b9 86	LATIN CAPITAL LETTER N WITH DOT BELOW */
    {               0,           0 }, /* 1E47	ṇ	e1 b9 87	LATIN SMALL LETTER N WITH DOT BELOW */
    {               0,           0 }, /* 1E48	Ṉ	e1 b9 88	LATIN CAPITAL LETTER N WITH LINE BELOW */
    {               0,           0 }, /* 1E49	ṉ	e1 b9 89	LATIN SMALL LETTER N WITH LINE BELOW */
    {               0,           0 }, /* 1E4A	Ṋ	e1 b9 8a	LATIN CAPITAL LETTER N WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E4B	ṋ	e1 b9 8b	LATIN SMALL LETTER N WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E4C	Ṍ	e1 b9 8c	LATIN CAPITAL LETTER O WITH TILDE AND ACUTE */
    {               0,           0 }, /* 1E4D	ṍ	e1 b9 8d	LATIN SMALL LETTER O WITH TILDE AND ACUTE */
    {               0,           0 }, /* 1E4E	Ṏ	e1 b9 8e	LATIN CAPITAL LETTER O WITH TILDE AND DIAERESIS */
    {               0,           0 }, /* 1E4F	ṏ	e1 b9 8f	LATIN SMALL LETTER O WITH TILDE AND DIAERESIS */
    {               0,           0 }, /* 1E50	Ṑ	e1 b9 90	LATIN CAPITAL LETTER O WITH MACRON AND GRAVE */
    {               0,           0 }, /* 1E51	ṑ	e1 b9 91	LATIN SMALL LETTER O WITH MACRON AND GRAVE */
    {               0,           0 }, /* 1E52	Ṓ	e1 b9 92	LATIN CAPITAL LETTER O WITH MACRON AND ACUTE */
    {               0,           0 }, /* 1E53	ṓ	e1 b9 93	LATIN SMALL LETTER O WITH MACRON AND ACUTE */
    {               0,           0 }, /* 1E54	Ṕ	e1 b9 94	LATIN CAPITAL LETTER P WITH ACUTE */
    {               0,           0 }, /* 1E55	ṕ	e1 b9 95	LATIN SMALL LETTER P WITH ACUTE */
    {               0,           0 }, /* 1E56	Ṗ	e1 b9 96	LATIN CAPITAL LETTER P WITH DOT ABOVE */
    {               0,           0 }, /* 1E57	ṗ	e1 b9 97	LATIN SMALL LETTER P WITH DOT ABOVE */
    {               0,           0 }, /* 1E58	Ṙ	e1 b9 98	LATIN CAPITAL LETTER R WITH DOT ABOVE */
    {               0,           0 }, /* 1E59	ṙ	e1 b9 99	LATIN SMALL LETTER R WITH DOT ABOVE */
    {               0,           0 }, /* 1E5A	Ṛ	e1 b9 9a	LATIN CAPITAL LETTER R WITH DOT BELOW */
    {               0,           0 }, /* 1E5B	ṛ	e1 b9 9b	LATIN SMALL LETTER R WITH DOT BELOW */
    {               0,           0 }, /* 1E5C	Ṝ	e1 b9 9c	LATIN CAPITAL LETTER R WITH DOT BELOW AND MACRON */
    {               0,           0 }, /* 1E5D	ṝ	e1 b9 9d	LATIN SMALL LETTER R WITH DOT BELOW AND MACRON */
    {               0,           0 }, /* 1E5E	Ṟ	e1 b9 9e	LATIN CAPITAL LETTER R WITH LINE BELOW */
    {               0,           0 }, /* 1E5F	ṟ	e1 b9 9f	LATIN SMALL LETTER R WITH LINE BELOW */
    {               0,           0 }, /* 1E60	Ṡ	e1 b9 a0	LATIN CAPITAL LETTER S WITH DOT ABOVE */
    {               0,           0 }, /* 1E61	ṡ	e1 b9 a1	LATIN SMALL LETTER S WITH DOT ABOVE */
    {               0,           0 }, /* 1E62	Ṣ	e1 b9 a2	LATIN CAPITAL LETTER S WITH DOT BELOW */
    {               0,           0 }, /* 1E63	ṣ	e1 b9 a3	LATIN SMALL LETTER S WITH DOT BELOW */
    {               0,           0 }, /* 1E64	Ṥ	e1 b9 a4	LATIN CAPITAL LETTER S WITH ACUTE AND DOT ABOVE */
    {               0,           0 }, /* 1E65	ṥ	e1 b9 a5	LATIN SMALL LETTER S WITH ACUTE AND DOT ABOVE */
    {               0,           0 }, /* 1E66	Ṧ	e1 b9 a6	LATIN CAPITAL LETTER S WITH CARON AND DOT ABOVE */
    {               0,           0 }, /* 1E67	ṧ	e1 b9 a7	LATIN SMALL LETTER S WITH CARON AND DOT ABOVE */
    {               0,           0 }, /* 1E68	Ṩ	e1 b9 a8	LATIN CAPITAL LETTER S WITH DOT BELOW AND DOT ABOVE */
    {               0,           0 }, /* 1E69	ṩ	e1 b9 a9	LATIN SMALL LETTER S WITH DOT BELOW AND DOT ABOVE */
    {               0,           0 }, /* 1E6A	Ṫ	e1 b9 aa	LATIN CAPITAL LETTER T WITH DOT ABOVE */
    {               0,           0 }, /* 1E6B	ṫ	e1 b9 ab	LATIN SMALL LETTER T WITH DOT ABOVE */
    {               0,           0 }, /* 1E6C	Ṭ	e1 b9 ac	LATIN CAPITAL LETTER T WITH DOT BELOW */
    {               0,           0 }, /* 1E6D	ṭ	e1 b9 ad	LATIN SMALL LETTER T WITH DOT BELOW */
    {               0,           0 }, /* 1E6E	Ṯ	e1 b9 ae	LATIN CAPITAL LETTER T WITH LINE BELOW */
    {               0,           0 }, /* 1E6F	ṯ	e1 b9 af	LATIN SMALL LETTER T WITH LINE BELOW */
    {               0,           0 }, /* 1E70	Ṱ	e1 b9 b0	LATIN CAPITAL LETTER T WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E71	ṱ	e1 b9 b1	LATIN SMALL LETTER T WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E72	Ṳ	e1 b9 b2	LATIN CAPITAL LETTER U WITH DIAERESIS BELOW */
    {               0,           0 }, /* 1E73	ṳ	e1 b9 b3	LATIN SMALL LETTER U WITH DIAERESIS BELOW */
    {               0,           0 }, /* 1E74	Ṵ	e1 b9 b4	LATIN CAPITAL LETTER U WITH TILDE BELOW */
    {               0,           0 }, /* 1E75	ṵ	e1 b9 b5	LATIN SMALL LETTER U WITH TILDE BELOW */
    {               0,           0 }, /* 1E76	Ṷ	e1 b9 b6	LATIN CAPITAL LETTER U WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E77	ṷ	e1 b9 b7	LATIN SMALL LETTER U WITH CIRCUMFLEX BELOW */
    {               0,           0 }, /* 1E78	Ṹ	e1 b9 b8	LATIN CAPITAL LETTER U WITH TILDE AND ACUTE */
    {               0,           0 }, /* 1E79	ṹ	e1 b9 b9	LATIN SMALL LETTER U WITH TILDE AND ACUTE */
    {               0,           0 }, /* 1E7A	Ṻ	e1 b9 ba	LATIN CAPITAL LETTER U WITH MACRON AND DIAERESIS */
    {               0,           0 }, /* 1E7B	ṻ	e1 b9 bb	LATIN SMALL LETTER U WITH MACRON AND DIAERESIS */
    {               0,           0 }, /* 1E7C	Ṽ	e1 b9 bc	LATIN CAPITAL LETTER V WITH TILDE */
    {               0,           0 }, /* 1E7D	ṽ	e1 b9 bd	LATIN SMALL LETTER V WITH TILDE */
    {               0,           0 }, /* 1E7E	Ṿ	e1 b9 be	LATIN CAPITAL LETTER V WITH DOT BELOW */
    {               0,           0 }, /* 1E7F	ṿ	e1 b9 bf	LATIN SMALL LETTER V WITH DOT BELOW */
    {               0,           0 }, /* 1E80	Ẁ	e1 ba 80	LATIN CAPITAL LETTER W WITH GRAVE */
    {               0,           0 }, /* 1E81	ẁ	e1 ba 81	LATIN SMALL LETTER W WITH GRAVE */
    {               0,           0 }, /* 1E82	Ẃ	e1 ba 82	LATIN CAPITAL LETTER W WITH ACUTE */
    {               0,           0 }, /* 1E83	ẃ	e1 ba 83	LATIN SMALL LETTER W WITH ACUTE */
    {               0,           0 }, /* 1E84	Ẅ	e1 ba 84	LATIN CAPITAL LETTER W WITH DIAERESIS */
    {               0,           0 }, /* 1E85	ẅ	e1 ba 85	LATIN SMALL LETTER W WITH DIAERESIS */
    {               0,           0 }, /* 1E86	Ẇ	e1 ba 86	LATIN CAPITAL LETTER W WITH DOT ABOVE */
    {               0,           0 }, /* 1E87	ẇ	e1 ba 87	LATIN SMALL LETTER W WITH DOT ABOVE */
    {               0,           0 }, /* 1E88	Ẉ	e1 ba 88	LATIN CAPITAL LETTER W WITH DOT BELOW */
    {               0,           0 }, /* 1E89	ẉ	e1 ba 89	LATIN SMALL LETTER W WITH DOT BELOW */
    {               0,           0 }, /* 1E8A	Ẋ	e1 ba 8a	LATIN CAPITAL LETTER X WITH DOT ABOVE */
    {               0,           0 }, /* 1E8B	ẋ	e1 ba 8b	LATIN SMALL LETTER X WITH DOT ABOVE */
    {               0,           0 }, /* 1E8C	Ẍ	e1 ba 8c	LATIN CAPITAL LETTER X WITH DIAERESIS */
    {               0,           0 }, /* 1E8D	ẍ	e1 ba 8d	LATIN SMALL LETTER X WITH DIAERESIS */
    {               0,           0 }, /* 1E8E	Ẏ	e1 ba 8e	LATIN CAPITAL LETTER Y WITH DOT ABOVE */
    {               0,           0 }, /* 1E8F	ẏ	e1 ba 8f	LATIN SMALL LETTER Y WITH DOT ABOVE */
    {               0,           0 }, /* 1E90	Ẑ	e1 ba 90	LATIN CAPITAL LETTER Z WITH CIRCUMFLEX */
    {               0,           0 }, /* 1E91	ẑ	e1 ba 91	LATIN SMALL LETTER Z WITH CIRCUMFLEX */
    {               0,           0 }, /* 1E92	Ẓ	e1 ba 92	LATIN CAPITAL LETTER Z WITH DOT BELOW */
    {               0,           0 }, /* 1E93	ẓ	e1 ba 93	LATIN SMALL LETTER Z WITH DOT BELOW */
    {               0,           0 }, /* 1E94	Ẕ	e1 ba 94	LATIN CAPITAL LETTER Z WITH LINE BELOW */
    {               0,           0 }, /* 1E95	ẕ	e1 ba 95	LATIN SMALL LETTER Z WITH LINE BELOW */
    {               0,           0 }, /* 1E96	ẖ	e1 ba 96	LATIN SMALL LETTER H WITH LINE BELOW */
    {               0,           0 }, /* 1E97	ẗ	e1 ba 97	LATIN SMALL LETTER T WITH DIAERESIS */
    {               0,           0 }, /* 1E98	ẘ	e1 ba 98	LATIN SMALL LETTER W WITH RING ABOVE */
    {               0,           0 }, /* 1E99	ẙ	e1 ba 99	LATIN SMALL LETTER Y WITH RING ABOVE */
    {               0,           0 }, /* 1E9A	ẚ	e1 ba 9a	LATIN SMALL LETTER A WITH RIGHT HALF RING */
    {               0,           0 }, /* 1E9B	ẛ	e1 ba 9b	LATIN SMALL LETTER LONG S WITH DOT ABOVE */
    {               0,           0 }, /* 1E9C	ẜ	e1 ba 9c	LATIN SMALL LETTER LONG S WITH DIAGONAL STROKE */
    {               0,           0 }, /* 1E9D	ẝ	e1 ba 9d	LATIN SMALL LETTER LONG S WITH HIGH STROKE */
    {               0,           0 }, /* 1E9E	ẞ	e1 ba 9e	LATIN CAPITAL LETTER SHARP S */
    {               0,           0 }, /* 1E9F	ẟ	e1 ba 9f	LATIN SMALL LETTER DELTA */
    {               0,           0 }, /* 1EA0	Ạ	e1 ba a0	LATIN CAPITAL LETTER A WITH DOT BELOW */
    {               0,           0 }, /* 1EA1	ạ	e1 ba a1	LATIN SMALL LETTER A WITH DOT BELOW */
    {               0,           0 }, /* 1EA2	Ả	e1 ba a2	LATIN CAPITAL LETTER A WITH HOOK ABOVE */
    {               0,           0 }, /* 1EA3	ả	e1 ba a3	LATIN SMALL LETTER A WITH HOOK ABOVE */
    {               0,           0 }, /* 1EA4	Ấ	e1 ba a4	LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1EA5	ấ	e1 ba a5	LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1EA6	Ầ	e1 ba a6	LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1EA7	ầ	e1 ba a7	LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1EA8	Ẩ	e1 ba a8	LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1EA9	ẩ	e1 ba a9	LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1EAA	Ẫ	e1 ba aa	LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1EAB	ẫ	e1 ba ab	LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1EAC	Ậ	e1 ba ac	LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1EAD	ậ	e1 ba ad	LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1EAE	Ắ	e1 ba ae	LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
    {               0,           0 }, /* 1EAF	ắ	e1 ba af	LATIN SMALL LETTER A WITH BREVE AND ACUTE */
    {               0,           0 }, /* 1EB0	Ằ	e1 ba b0	LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
    {               0,           0 }, /* 1EB1	ằ	e1 ba b1	LATIN SMALL LETTER A WITH BREVE AND GRAVE */
    {               0,           0 }, /* 1EB2	Ẳ	e1 ba b2	LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
    {               0,           0 }, /* 1EB3	ẳ	e1 ba b3	LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
    {               0,           0 }, /* 1EB4	Ẵ	e1 ba b4	LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
    {               0,           0 }, /* 1EB5	ẵ	e1 ba b5	LATIN SMALL LETTER A WITH BREVE AND TILDE */
    {               0,           0 }, /* 1EB6	Ặ	e1 ba b6	LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
    {               0,           0 }, /* 1EB7	ặ	e1 ba b7	LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
    {               0,           0 }, /* 1EB8	Ẹ	e1 ba b8	LATIN CAPITAL LETTER E WITH DOT BELOW */
    {               0,           0 }, /* 1EB9	ẹ	e1 ba b9	LATIN SMALL LETTER E WITH DOT BELOW */
    {               0,           0 }, /* 1EBA	Ẻ	e1 ba ba	LATIN CAPITAL LETTER E WITH HOOK ABOVE */
    {               0,           0 }, /* 1EBB	ẻ	e1 ba bb	LATIN SMALL LETTER E WITH HOOK ABOVE */
    {               0,           0 }, /* 1EBC	Ẽ	e1 ba bc	LATIN CAPITAL LETTER E WITH TILDE */
    {               0,           0 }, /* 1EBD	ẽ	e1 ba bd	LATIN SMALL LETTER E WITH TILDE */
    {               0,           0 }, /* 1EBE	Ế	e1 ba be	LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1EBF	ế	e1 ba bf	LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1EC0	Ề	e1 bb 80	LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1EC1	ề	e1 bb 81	LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1EC2	Ể	e1 bb 82	LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1EC3	ể	e1 bb 83	LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1EC4	Ễ	e1 bb 84	LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1EC5	ễ	e1 bb 85	LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1EC6	Ệ	e1 bb 86	LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1EC7	ệ	e1 bb 87	LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1EC8	Ỉ	e1 bb 88	LATIN CAPITAL LETTER I WITH HOOK ABOVE */
    {               0,           0 }, /* 1EC9	ỉ	e1 bb 89	LATIN SMALL LETTER I WITH HOOK ABOVE */
    {               0,           0 }, /* 1ECA	Ị	e1 bb 8a	LATIN CAPITAL LETTER I WITH DOT BELOW */
    {               0,           0 }, /* 1ECB	ị	e1 bb 8b	LATIN SMALL LETTER I WITH DOT BELOW */
    {               0,           0 }, /* 1ECC	Ọ	e1 bb 8c	LATIN CAPITAL LETTER O WITH DOT BELOW */
    {               0,           0 }, /* 1ECD	ọ	e1 bb 8d	LATIN SMALL LETTER O WITH DOT BELOW */
    {               0,           0 }, /* 1ECE	Ỏ	e1 bb 8e	LATIN CAPITAL LETTER O WITH HOOK ABOVE */
    {               0,           0 }, /* 1ECF	ỏ	e1 bb 8f	LATIN SMALL LETTER O WITH HOOK ABOVE */
    {               0,           0 }, /* 1ED0	Ố	e1 bb 90	LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1ED1	ố	e1 bb 91	LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
    {               0,           0 }, /* 1ED2	Ồ	e1 bb 92	LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1ED3	ồ	e1 bb 93	LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
    {               0,           0 }, /* 1ED4	Ổ	e1 bb 94	LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1ED5	ổ	e1 bb 95	LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
    {               0,           0 }, /* 1ED6	Ỗ	e1 bb 96	LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1ED7	ỗ	e1 bb 97	LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
    {               0,           0 }, /* 1ED8	Ộ	e1 bb 98	LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1ED9	ộ	e1 bb 99	LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
    {               0,           0 }, /* 1EDA	Ớ	e1 bb 9a	LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
    {               0,           0 }, /* 1EDB	ớ	e1 bb 9b	LATIN SMALL LETTER O WITH HORN AND ACUTE */
    {               0,           0 }, /* 1EDC	Ờ	e1 bb 9c	LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
    {               0,           0 }, /* 1EDD	ờ	e1 bb 9d	LATIN SMALL LETTER O WITH HORN AND GRAVE */
    {               0,           0 }, /* 1EDE	Ở	e1 bb 9e	LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
    {               0,           0 }, /* 1EDF	ở	e1 bb 9f	LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
    {               0,           0 }, /* 1EE0	Ỡ	e1 bb a0	LATIN CAPITAL LETTER O WITH HORN AND TILDE */
    {               0,           0 }, /* 1EE1	ỡ	e1 bb a1	LATIN SMALL LETTER O WITH HORN AND TILDE */
    {               0,           0 }, /* 1EE2	Ợ	e1 bb a2	LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
    {               0,           0 }, /* 1EE3	ợ	e1 bb a3	LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
    {               0,           0 }, /* 1EE4	Ụ	e1 bb a4	LATIN CAPITAL LETTER U WITH DOT BELOW */
    {               0,           0 }, /* 1EE5	ụ	e1 bb a5	LATIN SMALL LETTER U WITH DOT BELOW */
    {               0,           0 }, /* 1EE6	Ủ	e1 bb a6	LATIN CAPITAL LETTER U WITH HOOK ABOVE */
    {               0,           0 }, /* 1EE7	ủ	e1 bb a7	LATIN SMALL LETTER U WITH HOOK ABOVE */
    {               0,           0 }, /* 1EE8	Ứ	e1 bb a8	LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
    {               0,           0 }, /* 1EE9	ứ	e1 bb a9	LATIN SMALL LETTER U WITH HORN AND ACUTE */
    {               0,           0 }, /* 1EEA	Ừ	e1 bb aa	LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
    {               0,           0 }, /* 1EEB	ừ	e1 bb ab	LATIN SMALL LETTER U WITH HORN AND GRAVE */
    {               0,           0 }, /* 1EEC	Ử	e1 bb ac	LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
    {               0,           0 }, /* 1EED	ử	e1 bb ad	LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
    {               0,           0 }, /* 1EEE	Ữ	e1 bb ae	LATIN CAPITAL LETTER U WITH HORN AND TILDE */
    {               0,           0 }, /* 1EEF	ữ	e1 bb af	LATIN SMALL LETTER U WITH HORN AND TILDE */
    {               0,           0 }, /* 1EF0	Ự	e1 bb b0	LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
    {               0,           0 }, /* 1EF1	ự	e1 bb b1	LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
    {               0,           0 }, /* 1EF2	Ỳ	e1 bb b2	LATIN CAPITAL LETTER Y WITH GRAVE */
    {               0,           0 }, /* 1EF3	ỳ	e1 bb b3	LATIN SMALL LETTER Y WITH GRAVE */
    {               0,           0 }, /* 1EF4	Ỵ	e1 bb b4	LATIN CAPITAL LETTER Y WITH DOT BELOW */
    {               0,           0 }, /* 1EF5	ỵ	e1 bb b5	LATIN SMALL LETTER Y WITH DOT BELOW */
    {               0,           0 }, /* 1EF6	Ỷ	e1 bb b6	LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
    {               0,           0 }, /* 1EF7	ỷ	e1 bb b7	LATIN SMALL LETTER Y WITH HOOK ABOVE */
    {               0,           0 }, /* 1EF8	Ỹ	e1 bb b8	LATIN CAPITAL LETTER Y WITH TILDE */
    {               0,           0 }, /* 1EF9	ỹ	e1 bb b9	LATIN SMALL LETTER Y WITH TILDE */
    {               0,           0 }, /* 1EFA	Ỻ	e1 bb ba	LATIN CAPITAL LETTER MIDDLE-WELSH LL */
    {               0,           0 }, /* 1EFB	ỻ	e1 bb bb	LATIN SMALL LETTER MIDDLE-WELSH LL */
    {               0,           0 }, /* 1EFC	Ỽ	e1 bb bc	LATIN CAPITAL LETTER MIDDLE-WELSH V */
    {               0,           0 }, /* 1EFD	ỽ	e1 bb bd	LATIN SMALL LETTER MIDDLE-WELSH V */
    {               0,           0 }, /* 1EFE	Ỿ	e1 bb be	LATIN CAPITAL LETTER Y WITH LOOP */
    {               0,           0 }, /* 1EFF	ỿ	e1 bb bf	LATIN SMALL LETTER Y WITH LOOP */
    {               0,           0 }, /* 1F00	ἀ	e1 bc 80	GREEK SMALL LETTER ALPHA WITH PSILI */
    {               0,           0 }, /* 1F01	ἁ	e1 bc 81	GREEK SMALL LETTER ALPHA WITH DASIA */
    {               0,           0 }, /* 1F02	ἂ	e1 bc 82	GREEK SMALL LETTER ALPHA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F03	ἃ	e1 bc 83	GREEK SMALL LETTER ALPHA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F04	ἄ	e1 bc 84	GREEK SMALL LETTER ALPHA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F05	ἅ	e1 bc 85	GREEK SMALL LETTER ALPHA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F06	ἆ	e1 bc 86	GREEK SMALL LETTER ALPHA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F07	ἇ	e1 bc 87	GREEK SMALL LETTER ALPHA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F08	Ἀ	e1 bc 88	GREEK CAPITAL LETTER ALPHA WITH PSILI */
    {               0,           0 }, /* 1F09	Ἁ	e1 bc 89	GREEK CAPITAL LETTER ALPHA WITH DASIA */
    {               0,           0 }, /* 1F0A	Ἂ	e1 bc 8a	GREEK CAPITAL LETTER ALPHA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F0B	Ἃ	e1 bc 8b	GREEK CAPITAL LETTER ALPHA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F0C	Ἄ	e1 bc 8c	GREEK CAPITAL LETTER ALPHA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F0D	Ἅ	e1 bc 8d	GREEK CAPITAL LETTER ALPHA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F0E	Ἆ	e1 bc 8e	GREEK CAPITAL LETTER ALPHA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F0F	Ἇ	e1 bc 8f	GREEK CAPITAL LETTER ALPHA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F10	ἐ	e1 bc 90	GREEK SMALL LETTER EPSILON WITH PSILI */
    {               0,           0 }, /* 1F11	ἑ	e1 bc 91	GREEK SMALL LETTER EPSILON WITH DASIA */
    {               0,           0 }, /* 1F12	ἒ	e1 bc 92	GREEK SMALL LETTER EPSILON WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F13	ἓ	e1 bc 93	GREEK SMALL LETTER EPSILON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F14	ἔ	e1 bc 94	GREEK SMALL LETTER EPSILON WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F15	ἕ	e1 bc 95	GREEK SMALL LETTER EPSILON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F16	἖	e1 bc 96	 */
    {               0,           0 }, /* 1F17	἗	e1 bc 97	 */
    {               0,           0 }, /* 1F18	Ἐ	e1 bc 98	GREEK CAPITAL LETTER EPSILON WITH PSILI */
    {               0,           0 }, /* 1F19	Ἑ	e1 bc 99	GREEK CAPITAL LETTER EPSILON WITH DASIA */
    {               0,           0 }, /* 1F1A	Ἒ	e1 bc 9a	GREEK CAPITAL LETTER EPSILON WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F1B	Ἓ	e1 bc 9b	GREEK CAPITAL LETTER EPSILON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F1C	Ἔ	e1 bc 9c	GREEK CAPITAL LETTER EPSILON WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F1D	Ἕ	e1 bc 9d	GREEK CAPITAL LETTER EPSILON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F1E	἞	e1 bc 9e	 */
    {               0,           0 }, /* 1F1F	἟	e1 bc 9f	 */
    {               0,           0 }, /* 1F20	ἠ	e1 bc a0	GREEK SMALL LETTER ETA WITH PSILI */
    {               0,           0 }, /* 1F21	ἡ	e1 bc a1	GREEK SMALL LETTER ETA WITH DASIA */
    {               0,           0 }, /* 1F22	ἢ	e1 bc a2	GREEK SMALL LETTER ETA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F23	ἣ	e1 bc a3	GREEK SMALL LETTER ETA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F24	ἤ	e1 bc a4	GREEK SMALL LETTER ETA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F25	ἥ	e1 bc a5	GREEK SMALL LETTER ETA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F26	ἦ	e1 bc a6	GREEK SMALL LETTER ETA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F27	ἧ	e1 bc a7	GREEK SMALL LETTER ETA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F28	Ἠ	e1 bc a8	GREEK CAPITAL LETTER ETA WITH PSILI */
    {               0,           0 }, /* 1F29	Ἡ	e1 bc a9	GREEK CAPITAL LETTER ETA WITH DASIA */
    {               0,           0 }, /* 1F2A	Ἢ	e1 bc aa	GREEK CAPITAL LETTER ETA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F2B	Ἣ	e1 bc ab	GREEK CAPITAL LETTER ETA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F2C	Ἤ	e1 bc ac	GREEK CAPITAL LETTER ETA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F2D	Ἥ	e1 bc ad	GREEK CAPITAL LETTER ETA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F2E	Ἦ	e1 bc ae	GREEK CAPITAL LETTER ETA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F2F	Ἧ	e1 bc af	GREEK CAPITAL LETTER ETA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F30	ἰ	e1 bc b0	GREEK SMALL LETTER IOTA WITH PSILI */
    {               0,           0 }, /* 1F31	ἱ	e1 bc b1	GREEK SMALL LETTER IOTA WITH DASIA */
    {               0,           0 }, /* 1F32	ἲ	e1 bc b2	GREEK SMALL LETTER IOTA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F33	ἳ	e1 bc b3	GREEK SMALL LETTER IOTA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F34	ἴ	e1 bc b4	GREEK SMALL LETTER IOTA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F35	ἵ	e1 bc b5	GREEK SMALL LETTER IOTA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F36	ἶ	e1 bc b6	GREEK SMALL LETTER IOTA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F37	ἷ	e1 bc b7	GREEK SMALL LETTER IOTA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F38	Ἰ	e1 bc b8	GREEK CAPITAL LETTER IOTA WITH PSILI */
    {               0,           0 }, /* 1F39	Ἱ	e1 bc b9	GREEK CAPITAL LETTER IOTA WITH DASIA */
    {               0,           0 }, /* 1F3A	Ἲ	e1 bc ba	GREEK CAPITAL LETTER IOTA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F3B	Ἳ	e1 bc bb	GREEK CAPITAL LETTER IOTA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F3C	Ἴ	e1 bc bc	GREEK CAPITAL LETTER IOTA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F3D	Ἵ	e1 bc bd	GREEK CAPITAL LETTER IOTA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F3E	Ἶ	e1 bc be	GREEK CAPITAL LETTER IOTA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F3F	Ἷ	e1 bc bf	GREEK CAPITAL LETTER IOTA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F40	ὀ	e1 bd 80	GREEK SMALL LETTER OMICRON WITH PSILI */
    {               0,           0 }, /* 1F41	ὁ	e1 bd 81	GREEK SMALL LETTER OMICRON WITH DASIA */
    {               0,           0 }, /* 1F42	ὂ	e1 bd 82	GREEK SMALL LETTER OMICRON WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F43	ὃ	e1 bd 83	GREEK SMALL LETTER OMICRON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F44	ὄ	e1 bd 84	GREEK SMALL LETTER OMICRON WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F45	ὅ	e1 bd 85	GREEK SMALL LETTER OMICRON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F46	὆	e1 bd 86	 */
    {               0,           0 }, /* 1F47	὇	e1 bd 87	 */
    {               0,           0 }, /* 1F48	Ὀ	e1 bd 88	GREEK CAPITAL LETTER OMICRON WITH PSILI */
    {               0,           0 }, /* 1F49	Ὁ	e1 bd 89	GREEK CAPITAL LETTER OMICRON WITH DASIA */
    {               0,           0 }, /* 1F4A	Ὂ	e1 bd 8a	GREEK CAPITAL LETTER OMICRON WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F4B	Ὃ	e1 bd 8b	GREEK CAPITAL LETTER OMICRON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F4C	Ὄ	e1 bd 8c	GREEK CAPITAL LETTER OMICRON WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F4D	Ὅ	e1 bd 8d	GREEK CAPITAL LETTER OMICRON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F4E	὎	e1 bd 8e	 */
    {               0,           0 }, /* 1F4F	὏	e1 bd 8f	 */
    {               0,           0 }, /* 1F50	ὐ	e1 bd 90	GREEK SMALL LETTER UPSILON WITH PSILI */
    {               0,           0 }, /* 1F51	ὑ	e1 bd 91	GREEK SMALL LETTER UPSILON WITH DASIA */
    {               0,           0 }, /* 1F52	ὒ	e1 bd 92	GREEK SMALL LETTER UPSILON WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F53	ὓ	e1 bd 93	GREEK SMALL LETTER UPSILON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F54	ὔ	e1 bd 94	GREEK SMALL LETTER UPSILON WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F55	ὕ	e1 bd 95	GREEK SMALL LETTER UPSILON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F56	ὖ	e1 bd 96	GREEK SMALL LETTER UPSILON WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F57	ὗ	e1 bd 97	GREEK SMALL LETTER UPSILON WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F58	὘	e1 bd 98	 */
    {               0,           0 }, /* 1F59	Ὑ	e1 bd 99	GREEK CAPITAL LETTER UPSILON WITH DASIA */
    {               0,           0 }, /* 1F5A	὚	e1 bd 9a	 */
    {               0,           0 }, /* 1F5B	Ὓ	e1 bd 9b	GREEK CAPITAL LETTER UPSILON WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F5C	὜	e1 bd 9c	 */
    {               0,           0 }, /* 1F5D	Ὕ	e1 bd 9d	GREEK CAPITAL LETTER UPSILON WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F5E	὞	e1 bd 9e	 */
    {               0,           0 }, /* 1F5F	Ὗ	e1 bd 9f	GREEK CAPITAL LETTER UPSILON WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F60	ὠ	e1 bd a0	GREEK SMALL LETTER OMEGA WITH PSILI */
    {               0,           0 }, /* 1F61	ὡ	e1 bd a1	GREEK SMALL LETTER OMEGA WITH DASIA */
    {               0,           0 }, /* 1F62	ὢ	e1 bd a2	GREEK SMALL LETTER OMEGA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F63	ὣ	e1 bd a3	GREEK SMALL LETTER OMEGA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F64	ὤ	e1 bd a4	GREEK SMALL LETTER OMEGA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F65	ὥ	e1 bd a5	GREEK SMALL LETTER OMEGA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F66	ὦ	e1 bd a6	GREEK SMALL LETTER OMEGA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F67	ὧ	e1 bd a7	GREEK SMALL LETTER OMEGA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F68	Ὠ	e1 bd a8	GREEK CAPITAL LETTER OMEGA WITH PSILI */
    {               0,           0 }, /* 1F69	Ὡ	e1 bd a9	GREEK CAPITAL LETTER OMEGA WITH DASIA */
    {               0,           0 }, /* 1F6A	Ὢ	e1 bd aa	GREEK CAPITAL LETTER OMEGA WITH PSILI AND VARIA */
    {               0,           0 }, /* 1F6B	Ὣ	e1 bd ab	GREEK CAPITAL LETTER OMEGA WITH DASIA AND VARIA */
    {               0,           0 }, /* 1F6C	Ὤ	e1 bd ac	GREEK CAPITAL LETTER OMEGA WITH PSILI AND OXIA */
    {               0,           0 }, /* 1F6D	Ὥ	e1 bd ad	GREEK CAPITAL LETTER OMEGA WITH DASIA AND OXIA */
    {               0,           0 }, /* 1F6E	Ὦ	e1 bd ae	GREEK CAPITAL LETTER OMEGA WITH PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1F6F	Ὧ	e1 bd af	GREEK CAPITAL LETTER OMEGA WITH DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1F70	ὰ	e1 bd b0	GREEK SMALL LETTER ALPHA WITH VARIA */
    {               0,           0 }, /* 1F71	ά	e1 bd b1	GREEK SMALL LETTER ALPHA WITH OXIA */
    {               0,           0 }, /* 1F72	ὲ	e1 bd b2	GREEK SMALL LETTER EPSILON WITH VARIA */
    {               0,           0 }, /* 1F73	έ	e1 bd b3	GREEK SMALL LETTER EPSILON WITH OXIA */
    {               0,           0 }, /* 1F74	ὴ	e1 bd b4	GREEK SMALL LETTER ETA WITH VARIA */
    {               0,           0 }, /* 1F75	ή	e1 bd b5	GREEK SMALL LETTER ETA WITH OXIA */
    {               0,           0 }, /* 1F76	ὶ	e1 bd b6	GREEK SMALL LETTER IOTA WITH VARIA */
    {               0,           0 }, /* 1F77	ί	e1 bd b7	GREEK SMALL LETTER IOTA WITH OXIA */
    {               0,           0 }, /* 1F78	ὸ	e1 bd b8	GREEK SMALL LETTER OMICRON WITH VARIA */
    {               0,           0 }, /* 1F79	ό	e1 bd b9	GREEK SMALL LETTER OMICRON WITH OXIA */
    {               0,           0 }, /* 1F7A	ὺ	e1 bd ba	GREEK SMALL LETTER UPSILON WITH VARIA */
    {               0,           0 }, /* 1F7B	ύ	e1 bd bb	GREEK SMALL LETTER UPSILON WITH OXIA */
    {               0,           0 }, /* 1F7C	ὼ	e1 bd bc	GREEK SMALL LETTER OMEGA WITH VARIA */
    {               0,           0 }, /* 1F7D	ώ	e1 bd bd	GREEK SMALL LETTER OMEGA WITH OXIA */
    {               0,           0 }, /* 1F7E	὾	e1 bd be	 */
    {               0,           0 }, /* 1F7F	὿	e1 bd bf	 */
    {               0,           0 }, /* 1F80	ᾀ	e1 be 80	GREEK SMALL LETTER ALPHA WITH PSILI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F81	ᾁ	e1 be 81	GREEK SMALL LETTER ALPHA WITH DASIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F82	ᾂ	e1 be 82	GREEK SMALL LETTER ALPHA WITH PSILI AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F83	ᾃ	e1 be 83	GREEK SMALL LETTER ALPHA WITH DASIA AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F84	ᾄ	e1 be 84	GREEK SMALL LETTER ALPHA WITH PSILI AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F85	ᾅ	e1 be 85	GREEK SMALL LETTER ALPHA WITH DASIA AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F86	ᾆ	e1 be 86	GREEK SMALL LETTER ALPHA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F87	ᾇ	e1 be 87	GREEK SMALL LETTER ALPHA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F88	ᾈ	e1 be 88	GREEK CAPITAL LETTER ALPHA WITH PSILI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F89	ᾉ	e1 be 89	GREEK CAPITAL LETTER ALPHA WITH DASIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8A	ᾊ	e1 be 8a	GREEK CAPITAL LETTER ALPHA WITH PSILI AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8B	ᾋ	e1 be 8b	GREEK CAPITAL LETTER ALPHA WITH DASIA AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8C	ᾌ	e1 be 8c	GREEK CAPITAL LETTER ALPHA WITH PSILI AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8D	ᾍ	e1 be 8d	GREEK CAPITAL LETTER ALPHA WITH DASIA AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8E	ᾎ	e1 be 8e	GREEK CAPITAL LETTER ALPHA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F8F	ᾏ	e1 be 8f	GREEK CAPITAL LETTER ALPHA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F90	ᾐ	e1 be 90	GREEK SMALL LETTER ETA WITH PSILI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F91	ᾑ	e1 be 91	GREEK SMALL LETTER ETA WITH DASIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F92	ᾒ	e1 be 92	GREEK SMALL LETTER ETA WITH PSILI AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F93	ᾓ	e1 be 93	GREEK SMALL LETTER ETA WITH DASIA AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F94	ᾔ	e1 be 94	GREEK SMALL LETTER ETA WITH PSILI AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F95	ᾕ	e1 be 95	GREEK SMALL LETTER ETA WITH DASIA AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F96	ᾖ	e1 be 96	GREEK SMALL LETTER ETA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F97	ᾗ	e1 be 97	GREEK SMALL LETTER ETA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1F98	ᾘ	e1 be 98	GREEK CAPITAL LETTER ETA WITH PSILI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F99	ᾙ	e1 be 99	GREEK CAPITAL LETTER ETA WITH DASIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9A	ᾚ	e1 be 9a	GREEK CAPITAL LETTER ETA WITH PSILI AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9B	ᾛ	e1 be 9b	GREEK CAPITAL LETTER ETA WITH DASIA AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9C	ᾜ	e1 be 9c	GREEK CAPITAL LETTER ETA WITH PSILI AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9D	ᾝ	e1 be 9d	GREEK CAPITAL LETTER ETA WITH DASIA AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9E	ᾞ	e1 be 9e	GREEK CAPITAL LETTER ETA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1F9F	ᾟ	e1 be 9f	GREEK CAPITAL LETTER ETA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FA0	ᾠ	e1 be a0	GREEK SMALL LETTER OMEGA WITH PSILI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA1	ᾡ	e1 be a1	GREEK SMALL LETTER OMEGA WITH DASIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA2	ᾢ	e1 be a2	GREEK SMALL LETTER OMEGA WITH PSILI AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA3	ᾣ	e1 be a3	GREEK SMALL LETTER OMEGA WITH DASIA AND VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA4	ᾤ	e1 be a4	GREEK SMALL LETTER OMEGA WITH PSILI AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA5	ᾥ	e1 be a5	GREEK SMALL LETTER OMEGA WITH DASIA AND OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA6	ᾦ	e1 be a6	GREEK SMALL LETTER OMEGA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA7	ᾧ	e1 be a7	GREEK SMALL LETTER OMEGA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FA8	ᾨ	e1 be a8	GREEK CAPITAL LETTER OMEGA WITH PSILI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FA9	ᾩ	e1 be a9	GREEK CAPITAL LETTER OMEGA WITH DASIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAA	ᾪ	e1 be aa	GREEK CAPITAL LETTER OMEGA WITH PSILI AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAB	ᾫ	e1 be ab	GREEK CAPITAL LETTER OMEGA WITH DASIA AND VARIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAC	ᾬ	e1 be ac	GREEK CAPITAL LETTER OMEGA WITH PSILI AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAD	ᾭ	e1 be ad	GREEK CAPITAL LETTER OMEGA WITH DASIA AND OXIA AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAE	ᾮ	e1 be ae	GREEK CAPITAL LETTER OMEGA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FAF	ᾯ	e1 be af	GREEK CAPITAL LETTER OMEGA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI */
    {               0,           0 }, /* 1FB0	ᾰ	e1 be b0	GREEK SMALL LETTER ALPHA WITH VRACHY */
    {               0,           0 }, /* 1FB1	ᾱ	e1 be b1	GREEK SMALL LETTER ALPHA WITH MACRON */
    {               0,           0 }, /* 1FB2	ᾲ	e1 be b2	GREEK SMALL LETTER ALPHA WITH VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FB3	ᾳ	e1 be b3	GREEK SMALL LETTER ALPHA WITH YPOGEGRAMMENI */
    {               0,           0 }, /* 1FB4	ᾴ	e1 be b4	GREEK SMALL LETTER ALPHA WITH OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FB5	᾵	e1 be b5	 */
    {               0,           0 }, /* 1FB6	ᾶ	e1 be b6	GREEK SMALL LETTER ALPHA WITH PERISPOMENI */
    {               0,           0 }, /* 1FB7	ᾷ	e1 be b7	GREEK SMALL LETTER ALPHA WITH PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FB8	Ᾰ	e1 be b8	GREEK CAPITAL LETTER ALPHA WITH VRACHY */
    {               0,           0 }, /* 1FB9	Ᾱ	e1 be b9	GREEK CAPITAL LETTER ALPHA WITH MACRON */
    {               0,           0 }, /* 1FBA	Ὰ	e1 be ba	GREEK CAPITAL LETTER ALPHA WITH VARIA */
    {               0,           0 }, /* 1FBB	Ά	e1 be bb	GREEK CAPITAL LETTER ALPHA WITH OXIA */
    {               0,           0 }, /* 1FBC	ᾼ	e1 be bc	GREEK CAPITAL LETTER ALPHA WITH PROSGEGRAMMENI */
    {               0,           0 }, /* 1FBD	᾽	e1 be bd	GREEK KORONIS */
    {               0,           0 }, /* 1FBE	ι	e1 be be	GREEK PROSGEGRAMMENI */
    {               0,           0 }, /* 1FBF	᾿	e1 be bf	GREEK PSILI */
    {               0,           0 }, /* 1FC0	῀	e1 bf 80	GREEK PERISPOMENI */
    {               0,           0 }, /* 1FC1	῁	e1 bf 81	GREEK DIALYTIKA AND PERISPOMENI */
    {               0,           0 }, /* 1FC2	ῂ	e1 bf 82	GREEK SMALL LETTER ETA WITH VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FC3	ῃ	e1 bf 83	GREEK SMALL LETTER ETA WITH YPOGEGRAMMENI */
    {               0,           0 }, /* 1FC4	ῄ	e1 bf 84	GREEK SMALL LETTER ETA WITH OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FC5	῅	e1 bf 85	 */
    {               0,           0 }, /* 1FC6	ῆ	e1 bf 86	GREEK SMALL LETTER ETA WITH PERISPOMENI */
    {               0,           0 }, /* 1FC7	ῇ	e1 bf 87	GREEK SMALL LETTER ETA WITH PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FC8	Ὲ	e1 bf 88	GREEK CAPITAL LETTER EPSILON WITH VARIA */
    {               0,           0 }, /* 1FC9	Έ	e1 bf 89	GREEK CAPITAL LETTER EPSILON WITH OXIA */
    {               0,           0 }, /* 1FCA	Ὴ	e1 bf 8a	GREEK CAPITAL LETTER ETA WITH VARIA */
    {               0,           0 }, /* 1FCB	Ή	e1 bf 8b	GREEK CAPITAL LETTER ETA WITH OXIA */
    {               0,           0 }, /* 1FCC	ῌ	e1 bf 8c	GREEK CAPITAL LETTER ETA WITH PROSGEGRAMMENI */
    {               0,           0 }, /* 1FCD	῍	e1 bf 8d	GREEK PSILI AND VARIA */
    {               0,           0 }, /* 1FCE	῎	e1 bf 8e	GREEK PSILI AND OXIA */
    {               0,           0 }, /* 1FCF	῏	e1 bf 8f	GREEK PSILI AND PERISPOMENI */
    {               0,           0 }, /* 1FD0	ῐ	e1 bf 90	GREEK SMALL LETTER IOTA WITH VRACHY */
    {               0,           0 }, /* 1FD1	ῑ	e1 bf 91	GREEK SMALL LETTER IOTA WITH MACRON */
    {               0,           0 }, /* 1FD2	ῒ	e1 bf 92	GREEK SMALL LETTER IOTA WITH DIALYTIKA AND VARIA */
    {               0,           0 }, /* 1FD3	ΐ	e1 bf 93	GREEK SMALL LETTER IOTA WITH DIALYTIKA AND OXIA */
    {               0,           0 }, /* 1FD4	῔	e1 bf 94	 */
    {               0,           0 }, /* 1FD5	῕	e1 bf 95	 */
    {               0,           0 }, /* 1FD6	ῖ	e1 bf 96	GREEK SMALL LETTER IOTA WITH PERISPOMENI */
    {               0,           0 }, /* 1FD7	ῗ	e1 bf 97	GREEK SMALL LETTER IOTA WITH DIALYTIKA AND PERISPOMENI */
    {               0,           0 }, /* 1FD8	Ῐ	e1 bf 98	GREEK CAPITAL LETTER IOTA WITH VRACHY */
    {               0,           0 }, /* 1FD9	Ῑ	e1 bf 99	GREEK CAPITAL LETTER IOTA WITH MACRON */
    {               0,           0 }, /* 1FDA	Ὶ	e1 bf 9a	GREEK CAPITAL LETTER IOTA WITH VARIA */
    {               0,           0 }, /* 1FDB	Ί	e1 bf 9b	GREEK CAPITAL LETTER IOTA WITH OXIA */
    {               0,           0 }, /* 1FDC	῜	e1 bf 9c	 */
    {               0,           0 }, /* 1FDD	῝	e1 bf 9d	GREEK DASIA AND VARIA */
    {               0,           0 }, /* 1FDE	῞	e1 bf 9e	GREEK DASIA AND OXIA */
    {               0,           0 }, /* 1FDF	῟	e1 bf 9f	GREEK DASIA AND PERISPOMENI */
    {               0,           0 }, /* 1FE0	ῠ	e1 bf a0	GREEK SMALL LETTER UPSILON WITH VRACHY */
    {               0,           0 }, /* 1FE1	ῡ	e1 bf a1	GREEK SMALL LETTER UPSILON WITH MACRON */
    {               0,           0 }, /* 1FE2	ῢ	e1 bf a2	GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND VARIA */
    {               0,           0 }, /* 1FE3	ΰ	e1 bf a3	GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND OXIA */
    {               0,           0 }, /* 1FE4	ῤ	e1 bf a4	GREEK SMALL LETTER RHO WITH PSILI */
    {               0,           0 }, /* 1FE5	ῥ	e1 bf a5	GREEK SMALL LETTER RHO WITH DASIA */
    {               0,           0 }, /* 1FE6	ῦ	e1 bf a6	GREEK SMALL LETTER UPSILON WITH PERISPOMENI */
    {               0,           0 }, /* 1FE7	ῧ	e1 bf a7	GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND PERISPOMENI */
    {               0,           0 }, /* 1FE8	Ῠ	e1 bf a8	GREEK CAPITAL LETTER UPSILON WITH VRACHY */
    {               0,           0 }, /* 1FE9	Ῡ	e1 bf a9	GREEK CAPITAL LETTER UPSILON WITH MACRON */
    {               0,           0 }, /* 1FEA	Ὺ	e1 bf aa	GREEK CAPITAL LETTER UPSILON WITH VARIA */
    {               0,           0 }, /* 1FEB	Ύ	e1 bf ab	GREEK CAPITAL LETTER UPSILON WITH OXIA */
    {               0,           0 }, /* 1FEC	Ῥ	e1 bf ac	GREEK CAPITAL LETTER RHO WITH DASIA */
    {               0,           0 }, /* 1FED	῭	e1 bf ad	GREEK DIALYTIKA AND VARIA */
    {               0,           0 }, /* 1FEE	΅	e1 bf ae	GREEK DIALYTIKA AND OXIA */
    {               0,           0 }, /* 1FEF	`	e1 bf af	GREEK VARIA */
    {               0,           0 }, /* 1FF0	῰	e1 bf b0	 */
    {               0,           0 }, /* 1FF1	῱	e1 bf b1	 */
    {               0,           0 }, /* 1FF2	ῲ	e1 bf b2	GREEK SMALL LETTER OMEGA WITH VARIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FF3	ῳ	e1 bf b3	GREEK SMALL LETTER OMEGA WITH YPOGEGRAMMENI */
    {               0,           0 }, /* 1FF4	ῴ	e1 bf b4	GREEK SMALL LETTER OMEGA WITH OXIA AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FF5	῵	e1 bf b5	 */
    {               0,           0 }, /* 1FF6	ῶ	e1 bf b6	GREEK SMALL LETTER OMEGA WITH PERISPOMENI */
    {               0,           0 }, /* 1FF7	ῷ	e1 bf b7	GREEK SMALL LETTER OMEGA WITH PERISPOMENI AND YPOGEGRAMMENI */
    {               0,           0 }, /* 1FF8	Ὸ	e1 bf b8	GREEK CAPITAL LETTER OMICRON WITH VARIA */
    {               0,           0 }, /* 1FF9	Ό	e1 bf b9	GREEK CAPITAL LETTER OMICRON WITH OXIA */
    {               0,           0 }, /* 1FFA	Ὼ	e1 bf ba	GREEK CAPITAL LETTER OMEGA WITH VARIA */
    {               0,           0 }, /* 1FFB	Ώ	e1 bf bb	GREEK CAPITAL LETTER OMEGA WITH OXIA */
    {               0,           0 }, /* 1FFC	ῼ	e1 bf bc	GREEK CAPITAL LETTER OMEGA WITH PROSGEGRAMMENI */
    {               0,           0 }, /* 1FFD	´	e1 bf bd	GREEK OXIA */
    {               0,           0 }, /* 1FFE	῾	e1 bf be	GREEK DASIA */
    {               0,           0 }, /* 1FFF	῿	e1 bf bf	 */

};

static const struct swcs_char_properties empty_sw_char = { 0, 0 };
static const struct swcs_char_properties cjk_sw_char = { SW_WP_CJK, 0 };

const struct swcs_char_properties* swcs_get_char_properties(uint16_t c)
{
    if (c < 0x2000) return &(__swcs_chars[c]);

    if ((c >= 0x4300) && (c <= 0x9fff)) return &cjk_sw_char;
    if ((c >= 0x3400) && (c <= 0x4dbf)) return &cjk_sw_char;
    if ((c >= 0xf900) && (c <= 0xfaff)) return &cjk_sw_char;

    return &empty_sw_char;
}

