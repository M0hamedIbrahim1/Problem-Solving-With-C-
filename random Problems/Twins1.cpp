//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/F
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main() {
 int n,m,res=1500;
 cin>>n>>m;
 int arr[m];
 for(int i=0;i<m;i++){
 	cin>>arr[i];
 }
 sort(arr,arr+m);
 --n;
 
  for(int i=0;i<m-n;i++){
  	if(arr[i+n]-arr[i]<res){
  		res = arr[i+n]-arr[i];
	  }
	
  }
cout<<res;
 
return 0;
}
