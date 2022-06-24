//link:   https://codeforces.com/problemset/problem/1512/B
//author: Mohamed Ibrahim
	
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,index_row,index_col,index_row2,index_col2,flag=1;
		cin>>n;
		char arr[n][n];
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				cin>>arr[i][j];
				if(arr[i][j] == '*')
				{
					if(flag == 1)
					{
						index_row = i;
						index_col = j;
						flag = 0;
					}
					else
					{
						index_row2 = i;
						index_col2 = j;
					}

				}
			}	
		}
		if(index_row == index_row2){
			if(index_row<n-2){
				arr[index_row+1][index_col]='*';
				arr[index_row2+1][index_col2]='*';
			}else{
				arr[index_row-1][index_col]='*';
				arr[index_row2-1][index_col2]='*';
			}
		}
		else if(index_col == index_col2){
			if(index_col<n-1){
				arr[index_row][index_col+1]='*';
				arr[index_row2][index_col2+1]='*';
			}else{
				arr[index_row][index_col-1]='*';
				arr[index_row2][index_col2-1]='*';
			}

			
		}else{
			arr[index_row][index_col2] = '*';
			arr[index_row2][index_col] = '*';
		}
		
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
}
