// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/X
// author : @Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std;
 								  
int main(){

int x1,x2,x3,x4,y1,y2,y3,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
int mi_x=min(min(x1,x2),min(x3,x4));
int ma_x=max(max(x1,x2),max(x3,x4));

int mi_y=min(min(y1,y2),min(y3,y4));
int ma_y=max(max(y1,y2),max(y3,y4));


int cases;
cin>>cases;
while(cases){
	int xx,yy;
	cin>>xx>>yy;
	if(xx>=mi_x && xx<=ma_x &&yy>=mi_y &&yy<=ma_y){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	
	cases--;
}

 }
