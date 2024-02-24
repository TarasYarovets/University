#include <stdio.h>

int main(void)
{
    char text[100];
    int lit = 0;
    printf("%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c: ", -115, -96, -81, -88, -24, 105, -30, -20, -32, -91, -25, -91, -83, -83, -17);
    fgets(text, sizeof(text), stdin);
    for (int i = 0; i < 100; i++) {
            if (text[i] == -11 || text[i] == -12) {
                lit = lit + 1;
            }
            if (text[i] == '.' && text[i+1] == '.' && text[i+2] == '.') {
                break;
            }
    }
    printf("%c%c%c %c%c%c%c%c%c%c%c%c \"%c\" %c %c%c%c%c%c%c%c: %d\n", -114, -31, -20, -86, 105, -85, -20, -86, 105, -31, -30, -20, -11, -94, -32, -91, -25, -91, -83, -83, 105, lit);
    if (lit == 0){
        for (int i = 0; i < 100; i++){
            if (text[i] == -94) {
                text[i] = -126;
            }
            if (text[i] == -92){
                text[i] = -124;
            }
            if (text[i] == -91){
                text[i] = -123;
            }
            if (text[i] == -13){
                text[i] = -14;
            }
            if (text[i] == -90){
                text[i] = -122;
            }
            if (text[i] == -89){
                text[i] = -121;
            }
        }
        printf("%s", text);
    }
}
