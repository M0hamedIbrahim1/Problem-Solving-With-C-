//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/A
//author : @Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[5]={1,5,10,20,100};
 long long n,cnt=0;
 cin>>n;
 for(int i = 4;i>=0;i--){
 	if(n>=arr[i]){
 		cnt+= n / arr[i];
		n = n%arr[i];
		
		if(n==0){
			break;
		}
	}
 }
 cout<<cnt;
}
