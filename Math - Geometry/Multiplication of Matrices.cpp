// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/F
// author : @Mohamed Ibrahim

#include<iostream>
using namespace std;
int main() {
  int r1,c1; 
  cin>>r1>>c1;
  int arr1[r1][c1];
  for(int i=0;i<r1;i++){ 
  	for(int z=0;z<c1;z++){ 
  		cin>>arr1[i][z]; 
	  }
  }
  int r2,c2;
  cin>>r2>>c2;
  int arr2[r2][c2];
  for(int i=0;i<r2;i++){ 
  	for(int z=0;z<c2;z++){ 
  		cin>>arr2[i][z]; 
	  }
  }

  int result[r1][c2];
  for(int i=0;i<r1;i++){ 
  	for(int z=0;z<c2;z++){ 
  		result[i][z] =0;
	  }
  }
  
  for(int i=0;i<r1;i++){                                  
  	for(int z=0;z<c2;z++){                              
  		for(int x=0;x<c1;x++){                            
  			result[i][z] += arr1[i][x] * arr2[x][z];

		  }
	  }
  }
  
  for(int i=0;i<r1;i++){ 
  	for(int z=0;z<c2;z++){ 
  		cout<<result[i][z]<<" "; 
	  }
	  cout<<endl;
  }
}
