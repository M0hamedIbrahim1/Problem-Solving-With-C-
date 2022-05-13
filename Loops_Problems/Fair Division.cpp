//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/A
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
int cases;
cin>>cases;
while(cases--){
	int n,one = 0,two = 0,num;
	cin>>n;
	for(int i = 0 ; i<n;i++){
		cin>>num;
		if(num == 2){
			two++;
		}else{
			one++;
		}
	}
	if((two==0 && one%2==0) || (one == 0 && two%2==0 )){
		cout<<"YES";
	}
	else if(two == one && two%2==0 && one%2==0){
		cout<<"YES";
	}else if( (one + (2*two)) % 2 ==0 && one !=0 && two!=0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

		cout<<endl;
}

}
   
