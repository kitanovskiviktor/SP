Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.


#include <stdio.h>
#include <string.h>



int funkcija(char * niza) {
    
    int brojac=0;
    int z=0;
    for(int i=0; i<strlen(niza); i++) {
        if(isalpha(*(niza+i))) {
            brojac++;
        }
        else if(isspace(*(niza+i))){
            if(brojac >0 && brojac < 4){
                z++;
            }
            brojac=0;
        }
         
    }
    return z;
}
int main() {
    
    char niza[100];
    int max=0;
    char pod_niza[100];
    while(fgets(niza, 100, stdin)) {
        int dolzina=strlen(niza);
        int zbir=funkcija(niza);
        if(zbir>max) {
            max=zbir;
            strcpy(pod_niza, niza);
        }
    }
    printf("%d: ", max);
    puts(pod_niza);
    return 0;
}


/*
int svrznici(char * niza) {
    
    int bukvi_broj=0;
    int zbor_1=0;
    int zbor_2=0;
    int zbor_3=0;
    for(int i=0; i<strlen(niza); i++) {
        if(isalpha(niza[i])) {
            bukvi_broj++;
        }
        else if(isspace(niza[i])) {
            if(bukvi_broj==1) {
                zbor_1++;
            }
            else if(bukvi_broj==2) {
                zbor_2++;
            }
            else if(bukvi_broj==3) {
                zbor_3++;
            }
            bukvi_broj=0;
        }
    }
    int zbir=zbor_1+zbor_2+zbor_3;
    return zbir;
}


int main() {
    
    char a[100];
    int max=0;
    char b[100];
    while(fgets(a, 100, stdin)) {
        int dolzina=strlen(a);
        int zbir_svrznici=svrznici(a);
        if(zbir_svrznici>max) {
            max=zbir_svrznici;
            int c=strlen(a);
           // strcpy(b, a);
           int i;
            for(i=0; i<c; i++) {
                b[i]=a[i];
            }
            b[i]='\0';
        }
    }
    printf("%d: ", max);
    puts(b);
    return 0;
} */