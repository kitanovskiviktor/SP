Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.

#include <stdio.h>
#include <ctype.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void sortiraj(int * niza, int n) {
    
    while(1) {
        int sortirano=1;
        for(int i=0; i<n-1; i++) {
            if(*(niza+i)>*(niza+i+1)) {
                int temp=*(niza+i);
                *(niza+i)=*(niza+i+1);
                *(niza+i+1)=temp;
                sortirano=0;
            }
        }
        if(sortirano) 
        break;
    }
    
}
int main() {
    wtf();
    
    FILE * dat;
    
    if((dat=fopen("input.txt", "r"))==NULL) {
        printf("Greska");
    }
    
    char red[100];
    while(fgets(red, 100, dat)!=NULL) {
        int brojac=0;
        int pod_niza[100];
        
        for(int i=0; red[i]!='\0'; i++) {
            if(isdigit(red[i])) {
                pod_niza[brojac]=red[i]-'0';
                brojac++;
            }
        }
        
        int *pniza;
        pniza=pod_niza;
        sortiraj(pniza,brojac);
        printf("%d:", brojac);
        for(int i=0; i<brojac; i++) {
            printf("%d", *(pniza+i));
        }
        printf("\n");
    }
    return 0;
}
