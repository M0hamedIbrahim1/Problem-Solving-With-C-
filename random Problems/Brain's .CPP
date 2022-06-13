//link:   https://codeforces.com/problemset/problem/707/A
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	char ch;
	bool flag = false;
	cin >> n >> m;
	int pixels = n * m;
	while(pixels--){
		cin >> ch;
		if(ch == 'C' || ch == 'M' || ch == 'Y'){
			flag = true;
		}
	}	
	if(flag == true){
		cout<<"#Color";
	}
	else{
		cout << "#Black&White";
	}
	return 0;
}
