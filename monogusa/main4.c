#include<stdio.h>
#include<stdlib.h>
int main(){
    char buf[2400000];
    fgets(buf,sizeof(buf),stdin);
    int n=0;
    sscanf(buf,"%d\n",&n);
    int i=0,j;
    fgets(buf,sizeof(buf),stdin);
    int *a=malloc(sizeof(int)*n);
    if(a==NULL){
        printf("error\n");
    }
    for(i=0;i<n-1;i++){
        sscanf(buf,"%d &s",a[i],buf);
        printf("%d\n",a[i]);
    }
    sscanf(buf,"%d\n",a[i]);
    int k;
    int count=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=0;k<n;k++){
                if(a[k]==a[i]/a[j]){
                    count++;
                }
                if(i!=j&&a[k]==a[j]/a[i]){
                    count++;
                }   
            }
        }
    }
    printf("%d\n",count);
    return 0;
}