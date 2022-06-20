//link:   https://codeforces.com/problemset/problem/1593/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cout<<max(max(b,c) - a + 1,0)<<" ";
		cout<<max(max(a,c) - b + 1,0)<<" ";
		cout<<max(max(a,b) - c + 1,0)<<endl;
	}
}
