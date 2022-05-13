//link : https://codeforces.com/contest/189/problem/A
//Author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i * a + b * j > n)
                continue;
            if ((n - ((i * a) + (j * b))) % c != 0)
                continue;
            int k = (n - ((i * a) + (j * b))) / c;
            ans = max(ans, i + j + k);
           
        }
    }
 
    cout << ans;
 
    return 0;
}
