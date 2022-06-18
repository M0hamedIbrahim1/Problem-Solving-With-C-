//link   : https://codeforces.com/problemset/problem/1325/B
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t, n, arr[100005];
	cin >> t;
	while (t--) {
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int cnt = 1;
		sort(arr,arr+n);
		for (int i = 0; i < n-1; i++) {
			if(arr[i]!=arr[i+1]){
				cnt++;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}
//

    
