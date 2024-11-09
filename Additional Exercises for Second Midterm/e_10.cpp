Од тастатура се внесува цел број M, а потоа M низи од цели броеви. За секоја низа прво се внесува бројот на елементи во низата N (N<=100), а потоа и елементите на низата. 

Секоја од внесените низи треба да се трансформира според следново правило:

Ако првиот елемент од низата е позитивен број, тоа значи сите елементи од низата (вклучувајќи го и првиот) да се поместат за онолку места во десно, колку што е вредноста на елементот, празнините што ќе настанат во низата да се пополнат со елементи со вредност нула.

Ако првиот елемент од низата е негативен број, тоа значи сите елементи од низата (вклучувајќи го и првиот) да се поместат за онолку места во лево, колку што е вредноста на елементот, празнините што ќе настанат во низата да се пополнат со елементи со вредност нула.

При поместување на елементите, бројот на елементите во низата останува непроменет.

На крајот да се испечатат трансформираните низи како и тоа колку од влезните низи останале празни, односно по трансформацијата имаат само елементи со вредност нула.

Трансформацијата на низите да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Објаснување на вториот и третиот пример:
Во вториот пример се вчитува само една низа со 5 елементи (1,2,3,4,5). Првиот елемент е 1 (позитивен број), па елементите се поместуваат за една позиција на десно (_,1,2,3,4). Потоа празнините се пополнуваат со 0 и низата ги има елементите 0,1,2,3,4.

Во третиот пример се вчитува исто само една низа со 5 елементи (-2,-3,-4,-5,-6). Првиот елемент е -2 (негативен број), па елементите се поместуваат за две позиции на лево (-4,-5,-6,_,__). Потоа празнините се пополнуваат со 0 и низата ги има елементите -4,-5,-6,0,0.


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void shiftanje_desno(int * niza, int pomestuvanje, int broj_elementi) {

    int temp[100];
    for(int i=0; i<broj_elementi; i++) {
        int index = (i+pomestuvanje) % broj_elementi;
        if(index<0) {
            index+=broj_elementi;
        }
        temp[index]=(index<broj_elementi) ? niza[i] : 0;
    }
    for(int i=0; i<broj_elementi; i++) {
        niza[i]=temp[i];
    }
   for(int j=0; j<pomestuvanje; j++) {
        niza[j]=0;
    }

}

void shiftanje_levo(int * niza, int pomestuvanje, int broj_elementi) {
    
    pomestuvanje=pomestuvanje*(-1);
    int temp[100];
    for(int i=0; i<broj_elementi; i++) {
        int index = (i-pomestuvanje) % broj_elementi;
        if(index<0) {
            index+=broj_elementi;
        }
        temp[index]=(index<broj_elementi) ? niza[i] : 0;
    }
    for(int i=0; i<broj_elementi; i++) {
        niza[i]=temp[i];
    }
    int Y=broj_elementi-pomestuvanje;
     for(int j=broj_elementi; j>=Y; j--) {
        niza[j]=0;
    }
}


int main() {


        int M;
        scanf("%d", &M);
        int a[100];
    int max=0;
    int zbir;
        for(int i=0; i<M; i++) {
            int brojce;
            scanf("%d", &brojce);
                for(int j=0; j<brojce; j++) {
                        zbir=0;
                    scanf("%d", &a[j]);
                }
            int flag=1;
             if(a[0]>brojce || a[0]*(-1)>brojce) {
                for(int i=0; i<brojce; i++) {
                    a[i]=0;
                    flag=0;
                }
            }
            if(flag) {
                 int prv_element=a[0];
                if(prv_element>0) {
                    shiftanje_desno(a, prv_element, brojce);
                }
               else {
                    shiftanje_levo(a, prv_element, brojce);
                   }
            }
            
            for(int i=0; i<brojce; i++)
            {
                zbir+=a[i];
                printf("%d ", a[i]);
            }
            if(zbir==0) {
                max++;
            }  
            
            
        printf("\n");
           }
    printf("%d", max);
return 0;

}