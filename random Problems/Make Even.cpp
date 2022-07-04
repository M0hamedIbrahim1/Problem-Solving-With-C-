//link:   https://codeforces.com/problemset/problem/1611/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
    int t;cin>>t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        s = to_string(n);
        if (n % 2 == 0)
            cout << 0 << "\n";
        else {
            if (s[0] % 2 == 0)
                cout << 1 << "\n";
            else {
                for (int i = 0; i < s.size(); ++i) {
                    if (s[i] % 2 == 0) {
                        cout << 2 << "\n";
                        break;
                    } else if (i == s.size() - 1) {
                        cout << -1 << "\n";
                    }
                }
            }
        }
 
    }
}
