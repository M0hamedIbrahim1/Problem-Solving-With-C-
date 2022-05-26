// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main() {
int x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

int x_f1 = (x2-x1);
int x_f2 = (y2-y1);
int x_f3 = (x4-x3);
int x_f4 = (y4-y3); 

long long res1,res2;
res1=x_f1*x_f4;
res2=x_f2*x_f3;

if(res1==res2){
	cout<<"YES";
}
else{
	cout<<"NO";
}

 
}

