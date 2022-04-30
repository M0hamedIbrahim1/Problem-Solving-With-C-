// link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
// Author : @Mohamed Ibrahim

#include<iostream>
using namespace std;
int main(){
long long n1,n2,n3,n4;
cin>>n1>>n2>>n3>>n4;
 
	if(n1+n2-n3==n4){
		cout<<"YES";
	}
	else if(n1-n2+n3==n4){
		cout<<"YES";
	}
	else if(n1+n2*n3==n4){
		cout<<"YES";
	}
	else if(n1*n2+n3==n4){
		cout<<"YES";
	}
	else if(n1-n2*n3==n4){
		cout<<"YES";
	}
	else if(n1*n2-n3==n4){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	}
 
