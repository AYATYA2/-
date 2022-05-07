#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int t;
   int l,r;
   cin >>t;
  for(int i=0;i<t;i++){
    cin >>l>>r;
    int tmp=r-l;
    int d=0;
    if(tmp<10){
      cout << tmp+1 <<endl;
      continue;
    }
    while (tmp/10>10)
    {
      d++;
      tmp/=10;
    }
    cout<< (tmp/10)*pow(10,d+1) <<endl;
  }
}
