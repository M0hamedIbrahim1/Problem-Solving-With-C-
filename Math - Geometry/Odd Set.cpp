//link   : https://codeforces.com/problemset/problem/1542/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,num;
	cin>>t;
	while(t--){
		cin>>n;
		int odd = 0 , even = 0;
		for(int i = 1 ; i <= 2*n ; i++)
		{
			cin>>num;
			if(num % 2 == 0) even++;
			else odd++;
		}
		if(odd == even) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}

}
