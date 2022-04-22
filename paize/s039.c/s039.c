#include <stdio.h>

int xsearcher(int H,int W ,int stage[H][W]){
    int x=0,y=0,t,u;
    int i,j;
    int max=0;
        for (i=0;i<H;i++){
            for(j=0;j<W;j++){
                if(stage[i][j]==1){
                    x=j;y=i;
                    u=y;t=x;
                    int w=0,h=1;
                    while (t<W&&stage[u][t]==1){
                      w++;
                      t++;      
                    }
                    for(u=y+1;u<H;u++){
                        for(t=x;t<w;t++){
                            if(stage[u][t]==0){
                                break;
                                break;
                            }
                        }
                        h++;
                    }
                    if(max<w*h){
                        max=w*h;
                    }
                }
            }  
        }

}

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int H,W;
    fgets(str, sizeof(str), stdin);
    sscanf(str ,"%d %d\n",&H,&W);
    int i,j;
    int stage[H][W];
    int roomsizeh[H][W];
    int roomsizew[H][W];
    for(i=0;i<H;i++){
        fgets(str, sizeof(str), stdin);
        for (j=0;j<W;j++){
            if(str[j]=='.'){
                //stage[][]==1なら空間
                stage[i][j]=1;
                roomsizeh[i][j]=1;
                roomsizew[i][j]=1;
            }else if (str[j]=='#')
            {
                stage[i][j]=0;
                roomsizeh[i][j]=0;
                roomsizew[i][j]=0;
            }
            
        }
    }
    printf("%d\n",xsearcher(H,W,stage));

    return 0;
}