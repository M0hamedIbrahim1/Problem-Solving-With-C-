//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/J
//author : @Mohamed

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int m = 2e9;
        for (int i = 0; i <= 5; i++) {
            if (b + i == 1)
             continue;
            int x = a,cnt = 0;
            while (x) {
                cnt++;
                x /= b + i;
            }
            m= min(m, cnt + i);
        }
        cout << m<< endl;
    }
    return 0;
}
