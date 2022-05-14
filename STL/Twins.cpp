//link : https://codeforces.com/contest/160/problem/A
//author :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,num,sum=0;
cin>>n;
vector<int>v;
vector<int>v1;

	for(int i = 0;i<n;i++){
		cin>>num;
		v1.push_back(num);
	}
	sort(v1.begin(),v1.end());

	for(int i = v1.size()-1;i>=0;i--){
		sum+=v1[i];
		v.push_back(sum);
	}

	for(int i = 0;i<v.size();i++){
		if(v[i]>v[v.size()-1]-v[i]){
			cout<<++i;
			return 0;
		}
	}
}
   
