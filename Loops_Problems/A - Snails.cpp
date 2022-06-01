//link : https://codeforces.com/group/x1IbeOVM4y/contest/287840/problem/A
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;


int main()
{

int q;
cin>>q;
while(q--){
	int a,b,c;
	cin>>a>>b>>c;
	int cnt = 1,res = b;
	while(b<a){
		if(b==c){
			cnt = -1;
			break;
		}
		b = b-c;
		b = b+res;
		cnt++;
	}
	cout<<cnt<<endl;
	
	
	
}



}
