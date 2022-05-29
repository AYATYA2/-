#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>

int main() {
   int t;
   cin >>t;
   for(int i=0;i<t;i++){
     string s;
     cin >> s;
     long long unsigned int max=0;
     for(long long unsigned int k=1;k<=s.size()/2;k++){
      if(s.size()%k==0){
        char tmp[k+1]={};
        s.copy(tmp,k);
        long long unsigned int res=atoi(tmp);
        string result="";
        for(long long int unsigned l=0;l<s.size()/k;l++){
          result+=tmp;
        }
        while(stoull(result)>stoull(s)){
          res--;
          if(res<pow(10,k-1)){
            result="";
            for(long long unsigned int l=0;l<s.size()-1;l++){
                result+="9";
            }  
            break;
            continue;
          }
          to_string(res).copy(tmp,k);
          result="";
          for(long long unsigned int l=0;l<s.size()/k;l++){
           result+=tmp;
          }
        }
        
        if(max<stoull(result)){
          max=stoull(result);
        }
      }      
     }
    cout << max << endl ;

   }
   
}
