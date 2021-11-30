#include <iostream>
using namespace std;

int FirstOccur(int low , int high, int a[ ] , int x)
{
	
	while(low <= high)
	{
		int mid = ( low + high)/2 ;
		if( a[mid] > x)
			high = mid - 1 ;
		else if ( a[mid] < x )
			low = mid + 1 ;
		else
		{
			if((mid == 0)||(a[mid] != a[mid - 1]))
					return mid ;
			else
					high = mid - 1 ;
		}
	}
return -1 ;
}

int LastOccur(int low , int high , int a[ ] , int x)
{
	
	while( low <= high )
	{
		int mid = ( low + high ) / 2 ;
		if(a[mid] > x)
			high = mid - 1 ;
		else if (a[mid] < x)
			low = mid + 1 ;
		else
		{
			if((mid == high )||(a[mid] != a[mid + 1]))
				return mid ;
			else
				low = mid + 1 ;
		}
	}
return - 1 ;
}
int CountOccur(int low , int high , int a[ ] , int x)
{
	int first = FirstOccur( low , high  , a , x ) ;
	if(first == -1)
		return 0 ;
	else
		return LastOccur(  low , high , a , x ) - first + 1 ;
}
int main()
{
	int n , i , x ;
	cin >> n ;
	int a[n+1] ;
	for( i = 1 ; i <= n ; i++ )
		cin >> a[i] ;
	cin >> x ;
	cout << CountOccur( 0 , n , a , x) ;
return 0 ;
}