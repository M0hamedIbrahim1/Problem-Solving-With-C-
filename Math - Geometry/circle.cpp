// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main() {
double x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

double x_main = (x2+x1)/2;
double y_main = (y2+y1)/2;
double x2_main = (x4+x3)/2;
double y2_main = (y4+y3)/2; 

//----------------
double res1,res2,res3,res4,res5,res6;
res1 = pow((x1-x_main),2);
res2 = pow((y2-y_main),2);
//----------------
res3 = pow((x3-x2_main),2);
res4 = pow((y3-y2_main),2);

double n_q1 =sqrt(res1+res2); 
double n_q2 =sqrt(res4+res3); 
//-------

res5 = pow((x_main-x2_main),2);
res6 = pow((y_main-y2_main),2);
double dis = sqrt(res5+res6); 
 
if(dis>n_q1+n_q2){
	cout<<"NO";
}
else{
	cout<<"YES";
}

 
}

