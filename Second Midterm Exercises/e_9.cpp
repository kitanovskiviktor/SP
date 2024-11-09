Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

v=a0+1a1+...1an−2+1an−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.


#include <stdio.h>

float rekurzija(int niza[], int N, int element) {
    
    if(element==N-1) {
        return niza[element];
    }
    return niza[element]+1/rekurzija(niza, N, element+1);
}

int main() {
    
    int N;
    
    scanf("%d", &N);
    
    int a[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("%f", rekurzija(a, N, 0));
    return 0;
}