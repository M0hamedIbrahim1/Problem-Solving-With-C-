//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 

int main() {
int size;
cin>>size;
long long arr[size];
long long max = -1000000011;
for(int i =0;i<size;i++){
	cin>>arr[i];
	if(arr[i]>max){
		max = arr[i];
		cout<<max<<" ";
	}else{
		cout<<max<<" ";
	}
}


}
