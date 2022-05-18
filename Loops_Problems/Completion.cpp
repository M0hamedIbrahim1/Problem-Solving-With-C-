//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/D
//author : @Mohamed Ibrahim

#include<bits//stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--){
		int num;
		cin>>num;
		for(int i = 0 ; i <num ; i++){
			cout<<"9";
			if(i != num-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}

}
