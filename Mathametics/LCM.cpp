#include <iostream>
using namespace std ;

int gcd ( int a[ ] , int b[ ] , int i )
{
    while(a[i] != b[i] )
    {
        if( a[i] > b[i] )
            a[i] = a[i] - b[i] ;
        else
            b[i] = b[i] - a[i] ; 
    }
    return a[i] ;
}
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] , b[t] ;
    for ( i = 0 ; i < t ; i++ )
        cin >> a[i] >> b[i] ;
    int res[t] ;
    for( i = 0 ; i < t ; i++ )
        res[i] = gcd( a , b , i ) ;
    for( i = 0 ; i < t ; i++ )
        {
            int q = a[i] * b[i] ;
            cout << (a[i] * b[i])/(res[i] ) ;
            cout << "\n" ;
        }
    return 0 ;
}

// FORMULEE 
//  a * b = lcm( a , b ) * gcd( a , b ) 