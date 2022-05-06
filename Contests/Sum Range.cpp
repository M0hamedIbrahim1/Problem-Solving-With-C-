// link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
// @Author : Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size;
	cin>>size;
	while(size--){ 
		long long num1,num2; 
		long long ma,mi;
		cin>>num1>>num2;
		ma = max(num1,num2);
		mi = min(num1,num2); 
		mi--;
		//summation from 1 to min
		long long result1 = mi*(mi+1) / 2;
		//summation from 1 to max
		long long result2 = ma*(ma+1) / 2; 
		cout<<result2 - result1<<endl;
	}
}

