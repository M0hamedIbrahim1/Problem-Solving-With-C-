//link :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
//author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;
void print(int num){ 
	if(num == 0){
		return;
	}
	print(num / 2);
	cout<<num%2;
	
}
int main()
{
	int testCase;
	cin>>testCase;
	while(testCase--){ 
		int num;
		cin>>num;
		print(num);
		cout<<endl;
	}   
}
