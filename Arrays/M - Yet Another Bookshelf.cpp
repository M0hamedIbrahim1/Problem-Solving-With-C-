//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/M
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
		int arr[n];
		for(int i = 0 ; i < n; i++){
			cin>>arr[i];
		}
		int flag = 0,cnt=0,res=0;
		for(int i = 0 ; i < n; i++){
			if(arr[i]==1){
				flag = 1;
			}
			if(flag ==1){
				if(arr[i]==0){
					cnt++;
				}else{
					res+=cnt;
					cnt=0;
				}
			}
		}
		cout<<res<<endl;
	}
}
