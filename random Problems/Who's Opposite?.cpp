//link:   https://codeforces.com/problemset/problem/1560/B
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b,c,res,dif;
	while(t--)
	{
		
		cin>>a>>b>>c;
		res = abs(a-b);
		dif = res;
		res=2*res;
		if(res >= a && res >= b && res >=c)
		{
			if(c>res/2){
				cout<<c-dif;
			}
			else{
				cout<<c+dif;
			}
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
}
