//link of problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <iostream>
using namespace std;
 
int main()
{
int n1,n2,counter=0;
cin>>n1>>n2;
 
for(int i=0;i<=n1;i++){
   for(int j=0;j<=n1;j++){
   		if(n2-i-j>=0 && n2-i-j<=n1){
			counter++;
		   
	   }
   }                    
}
 
cout<<counter;
 
 
}
