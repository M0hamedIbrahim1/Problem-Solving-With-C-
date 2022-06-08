//link:https://codeforces.com/contest/1343/problem/B
//author:Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 4 == 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            n /= 2;
            for(int i = 0; i < n; i++)
                cout << (i + 1) * 2 << ' ';
            for(int i = 1; i < n; i++)
                cout << (i*2)-1 << ' ';
            cout << (n * 3) - 1 << '\n';
        }
    }
}
