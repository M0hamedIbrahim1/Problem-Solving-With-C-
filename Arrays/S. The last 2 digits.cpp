// link  :https://codeforces.com/group/LKPSX7Pt2W/contest/313728/problem/S
//Author : @Mohamed Ibrahim


#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x ,y,z,h;
	long long i;
	cin>>x>>y>>z>>h;
	i=((x%100)*(y%100)*(z%100)*(h%100))%100;
	cout<<i/10<<i%10;
}

	
