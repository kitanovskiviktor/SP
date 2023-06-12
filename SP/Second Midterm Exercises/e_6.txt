Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:

 1 1 1 0
 1 0 1 1
 1 0 1 1
 1 0 0 1
 
1 ред + 1 колона = 2

#include <stdio.h>

int main() {
    
    int M, N;
    scanf("%d%d", &M, &N);
    int a[M][N];
    
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int brojac=0;
    for(int i=0; i<M; i++) {
        int kecovi=0;
        for(int j=0; j<N; j++) {
           kecovi+=a[i][j];
           if(kecovi>2) {
               brojac++;
               break;
           }
           if(a[i][j]==0) {
               kecovi=0;
           }
        }
    }
    
    for(int j=0; j<N; j++) {
        int kecovi=0;
        for(int i=0; i<M; i++) {
            kecovi+=a[i][j];
            if(kecovi>2) {
                brojac++;
                break;
            }
            if(a[i][j]==0) {
                kecovi=0;
            }
        }
    }
    printf("%d", brojac);
    return 0;
}