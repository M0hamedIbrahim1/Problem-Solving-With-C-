//link:   https://codeforces.com/problemset/problem/1511/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n,num,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>num;
			if(num == 1 || num == 3) cnt++;
		}
		cout<<cnt<<endl;
		cnt = 0;
	}
}
