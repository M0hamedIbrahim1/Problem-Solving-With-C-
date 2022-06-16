//link   : https://codeforces.com/problemset/problem/1462/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int size,s,j;
		cin>>size;
		long long arr[size];
		for(int i = 0 ; i < size ; i++){
			cin>>arr[i];
		}
		j = size-1;
		for(int i = 0 ; i < size/2 ; i++){
			 cout<<arr[i]<<" "<<arr[j]<<" ";
			 j--;
		}
		if(size % 2 != 0) cout<<arr[size/2];
		cout<<endl;
	}
}
