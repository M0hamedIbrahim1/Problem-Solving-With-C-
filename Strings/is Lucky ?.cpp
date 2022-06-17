//link   : https://codeforces.com/problemset/problem/1676/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,size = 6;
	cin>>t;
	string s;
	while(t--)
	{
		int sum = 0;
		cin>>s;	
		for(int i = 0 ; i < 3 ; i++)
		{
			s[i] = s[i] - 48;
			sum+=s[i];	
		}
		for(int j = 3 ; j <= 5 ; j++)
		{
			s[j] = s[j] - 48;
			sum-=s[j];		
		}
		if(sum == 0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	

}
