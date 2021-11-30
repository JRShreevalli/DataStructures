#include <iostream>
using namespace std ;

int getPeek(int a[ ] , int n )
{
    int low = 0 ;
    int high = n-1 ;
    while(low <= high)
    {
        int mid = (low + high)/2 ;
        if((mid == 0 || a[mid - 1] <= a[mid])&&( mid == n-1 || a[mid + 1] <= a[mid]))
                cout <<  mid ;
        if(mid > 0 && a[mid-1] >= a[mid])
                high = mid -1 ;
        else
                low = mid + 1 ;
    }
    return 0 ;
}
int main()
{
    int i , n ;
    cin >> n ;
    int a[n] ;
    for( i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    getPeek( a , n );
return 0 ;
}