//link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int knapSack(int W,int weight[],int value [],int items){
	if(W == 0 || items == 0){
		return 0;
	}
	if(weight[items - 1] > W){
		return knapSack(W,weight, value, items-1);
	} else {
		return max (
			value[items-1] + knapSack(W-weight[items-1],weight,value,items - 1),
			knapSack(W,weight,value,items - 1) 
		);
	}
	
}
int main()
{
	int items,W1;
	cin>>items>>W1;
	int weight [items];
	int value [items];
	for(int i=0;i<items;i++){
		cin>>weight[i]>>value[i];
	}
	cout<<knapSack(W1,weight,value,items)<<endl;
}
