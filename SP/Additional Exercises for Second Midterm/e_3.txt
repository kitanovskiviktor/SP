Од тастатура се чита природен број N (N < 400).

Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.

Формираната матрица да се запише во датотека "shema.txt".


Пример.

Влез

22


Излез во датотеката "shema.txt"

1 10 11 20 21

2 9 12 19 22

3 8 13 18 0

4 7 14 17 0

5 6 15 16 0


#include <stdio.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    //Vasiot kod tuka
    
       int broj;
    scanf("%d", &broj);
    int N;
    if(broj==1) {
        printf("1");
        return 0;
    }
    for(int i=1; i<broj/2; i++) {
        if(i*i>=broj) {
            N=i;
            break;
        }
    }
    
    int a[100][100];
    int brojce=1;

    for(int j=0; j<N; j++) {
           if(j%2==0) {
                 for(int i=0; i<N; i++) {
                        if(brojce>broj){a[i][j]=0;}
                 else{
                    a[i][j]=brojce;
                    brojce++;
                 }
                }
           }
           else {
             for(int i=N-1; i>=0; i--) {
                 if(brojce>broj){
                        a[i][j]=0;
                 }
                 else{
                a[i][j]=brojce;
                brojce++;
                 }
            }
           }


    }

    FILE *fp;
    fp = fopen("shema.txt", "w");
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            fprintf(fp, "%d ", a[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    // do tuka
    printFile();
    return 0;
}

