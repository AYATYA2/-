#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    char str[1000];
    int  a,b,x,y,r,s,l;
    fgets(str, sizeof(str), stdin);
    sscanf(str,"%c%c%c%c%c%c%lf\n",&a,&b,&x,&y,&r,&s,&l);
    double L=(double)l;
    
    double tmpx=(double)x,tmpy=(double)y;
    double S;
    while (L>0)
    {
        S=(double)s*M_PI/180.0;
        tmpx=tmpx+0.000001*cos(S);
        tmpy=tmpy+0.000001*sin(S);
        /* code */
        if(r+tmpy>=b){
            s=360-s;
            tmpy=(b-r)-(tmpy-(b-r));
        }
        if(r+tmpx>=a){
            if(s<90){
                s=180-s;
            }else if(s>270){
                s=180+360-s;
            }
            tmpx=(a-r)-(tmpx-(a-r));
        }
        if(tmpy-r<=0){
            s=360-s;
            tmpy=r-(tmpy-r);
        }
        if(tmpx-r<=0){
            if(s<180){
                s=360-(180-s);
            }else{
                s=360+(180-s);
            }
            tmpx=(a-r)-(tmpx-(a-r));
        }
        L-=0.000001;
    }
    printf("%lf %lf\n",tmpx,tmpy);
    return 0;
}