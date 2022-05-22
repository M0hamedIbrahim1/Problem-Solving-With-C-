//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/L
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;

int main()
{	
int size,index;
cin>>size;
long long arr[size],min=1000000;
for(int i = 0 ; i < size ; i++){
	cin>>arr[i];
	if(arr[i]<min){
		min = arr[i];
		index = i;
	}
}
cout<<arr[index]<<" "<<index+1;
}
