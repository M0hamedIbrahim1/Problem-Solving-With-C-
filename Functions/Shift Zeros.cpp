//link     :https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 int main()
{
 
int size,count = 0;
cin>>size;
int arr[size];

	for(int i =0;i<size;i++){
		cin>>arr[i];
	 	if(arr[i]==0){
			count++;
		}
		else{
			cout<<arr[i]<<" ";
		}
	
	}
	
	for(int i =0;i<count;i++){
		cout<<"0"<<" ";
	}
 }
