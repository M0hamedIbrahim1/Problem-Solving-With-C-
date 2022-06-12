//link:   https://codeforces.com/problemset/problem/1371/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while (t--) {
        long n;
        cin >> n;
        cout << n / 2 + n % 2 << endl;
    }
    return 0;
}
