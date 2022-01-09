// Syntax to use new operator: To allocate memory of any data type,
// the syntax is: 
// pointer-variable = new data-type;

#include <iostream>
using namespace std;


int main()
{	
	int m = 3, n = 2;
	int **arr;

	arr = new int* [m];

	for(int i = 0; i < m; i++)
		arr[i] = new int[n];

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i][j] = 10;	

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}