//link: 	https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/H
//author:  @Mohamed Ibrahim

#include<bits/stdc++.h>
 using namespace std; 
 								  
   int main(){
   	int size;
   	cin>>size;
	long long arr[size];
	long long arr_temp[size];	 

	for(int i = 0 ; i<size;i++){
		
		cin>>arr[i];
		arr_temp[arr[i]-1] = i+1;
	}
		for(int i = 0 ; i<size;i++){
		cout<<arr_temp[i]<<" ";
	}
   }
	  
