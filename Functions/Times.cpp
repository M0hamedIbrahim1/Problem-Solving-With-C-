//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
//author  : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
void func(int n,char c){

	for(int i = 1;i<=n;i++){
		cout<<c<<" ";
	}
	cout<<endl;
}
			  
int main(){
	int cases,n;
	char c;
	cin>>cases;
	while(cases){
	cin>>n>>c;	
	func(n,c);	
	cases--;	
	}
}
 
 
