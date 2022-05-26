// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/U
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main() {
int x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;

int x_f1 = (y2-y1)*(x3-x2);
int x_f2 = (y3-y2)*(x2-x1);

if(x_f1==x_f2){
	cout<<"YES";
}
else{
	cout<<"NO";
}


}

