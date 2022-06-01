//link : https://codeforces.com/group/x1IbeOVM4y/contest/287076/problem/F
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main() {
int n,d;
cin>>n>>d;
int arr[n];
int st=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    st+=arr[i];
}
int tt=(n-1)*10+st;
int ans=(d-st)/5;
if(d>=tt)
cout<<ans;
else
cout<<"-1";
    return 0;
}
