//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
//	Author : @Mohamed Ibrahim

#include<iostream>
using namespace std; 								  
int main(){


long long size,sum1=0,sum2=0;
cin>>size;

long long arr[size];

for(int i=0;i<size;i++){
	cin>>arr[i];
	sum1+=arr[i];
}
for(int i=0;i<size;i++){
	cin>>arr[i];
	sum2+=arr[i];
}
if(sum1==sum2){
	cout<<"yes";
}
else{
	cout<<"no";

}


}

 
