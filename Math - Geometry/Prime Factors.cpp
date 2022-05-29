// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main() {
	long long num; // 18
	cin>>num;
	int flag = 0;
	for(int i = 2;i<=num/2;i++){ 
		
		int counter = 0;
		while(num % i == 0){ 
			counter++; // 
			num /= i; 
		}
		if(counter>0 && flag > 0){
			cout<<"*";
		}
		if(counter > 0){
			cout<<"("<<i<<"^"<<counter<<")";
			flag = 1;
		}
		if(num == 1){
			break;
		}
	}
	if(num > 1 && flag){
		cout<<"*";
	}
	if(num > 1){
		cout<<"("<<num<<"^"<<1<<")";
	}
}
