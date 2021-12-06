#include <iostream>
#include <limits.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}


int main() 
{
    
    	int n,i ;
        cout << "Enter length : " ;
        cin >> n ;
        int arr[n] ;
        cout << "Enter the Set : " ;
        for( i = 0 ; i < n ; i++ )
            cin >> arr[i]; 
    	int sum ;
        cout << "Enter Sum : " ;
        cin >> sum ;
    	cout<<countSubsets(arr, n, sum);
    	
    	return 0;
}