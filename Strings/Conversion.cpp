//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
//Author :@Mohamed Ibrahim 

#include<bits/stdc++.h>
#include<string> 
using namespace std;
 
int main(){
	string s;
	cin>>s;
 
 
 
for(int i=0;i<s.length();i++){
	if(s[i] >= 'a' && s[i] <= 'z'){
		s[i]=s[i]-32;
		cout<<s[i];
 
	}
	
	else if(s[i] >= 'A' && s[i] <= 'Z'){
    s[i]=s[i]+32;
    cout<<s[i];
		

	}
	else{
		cout<<" ";
	}
	
}
 
}
