//link   : https://codeforces.com/problemset/problem/749/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,numbers;
	cin>>n;
	numbers = n/2;
	cout<<numbers<<endl;
	if(n%2 == 0){
		for(int i = 0 ; i < numbers ; i++){
			cout<<"2 ";
		}
	}
	else{
		for(int i = 0 ; i < numbers - 1 ; i++){
			cout<<"2 ";
		}
		cout<<"3";	
	}	
}
 
