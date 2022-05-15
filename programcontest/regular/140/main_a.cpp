#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int n,k;
   vector<char> s;
   cin >>n>>k;
   for(int i=0;i<n;i++){
        char c;
        cin >> c ;
        s.push_back(c);
   }
   int i=1;
   while (i<=n)
   {
     int count=0;
     if(n%i==0){
        for(int j=1;j<n/i;j++){
          for(int l=0;l<i;l++){
            if(s.at(l)==s.at(j*i+l)){

            }else{
              count++;
            }
          }
        }
        if(count<=k){
            break;
        }
     }
     
     i++;
   }
   
   cout << i;
}
