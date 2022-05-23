//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main(){
long long row,col;
cin>>row>>col;

long long arr1[row][col];
long long arr2[row][col];

for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		cin>>arr1[i][j];

	}
}
for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		cin>>arr2[i][j];

	}
}

for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		cout<<arr1[i][j]+arr2[i][j]<<" ";

	}
		cout<<endl;
}

