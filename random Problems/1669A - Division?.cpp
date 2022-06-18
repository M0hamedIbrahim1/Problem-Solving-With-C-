//link   : https://codeforces.com/problemset/problem/1669/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t,num;
	cin >> t;
	while (t--) {
		cin>>num;
		if(num >= 1900)
		{
			cout<<"Division 1";
		}
		else if(num >= 1600 && num <= 1899)
		{
			cout<<"Division 2";
		}
		else if(num >= 1400 && num <= 1599)
		{
			cout<<"Division 3";
		}
		else
		{
			cout<<"Division 4";
		}
		cout<<endl;
	}

	return 0;
}
//

    
