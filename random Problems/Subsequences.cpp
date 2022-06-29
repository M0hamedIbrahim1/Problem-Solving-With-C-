//link:   https://codeforces.com/problemset/problem/1557/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{	
		long long m = -1000000009;
		double res=0,sum=0;
		cin>>n;
		long long arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
			m = max(m,arr[i]);
			sum+=arr[i];
		}
		double d = m;
			res = sum-d;
			n--;
			res = res/n;
			cout<<fixed<<setprecision(9)<<res+d<<endl;	
	
	}
}
