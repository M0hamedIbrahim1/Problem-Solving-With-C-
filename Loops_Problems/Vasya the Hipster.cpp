//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/R
//author  :@Mohamed Ibrahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
int r,l,new_res;
cin>>r>>l;
int mi = min(r,l);
int ma = max(r,l);
new_res =  ma-mi;

cout<<mi<<" "<<new_res/2;

}
