//link :  https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/R
//author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt,counter = 0,sum=0;
	int arr[12];
	cin>>cnt;
	for(int i = 0 ; i < 12;i++){
		cin>>arr[i];
	}
	if(cnt==0){
		cout<<"0";
		return 0;
	}
	sort(arr,arr+12);
	for(int i = 11;i>=0;i--){
		counter++;
		sum+=arr[i];
		if(sum==cnt || sum > cnt){
			cout<<counter;
			return 0;
		}
	}
	if(sum<cnt){
		cout<<"-1";
	}

}
