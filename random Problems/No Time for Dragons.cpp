//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/P
//author: Mohamed Ibrahim

#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long int
struct node
{
    int ned,del,cha;
}a[350000];
int n;
int cmp(node a,node b)
{
    return a.cha>b.cha;
}
int Slove(ll mid)
{
    for(int i=1;i<=n;i++)
    {
        if(mid>=a[i].ned)mid-=a[i].del;
        else return 0;
    }
    return 1;
}
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)scanf("%d%d",&a[i].ned,&a[i].del),a[i].cha=a[i].ned-a[i].del;
        sort(a+1,a+1+n,cmp);
        ll ans;
        ll l=1;
        ll r=1e18;
        while(r-l>=0)
        {
            ll mid=(l+r)/2;
            if(Slove(mid)==1)
            {
                r=mid-1;
                ans=mid;
            }
            else l=mid+1;
        }
        printf("%lld\n",ans);
    }
}
