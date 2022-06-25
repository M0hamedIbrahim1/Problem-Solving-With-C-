//link:   https://codeforces.com/problemset/problem/1480/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int last = 122;
		int first = 97;
		int flag = 1;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(flag == 1)
			{
				if(s[i] != 'a')cout<<'a';
				else cout<<'b';
				flag = 0;
			}
			else
			{
				if(s[i] != 'z')cout<<'z';
				else cout<<'y';
				flag = 1;
			}
		}
		cout<<endl;
	}
}
