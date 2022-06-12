//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/A
//author: Mohamed Ibrahim
	
#include <iostream>
#include<bits/stdc++.h>

using namespace std; 								  

int main() {
int row,col,q;
cin>>row>>col>>q;
char arr[row][col];

	for(int i = 0;i<row;i++){
		for(int j=0;j<col;j++){
			arr[i][j]= '.';
		}
	}


	for(int i=0;i<q;i++){
			int r1,r2,c1,c2;
			char s;
			cin>>r1>>c1>>r2>>c2>>s;
			r1--;c1--;r2--;c2--;
			int ma = max(r1,r2);
			int mi = min(r1,r2);
			int mic = min(c1,c2);
			int mac = max(c1,c2);
			
		for(int i = mi;i<=ma;i++){
			for(int j=mic;j<=mac;j++){
				arr[i][j]=s;
			}
		}
	}
	
	for(int i = 0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	


	return 0;
}
