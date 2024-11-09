Од стандарден влез се внесува даден број X,  а потоа се внесуваат броеви додека не се внесе нешто различно од број. За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х, и доколку условот е исполнет, да се испечати.

#include <stdio.h>

int main() {
    
   int X;
    scanf("%d", &X);
    int broj;
    int brojcifri=0;
    while(X>0) {
        brojcifri++;
        X=X/10;
    }
    while(scanf("%d", &broj)) {
        int broj_c=0;
        int R=broj;
        
        while(R>0) {
            broj_c++;
            R=R/10;
        }
        if(broj_c==brojcifri) {
            printf("%d\n", broj);
        }
        

    }
    return 0;
}