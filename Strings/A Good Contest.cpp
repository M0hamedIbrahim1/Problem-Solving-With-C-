//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/C
//author : @Mohamed Ibrahim

#include<bits//stdc++.h>
using namespace std;
int main()
{
	int n,a,b,k=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s>>a>>b;
		if(a>=2400 && b>a) k++;
	}
	if(k>0) cout<<"YES";
	else cout<<"NO";
}

 
