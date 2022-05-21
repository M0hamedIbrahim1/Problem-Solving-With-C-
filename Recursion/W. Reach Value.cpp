//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
long long num;
bool rescu(long long initial){

	if(initial==num){
		return true;
	}
	else if (num<initial){
		return false;
	}
	else{
		return rescu(initial*10)||rescu(initial*20);
	}
	
	
}
 
int main(){
int cases;
cin>>cases;
while(cases){
cin>>num;
	if(rescu(1)){
	cout<<"YES"<<endl;	
	}
	else{
		cout<<"NO"<<endl;
	}
	cases--;
}
} 
	
	
