//link:   https://codeforces.com/problemset/problem/540/A
//author: Mohamed Ibrahim
	
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,sum=0;
    cin>>t;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<t;i++){
        if(a[i]>b[i]){
            sum+=min(a[i]-b[i],b[i]+10-a[i]);
        }
        else{
            sum+=min(b[i]-a[i],a[i]+10-b[i]);
        }
    }
    cout<<sum;
    return 0;
}
