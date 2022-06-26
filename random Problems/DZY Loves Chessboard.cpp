//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/S
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {

int r,c;
cin>>r>>c;
char arr[r][c];
for(int i =0;i<r;i++){
	for(int j=0;j<c;j++){
		cin>>arr[i][j];
		if(arr[i][j]=='.'){
			if((i+j)%2==0){
				arr[i][j]='B';
			}else{
				arr[i][j]='W';
			}
		}
	}
}
for(int i =0;i<r;i++){
	for(int j=0;j<c;j++){
		cout<<arr[i][j];
	}	
	cout<<endl;
}

}
