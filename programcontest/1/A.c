#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int n=0;
    int i,j,k;
    sscanf(buf,"%d\n",&n);
    fgets(buf,sizeof(buf),stdin);
    int t[n];
    long int a[n+1];
    char *tp=strtok(buf," ");
    for(i=0;i<n-1;i++){
        t[i]=atoi(tp);
        //printf("%d ",t[i]);
        a[i]=0;
        tp=strtok(NULL," ");
    }
    t[i]=atoi(tp);
    //printf("%d ",t[i]);        
    a[i]=0;
    a[i+1]=0;
    int zero;
    for(i=0;i<n;i++){
        zero=1;
        for(j=0;j<t[i];j++){
            zero*=2;
        }
        a[i+1]++;
        //printf("%d\n",zero);
        while (zero*2*a[i+1]<=a[i]){
            a[i+1]*=2;
            //printf("%d\n",a[i+1]);
            while (zero*a[i+1]<=a[i]){
                a[i+1]++;
            //printf("%d\n",a[i+1]);
            }
        }
        a[i+1]*=zero;
    }
    printf("%ld\n",a[n]);
    return 0;
}