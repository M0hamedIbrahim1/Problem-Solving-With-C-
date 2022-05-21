//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/J
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int q;
	cin>>q;
	while(q--){
		long long size,res=0;
		cin>>size;
		res=size;
		long long arr[size];
		for(int i = 0 ; i<size;i++){
			cin>>arr[i];
		}
		for(int i = 0 ; i < size-1;i++){
			for(int j = i;j<size-1;j++){
				if(arr[j]<=arr[j+1]){
					res++;
				}
				else{
					break;
				}
			}
		
		}
		cout<<res<<endl;
	}
}
