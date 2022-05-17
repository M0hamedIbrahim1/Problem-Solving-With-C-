//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/B
//author : @Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,a;
	cin>>n;
	if(n%10==0){
		cout<<n;
		
	}else{
		a = n%10;
		if(a>=5){
			cout<< n + 10-a;
		}else{
			cout<<n-a;
		}
		
		
	}
}
