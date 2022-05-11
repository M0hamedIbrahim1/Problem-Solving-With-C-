// link :  https://codeforces.com/contest/1294/problem/A
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
	long long t,a,b,c,n;
	cin>>t;
	while(t){
		cin>>a>>b>>c>>n;
		long long sum = a+b+c+n;
		long long m = max(a,max(b,c));	
		long long res = sum / 3;
		if(sum%3==0 && res >=m){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
		
		
		t--;
	}
	
}

