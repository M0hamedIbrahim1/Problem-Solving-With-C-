//link : https://codeforces.com/problemset/problem/116/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,m;
cin>>n;
int a,b,t;
cin>>a>>b;
t = b;
m = b;
for(int i = 1 ; i < n ; i++){
	cin>>a>>b;
	t -=a;
	t+=b;
	m = max(t,m);
}
cout<<m;
 
}
 
