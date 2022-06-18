//link   : https://codeforces.com/problemset/problem/1389/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	long long a,b,res;
	cin >> t;
	while (t--) {
		cin>>a>>b;
		if( 2*a > b )
		{
			cout<<"-1 -1";
		}
		else
		{
			cout<<a<<" "<<2*a;
		}
		cout<<endl;
	}

	return 0;
}


    
