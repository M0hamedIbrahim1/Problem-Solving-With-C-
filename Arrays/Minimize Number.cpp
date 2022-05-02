//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
//	Author : @Mohamed Ibrahim

#include<iostream>
using namespace std; 								  
int main(){
 
int size,oper=0;
cin>>size;
long long arr[size];
for(int i =0;i<size;i++){
	cin>>arr[i];
	
}
 
int flag =1;
while(flag){
 
for(int i =0;i<size;i++){
	if(arr[i]%2==0){
		arr[i] /=2;
	}
	else{
		flag = 0;
		break;
	}
 
}
oper++;
}
cout<<oper-1;
 
}
 
 
 
