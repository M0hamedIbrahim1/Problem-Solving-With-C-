//link:   https://codeforces.com/group/yw6xPXn7ZO/contest/375911/problem/D
//author: Mohamed Ibrahim

#include<bits/stdc++.h> 
using namespace std; 								  
int main() {
long long n;
cin>>n;
for(int i=1;i<=(n/2)-1;i++){
	cout<<" ";
}
cout<<'C'<<endl;
for(int i =0;i<n/2;i++){
	for(int space =(n/2)-1;space>i;space--){
		cout<<" ";
	}
	for(int star = 1;star<=(2*i) + 1;star++){
		cout<<"*";
	}
	cout<<endl;
}
int i = 1;
int j = n-1;
int min = n-1;
for(int back = 0;back<n/4;back++){
	for(int c=1;c<=min;c++){
		if(c==i){
			cout<<'\\';
		}
		else if(c==j){
			cout<<'/';
		}else{
			cout<<" ";
		}
	}
	--min;
	j--;
	i++;
	cout<<endl;	
	}
	int star2=(n-2)/2;
	int space2 = n/4;
	for(int last_s = 1;last_s<=n/4;last_s++){
		for(int j =1;j<=space2;j++){
			cout<<" ";
		}
		for(int j = 1;j<=star2;j++){
			cout<<"*";
		}
		space2--;
		star2+=2;
		cout<<endl;
	
	}
	cout<<"RAMADAN KAREEM";

	
	
	
	
	
}





       C
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
\             /
 \           /
  \         /
   \       /
    *******
   *********
  ***********
 *************








	

	
