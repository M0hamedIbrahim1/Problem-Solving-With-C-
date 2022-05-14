//link : https://codeforces.com/contest/385/problem/A
//author :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
vector<int> v;	
int days,raspberry,max = -1000000000,num;
cin>>days>>raspberry;

	for(int i = 0 ;i<days;i++){
		cin>>num;
		v.push_back(num);
	}
	for(int i = 0 ;i<days-1;i++){
		if(v[i] - v[i+1] > max){
			max = v[i] - v[i+1];
		}
	}
	max = max-raspberry;
	if(max>=1){
		cout<<max;
	}
	else{
		cout<<"0";
	}

}
