#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int n;
  cin >>n;
  int x[n-2],y[n-2];
  for(int i=3;i<=n;i++){
    cout <<"? 1 " <<i <<endl<<flush;
    int t;
    cin >> t;
    if(t==-1){
      return 0;
    }
    x[i-3]=t;  
  }
  for(int j=3;j<=n;j++){
    cout <<"? 2 " <<j <<endl<<flush;
    int t;
    cin >> t;
    if(t==-1){
      return 0;
    }
    y[j-3]=t;
  }
  int min =2*n;
  int state=0;
  if(n==3){
    state++;
  }
  for(int j=0;j<=n-3;j++){
    //辺の数が1の時
    /*if((x[j]==1&&y[j]==2)||(x[j]==2&&y[j]==1)||(x[j]==1+state&&y[j]==2+state)||(x[j]==2+state&&y[j]==1+state)){
      if(state>0){
        cout <<"! 1"<<endl;
        return 0;    
      }else{
        state++;
      }
    }//それ以外
    else{*/
      if(x[j]+y[j]<min){
        min=x[j]+y[j];
      
      }
    /*
    if(x[j]+y[j]==3){
      index[state]=j;
      state++;
    }
    */
    //}
    
  }

  //以下解説読みながら
  //min==3の時判別が必要
  //if(state==2)
  //{
      //? index[0]+3 index[1]+3;
      //cin >> tmp;
      /*
        if(tmp==2||tmp==3){
          min=1;
        }
        n==3の時だけは例外として考える必要がありそう
      */
  //}

    cout <<"! "<<min<<endl;
}
