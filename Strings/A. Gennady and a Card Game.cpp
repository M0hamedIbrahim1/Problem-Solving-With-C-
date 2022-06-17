//link   : https://codeforces.com/problemset/problem/1097/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	getline(cin,s);
	getline(cin,t);

	for(int i = 0 ; i < 2 ; i++)
	{
		for(int j = 0 ; j < t.length() ;j++)
		{
			if(s[i] == t[j]){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}
