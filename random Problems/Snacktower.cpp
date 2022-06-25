//link : https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/K
//author : @Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    int it = n;
    for (int i = 1; i <= n; i += 1) {
        int a;
        cin >> a;
        ++cnt[a];
        while (cnt[it]) {
            cout << it << ' ';
            --it;
        }
        cout << '\n';
    }	
}
