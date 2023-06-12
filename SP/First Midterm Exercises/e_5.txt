Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

#include <stdio.h>

int main() {
    int a,b;
scanf("%d %d", &a, &b);

if(a<=0 || b<=0) {
    printf("Invalid input");
    return 0;
}

int mal,pogolem;

if(a>b) {
    pogolem=a;
    mal=b;
}
else {
    pogolem=b;
    mal=a;
}
int flag=1;
while(mal>0) {
    pogolem=pogolem/10;
    int z=pogolem%10;
    int w=mal%10;
    if(z!=w) {
        flag=0;
        break;
    }
    pogolem=pogolem/10;
    mal=mal/10;
}
if(flag) {
    printf("PAREN");
}
else {
    printf("NE");
}
    return 0;
}