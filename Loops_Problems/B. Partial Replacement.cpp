// link : https://codeforces.com/contest/1506/problem/B
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main() {
 
    int q;
    cin >> q;
    while(q--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int first = 0, last = n - 1;
        while(s[first] == '.') first++;
        while(s[last] == '.') last--;
        if (first == last) {
            cout << 1 << '\n';
            continue;
        }
 //       . * * . * * *

        int ans = 2;
        for(int i = first; i < last;) {
            int j = i + k;
            if (j >= last) break;
            while(s[j] == '.') j--;
            ans++;
            i = j;
        }
        cout << ans << '\n';
    }
}
