//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
//author  : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std; 

void Swapping_row(int arr[500][500],int size,int x,int y){

	int t;
    for(int i = 0;i<size;i++){
		t = arr[x][i];
		arr[x][i] = arr[y][i];
		arr[y][i] = t;
	}

 }
 void Swapping_col(int arr[500][500],int size,int x,int y){

	int t;
    for(int i = 0;i<size;i++){
		t = arr[i][x];             
		arr[i][x] = arr[i][y];
		arr[i][y] = t;
	}

 }
 
 void print_Matrix(int arr[500][500],int size){
	for(int i = 0;i<size;i++){
		for(int j = 0;j<size;j++){
		cout<<arr[i][j]<<" ";
		}
			cout<<endl;
	}	
 }
	
		  
int main(){

int size,x,y;
cin>>size>>x>>y;
x--;y--;
int arr[500][500];
for(int i = 0;i<size;i++){
	for(int j = 0;j<size;j++){
		cin>>arr[i][j];
	}
}

Swapping_row(arr,size,x,y);
Swapping_col(arr,size,x,y);
print_Matrix(arr,size);

}
 
