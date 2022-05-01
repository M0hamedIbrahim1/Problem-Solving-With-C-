//link :    https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
// Author : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 								  
int main(){
 
long long s1,s2,c=0,j=0;
cin>>s1>>s2;
 
long long arr1[s1],arr2[s2];
 
for(int i = 0;i<s1;i++){
	cin>>arr1[i];
}
for(int i = 0;i<s2;i++){
	cin>>arr2[i];
}
                          
for(int i = 0;i<s1;i++){         
 
	if(arr1[i]==arr2[j]){
		c++;
		j++;
 
	}
 
}
 
 
 
if(c==s2){
	cout<<"YES";
}
else{
	cout<<"NO";
}}
 
 
