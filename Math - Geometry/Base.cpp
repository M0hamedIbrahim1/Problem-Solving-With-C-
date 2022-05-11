// link :  https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/L
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
long long num;
int cases;
cin>>cases;
string res="";

while(cases){
	cin>>num;
	while(num){
		if(num % 2 == 0){
			res = res+'0';
		}else{
			res = res+'1';
		}
		num = num/2;
	}
	cout<<res<<endl;
	res="";	
	cases--;
}

}
