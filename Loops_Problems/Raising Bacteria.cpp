//link     :https://codeforces.com/group/LKPSX7Pt2W/contest/314606/problem/T
//author  :@Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int r;
  int cnt=0;
   
   while(n!=0){
      r=n%2;
      if(r==1){
         cnt++;
      }
      n=n/2;
     
   }
   cout<<cnt<<endl;
     
}
   
   
   
   
   
   
   
   
