// link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/P
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main() {
 int size,g=0,police=0;
 cin>>size;
 int arr[size];
 
 for(int i =0;i<size;i++){
	cin>>arr[i];
	
	if(arr[i]>=1){
		police +=arr[i];
	}else{
		if(police>=1){
		    if(police!=0){
    			police--;
		    }
		}
		else{
		g++;
		}
	}	
 }
cout<<g;

 
}
 
 
