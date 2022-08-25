// link  : https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/N
# author : Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){
long long n1,n2;
cin>>n1>>n2;

if(n1/__gcd(n1,n2)>n1){
	cout<<"Amr";
 
}
else if(n1>n1/__gcd(n1,n2)){
	cout<<"Zezo";
}
else {
	cout<<"Draw";	
}
}
