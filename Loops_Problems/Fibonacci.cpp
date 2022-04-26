// link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <iostream>
using namespace std;
 
int main()
{
int f;
cin>>f;
int start1 = 0;
int start2 = 1;
int next;
 
if(f==1){
	cout<<start1;
}
else if(f==2){
	cout<<start1<<" "<<start2<<" ";
 
}
else{
	cout<<start1<<" "<<start2<<" ";
	for(int i=3;i<=f;i++){
		
	next =start1+start2;
 
	start1 = start2;
	start2 = next;
 
cout<<next<<" ";
 
 
}
}
 
 
}
