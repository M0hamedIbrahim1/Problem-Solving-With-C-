// link :  https://codeforces.com/problemset/problem/141/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,p,temp;
	cin>>s>>t>>p;
	temp = s+t;
	sort(temp.begin(),temp.end());
	sort(p.begin(),p.end());
	if(p == temp) cout<<"YES";
	else cout<<"NO";

}

