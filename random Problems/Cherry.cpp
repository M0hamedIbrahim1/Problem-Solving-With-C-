//link:   https://codeforces.com/problemset/problem/1554/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{	
		long long m = -1;
		cin>>n;
		long long arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
		}
		for(int i = 0 ; i < n-1 ; i++)
		{
			m = max(m , arr[i]*arr[i+1]);
		}
		cout<<m<<endl;
	}
}
