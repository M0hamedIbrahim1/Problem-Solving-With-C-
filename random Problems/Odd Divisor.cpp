//link:   https://codeforces.com/problemset/problem/1475/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		while(n%2 == 0) n = n/2;
		
		if(n>1) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
