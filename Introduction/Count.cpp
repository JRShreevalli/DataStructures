
#include <iostream>
using namespace std;

int Count1( int low , int high , int a[ ])
{
    int i ;
    int count = 0 ;
    while(low <= high)
    {
        int mid = (low + high)/2 ;
        if(a[mid] == 0)
            low = mid + 1 ;
        else 
        {
            if((mid == 0)||(a[mid - 1] == 0 ))
                return high - mid ;
            else
                high = mid - 1 ;
        }
    }
    return 0;
}
int main()
{
    int i , n ;
    cin >> n ;
    int a[n+1] ;
    for ( i = 1 ; i <= n ; i++ )
        cin >> a[i] ;
    cout << Count1( 0 , n , a );
return 0 ;
}