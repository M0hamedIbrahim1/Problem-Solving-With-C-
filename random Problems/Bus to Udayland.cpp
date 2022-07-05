//link:   https://codeforces.com/problemset/problem/711/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int n,flag = 0;
	cin>>n;
	string s[n];
	for(int i = 0 ; i < n ; i++) cin>>s[i];
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i][0] == 'O' && s[i][1] == 'O')
		{
			flag = 1;
			s[i][0] = '+';
			s[i][1] = '+';
			break;
		}
		if(s[i][3] == 'O' && s[i][4] == 'O')
		{
			flag = 1;
			s[i][3] = '+';
			s[i][4] = '+';
			break;
		}
	}
	if(flag == 1)
	{
		cout<<"YES"<<endl;
		for(int i = 0 ; i < n ; i++) cout<<s[i]<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	} 

}
