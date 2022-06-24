//link:   https://codeforces.com/problemset/status/1569/problem/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,flag = 0;
		cin>>size;
		string s;
		cin>>s;
		for(int i = 0 ; i < size-1 ; i++)
		{
			if((s[i] != s[i+1]) && (size != 1)){
				cout<<i+1<<" "<<i+2;
				flag = 1;
				break;
			} 
		}
		if(flag == 0){
			cout<<"-1 -1";
		} 
		cout<<endl;
	}
 
		
}
