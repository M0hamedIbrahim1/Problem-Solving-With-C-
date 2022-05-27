// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/R
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){

double n1,n2,n3,n4,x,y;
cin>>n1>>n2>>n3>>n4;
x = pow((n3-n1),2);
y = pow((n4-n2),2);
cout<<fixed<<setprecision(9)<<sqrt(x+y);

}
