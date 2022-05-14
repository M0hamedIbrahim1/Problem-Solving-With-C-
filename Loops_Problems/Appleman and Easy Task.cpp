//link : https://codeforces.com/contest/462/problem/A
//author :@Mohamed Ibrahim

 
#include<bits/stdc++.h>
using namespace std;
int main()
{
int size,cnt=0;
cin>>size;
char arr[size][size];
for(int i = 0 ; i<size;i++){
	for(int j = 0;j<size;j++){
		cin>>arr[i][j];
	}
}
int flag = 1;
for(int i = 0 ; i<size;i++){
	for(int j = 0;j<size;j++){
		if(arr[i+1][j]=='o'&&i<size-1) cnt++;
		if(arr[i-1][j]=='o'&&i>0) cnt++;
		if(arr[i][j+1]=='o'&&j<size-1) cnt++;
		if(arr[i][j-1]=='o'&&j>0) cnt++;
		if(cnt%2 != 0){
			flag = 0;
		}		
		
	}
}
if(flag ==1){  
	cout<<"YES";
}else{
	cout<<"NO";
}


}
