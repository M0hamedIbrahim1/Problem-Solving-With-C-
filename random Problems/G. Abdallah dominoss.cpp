//link:   https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/G
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int even = 0, odd = 0, zero = 0;
 
        if (a%2 == 0) {
            ++even;
            if (a == 0) ++zero;
        } else ++odd;
        if (b%2 == 0) {
            ++even;
            if (b == 0) ++zero;
        } else ++odd;
        if (c%2 == 0) {
            ++even;
            if (c == 0) ++zero;
        } else ++odd;
 
        if (d%2 == 0) {
            if (even >= 2 || odd == 3) cout << "Yes\n";
            else cout << "No\n";
        }
        else {
            if (even == 3 || (odd >= 2 && zero == 0)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
