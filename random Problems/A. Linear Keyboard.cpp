//link:   https://codeforces.com/problemset/problem/1607/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    vector<int> pos(26);
    for (int i = 0; i < 26; i++) {
        pos[s[i] - 'a'] = i;
    }
    int ans = 0;
    for (int i = 0; i < t.size() - 1; i++) {
        ans += abs(pos[t[i] - 'a'] - pos[t[i + 1] - 'a']);
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
