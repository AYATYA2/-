#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int a[5];
  int b=1,c=0,t=0;
  cin >>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  for(int i=1;i<5;i++){
      if(a[i]==a[0]){
            b++;
      }else if(a[i]==t){
            c++;
      }else{
            if(t==0){
                  t=a[i];
                  c++;
            }else{
                  cout<<"No"<<endl;
                  return 0;
            }
      }        
  }
  if((b==3&&c==2)||(b==2&&c==3)){
        cout <<"Yes"<<endl;
      return 0;
  }
  cout<<"No"<<endl;
}