//link:   https://codeforces.com/problemset/problem/1660/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b;
		if(a==0) cout<<"1";
		else cout<<(2*b) + a+1;
		cout<<endl;
	}
}
