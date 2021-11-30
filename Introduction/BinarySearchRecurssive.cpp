#include <iostream>
using namespace std ;

int BSearch(int low , int high , int x , int arr[ ])
{
    if(low > high) 
            return -1 ;
    int mid = (low + high) / 2 ;
    if(arr[mid] == x)
            return mid ;
    if(arr[mid] > x)
            return BSearch(low  , mid - 1 , x , arr) ;
    else
            return BSearch( mid + 1 , high , x , arr) ;
}
int main()
{
    int n  , x ;
    cin >> n ;
    int arr[n] ;
    for( int i = 1 ; i <= n ; i++ )
        cin >> arr[i] ;
    cin >> x ;
    cout << BSearch( 0 , n , x , arr ) ;
return 0 ;
}

// 2 3 4 5