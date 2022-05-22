//link :   https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/N
//author : @Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
            long long n,k,j;
            cin>>n>>k;
            long long arr[n];
            for( j=0; j<n; j++){
                cin>>arr[j];
            }
            if(k%2==0){
                for(int q=0; q<2; q++){
                    long long m = arr[0];
                    //find max 
                    for( j=1; j<n; j++){
                        if(arr[j]>m)
                            m=arr[j];
                    }
                    //subtract from max
                    for( j=0; j<n; j++){
                        arr[j] = m - arr[j];
                    }
                }
            }
            else{
                    for(int q=0; q<1; q++){
                    long long m = arr[0];
                    for( j=1; j<n; j++){
                        if(arr[j]>m)
                            m=arr[j];
                    }
                    for( j=0; j<n; j++){
                        arr[j] = m - arr[j];
                    }
                }

            }
             for( j=0; j<n; j++){
                    cout<<arr[j]<<" ";
                }
                cout<<"\n";
    }
}
