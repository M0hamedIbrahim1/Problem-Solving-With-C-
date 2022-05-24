//link :  https://codeforces.com/contest/1358/problem/B
//author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N];
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int i;
        for(i=n;i>=1;i--){
            if(i>=a[i]){
                break;
            }
        }
        cout<<i+1<<endl; 
    }
    return 0;
}
