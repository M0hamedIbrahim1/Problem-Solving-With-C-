// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
//Author : @Mohamed Ibrahim


#include<bits/stdc++.h>
#include<string> 
using namespace std;
 
int main(){
	int cases,flag=0;
	cin>>cases;
	
	while(cases){
	
	string s;
	cin>>s;
 
		for(int i=0;i<s.length();i++){
			if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0' )|| (s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')){
				cout<<"Good"<<endl;;
				flag = 1;
				break;
			}
			else{
				flag = 0;
			}
			
		}
		
		if(flag==0){
			cout<<"Bad"<<endl;
		}
	cases--;

	}}
	
