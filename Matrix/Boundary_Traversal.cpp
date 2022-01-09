#include <iostream>
#include <vector>
using namespace std;

void bTraversal( vector <int> mat[] , int R , int C )
{
	if(R == 1)
	{
		for(int i = 0; i < C; i++)
			cout << mat[0][i] << " ";
	}
	else if(C == 1)
	{
		for(int i = 0; i < R; i++)
			cout << mat[i][0] << " ";
	}
	else
	{
		for(int i = 0; i < C; i++)
			cout << mat[0][i] << " ";
		for(int i = 1; i < R; i++)
			cout << mat[i][C - 1] << " ";
		for(int i = C - 2; i >= 0; i--)
			cout << mat[R - 1][i] << " ";
		for(int i = R - 2; i >= 1; i--)
			cout << mat[i][0] << " ";
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
    bTraversal(arr , r , c );
	return 0;
}

