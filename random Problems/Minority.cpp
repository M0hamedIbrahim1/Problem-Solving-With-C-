//link:   https://codeforces.com/problemset/problem/1633/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x = 0 , y = 0;
		string s;
	    cin>>s;
	    for(int i = 0 ; i < s.length(); i++)
	    {
	    	if(s[i] == '0') x++;
	    	else y++;
		}
		if(x == y) x--;
		cout<<min(x,y)<<endl;
	}
}
