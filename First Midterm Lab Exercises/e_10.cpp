Милан и Марко играат повеќе партии „модифициран финки“ покер (само со картите J, Q, K и A). Победник на секоја партија покер е оној играч чии карти имаат поголем збир (J=12, Q=13, K=14 и A=15). На стандарден влез првин се внесува бројот n број на партии кои биле одиграни од Милан и Марко. Потоа Влатко во следните n партии дели по 4 карти (пр. J A K Q), каде првите две карти се картите на Милан (J и A, збир 27), другите две карти се карти на Марко (K и Q, збир 27). За секоја партија соодветно да се испечати името на победникот во нов ред, доколку Милан и Марко имаат ист збир на карти да се испечати Neresheno. Во последен ред да се испечати бројот на победи на Милан и Марко оделени со празно место.

#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    int marko=0;
    int milan=0;
    for(int i=1; i<=N; i++) {
        int zbirMilan=0;
        int zbirMarko=0;
        for(int j=1; j<=4; j++) {
            int poeni=0;
            char karta;
            scanf(" %c", &karta);
            
            if(karta=='J') {
                poeni=12;
            }
            if(karta=='Q') {
                poeni=13;
            }
            if(karta=='K') {
                poeni=14;
            }
            if(karta=='A') {
                poeni=15;
            }
            if(j==1 || j==2) {
                zbirMilan+=poeni;
            }
            if(j==3 || j==4) {
                zbirMarko+=poeni;
            }
        }
        if(zbirMarko>zbirMilan) {
            printf("Marko\n");
            marko++;
        }
        else if(zbirMilan>zbirMarko) {
            printf("Milan\n");
            milan++;
        }
        else if(zbirMilan==zbirMarko) {
            printf("Neresheno\n");
        }
    }
    printf("%d %d", milan, marko);
    return 0;
}