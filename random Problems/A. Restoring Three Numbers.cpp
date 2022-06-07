// link :  https://codeforces.com/problemset/problem/1399/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		int arr[size];
		for(int i = 0 ; i < size ; i++){
			cin>>arr[i];
		}
		sort(arr,arr+size);
		int flag = 1;
		for(int i = 0 ; i < size-1 ; i++){
			if(arr[i]+1==arr[i+1] || arr[i] == arr[i+1]){
				continue;
			}else{
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}

