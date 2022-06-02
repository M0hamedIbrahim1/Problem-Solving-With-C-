//link : https://codeforces.com/group/x1IbeOVM4y/contest/288660/problem/A
//author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long a,b,c,res1;
	char oper_1,oper_2;
	cin>>a>>oper_1>>b>>oper_2>>c;
	if(oper_1=='x'){
		res1 = a*b;
		if(oper_2=='x'){
			res1 = res1*c;
		}
		else{
			res1 = res1+c;
		}
	}else if(oper_2=='x'){
		res1 = c*b;

	    if(oper_1=='x'){
			res1 = res1*a;
		}
		else{
			res1 = res1+a;
		}
	
	}
	else if(oper_1=='+'){
		res1 = a+b;
		if(oper_2=='+'){
			res1+=c;
		}
	
}
cout<<res1;
}

   
