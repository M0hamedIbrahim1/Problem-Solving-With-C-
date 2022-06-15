//link:   https://codeforces.com/problemset/problem/509/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10][10],n;
	cin>>n;
	
	for(int i = 0 ; i < n ; i++){
		arr[i][0] = arr[0][i] = 1;
	}
	for(int i = 1 ; i < n ; i++){
		for(int j = 1 ; j < n ; j++){
			arr[i][j] = arr[i-1][j]+arr[i][j-1];
		}
	}
	cout<<arr[n-1][n-1];
}
