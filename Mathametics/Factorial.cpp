/* #include <iostream>
using namespace std ;

int fact( int t ,int a[ ] , int i )
{
    if( a[i] == 0)
        return 1 ;
    return a[i] * fact( a[i] - 1) ;
}
int main()
{
    int t , i , res ;
    cin >> t ;
    int a[t] ;
    for ( i = 0 ; i < t ; i++ )
            cin >> a[i]  ;
    res = fact(t , a , i) ;
return 0 ;
} */

#include <iostream>
using namespace std ;

int fact(  int a )
{
    int val = 1 , i  ;
    for( i = 2 ; i <= a ; i++)
            val = val * i ;
    return val ;
}
int main()
{
    int t , i ;
    cin >> t ;
    int a[t], res[t] ;
    for( i = 0 ; i < t ; i++ )
        cin >> a[i] ;
    for( i = 0 ; i < t ; i++ )
        res[i] = fact( a[i]  ) ;
    for( i = 0 ; i < t ; i++ )
        cout << res[i] << "  " ;
}