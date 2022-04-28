#include<iostream>
using namespace std;
 								  
int main(){
 
int num,x=0 ;
cin>>num;
 	
	for(int i=2;i<num;i++){
	if(num%i ==0){
		x = 1;
	    break;
	}
	
}
 
 
if(x==1 || num==1){
	cout<<"NO";
}
else{
		cout<<"YES";
 
}
 
 
}
	
