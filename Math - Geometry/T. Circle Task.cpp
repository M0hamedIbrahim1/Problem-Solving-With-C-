// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){

 long long x,y,n_q,points;
 cin>>x>>y>>n_q>>points;
 
 while(points){
 	long long x_p,y_p;
 	cin>>x_p>>y_p;
 	
 	long long x1 =pow((x_p-x),2);
 	long long y1 =pow((y_p-y),2);
 	
 	 double dis = sqrt(x1+y1);
 	
 	if(dis<=n_q){
 		cout<<"YES"<<endl;
	 }
	 else{
	 	cout<<"NO"<<endl;
	 }
 	points--;
 }

}

