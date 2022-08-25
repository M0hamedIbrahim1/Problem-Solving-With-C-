// link : https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/Q
// author : Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 long long cases;
 cin>>cases;
 while(cases){
 	 long long size;
	  long long pairs=0,count=0,count2=0,count_n=0,pairs_;
 	 cin>>size;
 	 long long arr[size];
 	for(int i =0;i<size;i++){
 		cin>>arr[i];

		if(arr[i]==2){
		count2++;
		}
		else if(arr[i]!=0 &&arr[i]!=1){
			count_n++;
		}
	 }

     for(int i =1;i<count_n;i++){
 	 pairs = pairs+i;
	 }
	 
	 
  	 if(count2>1){
 		pairs_ = count2*count_n;
		cout<<pairs+pairs_<<endl;
	 }
	 else if(count2==1){
	 	
	 	cout<<pairs+count_n<<endl;
	 }
	 else{
	 	cout<<pairs<<endl;
	 }
 
 	cases--;
 }
}
 
