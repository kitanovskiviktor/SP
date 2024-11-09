Во рамките на текстуална датотека matrica.txt се сместени елементите од една матрица (A), составена од природни броеви. Во првиот ред од датотеката се запишани бројот на редици N и бројот на колони M на матрицата (N, M < 100). Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.

За секоја редица, да се испечати индексот на редицата и бројот на штосни броеви во таа редица во формат indeks_na_redica: broj_na_stosni_broevi_vo_taa_redica (види тест пример).

Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.




Помош:

Штосен елемент: парноста на елементот Aij е иста со парноста на i + j

- ако i=11, j=21, а елементот Aij има вредност 14, тогаш тој е штосен број бидејќи 11 + 21 = 32 што е парен број, а и 14 е исто така парен број

Пример:

Влез: // датотека matrica.txt

4  5

0    1    2    3    4

6    6    7    7    8

11    22    21    24    13

0    1    21    4    21

Излез:

0: 5

1: 2

2: 0

3: 3




Објаснување:

Во матрицата A штосни броеви се: 

во 1вата редица се броевите 0, 1, 2, 3, 4, вкупниот број на штосни броеви е 5 и се печати 0: 5

во 2рата редица се броевите 6, 7, вкупниот број на штосни броеви е 2 и се печати 1: 2

во 3тата редица нема штосни броеви и се печати 2: 0

во 4тата редица се броевите 21, 4, 21, вкупниот број на штосни броеви е 3 и се печати 3: 3

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
        while((c = getchar()) != '#') {
            fputc(c, f);
            }
        fclose(f);
}


int main() {
    wtf();
    
    FILE *dat;
    
    if((dat=fopen("matrica.txt", "r"))==NULL) {
        printf("Greska!");
        return 0;
    }
    
    int M, N;
    fscanf(dat, "%d", &M);
    fscanf(dat, "%d", &N);
    
    int matrica[100][100];
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            fscanf(dat, "%d", &matrica[i][j]);
        }
    }
    
    int vkupno=0;
    for(int i=0; i<M; i++) {
        vkupno=0;
        for(int j=0; j<N; j++) {
           int indeksi=i+j;
           if(indeksi%2==0 && matrica[i][j]%2==0) {
               vkupno++;
           }
           if(indeksi%2==1 && matrica[i][j]%2==1) {
               vkupno++;
           }
        }
        printf("%d: %d\n", i, vkupno);
    }
    fclose(dat);
    
    return 0;
}







/*
int clearString(char *str){
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
}

int main() {
wtf();
//vasiot kod ovde
FILE *f;

if((f=fopen("matrica.txt", "r"))==NULL) {
    printf("Greska");
    return 0;
}

        int counter=0;
        int m, n, i, j, matrix[100][100];
        
        fscanf(f, "%d", &m);
        fscanf(f, "%d", &n);

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                fscanf(f, "%d", &matrix[i][j]);
            }
        }

        for(i=0; i<m; i++){
            counter=0;
                for(j=0; j<n; j++){
                    if(matrix[i][j]%2==0 && (i+j)%2==0){
                        counter++;
                    }
                    else if(matrix[i][j]%2==1 && (i+j)%2==1){
                        counter++;
                }
            }
        printf("%d: %d\n", i, counter);
        }

fclose(f);
return 0;
} */

