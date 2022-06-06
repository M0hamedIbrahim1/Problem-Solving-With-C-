// link :  https://codeforces.com/problemset/problem/1352/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt = 0;
		for(int i = 0 ; i < s.length();i++){
			if(s[i]!='0'){
				cnt++;
			}
		}
		cout<<cnt<<endl;
		for(int i = 0 ; i < s.length();i++){
			if(s[i]!='0'){
				cout<<s[i];
				int j = s.length()-i-1;
				while(j--){
					cout<<"0";
				}
					cout<<" ";
			}
		}
		cout<<endl;
	}
}

