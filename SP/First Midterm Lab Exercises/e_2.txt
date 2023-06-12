Од стандарден влез се чита четирицифрен број. Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед, во спротивно да се испечати 0.


int main() {
    
    int a;
    scanf("%d", &a);
    int x=a;
    int flag=1;
    while(x>0) {
        int c=x%10;
        int d=x%100/10;
        if(c<=d) {
            flag=0;
            printf("0");
            return 0;
            
        }
        x=x/10;
    }
    if(flag) {
        printf("1");
    }
    return 0;
}