#include <bits/stdc++.h>
using namespace std ;

// if only sorted ................

bool isPresent(int a[ ] , int n , int add )
{
    int low = 1 ;
    int high = n ;
    while(low < high)
    {
        if(a[low] + a[high] == add)
            return true ;
        else if ( a[low] + a[high] > add)
            high = high -1 ;
        else
            low = low + 1 ;
    }
return false ;
}
int main()
{
    int add  , i , n  ;
    cin >> n ;
    int a[n+1] ;
    for( i = 0 ; i < n ; i++ )
            cin >> a[i] ;
    cin >> add ;
    cout << isPresent( a , n  , add);
return 0 ;
}