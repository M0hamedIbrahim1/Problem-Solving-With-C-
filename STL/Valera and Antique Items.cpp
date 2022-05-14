//link : https://codeforces.com/contest/441/problem/A
//author :@Mohamed Ibrahim

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
int n,t,items;
long long val,price;
cin>>n>>val;

for(int i =0;i<n;i++){
	t=i;
	cin>>items;
	bool ok = false;
	for(int j=0;j<items;j++){
		cin>>price;
		if(val>price){
			ok = true;
		}
	}
	if(ok){
		v.push_back(++t);
	}
}
cout<<v.size()<<endl;
sort(v.begin(),v.end());

for(int i = 0 ;i<v.size();i++){
	cout<<v[i]<<" ";
}

}
