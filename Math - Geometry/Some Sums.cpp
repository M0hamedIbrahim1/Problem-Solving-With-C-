// link : https://codeforces.com/group/LKPSX7Pt2W/contest/314630/problem/A
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
long long sum=0,res=0,n,a,b;
cin>>n>>a>>b;
	for(int i =1;i<=n;i++){
		int num = i,n_dig;
		while(num){
			n_dig = num%10;
			sum+=n_dig;	
			num = num/10;
		}
		if(sum>=a && sum <=b){
			res += i;
		}
		sum = 0;	
	}
	cout<<res;
}
