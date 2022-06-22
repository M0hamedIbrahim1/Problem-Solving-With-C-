//link:   https://codeforces.com/problemset/problem/1538/B
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,size;
	cin>>t;
	while(t--)
	{
		cin>>size;
		long long arr[size],sum = 0 , cnt = 0 , mean;
		for(int i = 0 ; i < size ; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum % size)
		{
			cout<<"-1";
		}else
		{	mean = sum / size;
			for(int i = 0 ; i < size ; i++)
			{
				if(arr[i] > mean) cnt++;
			}
			cout<<cnt;
		}
		cout<<endl;
	}

}
