//link : https://codeforces.com/group/LKPSX7Pt2W/contest/320783/problem/J
 
#include <iostream>
using namespace std;
int main()
{
 int n ;
 cin >>n;
 n=n*n;
 for (int i =1;i<=n/2;i++)
 {
     cout << i << " " << (n-i)+1<<endl;
 }
 return 0;
}
 
