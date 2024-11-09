Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

Пример за N = 3 Влез:

3

1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18

Излез:

1 2 3
7 8 9
13 14 15
4 5 6
10 11 12
16 17 18


#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    
    int A[2*N][N];
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<2*N; j++) {
            if(j<N) {
                scanf("%d", &A[i][j]);
            }
            else {
                scanf("%d", &A[i+N][j-N]);
            }
        }
    }
    
    for(int i=0; i<2*N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}