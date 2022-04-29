//Link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
// author : @mohamed ibrahim 
#include<iostream>
using namespace std;
 								  
int main(){
 
double n1,n2,n3,res=0;
cin>>n1>>n2>>n3;
 
res = (n1*n2)/n3;
long long res2 = res;
 
	if(res-res2>0){
		cout<<"double";
	}
	else if(res2<=2147483647){
		cout<<"int";
	}
	else{
		cout<<"long long";
	}
 
}
	
