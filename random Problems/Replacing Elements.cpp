//link:   https://codeforces.com/problemset/problem/1473/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,size,d;
	cin>>t;
	
	while(t--)
	{	
		int flag = 0,exit = 0;
		cin>>size>>d;
		long long arr[size];
		for(int i = 0 ; i < size ; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+size);
		if(arr[0]+arr[1] <= d) flag = 1;
		for(int j = 0 ; j < size ; j++)
		{
			if(arr[j] > d)
			{
				exit = 1;
				break;
			}
		}
		if(flag == 1)
		{
			cout<<"YES";
		}
		else
		{
			if(exit == 1) cout<<"NO";
			else cout<<"YES";	
		} 
		
			cout<<endl;
	}
}
