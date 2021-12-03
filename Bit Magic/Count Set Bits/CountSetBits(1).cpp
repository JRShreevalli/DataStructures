#include <iostream>
using namespace std ;

int  CountSetBits ( int num )
{
    int count = 0 ;
    while( num > 0 )
    {
        if ( num & 1 != 0 )
                count++ ;
        num = num >> 1 ;
    }
    return count ;
}

int main()
{
    int n ;
    cin >> n ;
    cout << CountSetBits(n) ;
return 0 ;
}
