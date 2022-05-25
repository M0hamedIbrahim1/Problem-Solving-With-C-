// link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/V
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ma = 0,mi = 1000000009,num,index;
	int size;
	cin>>size;
	vector<pair<int,int> >p(size+1);
	for(int i = 1 ; i<=size;i++){
		cin>>p[i].first>>p[i].second;
		mi = min(mi,p[i].first);
		ma = max(ma,p[i].second);
		
	}
	for(int i = 1 ; i<=size;i++){
		if(mi==p[i].first && ma == p[i].second){
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
}
