//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 int counter = 0;
 long long process(long long num){
 	counter++;
 	if(num<=1){
 		return counter;
	}
	if(num%2==0){
		process(num/2);
	}else{
		process(3*num + 1);
	}
	
 }
 
int main(){

long long n;
cin>>n;
cout<<process(n);


}
