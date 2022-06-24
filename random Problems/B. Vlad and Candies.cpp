//link:   https://codeforces.com/problemset/problem/1660/B
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;

int v[200005];
void solve()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    if(v[n]-v[n-1]>1)
       cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
