//link:   https://codeforces.com/problemset/problem/1360/A
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main (){
	int q,a,b,sum=0,summ=0;
	cin>>q;
	while (q--)
	{	
		int a,b;
		cin>>a>>b;
		int m = min(a,b);
		int ma = max(a,b);
		int ll = 2*m;
		int res = max(ll,ma);
		cout<<res*res<<endl;
	}
}
