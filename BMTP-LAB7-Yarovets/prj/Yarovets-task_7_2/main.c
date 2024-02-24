#include <stdio.h>

int main()
{
    int massive[15];
    int minm, maxm;
    int indexminm, indexmaxm;
    for (int i = 0; i < 15; i++) {
        printf("%c%c%c%c%c%c%c %d %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c: ", -126, -94, -91, -92, 105, -30, -20, i + 1, -83, -96, -30, -29, -32, -96, -85, -20, -83, -91, -25, -88, -31, -85, -82);
        scanf("%d", &massive[i]);
    }
    printf("\n%c%c%c %c%c%c%c%c:", -114, -31, -20,-84, -96, -31, -88, -94);
    for(int i= 0; i < 15; i++){
        printf("%d ", massive[i]);
    }
    minm = massive[0];
    maxm = massive[0];
    for (int index = 1; index < 15; index++) {
        if (minm > massive[index]) {
            minm = massive[index];
            indexminm= index;
        }
        if (maxm < massive[index]) {
            maxm = massive[index];
            indexmaxm= index;
        }
    }
    massive[indexminm]= maxm;
    massive[indexmaxm]= minm;
    printf("\n%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c:", -114, -31, -20, -84, -82, -92, -88, -28, 105, -86, -82, -94, -96, -83, -88, -87, -84, -96, -31, -88, -94);
    for(int i= 0; i < 15; i++){
        printf("%d ", massive[i]);
    }
}
