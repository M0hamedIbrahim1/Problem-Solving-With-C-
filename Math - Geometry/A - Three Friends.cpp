//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/M
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] - a[0] <= 1)
            cout << 0 << endl;
        else
        {
            if (a[0] == a[1])
            {
                a[0]++;
                a[1]++;
                a[2]--;
            }
            else if (a[1] == a[2])
            {
                a[0]++;
                a[1]--;
                a[2]--;
            }
            else
            {
                a[0]++;
                a[2]--;
            }
            cout << abs(a[0] - a[1]) + abs(a[2] - a[1]) + abs(a[0] - a[2]) << endl;
        }
    }
}
