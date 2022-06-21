//link:   https://codeforces.com/problemset/problem/1676/B
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,size;
	cin>>t;
	
	while(t--)
	{	
		cin>>size;
		long long arr[size],m=10000007,res = 0,sum = 0;
		for(int i = 0 ; i < size ; i++)
		{
			cin>>arr[i];
			m = min(arr[i],m);
		}
		for(int j = 0 ; j < size ; j++)
		{
			if(arr[j] != m) 
			{
				res = arr[j] - m;
				sum+=res;
			}	
		}
		cout<<sum<<endl;
	}
}
