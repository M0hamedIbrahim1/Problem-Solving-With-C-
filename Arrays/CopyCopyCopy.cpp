//link   : https://codeforces.com/problemset/problem/1325/B
//author : @Mohamed Ibrahim

//C++ CODE :
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

		sort(arr, arr + n);
		int len = unique(arr, arr + n) - arr;

		cout << len << endl;
	}

	return 0;
}

# PYTHON : 
for i in range(int(input())):
    input()
    print(len(set(input().split())))
    
