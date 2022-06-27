//link:   https://codeforces.com/problemset/problem/1388/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<31){ cout<<"NO\n"; }
        else
        {
            cout<<"YES\n";
            if(n==36 || n==40 || n==44){ cout<<"6 10 15 "<<n-31<<"\n"; }
            else{ cout<<"6 10 14 "<<n-30<<"\n"; }
        }
    }
    return 0;
}
