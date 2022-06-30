//link:   https://codeforces.com/problemset/problem/1632/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n;
	cin>>t;
    while(t--)
    {
	    cin >> n;
	    string s; cin >> s;
	    if(n >= 3 || (n == 2 && s[0] == s[1])) cout << "NO" << "\n";
	    else cout << "YES" << "\n";
    }

}
