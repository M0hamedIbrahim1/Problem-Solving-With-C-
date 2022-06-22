//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/L
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
long long size;
int count = 0;
cin>>size;
long long arr[size];
for(int i =0;i<size;i++)
{
	cin>>arr[i];	
}
sort(arr,arr+size);

for(int i =0;i<=size-1;i++){
	if(arr[i]==arr[i+1]){
		count++;
	}
}
if(count==0){
	cout<<"-1";
	return 0;
}
cout<<count;
}
