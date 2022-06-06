// link :  https://codeforces.com/problemset/problem/750/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,rem,cnt=1,c=0;
	cin>>n>>m;
	rem = 240 - m;
	for(int i = 1;;i++){
		c+= i*5;
		if(c>rem){
			cout<<cnt-1;
			return 0;
		}
		if(c == rem){
			cout<<cnt;
			return 0;
		}
		if(cnt==n){
			cout<<cnt;
			return 0;
		}
		cnt++;
	}
}

