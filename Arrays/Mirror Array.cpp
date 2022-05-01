//link :    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
// Author : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>
 
using namespace std; 								  
int main(){
int row,col;
cin>>row>>col;
long long arr[row][col];
 
for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		cin>>arr[i][j];	
	}	
}
for(int i = 0;i<row;i++){
	for(int j = col-1;j>=0;j--){
		cout<<arr[i][j]<<" ";		
	}
	cout<<endl;
}
 
}
 
 
