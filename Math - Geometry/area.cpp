// link : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Y
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long testCase;   
    cin>>testCase;
    int counter=1;
    while(counter<=testCase){  
    	long long numR;  
    	cin>>numR;
    	long long x1,y1,x2,y2,max1,may1,minx2,miny2;
    	cin>>x1>>y1>>x2>>y2;
    	max1 = x1, may1 = y1,minx2=x2,miny2=y2;
    	for(int i=1;i<numR;i++){  
    		cin>>x1>>y1>>x2>>y2;
    		max1 = max(max1,x1);
    		may1 = max(may1,y1);
    		minx2 = min(minx2,x2);
    		miny2 = min(miny2,y2);
		}
		if(minx2 > max1 && miny2 > may1){
			cout<<"Case #"<<counter<<": "<<(minx2 - max1) * (miny2 - may1)<<endl;
		} else {
			cout<<"Case #"<<counter<<": "<<0<<endl;
		}
		counter++;
	}
}
