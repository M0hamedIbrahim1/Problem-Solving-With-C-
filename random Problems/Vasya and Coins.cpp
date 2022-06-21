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
		else if(b==0) cout<<a+1;
		else if(a == 1 && b == 1) cout<<"4";
		else cout<<(2*b) + a + 1;
		cout<<endl;
	}
}
