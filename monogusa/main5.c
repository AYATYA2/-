#include<stdio.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int n=0;
    int p;
    sscanf(buf,"%d %d\n",&n,&p);
    
    printf("%d\n",n+5);
    return 0;
}