// link :  https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/O
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
	int k,w;
	long long n;
	cin>>k>>n>>w;
	long long cost = (w*(w+1)/2) * k;
	if(cost>n){
		cout<<cost-n;
	}else{
		cout<<'0';
	}
}

