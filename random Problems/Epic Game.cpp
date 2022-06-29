//link:   https://codeforces.com/problemset/problem/119/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int a,b,n,c = 0;
	cin>>a>>b>>n;
	while(n){
		if(c == 0)n = n - __gcd(a,n);
		else n = n - __gcd(b,n);
		c = 1-c;
	}
	cout<<1-c<<endl;
}
