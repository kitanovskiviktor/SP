Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

Влез:

9

a!bcdedcb!a

Kfd?vsvv98_89vvsv?dfK

Ccsvsdvdfv

342425vbbcb

352!2353696969625

gdg??dfg!!

5336346644747

8338736767867

12344321

Излез:

Kfd?vsvv98_89vvsv?dfK

 #include <stdio.h>
#include <string.h>
#include <ctype.h>


int palindrom(char * niza) {

    int i=0;
    int dolzina=strlen(niza);
    for(int i=0; i<dolzina/2; i++)
        if(*(niza+i)!=*(niza+dolzina-i-1))
            return 0;
    return 1;
}

int proverka_znak(char * niza) {
    int dolzina=strlen(niza);
    for(int i=0; i<dolzina; i++) {
        if(ispunct(niza[i])) {
            return 1;
        }
    }
    return 0;
}


int main() {

    char a[100];
    char b[100];
    int N;
    int max=0;
    scanf("%d", &N);
    int flag=0;
    for(int i=0; i<N; i++) {
        scanf("%s", &a);
        if(palindrom(a) && proverka_znak(a)) {
            flag=1;
            if(strlen(a)>max) {
                //  strcpy(b, a);
                for(int z=0; z<strlen(a); z++) {
                    b[z]=a[z];
                }
                  max=strlen(a);
            }
        }
   }
   if(!flag) {
       printf("Nema!");
   }
   printf("%s", b);
    return 0;
}


