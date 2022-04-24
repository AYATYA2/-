#include<stdio.h>
#include<string.h>
 int rotate[30][30];

void function(int t[30][30]){
     int to[8][4]={
        {1, 0, -1, -1},
        {3, -1, -1, 0},
        {-1, -1, 3, 2},
        {-1, 2, 1, -1},
        {1, 0, 3, 2},
        {3, 2, 1, 0},
        {2, -1, 0, -1},
        {-1, 3, -1, 1}};
    int di[4]={0,-1,0,1};
    int dj[4]={-1,0,1,0};
    int d2,ni,nj,dk,length;
    int i,j,k;   
    int x=1;    
    for(i=0;i<30;i++){
        ni=i;
        for(j=0;j<30;j++){
              nj=j;
            for(k=0;k<4;k++){
              dk=k;
              length=0;
              while(x==1){
              d2=to[t[ni][nj]][dk];
              if(d2==-1){
                  rotate[ni][nj]++;
                  if(rotate[ni][nj]>=4){
                        rotate[ni][nj]=0;
                        break;
                  }else if(t[ni][nj]<4){
                      t[ni][nj]=(t[ni][nj]+1)%4;
                  }else if(t[ni][nj]<6){
                      t[ni][nj]=(t[ni][nj]+1)%2+4;
                  }else{
                      t[ni][nj]=(t[ni][nj]+1)%2+6;
                  }
                  continue;
              }      
              ni+=di[d2];
              nj+=dj[d2];
              if(ni<0||ni>=30||nj<0||nj>=30){
                rotate[ni][nj]++;
                  if(rotate[ni][nj]>=4){
                        rotate[ni][nj]=0;
                        break;
                  }else if(t[ni][nj]<4){
                      t[ni][nj]=(t[ni][nj]+1)%4;
                  }else if(t[ni][nj]<6){
                      t[ni][nj]=(t[ni][nj]+1)%2+4;
                  }else{
                      t[ni][nj]=(t[ni][nj]+1)%2+6;
                  }
                    continue;
                  }
                dk=(d2+2)%4;
                length+=1;
                if(ni==i&&nj==j&&dk==k){
                      break;
                }
              }
            }
        }
    }
}

int main(){
    char buf[100];
    int i,j,k;   
    int t[30][30],tempt[30][30];
    int n=0;
    for(i=0;i<30;i++){
            fgets(buf,sizeof(buf),stdin);
        for(j=0;j<30;j++){
            n=(int)(buf[j]-'0');
            t[i][j]=n;
            tempt[i][j]=n;
          //  printf("%d",t[i][j]);
            rotate[i][j]=0;
        }
        //printf("\n");
    }
    function(t);
    for(i=0;i<30;i++){
        for(j=0;j<30;j++){
            printf("%d",rotate[i][j]);
        }
    }
    printf("\n");
    return 0;
}