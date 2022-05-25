// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Z
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;
 								  
int main(){

long long r,s;
cin>>r>>s;
r *=2;

if(s>=r){
	cout<<"Square";
}
else if(r>sqrt(2*pow(s,2))){
	cout<<"Circle";
}
else{
	cout<<"Complex";
}
 }
