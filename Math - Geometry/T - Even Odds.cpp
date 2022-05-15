//link : https://vjudge.net/contest/492820#problem/T
#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n,k;
    cin>>n>>k;
    if(k>(((n-1)/2)+1))
    {
        if(n%2==1)
            k=k-(((n-1)/2)+1);
        else k=k-n/2;
        k=2*k;
    }
    else if(k<=(((n-1)/2)+1))
    {
        k=1+(k-1)*2;
    }
    cout<<k<<"\n";
    return 0;
}
