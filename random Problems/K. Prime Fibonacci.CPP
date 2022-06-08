//link: 	https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/K
//author:  @Mohamed Ibrahim

#include<bits/stdc++.h>
 using namespace std; 
 
int main(){
	cin.tie(0);
	cout.tie(0);
	bool arr[51]={0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0};
	int cases,n;
	cin>>cases;
	while(cases){
	 cin>>n;
	 if(arr[n]==1){
	 	cout<<"prime\n";
	 }else{
	 	cout<<"not prime\n";
	 }
		cases--;	
	 }
}
	  
