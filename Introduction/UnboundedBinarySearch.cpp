#include <iostream>
using namespace std;

int program(int n , int a[] , int x )
{
    int i = 0 ;
    while(true)
    {
        if(a[i] == x)  return  i ;
        i++ ;
    }
}
int main()
{
    int n , i  ;
    cin >> n ;
    int a[n] ;
    for ( i = 0 ; i<n ; i++ )
    {
        cin >> a[i];
    }
    int x ;
    cin >> x; 
    cout << program( n , a  , x ) ;
return 0 ;
}