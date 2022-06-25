//link:   https://codeforces.com/problemset/problem/1547/B
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int j = 97 + s.length()-1,k = 0,size,n;
		size = s.length();
		n = s.length();
		bool flag = true,res = true;
		while(size--)
		{
			if(s[k] == char(j)){
				k++;
				j--;
			}
			else if(s[n-1] == char(j)){
				n--;
				j--;
			}
			else{
				res = false;
				size = 0;
			}
			
		}
		if(res == false) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}
