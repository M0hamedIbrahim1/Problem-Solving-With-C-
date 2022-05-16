//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/F
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m=0;
	int q;
	cin>>q;
	while(q--)
	{
		cin>>n;
		while(n!=1)
		{
     		m++;
			if(n%2==0)
				n/=2;
			else if(n%3==0)
				n=2*n/3;
			else if(n%5==0)
				n=4*n/5;
			else
			{
				m=-1;
				break;
			}
		}
		cout<<m<<"\n";
	}
}
