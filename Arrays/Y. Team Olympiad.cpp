//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Y
//author : @Mohamed Ibrahim

#include <iostream>
#include<bits/stdc++.h>

using namespace std; 								  

int main() {
 int size;
 cin>>size;
 int num;
 int arr1[size],arr2[size],arr3[size];
 int k1=0,k2=0,k3=0;
 for(int i = 0;i<size;i++){
 	cin>>num;
 	if(num==1){
 		arr1[k1]=i;
 		k1++;
	 }else if(num==2){
	 	arr2[k2]=i;
	 	k2++;
	 }else{
	 	arr3[k3]=i;
	 	k3++;
	 }
 }
int res = min(k1,min(k2,k3));
cout<<res<<endl;
 for(int i = 0;i<res;i++){
	cout<<++arr1[i]<<" "<<++arr2[i]<<" "<<++arr3[i]<<endl;
}
	
	return 0;
}
