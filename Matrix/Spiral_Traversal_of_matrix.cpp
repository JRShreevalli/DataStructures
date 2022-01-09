#include <bits/stdc++.h> 
using namespace std;


void printSpiral(vector <int> mat[] , int R, int C)
{
	int top = 0, left = 0, bottom = R - 1, right = C - 1;

	while(top <= bottom && left <= right)
	{
		for(int i = left; i <= right; i++)
			cout << mat[top][i] << " ";
		top++;

		for(int i = top; i <= bottom; i++)
			cout << mat[i][right] << " " ;
		right--;

		if(top <= bottom)
        {
		    for(int i = right; i >= left; i--)
			    cout << mat[bottom][i] << " ";
		    bottom--;
		}

		if(left <= right)
        {
		    for(int i = bottom; i >= top; i--)
			    cout << mat[i][left] << " ";
		    left++;
		}			
	}
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
    cout << endl ;
    printSpiral(arr, r, c);
	return 0;
}