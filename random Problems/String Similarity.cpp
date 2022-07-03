//link:   https://codeforces.com/problemset/problem/1400/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,size;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>size;
		cin>>s;
		for(int i = 0; i < size; i++) {
			cout << s[size - 1];
		}
		cout<<endl;
	}
}
