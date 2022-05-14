#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
   int w;
   cin >>w;
   vector <int> a;
   int n=0;
   if(w/10000>0){
      for(int i=w/10000;i>0;i--){
         a.push_back(i*10000);
         n++;
      }
      w=10000;
   }
   if(w/100>0){
      for(int i=w/100;i>0;i--){
         a.push_back(i*100);
         n++;
      }
      w=100;
   }
   while(w>0){
      a.push_back(w);
      w-=1;
      n++;
   }
   cout <<n<<endl;
   int l=a.size();
   for(int i=0;i<l;i++){
      cout<< a.back() << " ";
      a.pop_back();
   }
   cout << endl;
}

