//link:   https://codeforces.com/problemset/problem/978/B
//author: Mohamed Ibrahim
	
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int size,cnt=0,sum=0;
	cin>>size;
	string s;
	cin>>s;
	for(int i = 0 ; i < size ; i++)
	{
		while(s[i]=='x'){
			cnt++;
			i++;
		}
		if(cnt>=3)
		{
			cnt = cnt - 2;
			sum+=cnt;
			cnt=0;
		}
		else
		{
			cnt = 0;
		}
	}
	
	cout<<sum;
}
