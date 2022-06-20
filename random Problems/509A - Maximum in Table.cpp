//link:   https://codeforces.com/problemset/problem/702/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,cnt = 1,m = 0;
	cin>>size;
	long long arr[size];
	for(int i = 0 ; i < size ; i++)
	{	
		cin>>arr[i];
	}
	for(int i = 1 ; i < size ; i++)
	{
		if(arr[i]>arr[i-1])
		{
			cnt++;	
		}
		else
		{
			m = max(m,cnt);
			cnt = 1;
		}		
	}
	m = max(m,cnt);
	cout<<m;
}
