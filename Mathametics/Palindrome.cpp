#include <iostream>
using namespace std ;

bool isPal(int t , int a[ ] , int i )
{
        int rev = 0 ;
        int temp = a[i] ;
        while( temp != 0)
        {
            int ld = temp % 10 ;
            rev = rev * 10 + ld ;
            temp = temp / 10 ;
        }
        return rev == a[i] ;
}
int main()
{
    int i , t  ;
    cin >> t ;
    int a[t] , res[t] ;
    for(i = 0 ; i < t ; i++ )
        cin >> a[i] ;
    for( i = 0 ; i < t ; i++)
        res[i] = isPal( t , a , i );
    for( i = 0 ; i < t ; i++ )
        cout << res[i] << " " ;
    return 0 ;
}