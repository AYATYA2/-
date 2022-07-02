
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int k;
   cin >>k;
   
   if(k-(k/60)*60<10){
         cout <<21+(k/60)<<":0"<<k-(k/60)*60<<endl;
   }else{
         cout <<21+(k/60)<<":"<<k-(k/60)*60<<endl;
   }
}
