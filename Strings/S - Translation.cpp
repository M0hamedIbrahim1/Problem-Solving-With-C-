// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/R
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
 
int main()
{
	string s,t,temp;
	cin>>s>>t;

	for(int i = s.length()-1;i>=0;i--){
		temp +=s[i];
	}
	for(int i = 0 ; i < s.length();i++){
		if(temp[i]!=t[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
