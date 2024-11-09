Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делители е најголем. При пресметување на збирот на делителите на даден број, да не се зема во предвид и самиот број.

#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    int max=0;
    int test=0;
    for(int i=1; i<N; i++) {
        int zbir=0;
        for(int j=1; j<i; j++) {
            if(i%j==0) {
                zbir+=j;
            }
        }
        if(zbir>max) {
            max=zbir;
            test=i;
        }
    }
    printf("Baraniot broj e: %d", test);
    return 0;
}