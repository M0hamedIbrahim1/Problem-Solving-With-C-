//link:   https://codeforces.com/problemset/problem/1550/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{	
		int i = 1,cnt=0,s=0;
		cin>>n;
		for(int i = 1 ;; i+=2)
		{
			s+=i;
			cnt++;
			if(s>=n) break;
		}
		cout<<cnt<<endl;
	}
}
