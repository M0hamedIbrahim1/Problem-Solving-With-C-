// link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
// Author : @Mohamed Ibrah

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 long long cases;
 cin>>cases;
 for(int i =0;i<cases;i++)
 {	
 	long long n1,n2;
 	long long arr[100006],sum=0,k=0;
 	cin>>n1>>n2;
 	if(n1*(n1+1)/2<n2){
 		cout<<"-1";
	 }else{
	 	for(int j=n1;j>=1;j--){
	 		if(sum+j<=n2){
	 			sum+=j;
	 			arr[k]=j;
	 			k++;
			 }
			 if(sum==n2)
			 	break;
		}
		for(int c=0;c<k;c++){
			cout<<arr[c]<<" ";
		}
	 }
	 cout<<endl;
 }
 
 
 
}
 
