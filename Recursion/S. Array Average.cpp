//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main(){
long long size,sum=0;
cin>>size;
long long arr[size],arr_rev[size];
for(int i = 0;i<size;i++){
	cin>>arr[i];
	sum+=arr[i];
}
cout<<fixed<<setprecision(6)<<sum/size;
}
