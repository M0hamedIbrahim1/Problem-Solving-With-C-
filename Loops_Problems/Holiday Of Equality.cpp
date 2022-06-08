//link: 	https://codeforces.com/problemset/problem/758/A
//author:  @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main(){
	int size,sum=0;
	cin>>size;
	int arr[size];
	for(int i = 0 ; i < size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	for(int i = 0 ; i < size - 1; i++){
		arr[i] = arr[size-1]-arr[i];
		sum+=arr[i];
	}
	cout<<sum;
}
