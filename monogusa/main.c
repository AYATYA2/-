#include<stdio.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    return 0;
}