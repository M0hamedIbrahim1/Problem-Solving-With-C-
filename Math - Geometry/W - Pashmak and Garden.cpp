#include<iostream>
#include<cmath>
using namespace std;
int x1,y,x2,y2;
int main()
{
	cin>>x1>>y>>x2>>y2;
	if(x1==x2)
	{
		cout<<x1-(y2-y)<<" "<<y<<" "<<x2-(y2-y)<<" "<<y2<<endl;
		return 0;
	}
	if(y==y2)
	{
		cout<<x1<<" "<<y-(x2-x1)<<" "<<x2<<" "<<y2-(x2-x1)<<endl;
		return 0;
	}
	if(abs(y2-y)!=abs(x2-x1))
	{
		cout<<-1<<endl;
		return 0;
	}
	cout<<x2<<" "<<y<<" "<<x1<<" "<<y2<<endl;
}
