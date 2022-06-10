//link:   https://codeforces.com/problemset/problem/1624/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long size,ma=-1,mi=1000000009;
		cin>>size;
		int arr[size];
		for(int i = 0 ; i < size ; i++){
			cin>>arr[i];
			if(arr[i]>ma){
				ma = arr[i];
			}
			if(arr[i]<mi){
				mi = arr[i];
			}
		}
		cout<<ma - mi<<endl;
	}
}

