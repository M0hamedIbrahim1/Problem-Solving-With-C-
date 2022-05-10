// link  :https://codeforces.com/group/LKPSX7Pt2W/contest/313728/problem/J 
//Author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;
 
int main () {
	// vector or array ...
	vector<long long>v(3);
	vector<long long>v2;
	
	for(int i = 0 ; i < 3;i++){
		cin>>v[i];
		v2.push_back(v[i]);
	}
	sort(v.begin(),v.end());
	for(int i = 0 ; i < 3;i++){
		cout<<v[i]<<endl;
	}
	cout<<endl;
		for(int i = 0 ; i < 3;i++){
		cout<<v2[i]<<endl;
	}
}
