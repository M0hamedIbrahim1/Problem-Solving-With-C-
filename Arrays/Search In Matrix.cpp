//  link :   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
//	Author : @Mohamed Ibrahim

#include<iostream>
 using namespace std; 								  
int main(){


long long size;
int row,col,search;
cin>>row>>col;
long long arr[row][col];

for(int i = 0; i < row; i++) {
  for(int j = 0; j < col; j++) {
   cin>>arr[i][j];
  }
}
int flag=1;
	
cin>>search;
for(int i = 0; i < row; i++) {
  for(int j = 0; j < col; j++) {
	if(search == arr[i][j]){
		cout<<"will not take number";
		return 0;
	}
	else{
		flag = 0;
	}

  }

}
if(flag==0){
	cout<<"will take number";
}
	
}

 
