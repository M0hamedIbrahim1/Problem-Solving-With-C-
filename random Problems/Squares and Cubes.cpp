//link:   https://codeforces.com/problemset/problem/1619/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
    while (t--) {
        int n;
        cin >> n;
        int cnt2 = 0;
        for (int i = 1 ; i * i <= n ; i++){
            cnt2++;
        }
        int cnt3 = 0;
        for (int i = 1 ; i * i * i <= n ; i++){
            cnt3++;
        }
        int cnt6 = 0;
        for (int i = 1 ; i * i * i * i * i * i <= n ; i++){
            cnt6++;
        }
        cout << cnt2 + cnt3 - cnt6 << endl;
	}
}
