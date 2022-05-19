//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/H

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,h,m,cnt=0;
	cin>>s>>h>>m;
	if(m%10==7){
		cout<<"0";
		return 0;
	}
	
	for(int i = 1;;i++){
		m = m - s;
		if(m%10==7){
			cout<<i;
			return 0;
		}
	
	}
	
}
