//link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
const int s = 10001;
void print(int C[s],int size)
{
	for(int i = 0;i<size;i++){
	cout<<C[i]<<" ";	
}
}

 int main()
{
 int size,k=0,t;
 cin>>size;
 int A[size];
 int B[size];
 int C[1001];
 
  for(int i = 0;i<size;i++){
		cin>>A[i];
	 }
  for(int i = 0;i<size;i++){
	cin>>B[i];
  }
 print(B,size);
 print(A,size);

  
}
