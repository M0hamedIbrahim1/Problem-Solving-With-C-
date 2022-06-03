// link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/M
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main(){
int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);
cout<<(arr[2]-arr[1])+ (arr[1]-arr[0]);
}
 
 
