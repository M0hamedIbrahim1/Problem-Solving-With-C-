//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
//author : @Mohamed Ibrahim

#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
void func(int num,int size){
long long sum=0;
	for(int i = 0;i<=size;i+=2){
	sum +=pow(num,i);
	}
		sum--;
		cout<<sum;
}


								  
int main(){
	int num,size;
	cin>>num>>size;
	func(num,size);
}
 
