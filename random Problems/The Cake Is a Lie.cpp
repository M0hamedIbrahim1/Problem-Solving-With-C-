//link:   https://codeforces.com/problemset/problem/1519/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n,m,k;
	cin>>t;
    while (t--) {
		int res_x = 0 , res_y = 0;
		cin>>n>>m>>k;
		res_x = m-1;
		res_y = (n-1)*m;
		if(k >= res_x+res_y)
		{
			cout<<"YES";
		}	
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
}
