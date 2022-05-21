//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/J
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int q;
	cin>>q;
	while(q--){
		long long size;
		cin>>size;
		long long arr[size];
		for(int i = 0 ; i<size;i++){
			cin>>arr[i];
		}
		int cnt = 1,fin=0,res=0;
		for(int i = 0 ; i < size-1;i++){
			if(arr[i]<=arr[i+1]){
				cnt++;
			}else{
				res = cnt + 1;
				res = res * cnt;
				res = res / 2;	
				fin+=res;
				cnt = 1;
			}
		}
		if(cnt>=1){
				res = cnt + 1;
				res = res * cnt;
				res = res / 2;	
				fin+=res;
				cnt = 1;
		}
		if(size == 1){
			cout<<"1"<<endl;
		}else{
			cout<<fin<<endl;

		}
	}
}
