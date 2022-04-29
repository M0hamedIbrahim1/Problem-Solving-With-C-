//Link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
// author : @mohamed ibrahim 
#include<iostream>
using namespace std;
 								  
int main(){
 int n,l=0,f=0;
 cin>>n;
 l = n%10;
 f = n/10;
 
	if(l != 0){
		if(f%l == 0 || l%f == 0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"YES";
	}
}
	
