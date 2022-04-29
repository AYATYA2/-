#include <bits/stdc++.h>
using namespace std;

int main() {
 /* int n;
    cin >> n;
  for (int i=0;i<n;i++){
    string s;
    cin >> s;
    if(s=="Y"){
      cout <<"Four" <<endl;
      return 0;
    }
  }
  cout <<"Three" <<endl;
*//*
  int n;
  cin >> n;
  int count=0;
  for (int i=0;i<n;i++){
    int l,r;
    cin >> l>>r;
    count+= (r-l)+1;  
  }
  cout <<count <<endl;
*//*
  int n,x;
  cin >>n;
  x=n;
  int fx=0;
  while(x>0){
    fx+=x%10;
    x/=10;
  }
  if(n%fx==0){
    cout<< "Yes" <<endl;
  }else{
    cout<< "No" <<endl;
  }
  *//*
  int n,k;
  cin >>n>>k;
  int count=1;
  int i=0;
  while (i<n){
    if(count+k<count*2){
      count+=k;
    }else{
      count*=2;
    }
    i++;
  }
  cout << count <<endl;
*//*
  int n,k;
  cin >>n>>k;
  int i=0;
  int count=0;
  for (;i<n;i++){
    int x;
    cin >>x;
    if(k-x<x){
      count+=2*(k-x);
    }else{
      count+=2*x;
    }
  }
  cout << count <<endl;
  */
 /*
 int a,b;
 int count=0;
 cin >>a >> b;
 while (a<=b){
   if(a/10000==a%10&&(a/10)%10==(a/1000)%10){
     count++;
   }
   a++;
 }
 
cout <<count <<endl; 
 */
  int n,a;
  cin >> n;
  int minmax=1000000000,count;
  for(int i=0;i<n;i++){
    cin >>a;
    count=0;
    while(a%2==0){
      count++;
      a/=2;
    }
    if(minmax>count){
      minmax=count;
    }
  }
  cout<< minmax<<endl;
}
