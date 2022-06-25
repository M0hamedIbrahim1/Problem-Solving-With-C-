//link:   https://codeforces.com/problemset/problem/1509/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
			if(arr[i] % 2 != 0) cout<<arr[i]<<" ";
		}
		for(int i = 0 ; i < n ; i++)
		{
			if(arr[i] % 2 == 0) cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
