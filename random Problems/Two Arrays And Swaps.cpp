//link:   https://codeforces.com/problemset/problem/1353/B
//author: Mohamed Ibrahim

#include <bits/stdc++.h>
using namespace std;
int main (){
	int q;
	cin>>q;
	while (q--)
	{	
		int size,k,sum=0,j,cnt=0;
		cin>>size>>k;
		int a[size],b[size];
		for(int i = 0 ; i < size ; i++){
			cin>>a[i];
		}
		for(int c = 0 ; c <size ; c++){
			cin>>b[c];
		}
		sort(a,a+size);
		sort(b,b+size);
		j = size-1;
		for(int i = 0 ;; i++){
			if(cnt == k){
				break;
			}
			if(b[j]>a[i]){
				a[i] = b[j];
				cnt++;
				j--;
			}else{
				break;
			}

		}
		for(int s = 0 ; s < size ; s++){
			sum+=a[s];
		}
		cout<<sum<<endl;
	}
}
