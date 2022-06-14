	//link   : https://codeforces.com/contest/1520/problem/B
	//author : @Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve()
{
    long long int n,c=0; cin>>n;
    for(long long int i=1;i<=n;i=i*10+1){
        for(long long int j=1;j<=9;j++){
            if(i*j <= n)
            c++;
        }
    }
    cout<<c<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
