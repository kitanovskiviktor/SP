Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

#include <stdio.h>

int main() {
 int z;
scanf("%d", &z);
float zbirSumi=0;
float broevi=0;
while(1) {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a==0 && b==0) {
        break;
    }
    if(z==(a+b)) {
        zbirSumi++;
    }
        broevi++;
}
float procent =(zbirSumi/broevi)*100.0;
printf("Vnesovte %.0f parovi od broevi chij zbir e %d\n", zbirSumi, z);
printf("Procentot na parovi so zbir %d e %.2f%%", z, procent);
    return 0;
}