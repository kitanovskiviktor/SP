Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <stdio.h>
#include <string.h>
#include <ctype.h>


void wtf() {
FILE *f = fopen("podatoci.txt", "w");
char c;
while((c = getchar()) != '#') {
fputc(c, f);
}
fclose(f);
}

int main() {
    
    
    wtf();
    
    FILE *dat;
    if((dat=fopen("podatoci.txt", "r"))==NULL) {
        printf("Ne mozhe da se otvori datotekata");
        return 0;
    }
    
    
    char z1,z2;
    scanf(" %c %c", &z1, &z2);
    char niza[100];
    while((fgets(niza, 80, dat))!=NULL) {
        int flag=0;
        for(int i=0; niza[i]!='\0'; i++) {
            if(niza[i]==z1) {
                flag=1;
                continue;
            }
            if(niza[i]==z2) {
                break;
            }
            if(flag) {
                printf("%c", niza[i]);
            }
            
        }
        printf("\n");
    }
    
    fclose(dat);
    return 0;
}















/*
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wtf();
    char z1,z2;
    //scanf(" %c", &z1);
   // scanf(" %c", &z2);

    char a[3];
    scanf("%s", a);

    if(strlen(a)==1) {
        a[1]=a[0];
        a[0]=' ';
    }
    z1=a[0];
    z2=a[1];
    FILE *f;
    if((f=fopen("podatoci.txt", "r"))==NULL) {
        printf("Greska");
    }


   char red[80];
    char pod_niza[80];
    while((fgets(red, 80, f))!=NULL) {
        int flag = 0;
        for(int i=0; red[i]!='\0'; i++) {
            if(red[i]==z2) break;
            if(flag) printf("%c", red[i]);
            if(red[i]==z1) flag = 1;
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}
 */



/* #include <stdio.h>
#include <string.h>
#include <ctype.h>

void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wtf();
    char z1,z2;
    //scanf(" %c", &z1);
   // scanf(" %c", &z2);
    
    char a[3];
    scanf("%s", a);
    
    if(strlen(a)==1) {
        a[1]=a[0];
        a[0]=' ';
    }
    z1=a[0];
    z2=a[1];
     FILE *f;
    if((f=fopen("podatoci.txt", "r"))==NULL) {
        printf("Greska");
    }

    
   char red[80];
    char pod_niza[80];
    while((fgets(red, 80, f))!=NULL) {
   
        for(int i=0; red[i]!='\0'; i++) {
            if(red[i]==z1) {
                int z=0;
                for(int j=i+1; red[j]!=z2; j++) {
                    pod_niza[z]=red[j];
                    z++;
                }
                pod_niza[z]='\0';
                printf("%s\n", pod_niza);
            }
        }
    }
    
    fclose(f);
    return 0;
} */