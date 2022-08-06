#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
void increase(int n,string s,int m,int min){
  if(n==1){
    for(int i=min+1;i<=m;i++){
          cout <<s<<" "<<to_string(i)<<endl;
    }
  }else{
    for(int i=min+1;i<=m-n+1;i++){
          increase(n-1,s+" "+to_string(i),m,i);
    }
  }
 }

int main() {
  int n,m;
  cin >>n>>m;
  increase(n,"",m,0); 
}  
