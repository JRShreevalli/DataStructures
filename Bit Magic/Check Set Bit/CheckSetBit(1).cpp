// RIGHT SHIFT OPPERATION 

#include <iostream>
using namespace std ;

int CheckSetBit( int num , int k )
{
    if(1 & ( num >> k - 1 ))
        cout << "true" ;
    else
        cout << "false" ;
    return 0 ;
}
int main()
{
    int n , k ;
    cin >> n >> k ;
    CheckSetBit( n , k ) ;
return 0 ; 
}
