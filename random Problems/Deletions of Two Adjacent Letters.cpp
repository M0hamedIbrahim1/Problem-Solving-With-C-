//link:   https://codeforces.com/problemset/problem/1650/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,size,mid,flag,found;
	string s;
	char c;
	cin>>t;
	while(t--)
	{	
		cin>>s>>c;
		size = s.length();
		flag = 0,found = 0;
		for(int i = 0 ; i < size ; i++)
		{
			if((s[i] == c) &&  (i % 2 == 0))
			{
				flag = 1;
				found = 1;
				break;	
			}
		}
		
		if(flag == 1 && found == 1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	
//		size = s.length();
//		mid = size/2;
//		if(s[0] == c || s[size - 1] == c || s[mid] == c) cout<<"YES";
//		else cout<<"NO";
//		cout<<endl;
		
	}
}
