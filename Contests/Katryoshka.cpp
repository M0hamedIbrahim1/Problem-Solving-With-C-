//Link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
// author : @Mohamed Ibrahim 

#include<iostream>
using namespace std;
 								  
int main(){
									  
long long n1,n2,n3;
cin>>n1>>n2>>n3;
	
	if(n1%2==0 && n2==0 &&n3>=1){
      if(n3>=n1/2){
      	cout<<n1/2;
	  }
	  else{
	  cout<<n3;	
	  }
 
	}
	else if(n1>=1 && n2>=1 && n3>=1){
 		if(n2<=n1 && n2<=n3){
 			 n1 = n1-n2;
 			 n3 = n3-n2;
			if(n3>=n1/2){
			cout<<n2+(n1/2);
			}
			else{
			cout<<n3+n2;	
			}
		 }
		else{
		 	if(n3>=n1){
		 		cout<<n1;
			}
			else {
			 	cout<<n3;
			}
		}
	}
	else if(n1==0 || n3==0){
		cout<<"0";
	}	
}
