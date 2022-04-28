#include<iostream>
using namespace std;
 								  
int main(){
int n;
cin>>n;
while(n>0){
 
int num;
long long fact=1;
cin>>num;
for(int i=1;i<=num;i++)
{
	fact = fact*i;
}
cout<<fact<<endl;
n--;
}
 
 
}
	
