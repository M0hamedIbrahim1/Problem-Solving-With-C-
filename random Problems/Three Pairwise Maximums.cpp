//link   : https://codeforces.com/problemset/problem/1385/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		vector<int>v;
		int num;
		for(int i = 0 ; i < 3 ; i++){
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		
		if(v[2]==v[1]){
			cout<<"YES"<<endl;
			cout<<v[0]<<" "<<v[0]<<" "<<v[1];
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
