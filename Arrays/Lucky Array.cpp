//link   :  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/j
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 5
	cin>>size;
	int nums[size]; 
	for(int i=0;i<size;i++){
		              
		cin>>nums[i]; 
	}
	int min = nums[0]; // 8
	int counter = 0; // 1 2
	for(int i=0;i<size;i++){
		if(min == nums[i]){
			counter++;
		}
		if(min > nums[i]){
			min = nums[i];
			counter = 1;
		}
	}
	
	if(counter % 2 == 0){ 
		cout<<"Unlucky"<<endl;
	} else {
		cout<<"Lucky"<<endl;
	}
	
	
}
