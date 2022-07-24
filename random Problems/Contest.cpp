//link 	 : https://codeforces.com/problemset/page/7?order=BY_RATING_ASC
//author : Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d,Vasya,Misha;
    cin>>a>>b>>c>>d;

    Misha = max((3*a)/10 , a - ((a/250)*c));
    Vasya = max((3*b)/10 , b - ((b/250)*d));
    if(Vasya == Misha)cout<<"Tie";
    else if(Vasya>Misha)cout<<"Vasya";
    else cout<<"Misha";

}
