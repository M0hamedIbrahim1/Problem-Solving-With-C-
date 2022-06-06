// link :  https://codeforces.com/problemset/problem/520/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cases,cnt;
	cin>>cases;
	while(cases--){
		long long n;
		cin>>n;
		if(n%2 == 0){
			cout<<n/2 - 1 <<endl;
		}else{
			cout<<n/2<<endl;
		}		
	}
}

