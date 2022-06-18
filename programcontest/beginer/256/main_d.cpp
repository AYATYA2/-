#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

int main() {
   int n;
   cin >>n;
  vector<pair<int,int>> x;
   for(int i=0;i<n;i++){
     int l,r; 
     cin >> l>>r;
     if(i==0){
        x.push_back(make_pair(l,r));
//        x.push_back(make_pair(r,"r"));
     }else{
      for(int i=0;i<x.size();i++){
        if(l>=x.at(i).first&&r<=x.at(i).second){
          //何もしない
        }else if(r<=x.at(i).second&&r>=x.at(i).first){
          //
          x.at(i).first=l;
        }else if(l<=x.at(i).second&&l>=x.at(i).first){
          //
          x.at(i).second=r;
        }else{
          x.push_back(make_pair(l,r));
        } 
      }
     }
     }
      for(int i=0;i<x.size();i++){
        cout << x.at(i).first <<" " << x.at(i).second <<endl;
      }
     }

/*     sort(x.begin(),x.end());
     int state=0;
     
     ↓　この処理不要
     for(int i=0;i<x.size();i++){
      
      if(x.at(i).second=="l"&&state==0){
        state=1;
      }else if(x.at(i).second=="l"&&state>=1){
        state++;
        x.erase(x.begin()+i);
        i--;
      }else if(x.at(i).second=="r"&&state>1){
        x.erase(x.begin()+i);
        state--;
        i--;
      }else if(x.at(i).second=="r"&&state==1){
        state--;
      }
     }
     ↑

     for(int i=0;i<x.size();i++){
      cout <<x.at(i).first;
      if(i%2==0){
        cout <<" ";
      }else{
        cout <<endl;
      }
     } */  
   
 
