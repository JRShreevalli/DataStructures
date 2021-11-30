#include <iostream>
using namespace std ;

int BSearch(int low , int high , int x , int arr[ ])
{
    
    while( low <= high )
    {
        int mid = (low + high)/2 ;

        if(arr[mid] == x)
            return mid  ;

        else if( arr[mid] > x)
                low  = mid + 1 ;
        else
                high = mid - 1 ;

    }
    //return 0 ;
}
int main()
{
    int n , x ;
    cin >> n ;
    int arr[n] ;
    for( int i = 0 ; i < n ; i++ )
        cin >> arr[i] ;
    cin >> x ;
    cout << BSearch( 0 , n-1 , x , arr ) ;
return 0 ;
}
