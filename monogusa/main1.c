#include<stdio.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int A=0,B,C,D,E,F,X;
    sscanf(buf,"%d %d %d %d %d %d %d\n",&A,&B,&C,&D,&E,&F,&X);
    int ax=X/(A+C),dx=X%(A+C);
    int ay=X/(D+F),dy=X%(D+F);
    int rx=ax*B;
    int ry=ay*E;
    if(dx<=A){
        rx+=dx*B;
    }else{
        rx+=B;
    }
    if(dy<=D){
        ry+=dy*E;
    }else{
        ry+=E;
    }
    if(rx>ry){
     printf("Takahashi\n");
    }else if(rx==ry){
    printf("Draw\n");
    }else{
    printf("Aoki\n");
    }
    return 0;
}