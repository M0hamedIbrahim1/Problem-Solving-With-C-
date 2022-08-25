// link  : https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/O
# author : Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;   
  
int main(){
 
  int n,m,counter=1,q;
  cin>>n>>m;
  char arr[n][m];
  int k = 0;
  for(int i =0;i<n;i++){
  	for(int j = 0;j<m;j++){
  		cin>>arr[i][j];
	  }
  }
  cin>>q;
  while(q){
  	int x1,y1,x2,y2,k=0;
  	cin>>x1>>y1>>x2>>y2;
  	 x1--;y1--;x2--;y2--;
 int freq[26]={};
  
 for(int i =x1;i<=x2;i++){
 	for(int j=y1;j<=y2;j++){
 	freq[arr[i][j]-'a']++;			 
	 }
 }
 
 for(int i =0;i<26;i++){
 	if(freq[i]>0){
 		cout<<char(i+'a')<<" "<<freq[i]<<endl;
	 }
 }
  
 
    cout<<endl;
	q--;	
	}	
 
}
