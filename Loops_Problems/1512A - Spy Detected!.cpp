//link: 	https://codeforces.com/problemset/problem/1512/A
//author:  @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (a[0] == a[1]) {
			for (int i = 2; i < n; i++) {
				if (a[i] != a[0]) {
					cout << i + 1 << endl;
					break;
				}
			}
		} else {
			if (a[0] == a[2])
				cout << 2 << endl;
			else
				cout << 1 << endl;
		}
	}
}
