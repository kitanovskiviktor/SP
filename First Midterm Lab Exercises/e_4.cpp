Од тастатура се чита еден 2-цифрен број. Да се формира број чиј што цифри ќе бидат подредени од десно кон лево во растечки редослед.и да се испечати на екран неговиот степен.

Пример: Од бројот 12 треба да се формира бројот 21 и да се испечати на екран неговиот степен (441).

Напомена: Бројот секогаш ќе е двоцифрен.

#include <stdio.h>

int main()
{
    int brojce;
    scanf("%d", &brojce);
    
    int poslednacifra=brojce%10;
    int pretposlednacifra=brojce/10;
    if(poslednacifra<pretposlednacifra) {
        printf("%d", brojce*brojce);
        return 0;
    }
    int nov_broj=poslednacifra*10+pretposlednacifra;
    printf("%d", nov_broj*nov_broj);
    return 0;
}