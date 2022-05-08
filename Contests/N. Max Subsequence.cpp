// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
//Author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;  
	string value; 
 
	cin>>value;
	char temp;
	int counter = 0;
	for(int i=0;i<size;i++){ 
		if(i == 0){
			temp = value[i];
			counter++;
		} else {
			if(value[i] != temp){
				counter++;
				temp = value[i];
			}
		}
	}
	cout<<counter;
}
