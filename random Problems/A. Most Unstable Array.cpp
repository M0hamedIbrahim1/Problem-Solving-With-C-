//link:   https://codeforces.com/problemset/problem/1353/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n , m ;
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		if(m==1) cout<<"0"<<endl;
		else if(m==2) cout<<n<<endl;
		else cout<<2*n<<endl;
	}
}
