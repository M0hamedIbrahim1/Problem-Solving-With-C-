//link: 	https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/I
//author:  @Mohamed Ibrahim
#include<iostream>
#include<bits/stdc++.h>
 using namespace std; 
 								  
   int main(){

string s1,s2;
cin>>s1>>s2;

int size1 = s1.size();
int size2 = s2.size();
int i = 0,j=0;


while(j<size2){
	if(s1[i]==s2[j]){
		i++;
		j++;
	}else{
		j++;
	}
}
cout<<++i;





}
