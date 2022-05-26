// link : https://codeforces.com/problemset/problem/714/B
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	sort(arr,arr+n);
	int t=unique(arr,arr+n)-arr;
	if(t<3||t==3&&arr[1]-arr[0]==arr[2]-arr[1]){
	   cout<<"YES\n";
 	}

	else{
        cout<<"NO\n";
	}
	return 0;

}

