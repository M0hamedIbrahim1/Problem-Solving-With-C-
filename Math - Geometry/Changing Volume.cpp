//link:https://codeforces.com/group/LKPSX7Pt2W/contest/316385/problem/E
//author:@Mohamed Ibrahim

#include <iostream>
using namespace std;

int main()
{
      int T;
    cin >> T;
    while(T--)
    {
        int a,b,x,ans=0;
        cin >> a >> b;
        x=abs(a-b);
        if(x>=5) ans=x/5,x%=5;

        if(x>=2) ans+=x/2,x%=2;

        if(x>=1) ans+=x;
        cout << ans << endl;
    }

    return 0;
}
