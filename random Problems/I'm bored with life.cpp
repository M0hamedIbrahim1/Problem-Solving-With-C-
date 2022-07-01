//link:   https://codeforces.com/problemset/problem/822/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long a,b,sum = 1 , summ = 1;
	cin>>a>>b;
	long long m = min(a,b);
	while(m){
		sum *= m;
		m--;
	}

	cout<<sum;
}
