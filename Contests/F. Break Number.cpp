//link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main(){
 long long n,num,counter=0,max=0;
 cin>>n;
 for(int i=0;i<n;i++){
 	cin>>num;
 	while(num%2==0){
 	num = num/2;
	counter++;
	}
	if(counter>max){
		max = counter;
	}
	counter = 0;
 }
cout<<max;


}
