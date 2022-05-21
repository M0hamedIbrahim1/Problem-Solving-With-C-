//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/G
//author : @Mohamed Ibrahim

#include <iostream>
using namespace std;

int main()
{ int i,sum=0,t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    i--;
    if(i==sum)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
  }
    return 0;
}
