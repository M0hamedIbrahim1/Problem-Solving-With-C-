// link :  https://codeforces.com/problemset/problem/155/A
// author : @Mohamed Ibrahim

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,score,max_score,min_score,cnt = 0;
	long long sum=0,maxx = -1;
	cin>>size;
	cin>>max_score;
	min_score = max_score;
	for(int i = 1 ; i < size;i++){
		cin>>score;
		if(score > max_score){
			max_score = score;
			cnt++;
		}
		if(score < min_score){
			min_score = score;
			cnt++;
		}
	}
	cout<<cnt;
}

