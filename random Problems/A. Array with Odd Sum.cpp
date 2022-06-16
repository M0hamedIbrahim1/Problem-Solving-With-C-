//link   : https://codeforces.com/problemset/problem/1296/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{	long long num,sum;
	int t;
	cin>>t;
	while(t--){
		int size,even = 0,odd = 0;
		cin>>size;
		for(int i = 0 ; i < size ; i++){
			cin>>num;
			sum+=num;
			if(num % 2 ==0) even++;
			else odd++;
		}
		if(sum%2){
			cout<<"YES";
		} 
		else{
			if(size % 2 == 0 && even == 0) cout<<"NO";
			else if(odd == 0) cout<<"NO";
			else if(even == 0) cout<<"NO";
			else cout<<"YES";
		}
		sum = 0;
		cout<<endl;
	}
}
