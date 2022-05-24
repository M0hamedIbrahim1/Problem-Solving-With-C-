//link :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
//author : @Mohamed Ibrahim


 #include <iostream>
using namespace std;
	 
int main(){
	int row;
	cin>>row;
	int x = row;
for(int i=0;i<row;i++){
	for(int space = 0 ;space<row-x;space++){
		cout<<" ";
	}
	for(int j=2*x-1;j>0;j--){
		cout<<"*";
	}
	x--;
	cout<<endl;
}
}
