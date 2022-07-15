//link:   https://codeforces.com/group/jfviGllBoY/contest/389763/problem/F
//author: Mohamed Ibrahim

#include<iostream>
using namespace std;
int n,a,b,ans;
int main(){
    cin>>n;
    while(n--){
    cin>>a;
    if(a==1||b==1)ans++;        
    b=a;
    }
    if(a==0&&ans!=0)ans--;
    cout<<ans;
}
