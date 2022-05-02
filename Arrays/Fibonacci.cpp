//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
//	Author : @Mohamed Ibrahim

#include<iostream>
 using namespace std; 								  
int main(){
int num;
cin>>num;
long long start = -1,start2 = 1,next=0;
for(int i=1;i<=num;i++){
	next = start+start2;
	start=start2;
	start2=next;
	
}
cout<<next;
	}

 
