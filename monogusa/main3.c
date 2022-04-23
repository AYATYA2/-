#include<stdio.h>
#include<string.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int n=0,k;
    sscanf(buf,"%d %d\n",&n,&k);
    int i=0;
    int let[52];
    for(i=0;i<52;i++){
        let[i]=0;
    }
    char s[100];
    int j; 
    for(i=0;i<n;i++){
        fgets(buf,sizeof(buf),stdin);
        sscanf(buf,"%s\n",s);
        for(j=0;j<strlen(s);j++){
            let[(int)(s[j]-'a')]++;
        }
    }             

    int count=0;
    for(i=0;i<52;i++){
        if(let[i]>=k){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}