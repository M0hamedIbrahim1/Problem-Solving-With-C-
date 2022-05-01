//link :    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
// Author : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>
 
using namespace std; 								  
int main(){
int row,col,row_index,col_index,flag=0,r,c;
cin>>row>>col;
char arr[row][col];
 
for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		
		cin>>arr[i][j];
		
	}
	
}
cin>>r>>c;
row_index = r;
col_index = c;
row_index--;
col_index--;
 
 if(arr[row_index][col_index-1] != '.' &&
	   arr[row_index][col_index+1] != '.' &&
	   arr[row_index - 1][col_index] != '.' &&
	   arr[row_index + 1][col_index] != '.' &&
	   arr[row_index - 1][col_index - 1] != '.' &&
	   arr[row_index - 1][col_index + 1] != '.' &&
	   arr[row_index + 1][col_index - 1] != '.' &&
	   arr[row_index + 1][col_index + 1] != '.'){
		cout<<"yes";
	} else {
		cout<<"no";
	}
}
