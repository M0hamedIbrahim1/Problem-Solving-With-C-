//link:   https://codeforces.com/problemset/problem/1567/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		cin>>s;
		for(int i = 0 ; i < n ; i++)
		{
			if(s[i] == 'D') cout<<'U';
			else if(s[i] == 'U')cout<<'D';
			else cout<<s[i];
		}
		cout<<endl;
	}
}
