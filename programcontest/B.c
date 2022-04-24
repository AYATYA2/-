#include<stdio.h>



int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int t=0;
    int i,j,k;
    sscanf(buf,"%d\n",&t);
    int p=0;
    int n,a,b,x,y,z;
    int min[t];
    for(i=0;i<t;i++){
        fgets(buf,sizeof(buf),stdin);
        sscanf(buf,"%d %d %d %d %d %d\n",&n,&a,&b,&x,&y,&z);
        p=n;
        min[i]=n*x;
        int tmp=0;
        if((double)a/(double)y>(double)b/(double)z){
            if((double)x>(double)b/(double)z){
                tmp=y*(p/a)+x*(p%a);
            }else if((double)x<(double)b/(double)z){
                tmp=y*(p/a)+z*((p%a)/b)+x*((p%a)%b);
            }else{
                tmp=y*(p/a)+x*(p%a);
            }    
        }else if((double)a/(double)y<(double)b/(double)z){
            if((double)x>(double)a/(double)y){
                tmp=z*(p/b)+x*(p%b);
            }else if((double)x<(double)a/(double)y){
                tmp=z*(p/b)+y*((p%b)/a)+x*((p%b)%a);
            }else{
                tmp=z*(p/b)+x*(p%b);
            }
        }else{
            tmp=z*(p/b)+x*(p%b);
        }    
        if(tmp<min[i]){
            min[i]=tmp;
        }   
    }
    for(i=0;i<t;i++){
        printf("%d\n",min[i]);
    }
    return 0;
}