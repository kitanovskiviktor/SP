Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void funkcija(char * niza, int pomestuvanje) {
    int dolzina = strlen(niza);
    int golema=0;
    int flag=1;
   for(int i=0; i<dolzina; i++) {
       if(isalpha(*(niza+i))) {
           
           if(isupper(niza[0])) {
               golema=1;
           }
           *(niza+i)=*(niza+i) + pomestuvanje;
           if(!isalpha(*(niza+i))) {
               *(niza+i)=*(niza+i)-26;
           }
           if(flag) {
               if(islower(niza[0]) && golema==1) {
               *(niza+i)=*(niza+i)-26;
               golema=0;
               flag=0;
          }
           }
       }
   }
}

int main() {
    
    int N;
    int X;
    scanf("%d%d\n", &N, &X);
    
    for(int i=0; i<N; i++) {
        char a[100];
        fgets(a, 100, stdin);
        funkcija(a,X);
        printf("%s", a);
    }
    return 0;
}