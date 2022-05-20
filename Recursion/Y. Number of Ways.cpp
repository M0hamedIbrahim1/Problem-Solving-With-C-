//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
//author : @Mohamed Ibrahim
 
#include <bits/stdc++.h>
using namespace std;
int num1,num2; 
int way(int number){
	if(number >= num2){
		return number == num2;
	}
	return way(number+1) + way(number+2) + way(number+3);
}
int main() {
	cin>>num1>>num2;
	cout<<way(num1);	
}
