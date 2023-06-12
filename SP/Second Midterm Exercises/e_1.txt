Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
For exa


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int samoglaska(char bukva) {
    bukva = tolower(bukva);
    if(bukva=='a' || bukva=='e' || bukva=='i' || bukva=='o' || bukva=='u') return 1;
    return 0;
}
int main() {
    
  writeToFile();
   
  // Vasiot kod zapocnuva od tuka
    FILE * dat;
    if((dat=fopen("text.txt", "r"))==NULL) {
        printf("Greska");
    }
    
    char bukva;
    char prethodna_bukva='z';
    int brojac=0;
    while((bukva=fgetc(dat))!=EOF) {
        if(samoglaska(bukva)) {
            if(samoglaska(prethodna_bukva)) {
                printf("%c%c\n", tolower(prethodna_bukva), tolower(bukva));
                brojac++;
            }
        }
        prethodna_bukva=bukva;
    }
    printf("%d", brojac);
    fclose(dat);
  return 0;
}
