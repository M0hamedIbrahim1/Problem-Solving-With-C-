//link 	 : https://codeforces.com/problemset/problem/519/A
//author : Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;

string a[100];
 
int main()
{
    int ans=0;
    for (int i=0; i<8; ++i)
        cin >> a[i];
    for (int i=0; i<8; ++i)
    {
        for (int j=0; j<8; ++j)
        {
            if (a[i][j]=='Q')
                ans+=9;
            else if (a[i][j]=='q')
                ans-=9;
            else if (a[i][j]=='R')
                ans+=5;
            else if (a[i][j]=='r')
                ans-=5;
            else if (a[i][j]=='B')
                ans+=3;
            else if (a[i][j]=='b')
                ans-=3;
            else if (a[i][j]=='N')
                ans+=3;
            else if (a[i][j]=='n')
                ans-=3;
            else if (a[i][j]=='P')
                ans+=1;
            else if (a[i][j]=='p')
                ans-=1;
        }
    }
    if (ans>0)
        cout << "White";
    else if (ans<0)
        cout << "Black";
    else
        cout << "Draw";
 
    return 0;
}
