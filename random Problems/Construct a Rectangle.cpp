//link:   https://codeforces.com/problemset/problem/1622/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t,arr[3];
	cin>>t;
	while(t--)
	{
		for(int i = 0 ; i < 3 ; i++) cin>>arr[i];
		sort(arr,arr+3);
		
		if((arr[0] + arr[1] == arr[2]) || (arr[0] == arr[1] && arr[2] % 2 == 0) || (arr[1] == arr[2] && arr[0] % 2 == 0))
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
