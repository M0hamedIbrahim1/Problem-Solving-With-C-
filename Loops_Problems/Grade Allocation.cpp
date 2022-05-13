//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/X
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
int cases;
cin>>cases;
while(cases--){
	long long n_students,max_score,sum=0,score;
	cin>>n_students>>max_score;
	for(int i = 0; i < n_students ; i++){
		cin>>score;
		sum+=score;
	}
	if(sum>=max_score){
		cout<<max_score;
	}else{
		cout<<sum;
	}
		cout<<endl;
}

}
   
