//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/O
//author : @Mohamed Ibrahim

 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int   a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        cout<<max((abs(a-b)+abs(a-c)+abs(b-c))-4,0)<<endl;
    }

}
