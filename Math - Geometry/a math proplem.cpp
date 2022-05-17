//link : https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/K
//Author:@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long a,b;
	int q,x;
	cin>>q;
	while(q--){
		cin>>a>>b;
		if(a%b==0){
			cout<<"0"<<endl;
		}else if(a<b){
			cout<< b-a <<endl;
		}else{
			x = a%b;
			cout<< b-x <<endl;
		}
	}
}
