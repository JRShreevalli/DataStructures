#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void printSnake(vector <int> mat[]  , int R , int C )
{
	for(int i = 0; i < R; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = 0; j < C; j++)
				cout << mat[i][j] << " ";
		}
		else
		{
			for(int j = C - 1; j >= 0; j--)
				cout << mat[i][j] << " ";
		}
		cout << endl ;
	}
}

int main()
{	
    int R , C , x ;
    cin >> R >> C ;
	vector <int> arr[R];
	for(int i=0 ; i<R ; i++)
    {
        for(int j=0 ; j<C ; j++)
		{
            cin >> x ;
			arr[i].push_back(x);
		}
    }
	cout << endl ;
    printSnake(arr,R,C );
	return 0;
}