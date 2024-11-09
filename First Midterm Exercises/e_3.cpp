Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <stdio.h>

int main() {

     int n;
     scanf("%d", &n);
    int zbir=0;
    int t=0;
    int maxB=0;
    n--;
    while(n>0) {
                int zbir=0;
        for(int i=1; i<n; i++) {
                   if(n%i==0) { //
                    zbir+=i;
                   }


    }
    if(zbir>t){
        t=zbir;
        maxB=n;
}
    n--;
    }

    printf("%d\n", maxB);
return 0;
}
