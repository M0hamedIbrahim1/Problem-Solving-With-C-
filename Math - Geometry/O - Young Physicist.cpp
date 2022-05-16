//link : https://vjudge.net/contest/492820#problem/O
//author : @Mohamed Ibrahim

#include<string>
#include<iostream>
using namespace std;
int main()
{
    int x,y,z,i,n,q,w,e;
    cin>>n;
    x=y=z=0;
    for(i=1;i<=n;i++)
    {
        cin>>q>>w>>e;
        x+=q;
        y+=w;
        z+=e;
    }
    if(!x&&!y&&!z)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

