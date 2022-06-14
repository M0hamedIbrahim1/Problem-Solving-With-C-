//link   : https://codeforces.com/problemset/problem/230/A
//author : Mohamed Ibrahim

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int s,size,temp,tempy;
cin>>s>>size;
int arr[size];
int y[size];
for(int i =0;i<size;i++){
	cin>>arr[i]>>y[i];
}
for(int i =0;i<size-1;i++){
	for(int j =i+1;j<size;j++){
		if(arr[j]<arr[i]){
			temp = arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			
			tempy = y[j];
			y[j] = y[i];
			y[i]=tempy;
			
			
			
		}
	}
}

for(int i = 0 ;i <size;i++){
	if(s>arr[i]){
		s+=y[i];
	}
	else{
		cout<<"NO";
		return 0;	
	}
}
cout<<"YES";
 
return 0;
}
