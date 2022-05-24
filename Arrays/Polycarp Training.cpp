//link :  https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/T
//author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;

int main ()
{
	long long n,k=1,sum=0,res;
	cin>>n;
	long long arr[n];
	for(int i = 0 ; i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	// 3 1 4 1
	// 1 1 3 4
	
	for(int i = 0 ; i<n;i++){
		if(arr[i]>=k){
			k++;
		}
	}
	cout<<--k;
 	
}
