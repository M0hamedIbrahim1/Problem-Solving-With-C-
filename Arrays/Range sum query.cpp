//link :    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
// Author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,range;
	cin>>size>>range;  
	long long arr1[size];  
	long long arr2[size];  
	for(int i=0;i<size;i++){
		cin>>arr1[i];
		if(i == 0){
			arr2[i] = arr1[i];
		} else {
			arr2[i] = arr1[i] + arr2[i-1];
		}
	}
	while(range--){  
		long long start,end;
		cin>>start>>end;
		start--;
		end--;
		long long sum = arr2[end] - arr2[start] + arr1[start];
		cout<<sum<<endl;
	}
}
