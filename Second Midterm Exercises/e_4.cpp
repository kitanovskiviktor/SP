Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата). Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.

Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.

#include <stdio.h>

int main() {
    
    int M, N;
    scanf("%d%d", &M, &N);
    int a[M][N];
    int zbir_prv=0;
    int zbir_vtor=0;
    int zbir_tret=0;
    int zbir_cetvrt=0;
    
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int index_1, index_2;
    scanf("%d%d", &index_1, &index_2);
     for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(i<index_1 && j>=index_2) {
                zbir_prv+=a[i][j];
                continue;
            }
            if(i<index_1 && j<index_2) {
                zbir_vtor+=a[i][j];
                continue;
            }
            if(i>=index_1 && j<index_2) {
                zbir_tret+=a[i][j];
                continue;
            }
            zbir_cetvrt+=a[i][j];
        }
    }
    printf("%d %d %d %d", zbir_prv, zbir_vtor, zbir_tret, zbir_cetvrt);
    return 0;
}