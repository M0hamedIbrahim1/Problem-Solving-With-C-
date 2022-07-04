//link:   https://codeforces.com/problemset/problem/894/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,cnt = 0;
	string s;
	cin>>s;
	for(int i = 0 ; i < s.length() ;i++)
	{
		if(s[i] == 'Q')
		{
			for(int j = i+1 ; j < s.length() ; j++)
			{
				if(s[j] == 'A')
				{
					for(int k = j+1 ; k < s.length() ; k++){
						if(s[k] == 'Q') cnt++;
					}
				}
			}
		}
	}
	cout<<cnt;
}
