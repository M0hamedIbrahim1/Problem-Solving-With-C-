// link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
// Author : @Mohamed Ibrahim

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
long long n1,n2,k;
cin>>n1>>n2>>k;

	if(n1%k == 0 && n2%k != 0){
		cout<<"Memo";
	}
	else if(n2%k == 0 && n1%k != 0){
		cout<<"Momo";
	}
	else if(n2%k == 0 && n1%k == 0){
		cout<<"Both";
	}
	else{
		cout<<"No One";
	}
 
	}
 
	
