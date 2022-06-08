//link: 	https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J
//author:  @Mohamed Ibrahim

#include<bits/stdc++.h>
 using namespace std; 
 								  
int main(){

	int arr[13]={4,7,47,74,77,44,444,447,474,477,777,774,744};
	int n;
	cin>>n;
	for(int i = 0 ;i<13;i++){
		if(n%arr[i]==0){
			cout<<"YES";
			return 0;
		}
		
	}
cout<<"NO";



}
	  
