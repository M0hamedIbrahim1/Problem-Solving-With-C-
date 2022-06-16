//link   : https://codeforces.com/problemset/problem/1369/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
        int n; cin>>n;
        if(n % 4 == 0){
                cout<<"YES\n";
        }else{
                cout<<"NO\n";
        }
	}
}

by py : 
for _ in range(int(input())):
  print("NO" if int(input())%4 else "YES")
	  
