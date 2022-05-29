// link : https://codeforces.com/group/LKPSX7Pt2W/contest/324202/problem/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--){
		int num,sum = 0,cnt = 1,i=1,k=1;
		cin>>num;
		
		while(i != num){
			sum+=cnt;
			cnt++;
			i = i * 10;
			i = i + k;
			
			if(i>10000){
				k++;
				i = k;
				cnt = 1;
			}
			
		}
	cout<<sum+cnt<<endl;
	}	
}
