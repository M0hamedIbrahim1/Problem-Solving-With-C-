//link:   https://codeforces.com/problemset/problem/1360/B
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long size;
		cin>>size;
		long long arr[size],m = 1009;
		for(int i = 0 ; i < size ; i++){
			cin>>arr[i];		
		}
		sort(arr,arr+size);
		for(int i = 0 ; i < size-1 ; i++){
			m = min(m,arr[i+1]-arr[i]);
		}
		cout<<m<<endl;
	}
}
