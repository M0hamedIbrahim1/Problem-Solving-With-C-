//link:   https://codeforces.com/problemset/problem/1382/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main()
{
	int t;
	cin>>t;
	int size1,size2;
	while(t--)
	{
		int s,n;
		cin>>size1>>size2;
		int arr[size1],arr2[size2];
		for(int i = 0 ; i < size1 ; i++)
		{
			cin>>arr[i];
		}
		for(int i = 0 ; i < size2 ; i++)
		{
			cin>>arr2[i];
		}
		int flag = 0;
		for(int i = 0 ; i < size1 ; i++)
		{
			for(int j = 0 ; j < size2 ; j++)
			{
				if(arr[i] == arr2[j]){
					n = arr[i];
					flag = 1;
					break;
				}
			}
			if(flag == 1)break;
		}
		if(flag == 1)
		{
			cout<<"YES"<<endl;
			cout<<"1 "<<n<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}

}
