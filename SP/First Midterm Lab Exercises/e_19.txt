Се внесува време во интернационална форма (4 вредности: час - од 1 до 12, минути – од 0 до 59, секунди – од 0 до 59, и знак А ако е од полноќ до претпладне или Р ако е од пладне до полноќ). Да се презентира времето во македонска форма во која 0 часот стои наместо 12 на полноќ, од 13 часот до 23 стојат за попладневните од 1 до 11 за претпладневните.

Формата за точен излез може да се види во тест примерите.

#include <stdio.h>

int main() {
    
    char bukva;

    int cas, minuti, sekundi;
    scanf("%d%d%d\n", &cas, &minuti, &sekundi);
    scanf("%c", &bukva);
    if(bukva=='A') {
        if(cas==12) {
            printf("00:%.2d:%.2d", minuti, sekundi);
        }
         if(cas<12) {
            printf("%.2d:%.2d:%.2d", cas, minuti, sekundi);
        }
    }
    
     if(bukva=='P') {
        if(cas==12) {
            printf("12:%.2d:%.2d", minuti, sekundi);
        }
        if(cas<12) {
            printf("%.2d:%.2d:%.2d", cas+12, minuti, sekundi);
        }
    }
    
    return 0;
}