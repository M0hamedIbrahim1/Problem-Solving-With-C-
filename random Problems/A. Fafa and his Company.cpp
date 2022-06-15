//link:   https://codeforces.com/problemset/problem/935/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int temp,cnt = 0;
	temp = n/2;
//	if(n%2 != 0) temp++;
	for(int i = 1 ; i <= temp ;i++){
		if(n % i == 0) cnt++;
	}
	cout<<cnt;
}
