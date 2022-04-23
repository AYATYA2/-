#include<stdio.h>
#include<string.h>
int main(){
    char buf[150];
    fgets(buf,sizeof(buf),stdin);
    
    int i=0;
    int frag1=0,frag2=0;
    int let[52];
    for(i=0;i<52;i++){
        let[i]=0;
    }
    for(i=0;i<=strlen(buf);i++){
        if(let[(int)(buf[i]-'A')]==1){
            printf("No\n");
            return 0;
        }else{
            let[(int)(buf[i]-'A')]=1; 
        }
        if(buf[i]>='A'&&buf[i]<='Z'){
            frag1=1;
        }
        if(buf[i]>='a'&&buf[i]<='z'){
            frag2=1;
        }
    }
    if(frag1==1&&frag2==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}