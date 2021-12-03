#include <iostream>
using namespace std ;

int Program(int n , int a[ ])
{
    int i ;
    int x = 0 ;
    for(i = 0 ; i < n ; i++)
    {
        x =  x ^ a[i] ;
    }
    return x ;
}
int main()
{
    int n , i ;
    cin >> n ;
    int a[n] ;
    for( i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    cout << Program(n , a) ;
return 0 ;
}