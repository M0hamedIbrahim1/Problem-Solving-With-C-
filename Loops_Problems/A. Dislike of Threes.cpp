//link:   https://codeforces.com/problemset/problem/1560/A
//author: Mohamed Ibrahim
	
#include <bits/stdc++.h>
using namespace std;
int main (){
	int t,b=0;
	cin>>t;
	int arr[1001];
	for(int i = 1 ; i <= 1666 ; i++){
		if(i%3!=0 && i%10!=3){
			arr[++b]=i;
		}
	}
	while(t--){
		int num;
		cin>>num;
		cout<<arr[num]<<endl;
	}
}

