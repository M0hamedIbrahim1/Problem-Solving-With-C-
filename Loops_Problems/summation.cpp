//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
//author : @Mohamed Ibrahim
#include<bits/stdc++.h>
using namespace std;

	 	 	 
int main(){
int size;
cin>>size;
long long sum=0;
long long arr[size];
for(int i =0;i<size;i++){
	cin>>arr[i];
	sum+=arr[i];
}
cout<<sum;
}
