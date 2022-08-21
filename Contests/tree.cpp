#link   : https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/M
#author : Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
	
long long days,n_days_grow;
cin>>days;
n_days_grow=days;
int count=0,res=0,c=0;
long long arr[days];
for(int i=0;i<days;i++){
	cin>>arr[i];
}
sort(arr,arr+days);
for(int i=days-1;i>=0;i--){

if(n_days_grow>arr[i]){
	n_days_grow--;
}
else if(n_days_grow<=arr[i]){
    
	res = arr[i]-n_days_grow;
	res++;
	c+=res;
	n_days_grow+=res;
	
n_days_grow--;
}

}

cout<<days+c+1;
 	
}

