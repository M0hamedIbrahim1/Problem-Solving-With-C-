//link:   https://codeforces.com/group/jfviGllBoY/contest/389763/problem/A
//author: Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;						  
int main() {
int n,t;
cin>>n>>t;

if(t==10){
	if(n==1){
		cout<<"-1";
		return 0;
	}
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<'1';
		}else{
			cout<<'0';
		}
	}
	return 0;
}
while(n){
cout<<t;
n--;
}

}
