//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/H
//author : Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main () {
    int T; cin >> T;
    while (T--) {
        long long n,a,b; cin >> n >> a >> b;
        long long ans=0;
        if (b >= a*2) {
            ans = n*a;
        }
        else {
            ans = (n/2)*b+(n%2)*a;
        }
        cout << ans << endl;
    }
}

