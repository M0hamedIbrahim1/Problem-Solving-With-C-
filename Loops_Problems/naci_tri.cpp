//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main(){

int n;
cin>>n;
int start,second;
start = -1;
second = 1;
int next = start + second;
if(n==1){
	cout<<'0';
	return 0;
}else if(n==2){
	cout<<'1';
	return 0;
}

for(int i = 1;i<n;i++){
	start = second;
	second = next;
	next = start+second;
}
	cout<<next;


}
