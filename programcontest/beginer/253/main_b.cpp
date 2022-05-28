#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
 int h,w;
 cin >> h>>w;
 int p1x,p2x,p1y,p2y;
 int count=0;
 for(int i=0;i<h;i++){
   string s;
   cin >> s;
   for(int j=0;j<w;j++){
     if(s.at(j)=='o'){
       if(count==0){
         p1x=j;
         p1y=i;
         count++;
       }else{
         p2x=j;
         p2y=i;
         break;
         break;
       }
     }
   }
 }
 cout << abs(p1x-p2x)+abs(p1y-p2y)<<endl; 
}
