//link:   https://codeforces.com/problemset/problem/233/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n %2 == 0)
	{	
		for(int i = 2 ; i <= n;i+=2)
		{
			cout<<i<<" "<<i - 1<<" ";
		}
		return 0;
	}
	cout<<"-1";
}
