#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int a,b,c;
   cin >>a>>b>>c;
   if(a<=b && b<=c){
      cout <<"Yes"<<endl;
   }else if(a>=b && b>=c){
      cout <<"Yes"<<endl;
   }else{
      cout <<"No"<<endl;
   }
}
