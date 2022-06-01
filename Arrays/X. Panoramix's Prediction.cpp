//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/X
//author : @Mohamed Ibrahim

#include <iostream>
#include<bits/stdc++.h>

using namespace std; 								  

int main() {
int n1,n2;
cin>>n1>>n2;
int mas[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
for(int i = 0;i<16;i++){
	if(mas[i]==n1){
		if(mas[i+1]==n2){
			cout<<"YES";
			
		}
		else{
			cout<<"NO";
		}
		break;
	}
}
	
	
	
	return 0;
}
