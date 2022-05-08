#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int n,a,b;
   cin >>n>>a>>b;
  for (int i=0;i<a*n;i++){
    for (int j=0;j<b*n;j++){
      if((i/a+j/b)%2==0){
        cout << "." ;
      }else{
        cout << "#" ;
      }
    }  
    cout <<endl;
  }
}
