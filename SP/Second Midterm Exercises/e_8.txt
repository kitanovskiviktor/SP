Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wtf();
    FILE *dat;
    if((dat=fopen("dat.txt", "r"))==NULL) {
        printf("Greska");
        return 0;
    }
    
    char niza[100];
    char pod_niza[100];
    int najdolg_red=0;
    while((fgets(niza, 100, dat))!=NULL) {
        
        int broj_cifri=0;
        for(int i=0; niza[i]!='\0'; i++) {
            if(isdigit(niza[i])) {
                broj_cifri++;
            }
        }
        if(broj_cifri>=2) {
            
            if(strlen(niza)>=najdolg_red) {
                int flag=0;
                int w=0;
                int z;
                for(int i=0; niza[i]!='\0'; i++) {
                    if(isdigit(niza[i])) {
                        flag=1;
                    }
                    if(flag) {
                        pod_niza[w]=niza[i];
                        w++;
                    }
                    z=w;
                }
                int brojac=1;
                for(int i=strlen(niza); i>0; i--) {
                    if(isdigit(niza[i])) {
                        brojac++;
                        break;
                    }
                }
                int dolzina=strlen(niza);
                pod_niza[z]='\0';
                pod_niza[dolzina-brojac]='\0';
                najdolg_red=strlen(niza);
            }
        }
    }
    
    for(int i=0; pod_niza[i]!='\0'; i++) {
        printf("%c", pod_niza[i]);
    }
    
    return 0;
}

/*
int main() {
    wtf();
	// vasiot kod ovde
    
    FILE *dat;
    char a[100];
    if((dat=fopen("dat.txt", "r"))==NULL) {
        printf("Greska");
        return 0;
    }
    
    int b[100];
    int najdolg_red=0;
    int br_cifri=0;
    while((fgets(a, 100, dat))!=NULL) {
        br_cifri=0;
        for(int i=0; a[i]!='\0'; i++) {
            if(isdigit(a[i])) {
                br_cifri++;
            }
        }
        if(br_cifri>=2) {
            int z=0;
            if(strlen(a)>=najdolg_red) {
                int w=0;
                int flag=0;
                for(int j=0; a[j]!='\0'; j++) {
                    if(isdigit(a[j])) {
                        flag=1;
                    }
                    if(flag) {
                        b[w]=a[j];
                        w++;
                    }
                    z=w;
                }
                int bb=1;
                int dolzina=strlen(a);
                for(int q=dolzina; q>0; q--) {
                    if(isdigit(a[q])) {
                        bb++;
                        break;
                    }
                }
                b[z]='\0';
                b[dolzina-bb]='\0';
                najdolg_red=strlen(a);
            }
        }
    }
    
    for(int i=0; b[i]!='\0'; i++) {
        printf("%c", b[i]);
    }
    
    fclose(dat);
    

} */