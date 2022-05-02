//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
//	Author : @Mohamed Ibrahim

#include <iostream>
using namespace std;
 
int main()
{
int numbers,min,max,index1=0,index2=0,s;
cin>>numbers;
int arr[numbers];

for(int i=0;i<numbers;i++){
	cin>>arr[i];
}
min = arr[0];
max = arr[0];
for(int i=0;i<numbers;i++){
	if(arr[i]<min){
		min=arr[i];
		index1=i;
	}
	if(arr[i]>max){
		max=arr[i];
		index2=i;
	}

}
s = arr[index1];
arr[index1]=arr[index2];
arr[index2] = s;

for(int i=0;i<numbers;i++){

	cout<<arr[i]<<" ";
}

}

