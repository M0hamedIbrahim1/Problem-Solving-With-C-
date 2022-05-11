// link :  https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/M
// author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
//Calculating " GCD "
long long num1,num2;
cin>>num1>>num2;
long long m = min(num1,num2);
long long ma = max(num1,num2);
for(int i = m; i>=1;i--){
	if(m%i == 0 && ma%i == 0){
		cout<<i;
		break;
	}
}

}

