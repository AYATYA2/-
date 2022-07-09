
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int n,m,x,t,d;
   cin >>n>>m>>x>>t>>d;
   int min=t-d*x;
      if(m>x){
            cout <<t<<endl;
      }else{
            cout <<min+d*m<<endl;
      }
}
