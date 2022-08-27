#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
int main() {
  int ax,ay,bx,by,cx,cy,dx,dy;
  cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
  pair<double,double> v1,v2;
  //対角線ベクトル
  v1=make_pair((double)(ax-cx),(double)(ay-cy));
  v2=make_pair((double)(bx-dx),(double)(by-dy));
  //2ベクトルの交点
  double mx=(v1.second/v1.first*(double)cx-v2.second/v2.first*(double)dx-(double)cy+(double)dy)/(v1.second/v1.first-v2.second/v2.first);
  double my=v1.second/v1.first*(mx-(double)cx)+(double)cy;
  //acの中点
  //bdの中点
  //double m2x=(double)(bx+dx)/2.0;
  //double m2y=(double)(by+dy)/2.0;
  //交点からのベクトル
  pair <double,double> v3=make_pair(mx-(double)(cx),my-(double)(cy)); 
  pair <double,double> v4=make_pair(mx-(double)(dx),my-(double)(dy)); 
  if(v1.first*v3.first+v1.second*v3.second>0){
//内積が正
    if(v1.first*v1.first+v1.second*v1.second<=v3.first*v3.first+v3.second*v3.second){
      cout<<"No";
       return 0;
    }
  }else{
    cout<<"No";
    return 0;   
  }
  
  if(v2.first*v4.first+v2.second*v4.second>0){
   //内積が正
    if(v2.first*v2.first+v2.second*v2.second<=v4.first*v4.first+v4.second*v4.second){
      cout<<"No";
      return 0;
    }
  }else{
    cout<<"No";
    return 0;   
  }
  
  cout<<"Yes";

  }