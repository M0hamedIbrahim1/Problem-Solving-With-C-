//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Z
//author : @Mohamed Ibrahim
#include <iostream>
#include<bits/stdc++.h>

using namespace std; 								  

int main() {
 int size,i=0;
 string word;
 cin>>size>>word;
 string res;
 while(size){
 	if(size%2==0){
 		res = word[i]+res;
	 }
	 else{
	 	res = res+word[i];

	 }
	 i++;
	 size--;
 }
  
cout<<res;

	return 0;
}
