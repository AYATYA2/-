#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
//#include <numbers> 
#include <iomanip>
int main() {
 int r,c;
 cin >>r>>c;
 if(c>8){
    c=16-c;
 }
 if(r>8){
    r=16-r;
 }
 if(r%2==0){
      if(c<r){
        if(c%2==0){
            cout<<"white"<<endl;
        }else{
            cout<<"black"<<endl;
        }
      }else{
        cout<<"white"<<endl;
      }
    
 }else{
      if(c<r){
        if(c%2==0){
            cout<<"white"<<endl;     
        }else{        
            cout<<"black"<<endl;
        }
      }else{
        cout<<"black"<<endl;
      }
 }
 
}
  
