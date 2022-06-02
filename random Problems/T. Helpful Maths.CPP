//link : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/T
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
 
using namespace std; 								  
int main() {
string s;
cin>>s;
int arr[s.length()/2];
int j = 0;
for(int i=0;i<s.length();i+=2){
	arr[j]=s[i]-48;
	j++;
}
sort(arr,arr+j);
int flag = 1;
j=0;
for(int i = 0;i<s.length();i++)
	if(flag){
		cout<<arr[j];
		flag = 0;
		j++;
	}else{
		cout<<"+";
		flag = 1;
	}


}
