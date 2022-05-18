//link : https://codeforces.com/problemset/problem/263/A
//author : @Mohamed Ibrahim

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	for (int i = 1; i <= 5; ++i){
		for (int x = 1; x <= 5; ++x){
			cin >> a;
			if (a == 1){
				cout << abs(i-3) + abs(x-3) << endl;
			}
		}
	}
}
