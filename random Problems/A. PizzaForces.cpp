//link:   https://codeforces.com/problemset/problem/1555/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	long long n,c1,c2,c3,cnt1,cnt2,cnt3,m ;
	while(t--)
	{	
		cin>>n;
		cnt1 = n/6 ; cnt2 = n/8 ; cnt3 = n/10;
		if(n % 6 != 0) cnt1++;
		if(n % 8 != 0) cnt2++;
		if(n % 10 != 0) cnt3++;

		
		cout<<min(cnt1 * 15 , min(cnt2 * 20 , cnt3 * 25))<<endl;
	}
}
