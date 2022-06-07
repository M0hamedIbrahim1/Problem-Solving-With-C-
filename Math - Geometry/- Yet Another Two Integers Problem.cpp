// link :  https://codeforces.com/contest/1409/problem/A
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,diff,res;
		cin>>a>>b;
		diff = abs(a-b);
		res = diff/10;
		if(diff%10==0){
			cout<<res<<endl;
		}else{
			cout<<res+1<<endl;
		}
	}
}
	

