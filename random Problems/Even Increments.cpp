//link:   https://codeforces.com/problemset/problem/1669/C
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,flag = 1;
		cin>>size;
		int arr[size];
		for(int i = 1 ; i <= size ; i++){			
			cin>>arr[i];
		}
		if(arr[1] % 2 == 0)
		{
			for(int j = 1 ; j <= size ; j+=2){
				if(arr[j] % 2 != 0){
					flag = 0;
					break;
				}
			}
		}
		else{
			for(int j = 1 ; j <= size ; j+=2){
				if(arr[j] % 2 == 0){
					flag = 0;
					break;
				}
			}	
		}
		if(arr[2] % 2 == 0)
		{
			for(int j = 2 ; j <= size ; j+=2){
				if(arr[j] % 2 != 0){
					flag = 0;
					break;
				}
			}
		}
		else
		{
			for(int j = 2 ; j <= size ; j+=2){
				if(arr[j] % 2 == 0){
					flag = 0;
					break;
				}
			}
		}
		if(flag == 0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
		
	}
		
}
