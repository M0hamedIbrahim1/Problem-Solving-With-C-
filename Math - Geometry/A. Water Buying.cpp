//link: https://codeforces.com/contest/1118/problem/A
//author : @Mohamed Ibrahim
#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int q;
	long long leters,a,res,rem,b;
	double cost;
	cin>>q;
	while(q--){
		cin>>leters>>a>>b;
		cost = b/2;
		if(a<=cost){
			cout<<a*leters;
		}else{
			if(leters%2==0){
				cout<<b*leters/2;
			}else{
				res = leters/2; // i will take n of 2letters
				rem = leters%2; // i will take n of 1 letters
				if(((res*b)+b) <= (res*b + rem*a)){
					cout<<res*b + rem*a;
				}else{
					cout<<(res*b + rem*a);
				}				
			}
		}
		cout<<endl;
	}
}
