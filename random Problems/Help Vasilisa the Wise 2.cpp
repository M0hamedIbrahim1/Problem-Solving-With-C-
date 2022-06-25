//link	 :  https://codeforces.com/group/MWSDmqGsZm/contest/223340/problem/J
//author : @Mohamed Ibrahim 

#include<bits/stdc++.h>
using namespace std;						  
int main() {
  int x1,x2,y1,y2,r1,r2,c1,c2,d1,d2;
 cin>>r1>>r2>>c1>>c2>>d1>>d2;
 y1 = (d2+c1)-r1;
 y1 = y1/2;
 x2 =(d2-y1);
 x1 = (r1-x2);
 y2 = (d1-x1);
 int arr[4];
 arr[0]=x1;arr[1]=x2;arr[2]=y1;arr[3]=y2;
 
sort(arr,arr+4);
if(arr[0]<=0||arr[3]>9){
	cout<<"-1";
	return 0;
}
for(int i=0;i<3;i++){
	if(arr[i]==arr[i+1]){
		cout<<"-1";
		return 0;
	}
}
if((y2+x2 != c2)||(y1+x2 !=d2)||(x1+x2 != r1)|| (y1+y2 !=r2)||(y2+x1!=d1)||(x1+y1!=c1)){
	cout<<"-1";
	return 0;
}
	cout<<x1<<" "<<x2<<endl;
	cout<<y1<<" "<<y2;
 
}
 
