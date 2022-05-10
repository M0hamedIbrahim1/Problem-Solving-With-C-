// link  :https://codeforces.com/group/LKPSX7Pt2W/contest/313728/problem/I
//Author : @Mohamed Ibrahim


#include<bits/stdc++.h>
using namespace std;
 
int main(){
	
	double n1,n2;
	cin>>n1>>n2;
	if (n1>0&&n2>0){
		cout<<"Q1";
	}
	else if (n1<0&&n2>0){
		cout<<"Q2";		
	}
	else if (n1<0&&n2<0){
		cout<<"Q3";
	}
	else if (n1>0&&n2<0){
		cout<<"Q4";
	}
	else if (n1==0&&n2==0){
		cout<<"Origem";
	}
	else if((n1>0 || n1<0 )&&n2==0){
		cout<<"Eixo X";
	}
	else if(n1==0&& (n2>0 || n2<0)){
		cout<<"Eixo Y";
	}
	return 0;



}

	
