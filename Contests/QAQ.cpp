//link : https://codeforces.com/contest/894/problem/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> s;
    n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                    ++ans;
    		}
		}
	}	
    cout << ans;
    return 0;
}
