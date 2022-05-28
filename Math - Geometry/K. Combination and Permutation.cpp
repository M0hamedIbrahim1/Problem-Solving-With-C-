// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/K
// author : @Mohamed Ibrahim

 
#include<bits/stdc++.h>
using namespace std;
long long func(int n){
	long long res=1;
	int counter = 1;
	while(counter<=n){
	res *=counter;
	counter++;
	}
		return res;

}

int main() {
int a,b,m;
cin>>a>>b;
m = a-b;

cout<<func(a)/(func(m)*func(b))<<" "<<func(a)/func(m);

}
