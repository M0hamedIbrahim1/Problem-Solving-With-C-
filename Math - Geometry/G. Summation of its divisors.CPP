 // link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/G
// author : @Mohamed Ibrahim


#include<bits/stdc++.h> 
using namespace std;
 								  
int main(){
long long n,sum=0,res=0;
cin>>n;	
	
for(int i=1;i<=sqrt(n);i++) {

    if(n%i==0){
		res = n/i;
		if(i==res){
			sum=sum+res;
			break;
 		}
		sum+=i+res;
	}	
 }
 cout<<sum;
 }
