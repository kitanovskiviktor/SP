Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <stdio.h>

int funkcija(int * a, int * N) {
    int brojac;
    for(int i=0; i<*N; i++) {
        if(*(a+i)>0) brojac++;
    }
    return brojac;
}

int main() {
    
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", funkcija(a, &N));
    
    return 0;
}