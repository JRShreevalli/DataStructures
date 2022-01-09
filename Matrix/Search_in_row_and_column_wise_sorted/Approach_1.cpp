#include <bits/stdc++.h> 
using namespace std;

void search(vector <int> mat[], int x , int R , int C )
{
	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < C; j++)
		{
			if(mat[i][j] == x)
			{
				cout << "Found at (" << i << ", " << j << ")";
				
				return;
			}
		}
	}

	cout << "Not Found";
}

int main()
{	
	int r , c , x ;
    cin >> r >> c ;
	vector <int> arr[r]  ;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
		{
            cin >> x ;
			arr[i].push_back(x);
		}
    }
    cin >> x ;   
	search(arr, x , r , c);
return 0;
}