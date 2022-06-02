//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 								  
int main() {
 int cases;
 cin>>cases;
 int k;
 cin>>k;
 string num;
int counter = 0;
while(cases){
	int freq[10]={};
	bool res = false;
	 cin>>num;
	for(int i = 0;i<num.length();i++){
		// 0 1 2 3 4 5 6 7 8 9
		freq[num[i] - 48]++;
	}
 
	for(int i = 0;i<=k;i++){
		if(freq[i]>=1){
			res = true;
		}
		else{
			res = false;
			break;	
		}
	}
 
if(res){
	counter++;
}
cases--; 	
 }
 cout<<counter;
	return 0;
}
