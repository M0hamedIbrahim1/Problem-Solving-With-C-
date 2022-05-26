// link : https://codeforces.com/problemset/problem/492/B
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, l, d,i;
    cin >> n >> l;
    long long a[n];
    for (i=0;i<n;i++){
         cin >> a[i];
    }
    sort(a,a+n);
    d = max(a[0],l-a[n-1])*2;
    for (i=0;i<n-1; i++){
        d = max(d,a[i+1]-a[i]);
    }
    cout.precision(10);
    cout << fixed << d / 2.0 << endl;

    return 0;
}
