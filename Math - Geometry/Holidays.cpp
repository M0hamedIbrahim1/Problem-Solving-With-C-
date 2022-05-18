//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/F
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y=0,a=0,p=0;
    cin>>x;
    if(x%7==0){
        y=x/7;
        a=y*2;
        cout<<a<<"\t"<<a;
    }
    else {
        y=x/7;
        a=y*2;
        p=x%7;
        if(p<=2&&p!=6)
        cout<<a<<"\t"<<a+p;
        else if(p>2&&p!=6)

            cout<<a<<"\t"<<a+2;

    else if (p==6)
    cout<<a+1<<"\t"<<a+2;
    }
    return 0;
}
