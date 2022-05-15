//link : https://vjudge.net/contest/492820#problem/R

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int arr[1000]={0};
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
       if(str[i]>='a'&&str[i]<='z')
       {
           arr[str[i]]++;
       }
    }
    int sum=0;
    for(int i='a';i<='z';i++)
    {
        if(arr[i]!=0)
        {
            sum+=1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
