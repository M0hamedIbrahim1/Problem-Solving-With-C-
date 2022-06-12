//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/B
//author: Mohamed Ibrahim
	
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
long long n,res;
cin>>n;
if(n==0){
	cout<<"1";
	return 0;
}else if(n==1){
	cout<<"8";
	return 0;
}
int arr[4]={8,4,2,6};
res = (n-1)%4;
cout<<arr[res];

return 0;
}
