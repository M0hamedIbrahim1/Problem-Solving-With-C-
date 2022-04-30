// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
// Author : @Mohamed Ibrahim

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
 double n1;
 cin>>n1;
 if(n1>=0&&n1<=25){
 	cout<<"Interval [0,25]";
 }
 else if(n1>=25&&n1<=50){
 	cout<<"Interval (25,50]";
 }
  else if(n1>=50&&n1<=75){
 	cout<<"Interval (50,75]";
 }
  else if(n1>=75&&n1<=100){
 	cout<<"Interval (75,100]";
 }
 else{
 	cout<<"Out of Intervals";
 }
	}
 
	
