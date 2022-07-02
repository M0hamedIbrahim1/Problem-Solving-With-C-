//link:   https://codeforces.com/problemset/problem/1669/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
    while (t--) {
		int n;
		cin>>n;
		int arr[n],freq[n+1] = {};
		for(int i = 1 ; i <= n ; i++){
			cin>>arr[i];
			freq[arr[i]]++;
		}
		int flag = 0;
		for(int i = 1 ; i <= n ; i++)
		{
			if(freq[i] >= 3)
			{
				cout<<i;
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout<<"-1";
		
		cout<<endl;
	}
}
