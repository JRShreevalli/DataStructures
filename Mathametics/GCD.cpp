// APPROACH 1
/* 
#include <iostream>
#include <math.h>
using namespace std ;

int GCD (int a[ ] , int b[ ] , int i )
{
    int result = min( a[i] , b[i] ) ;
    while( result > 0 )
    {
        if( a[i] % result == 0 && b[i] % result == 0 )
                break ;
        result-- ;
    }
return result ;
}

int main()
{
    int t , i ;
    cin >> t ;
    int a[t] , b[t] ;
    for( i = 0 ; i < t ; i++ )
        cin >> a[i] >> b[i] ;
    int res[t] ;
    for( i = 0 ; i < t ; i++ )
        res[i] = GCD( a , b , i ) ;
    for( i = 0 ; i < t ; i++ )
        cout << res[i] << " " ;
return 0 ;
} 
*/

// APPROACH 2
/*
#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    int t , i ;
    cin >> t ;
    int a[t] , b[t] ;
    for ( i = 0 ; i < t ; i++ )
        cin >> a[i]  >> b[i] ;
    for( i = 0 ; i < t ; i++ )
    {
        while( a[i] != b[i] )
        {
            if( a[i] > b[i] )
                a[i] = a[i] - b[i] ;
            else
                b[i] = b[i] - a[i] ;
        }
        cout << a[i] << " " ;
    }
    return 0 ;
}
*/

// APPROACH 3

#include <iostream>
#include <math.h>
using namespace std ;

int gcd( int a , int b )
{
        if( b == 0 )
            return a ;
        else
            return gcd( b , a % b ) ;
}
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] , b[t] ;
    for( i = 0 ; i < t ; i++ )
        cin >> a[i] >> b[i] ;
    int res[t] ;
    for( i = 0 ; i < t ; i++ )
        res[i] = gcd(  a[i] , b[i]  ) ;
    for( i = 0 ; i < t ; i++ )
        cout << res[i] << endl ;
return 0 ;
}