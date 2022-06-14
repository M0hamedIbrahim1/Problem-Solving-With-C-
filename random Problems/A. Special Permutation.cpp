//link   : https://codeforces.com/problemset/problem/1454/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{	long long n;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		if(n != 1){
			for(int i = 2 ; i <= n ; i++){
				cout<<i<<" ";
			}
			cout<<"1";	
		}else{
			cout<<"1";
		}
		cout<<endl;
	}	
}
 
