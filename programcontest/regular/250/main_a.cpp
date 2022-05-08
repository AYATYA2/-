#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int h,w;
   int r,c;
   cin >>h>>w>>r>>c;
   int count=0;
  for (int i=1;i<=w;i++){
    for (int j=1;j<=h;j++){
      if(abs(j-r)+abs(i-c)==1){
        count++;
      }
    }  
  }
  cout << count << endl;
}
