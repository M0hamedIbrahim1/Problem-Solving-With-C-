//link : https://codeforces.com/group/jfviGllBoY/contest/374705/problem/E
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b,c;
    cin >> a >> b >> c ;
    long long arr[9]={a+b*c, a+b-c, a-b+c, a-b*c, a*b-c, a*b+c,a*b*c, a+b+c ,a-b-c};
 
    long long max = arr[0];
    for (int i = 0; i < 9; i++){
        if (max < arr[i])
            max = arr[i];
    }
 
    long long min = arr[0];
    for (int i = 0; i < 9; i++){
        if (min > arr[i])
            min = arr[i];
    }
 
    cout << max <<" "<<min;
 
 
 
    return 0;
}   
