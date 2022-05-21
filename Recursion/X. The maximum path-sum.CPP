//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int row,col;
long long arr[11][11];
long long rescu(int start,int end){
	if(start==row-1&&end==col-1){
		return arr[start][end];
	}else if(start==row+1||end==col+1){
		return -999999999; 
	}
	
	int right = rescu(start,end+1);
	int down = rescu(start+1,end);
	return arr[start][end] + max(right,down);
	
}

int main(){
cin>>row>>col;
for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		cin>>arr[i][j];
	}
}
cout<<rescu(0,0);

} 
	
