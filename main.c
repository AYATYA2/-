#include<stdio.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int n=0;
    int i,j,k;
    sscanf(buf,"%d\n",&n);
    printf("%d\n",n+5);
    return 0;
}