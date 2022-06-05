// link :  https://codeforces.com/problemset/problem/148/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
long long l,k,m,n,d;
int cnt = 0;
cin>>k>>l>>m>>n>>d;
for(int i = 1 ; i <= d ; i++){
	if(i  % k == 0 || i % l == 0 || i % m == 0 || i % n ==0){
		cnt++;
	}
}
cout<<cnt;
}
