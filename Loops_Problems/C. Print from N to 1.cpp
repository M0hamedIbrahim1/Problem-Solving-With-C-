// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
  int flag =0;
  int recu(int num){
	if(num>0){
		if(flag){
			cout<<" ";
		}
		cout<<num--;
		flag=1;
		recu(num);
	}}


int main(){
int n;
cin>>n; 
recu(n);
}
