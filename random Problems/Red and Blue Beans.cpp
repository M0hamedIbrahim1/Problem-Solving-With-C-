//link:   https://codeforces.com/problemset/problem/1519/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long r,b,d;
		cin>>r>>b>>d;
		if(min(r,b) * d >= abs(r-b))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	}
}
