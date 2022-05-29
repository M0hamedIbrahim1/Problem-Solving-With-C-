// link : https://codeforces.com/group/LKPSX7Pt2W/contest/323155/problem/X
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--){
    string x;
    int n,sum=0,ans=0;
    cin >> n >> x;
    for(int i = 0;i<n;i++){
        if(x[i]=='(')
            sum++;
        else
            sum--;
        if(sum<0){
            sum=0;
            ans++;
        }
    }
    cout << sum << "\n";
    }
}
