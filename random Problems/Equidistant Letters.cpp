//link:   https://codeforces.com/problemset/problem/1626/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << '\n';
    }

}
