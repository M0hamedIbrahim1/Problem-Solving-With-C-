//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int counter = 0;
void log(long long num){ 
	
	if(num == 1){
		return;
	}
	counter++; 
	log(num/2);
}
int main(){
	long long num;
	cin>>num;
	log(num);
	cout<<counter<<endl;
}	
