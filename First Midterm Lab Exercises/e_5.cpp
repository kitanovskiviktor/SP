Од стандарден влез се вчитуваaт три броја кои ги означуваат времињата (во минути) со кои три натпреварувачи истрчале 5км на Скопскиот маратон. 

Да се испечати редниот број на најбрзиот натпреварувач. Доколку најбрзо време имаат повеќе од еден натпреварувач, се печатат редните броеви на сите такви натпреварувачи.

#include <stdio.h>

int main() {
    
    float A,B,C;
    scanf("%f%f%f", &A, &B, &C);
    
    if(A<B && A<C) {
        printf("1");
        
    }
    if(B<C && B<A) {
        printf("2");
      
    }
    if(C<A && C<B) {
        printf("3");
       
    }
  if(A==B && B==C) {
        printf("123");
        return 0;
    }
    if(A==B) {
        printf("12");
        
    }
    if(B==C) {
        printf("23");
        
    }
    return 0;
}