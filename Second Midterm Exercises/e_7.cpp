Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6

Излез:

5 1 1

#include <stdio.h>
#include <math.h>
int main() {
    
    int M, N;
    scanf("%d%d", &M, &N);
    
    int a[M][N];
    int b[M];
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    float aritmeticka_sredina=0;
     for(int i=0; i<M; i++) {
         float zbir=0;
        for(int j=0; j<N; j++) {
            zbir+=a[i][j];
        }
        aritmeticka_sredina=zbir/N;
        float max=-1;
        int number=0;
        for(int z=0; z<N; z++) {
            if(fabs(a[i][z]-aritmeticka_sredina)>max) {
               max=fabs(a[i][z]-aritmeticka_sredina);
               number=a[i][z];
            }
            
        }
        printf("%d ", number);
    }
    return 0;
}