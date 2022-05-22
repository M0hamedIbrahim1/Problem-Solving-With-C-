//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main(){
int flag = 0;
long long size;
cin>>size;
long long arr[size],arr_rev[size];
for(int i = 0;i<size;i++){
	cin>>arr[i];
}
int k = 0;
for(int i = size-1;i>=0;i--){
	arr_rev[k]=arr[i];
	k++;
}
k = 0;
for(int i = 0;i<size;i++){
	if(arr[i]!=arr_rev[k]){
		cout<<"NO";
		return 0;	
	}
		
flag = 1;
k++;
}
	cout<<"YES";

}
