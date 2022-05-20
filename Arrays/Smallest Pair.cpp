//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/D
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int q;
 cin>>q;
 while(q--){
 	int n;
 	cin>>n;
 	long long arr[n],m = 100000009,res=0;
 	for(int i =0 ; i < n ; i++){
 		cin>>arr[i];
	}
	for(int i =0 ; i < n ; i++){
 	 	for(int j =i+1 ; j < n ; j++){
			res = arr[i]+arr[j] + j-i;
			m = min(m,res);
		}
	}
	cout<<m<<endl;
 }
}
