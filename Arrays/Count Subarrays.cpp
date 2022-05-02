//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
//	Author : @Mohamed Ibrahim

#include<iostream>
using namespace std; 								  
int main(){


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter; 
	while(counter--){
		int size;
		int result = 0;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		result = size;
		int i = 0;
		int z = 0;
		while(true){
			if(z == size - 1){
				break;
			}
			if(arr[i] > arr[i+1]){
				z++;
				i=z;
				continue;
			}
			result++;
			i++;
			if(i == size - 1){
				z++;
				i = z;
			}
		}
		cout<<result<<endl;
	}
}

 
