#include <iostream>
using namespace std ;

int program(int t , int a[ ] )
{
    int  i , j ;
    for( i = 0 ; i < t ; i++ )
    {
        int fact = 1 ;
        for( j = 2 ; j <= a[i] ; j++ )
        {
            fact = fact * j ;
        }
        int temp = fact ;
        int count = 0 ;
        while( temp % 10 == 0 )
        {
            count++ ;
            temp = temp/10 ;
        }
        cout << count << "  " ;
    }
    return 0 ;
}

int main()
{
    int t , i ;
    cin >> t ;
    int a[t] ;
    for( i = 0 ; i < t ; i++ )
        cin >> a[i] ;
    program( t , a ) ;
return 0 ;
}