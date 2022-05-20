// linK : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/L
//author : @Mohamed Ibrahim
#include <iostream>
using namespace std;
int main (){

	int n,t,k,d,res,temp,cnt=1;;
	cin>>n>>t>>k>>d;
	temp = k;

	if(k>=n){
		cout<<"NO";
		return 0;
	}
	if(n%k==0){
		cnt = n/k;
	}else{
		cnt = n/k;
		++cnt;
	}
	if(d+t < cnt*t){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
