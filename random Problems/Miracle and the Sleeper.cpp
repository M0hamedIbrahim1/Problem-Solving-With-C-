//link:   https://codeforces.com/problemset/problem/1562/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
        cout<<min((r-l),(r-1)/2)<<endl;
	}
}
