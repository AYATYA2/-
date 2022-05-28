#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   unsigned long long int n,a,b;
   cin >>n>>a>>b;
   unsigned long long int ans=n*(1+n)/2;
   if(a<=n){
         ans -= (n/a)*(a+(n/a)*a)/2;
   }
   if(b<=n){
         ans -= (n/b)*(b+(n/b)*b)/2;
   }
   if(a*b<=n){
         ans += (n/(a*b))*((a*b)+(n/(a*b))*(a*b))/2;
   }
   cout << ans <<endl;
 }
