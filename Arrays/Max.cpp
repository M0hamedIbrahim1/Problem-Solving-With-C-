//link : https://codeforces.com/group/LKPSX7Pt2W/contest/322212/problem/E
//author : @Mohamed Ibrahim
#include<iostream>
using namespace std;

int main(){
int t,n; long long x=-1000000000000;
cin>>t;
    for (int i = 0; i <t ; ++i) {
        cin>>n;
        int arr[n];
        for (int j = 0; j <n ; ++j) {
            cin>>arr[j];
        }
        for (int j = 0; j <n ; j++) {
            for (int k = j; k <n ; k++) {

                for (int l = j; l <=k ; l++) {
                    if (arr[l]>x){
                        x=arr[l];
                    }



                }
                cout<<x<<" ";
                x=-1000000000000;



            }
        }
            cout<<endl;
    }



    return 0;
}
