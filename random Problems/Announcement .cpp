//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/L
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
int freq[100000],count=0;
long long size;
cin>>size;
long long arr[size];
for(int i =0;i<size;i++)
{
	cin>>arr[i];
	freq[arr[i]]++;
}
for(int i =0;i<size;i++){
	if(freq[arr[i]]>1){
		count+=freq[arr[i]]-1;
		freq[arr[i]]=0;
	}
}
if(count==0){
	cout<<"-1";
	return 0;
}
cout<<count;
}
