//link: 	https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L
//author:  @Mohamed Ibrahim
#include<bits/stdc++.h>
 using namespace std; 
	 						  
int main(){
	 int size;
	 cin>>size;
	 int arr[size];
	 long long sum=0,s1=0,s2=0;
	 for(int i = 0;i<size;i++){
	 	cin>>arr[i];
	 }
int i = 0,j=size-1,flag = 1;
	while(i<=j){
		
		
		if(arr[i]>arr[j]){
			sum=arr[i];
			i++;
		}else{
			sum=arr[j];
			j--;
		}
		
		if(flag){
			s1+=sum;
			flag = 0;
		}else{
			s2+=sum;
			flag = 1;
		}

		
	}
cout<<s1<<" "<<s2;

	}
