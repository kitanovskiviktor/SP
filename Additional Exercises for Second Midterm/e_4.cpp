Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.

Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

Пример

Влез:

6

Ekjqh!!lkjsdh 

 A1c01АA1c92

12A1cwwA1cxy 

12A1cwwA1bxy 

аA1cwA1cA1ccA1cxab

nemaA1c_povekjepati


Излез

а1c01аа1c92

12а1cwwа1cxy 

аа1cwа1cа1ccа1cxab

#include <stdio.h>


int proverka(char * niza) {
    int dolzina=strlen(niza);
    int brojac=0;
    for(int i=0; i<dolzina; i++) {
        if(niza[i]=='a' && niza[i+1]=='1' && niza[i+2]=='c') {
            brojac++;
        }
    }
    if(brojac>=2) {
        return 1;
    }
    else {
        return 0;
    }
}

void smeni(char * niza) {
    
    for(int i=0; i<strlen(niza); i++) {
        niza[i]=tolower(niza[i]);
    }
}
int main() {
    
    int N;
    scanf("%d", &N);
    char a[100];
    for(int i=0; i<N; i++) {
        scanf("%s", &a);
        smeni(a);
        if(proverka(a)) {
            printf("%s\n", a);
        }
    }
    return 0;
}

