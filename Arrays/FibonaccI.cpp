//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/I
//author : @Mohamed Ibrahim

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
long long arr[n];
arr[0]=0;
arr[1]=1;
for(int i=2;i<n;i++){
arr[i]=arr[i-1]+arr[i-2];
}
cout<<arr[n-1];
}
