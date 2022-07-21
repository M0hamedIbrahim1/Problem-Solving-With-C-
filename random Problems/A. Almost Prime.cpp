//link:   https://codeforces.com/problemset/problem/26/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
bool Prime = true;	
void prime(int n)
{
	Prime = true;
	if(n == 1) Prime = false;
	for(int i = 2 ; i <= sqrt(n) ; i++)
	{
		if(n % i == 0)
		{
			Prime = false;
			break;
		}
	}
}					  
int main()
{
 	int n,cnt = 0,C=0 ;
 	cin>>n;
 	for(int i = 2 ; i <= n ; i++)
 	{	
		cnt = 0;
 		for(int k = 2 ; k <= i/2 ; k++)
		{
 			
		
	 		if(i % k == 0)
			{
				prime(k);
				if(Prime)
				{
					cnt++;
				}
			}
		}
		if(cnt == 2)C++;
	}
cout<<C;
}
