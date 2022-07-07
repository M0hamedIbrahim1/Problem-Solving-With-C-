//link:   https://codeforces.com/problemset/problem/1343/A
//author: Mohamed Ibrahim

//link:   https://codeforces.com/problemset/problem/711/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,p;
		cin>>n;
		for(int i = 1 ;; i++)
		{
			p = pow(2,i+1) - 1; // == ( x+2x+4x+⋯+2^k−1x ) = ( 2 ^ k+1 ) -1
			if(n%p == 0)
			{
				cout<<n/p<<endl;
				break;
			} 
		}
	}

}
