#include<stdio.h>
int main(){
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    int n=0,m;
    int i,j,k,l;
    sscanf(buf,"%d %d\n",&n,&m);
    int res[n][m];
    int str1[n][m],str2[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            res[i][j]=1;
            if(i==j){
                res[i][j]=0;
            }
            str1[i][j]=i+3*j;
            str2[i][j]=3*i+j;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(res[i][j]=0){
                continue;
            }else{
                for(k=0;k<n;k++){
                    for(l=0;l<m;l++){
                        if(str1[i][j]==str1[k][l]){
                            res[k][l]=0;
                        }
                        if(str2[i][j]==str2[k][l]){
                            res[k][l]=0;
                        }
        }
    }
            }
        }
    }
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(res[i][j]==1){
                count++;
            }
        }
    }
        
    printf("%d\n",count);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(res[i][j]==1){
                printf("%d %d\n",i,j);
            }
        }
    }
    return 0;
}