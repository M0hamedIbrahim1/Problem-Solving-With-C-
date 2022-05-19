//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
//author  : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
void func(int size){
int arr[size],max;
	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}
	for(int i =0;i<size;i++){
		for(int j =0;j<size;j++){
			if(arr[i]<arr[j]){
				max = arr[i];
				arr[i]=arr[j];
				arr[j]=max;
			}
			
			
		}	
	}

	cout<<arr[0]<<" "<<arr[size-1];
}


								  
int main(){
	int size;
	cin>>size;
	func(size);
}
 
