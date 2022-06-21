//link:   https://codeforces.com/problemset/problem/1692/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,size,a,b,c,d;
	cin>>t;
	
	while(t--)
	{	
		int cnt = 0;
		cin>>a>>b>>c>>d;
		if(b>a) cnt++;
		if(c>a) cnt++;
		if(d>a) cnt++;
		cout<<cnt<<endl;
		////////////////
	}
}
