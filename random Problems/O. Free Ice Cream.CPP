// link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/O
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main() {
 
    long long  n,x,cnt = 0;
    cin >> n >> x;
 
    for(int i = 0; i < n; i++){
        long long d;
        char c;
        cin >> c >> d;
        if(c =='+')x+=d;
        else{
            if(x>=d)x-=d;
            else cnt++;
        }
    }
    cout << x << " " << cnt << endl;
    return 0;
}
 
 
