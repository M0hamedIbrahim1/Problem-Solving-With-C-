//link:   https://codeforces.com/problemset/problem/1234/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,n;
	cin>>t;
    while(t--)
    {
		cin>>n;
    	long long arr[n] , sum = 0;
		for(int i = 0 ; i < n ; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
			if(sum % n == 0 ) cout<<sum/n;
			else cout<<sum/n + 1;
		    cout<<endl;
		
    }

}
