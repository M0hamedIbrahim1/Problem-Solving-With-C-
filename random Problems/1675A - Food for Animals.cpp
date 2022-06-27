//link:   https://codeforces.com/problemset/problem/1675/A	
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y,res,flag = 1;
        cin>>a>>b>>c>>x>>y;
        if(a<x)
        {
        	res = x-a;
        	if(res>c) flag = 0;
        	c = c-res;
		}
        if(b<y){
			if(c+b<y) flag = 0;
		}
		if(flag == 0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;

	}
}
