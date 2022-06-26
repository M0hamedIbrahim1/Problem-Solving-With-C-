//link:   https://codeforces.com/problemset/problem/1487/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int minn = 1000;
		int num = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x < minn) {
				minn = x;
				num = 0;
			}
			if (x == minn)num++;
		}
		cout << n - num << endl;
	}
	return 0;
}
