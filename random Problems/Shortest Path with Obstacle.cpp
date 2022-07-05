//link:   https://codeforces.com/problemset/problem/1547/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a1,b1,a2,b2,af,bf;
		cin>>a1>>b1>>a2>>b2>>af>>bf;
		if(a1 == a2 && b1 == b2) cout<<0<<endl;
		else if(a1 == a2 && a1 == af)
		{
			if(bf > max(b1,b2) || bf < min(b1,b2)) cout<<abs(b1-b2);
			else cout<<abs(b1-b2)+2;
		}
		else if(b1 == b2 && b2 == bf)
		{
			if(af > max(a1,a2) || af < min(a1,a2)) cout<<abs(a1-a2);
			else cout<<abs(a1-a2)+2;
		}
		else cout<<abs(a1-a2)+abs(b1-b2);
		cout<<endl;
	}

}
