#include<iostream>
using namespace std;
 								  
int main(){
 
int cases;
cin>>cases;
for(int i=2;i<=cases;i++){
 
int x=0 ; 	
	for(int j=2;j<i;j++){
	if(i%j ==0){
		x = 1;
	    break;
	}
	
}
 
 
if(x==1 || i==1){
 
}
else{
		cout<<i<<" ";
 
}
		
}
 
}
