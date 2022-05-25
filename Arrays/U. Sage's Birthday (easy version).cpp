// https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/U
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i = 0 ; i <size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	cout<<(size-1)/2<<endl;
	for(int i = 0 ; i < size ; i+=2){
		if(i<size-1){
			cout<<arr[i+1]<<" "<<arr[i]<<" ";
		}else{
			cout<<arr[i];
		}
	}
}
