#link    : https://codeforces.com/problemset/problem/598/A
#author  : Mohamed Ibrahim


#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t,b ,sum , ans;
    cin>>t;
    
	while(t--){
		
        cin>>n;
        sum = 0;
        b = (n*(n+1)/2);
        for (long long j=0; pow(2,j)<=n; j++ ){
            sum+=pow(2,j);
        }
        ans = b - sum;
        sum = -1 * sum;
        cout<<ans+sum<<endl;
    }
    return 0;
    }
