//link:   https://codeforces.com/problemset/problem/1454/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	long long t,n;
	cin>>t;
    while (t--) {
        cin >> n;
		long long freq[n+1] = {},arr[n],m = 0;
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>arr[i];
			freq[arr[i]]++;
		}
		for(int i = 1 ; i <= n ; i++){
			if(freq[i] == 1)
			{
				m = i;
				break;
			}
		}
		if(m == 0){
			cout<<"-1"<<endl;
			continue;
		}
		for(int i = 1 ; i <= n ; i++){
			if(arr[i] == m)
			{
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
}
