//link :   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
//Author :@Mohamed Ibrahim 

#include<iostream>
#include<bits/stdc++.h>
 
 using namespace std; 								  
int main(){

int n,k=0,size;
string s;
cin>>n;
cin>>s;
size = s.length();

string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string key ="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

if(n==1){
	//encrypting 
	while(size){

		for(int i =0;i<Original.length();i++){
			if(s[k]==Original[i]){
			cout<<key[i];
			k++;
			break;	
			}
		}
		size--;
		}

}
else{
	//decrypting 
	while(size){
		
		for(int i =0;i<Original.length();i++){
			if(s[k]==key[i]){
			cout<<Original[i];
			k++;
			break;	
			}
		}
		size--;
		}

}
}
 
 
