//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/I
//author: Mohamed Ibrahim

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 
int main()
{
	int n;
	cin>>n;
	int a[n];

    for (int i = 0; i < n; i++)
		cin>>a[i];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        y = max(abs(a[i] - a[0]), a[n - 1] - a[i]);
        if (i == 0)
            x = a[1] - a[0];
        else if (i == n - 1)
            x = a[n - 1] - a[n - 2];
        else
            x = min(a[i] - a[i - 1], a[i + 1] - a[i]);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
