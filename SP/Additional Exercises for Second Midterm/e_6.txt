Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи. 

Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата враќа вредност 0.

Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

Пример 1.

Влез

12 // бројот N на елементи

1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата


Излез

Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака




Пример 2.

Влез

12 // бројот N на елементи

7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата


Излез

Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака 

#include <stdio.h>
#include <string.h>


int par(int * a, int n) {
    int brojac;
    int najmal_broj=999;
    int flag=0;
    for(int i=0; i<n; i++) {
        brojac=0;
        for(int j=0; j<n; j++) {
            if(a[i]==a[j]) {
                brojac++;
            }
        }
        if(brojac%2==0) {
            if(a[i]<najmal_broj) {
                najmal_broj=a[i];
                flag=1;
            }
        }
    }
    if(flag) {
        return najmal_broj;
    }
    else {
        return 0;
    }
}
int main() {

   int a[100];
   int N;
   scanf("%d", &N);

   for(int i=0; i<N; i++) {
       scanf("%d", &a[i]);
   }
    
    if(par(a, N)) {
         printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(a, N));
    }
    else {
        printf("Nitu eden element ne se pojavuva paren broj pati!");
    }
  
return 0;

}
