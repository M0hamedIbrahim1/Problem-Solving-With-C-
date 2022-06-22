//link:   https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/J
//author: Mohamed Ibrahim
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int birds;
	cin>>birds;
	int arr_birds[birds];
	
	for(int i=1;i<=birds;i++){
		cin>>arr_birds[i];
	}
	int n_shot,x,y;
	cin>>n_shot;
	while(n_shot){
		cin>>x>>y;
		
		if(x==1){
			arr_birds[x+1]+=arr_birds[x]-y;
			arr_birds[1]=0;
		}
		else if(x==birds){
			arr_birds[x-1]+=y-1;
			arr_birds[x]=0;

		}
		else{
			arr_birds[x-1]+=y-1;
			arr_birds[x+1]+=arr_birds[x]-y;
			arr_birds[x]=0;
		}
		
		n_shot--;
	}
		for(int i=1;i<=birds;i++){
		cout<<arr_birds[i]<<endl;
		}

}
