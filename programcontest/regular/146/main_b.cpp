#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
 unsigned long long m;
 int n,k; 
 cin >> n>>m>>k;
 vector<unsigned long long> p;
 for(int i=0;i<n;i++){
    unsigned long long t;
    cin>>t;
    p.push_back(t);
 }   
 sort(p.begin(),p.end(),greater<long long>());
 
 unsigned long long x=0;
 int b=0;
 int i;
 for(i=b;i<k;i++){
    x+=p.at(i);
 }  
 while (true)
 {
    if(i>=p.size()){
        
    }
    if(x+m>p.at(b)*(unsigned long long)k){
    x+=m;
    x/=(unsigned long long)k;
    break;
    }else{
        x-=p.at(b);
        x+=p.at(i);
        i++;
        b++;
    }
    
 }
  cout<< x<<endl;
 

}

