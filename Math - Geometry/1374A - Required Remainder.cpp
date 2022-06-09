//link:   https://codeforces.com/problemset/problem/1374/A
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main (){
	int q;
	cin>>q;
	while (q--)
	{
	    int x,y,n;
	    cin>>x>>y>>n;
		if(n - n % x + y <= n) cout << n - n % x + y <<endl;
	    else cout << (n - n % x ) -x +y <<endl;
	}
}

