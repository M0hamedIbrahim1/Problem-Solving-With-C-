//link:   https://codeforces.com/problemset/problem/1399/B
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		long long arr1[size],arr2[size],m=1000000009,res,res2,mm=1000000009,move=0;
		for(int i = 0 ; i < size ; i++){
			cin>>arr1[i];
			m = min(arr1[i],m);
		}
		for(int j = 0 ; j < size ; j++){
			cin>>arr2[j];
			mm = min(arr2[j],mm);
		}
		for(int k =0;k<size;k++){
			 res = arr1[k]-m;
			 res2 = arr2[k]-mm;
			 move = move+max(res,res2);
		}
 		cout<<move<<endl;
	}
}
