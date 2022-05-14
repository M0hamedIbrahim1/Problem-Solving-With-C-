//link : https://codeforces.com/contest/456/problem/A
//author :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
int cases,num1,num2;
cin>>cases;
for(int i =0;i<cases;i++){
	cin>>num1>>num2;
	if(num2>num1){
		cout<<"Happy Alex";
		return 0;
	}
}
cout<<"Poor Alex";
}
   
