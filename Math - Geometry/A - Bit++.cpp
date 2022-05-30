//link : https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    int n;
    string m;
    // int m;
    cin>>n;

  while(n--){
         cin>>m;
       if(m[1]=='+') 
       x++;
       else if(m[1]=='-')
       x--;}

    cout<<x;
    return 0;
}
