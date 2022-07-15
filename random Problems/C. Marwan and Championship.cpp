//link:   https://codeforces.com/group/jfviGllBoY/contest/389763/problem/C
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
const int N=150;
int cnt=0,n,a[N],b[N];
int main()
{
int i,j;
cin>>n;
for(i=1;i<=n;i++)
    cin>>a[i]>>b[i];
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
         if(a[i]==b[j])    cnt++;
cout<<cnt;
}
