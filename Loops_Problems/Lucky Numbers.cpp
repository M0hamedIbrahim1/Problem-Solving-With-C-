#include<iostream>
#include<bits/stdc++.h>
using namespace std; 								  
int main(){
	int n1,n2,con=0;
	cin>>n1>>n2;
	
	
int luckynum[100000]={0};
    luckynum[4] = 1;
    luckynum[7] = 1;
    luckynum[44] = 1;
    luckynum[47] = 1;
    luckynum[74] = 1;
    luckynum[77] = 1;
    luckynum[444] = 1;
    luckynum[447] = 1;
    luckynum[474] = 1;
    luckynum[477] = 1;
    luckynum[774] = 1;
    luckynum[744] = 1;
    luckynum[777] = 1;
    luckynum[747] = 1;
    luckynum[4747] = 1;
    luckynum[4444] = 1;
    luckynum[4447] = 1;
    luckynum[4474] = 1;
    luckynum[4477] = 1;
    luckynum[4777] = 1;
    luckynum[4744] = 1;
    luckynum[4774] = 1;
    luckynum[7477] = 1;
    luckynum[7777] = 1;
    luckynum[7774] = 1;
    luckynum[7747] = 1;
    luckynum[7744] = 1;
    luckynum[7444] = 1;
	luckynum[7447] = 1;
	luckynum[7474] = 1;	
 
 
for(int i=n1;i<=n2;i++){
	if(luckynum[i]==1){
	cout<<i<<" ";
	con=1;
}
 
}
if(con==0){
	cout<<"-1";
}
 
 
 
 
 
 
 
}
