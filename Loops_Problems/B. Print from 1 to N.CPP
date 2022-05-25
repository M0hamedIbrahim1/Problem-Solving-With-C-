// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int counter = 1;
 int recu(int num){
	if(num>0){
		cout<<counter++ <<endl;
		recu(num-1);
		
		}	
	}

int main() {
int n;
cin>>n; 
recu(n);
}
