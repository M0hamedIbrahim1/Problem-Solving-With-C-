//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/H
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;						  
int main() {
	string s;
	cin>>s;
	for(int i =0;i<s.length();i++){
		if(s[i]=='9'&&i==0){
			cout<<'9';
		}else if(s[i]-'0'>4){
			cout<< 9 - (s[i]-'0');	
		}else{
			cout<<s[i];
		}
	}
}
