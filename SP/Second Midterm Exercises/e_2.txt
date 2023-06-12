Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    while(1) {
        int main;
        scanf("%d", &main);
        fprintf(f, "%d ", main);
        if(main==0) break;
        for(int i=0; i<main; i++) {
            int br;
            scanf("%d", &br);
            fprintf(f, "%d ", br);
        }
        putc('\n', f);
    }
    fclose(f);
}

int main()
{
    wtf();
    
    FILE *f;
    
    if(!(f=fopen("broevi.txt", "r")))
    {
        printf("Greska");
    }
    
    char red[1000];
    
    while(fgets(red,1000,f)!=NULL) {
        char *niza = red;
        int max=0;
        int maxCifri=0;
        int n = atoi(niza);
        
        for(int i=0; i<n; i++) {
            while(*niza!=' ') niza++;
            int broj=atoi(niza);
            int cel_broj=broj;
            while(broj>=10) {
                broj/=10;
            }
            if(broj>maxCifri) {
                maxCifri=broj;
                max=cel_broj;
            }
             niza++;
        }
        if(max!=0) printf("%d\n", max);
    }
    // vashiot kod ovde
	
}