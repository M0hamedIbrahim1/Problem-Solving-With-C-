// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){

int n1,n2,n3;
double s = 0;
cin>>n1>>n2>>n3;
if(n1+n2>n3&&n1+n3>n2&&n2+n3>n1){
	cout<<"Valid"<<endl;
	s = n1+n2+n3;
	cout<<fixed<<setprecision(6)<<sqrt(s/2*(s/2-n1)*(s/2-n2)*(s/2-n3));
	}
 
else{
	cout<<"Invalid";
}


}
