// https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/X
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int size;
	cin>>size;
	if(size == 2){
		cout<<"1"<<endl;
		cout<<"1";
		return 0;
	}
	if(size == 3){
		cout<<"2"<<endl;
		cout<<"1 3";
		return 0;
	}
	if(size == 4){
		cout<<"4"<<endl;
		cout<<"3 1 4 2";
		return 0;
	}
	cout<<size<<endl;
	for(int i = 1 ; i <= size ; i++){
		if(i%2 !=0){
			cout<<i<<" ";
		}
	}
	for(int i = 1 ; i<= size ; i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}

}
