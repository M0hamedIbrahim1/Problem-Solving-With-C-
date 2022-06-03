// link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/N
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main(){
int row,col,res=0;
cin>>row>>col;
char arr[row][col];
int arr_r[row]={0};
int arr_c[col]={0};
for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		cin>>arr[i][j];
		if(arr[i][j]=='S'){
			arr_r[i]=1;
			arr_c[j]=1;
		}
	}
}
 for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		if(arr_r[i]==0||arr_c[j]==0){
			res++;
		}
	
	}
}

cout<<res;

}
 
 
