Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.

Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

#include <stdio.h>


int najgolem_broj(int broj) {
    
    int max=0;
    int x=broj;
    int pos_cifra=broj%10;
    max=pos_cifra;
    x=x/10;
    while(x>0) {
        int poslednacifra=x%10;
        if(poslednacifra>max) {
            max=poslednacifra;
        }
        x=x/10;
    }
    return max;
}
int main() {
    
    int broj;
    
    while(scanf("%d", &broj)) {
        printf("%d\n", najgolem_broj(broj));
    }
    return 0;
} 