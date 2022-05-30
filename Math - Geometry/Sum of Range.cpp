// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;
long long sum_odd(long long num){
	long long res,res_odd;
	res = (num+1) / 2;
	res_odd = res*res;	
	return res_odd;
}

long long sum_Even(long long num){
	long long res = (num*(num+1));
	return res;
} 		
		 
		 
		 						  
int main(){
 
long long n1,n2,even=0,odd=0,sum=0,minn,maxx;
cin>>n1>>n2;
minn=min(n1,n2);
maxx=max(n1,n2); 	

long long even_Res = sum_Even(maxx/2) - sum_Even((minn-1) / 2);
long long odd_Res = sum_odd(maxx) - sum_odd(minn - 1);

cout<<even_Res+odd_Res<<endl;
cout<<even_Res<<endl;
cout<<odd_Res<<endl;
}
 
 
