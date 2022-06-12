//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main() {
int size1,size2;
cin>>size1>>size2;
long long arr1[size1],arr2[size2],sum_arr1=0,sum_arr2=0;

for(int i = 0;i<size1;i++){
	cin>>arr1[i];
	sum_arr1+=arr1[i];
}
for(int i = 0;i<size2;i++){
	cin>>arr2[i];
	sum_arr2+=arr2[i];
}
if(sum_arr1 == sum_arr2){
	cout<<"Yes";
}
else{
	cout<<"No";
}



}
