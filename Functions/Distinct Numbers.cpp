//link     :https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 int main()
{
 
 int size,counter=1;
 cin>>size;
 	if(size == 0){
		cout<<0;
		return 0;
	}
 int arr[size];
  for(int i=0;i<size;i++){
  cin>>arr[i];
  }
 sort(arr,arr+size);
  for(int i=1;i<size;i++){
	if(arr[i] != arr[i-1]){
		counter++;
	}
  }
  cout<<counter;
 }
