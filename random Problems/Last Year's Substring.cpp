//link:   https://codeforces.com/problemset/problem/1462/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{	string s;
	int t,n;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		cin>>s;
		if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') 
			cout<<"YES";
		else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
			cout<<"YES";
		else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
			cout<<"YES";
		else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
			cout<<"YES";
		else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
			cout<<"YES";
		else cout<<"NO";
		
		cout<<endl;
	}
}
