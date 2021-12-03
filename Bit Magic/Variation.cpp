/* Given an array of 'n' numbers that has values in range of [1 2 ...... n+1] .
    Every number appear exactly once . Hence find missing number ... */

    #include <iostream>
    using namespace std ;

    int function2( int n , int a[ ] , int res1)
    {
        int i ;
        int xr2 = 0 ;
        for ( i = 1 ; i < n+1 ; i++ )
            xr2 = xr2 ^ a[i] ;
        return xr2 ;
    }

    int function1(int n , int a[ ])
    {
        int i ;
        int xr1 = 0 ;
        for (i=1 ; i<n+2 ; i++)
                xr1 = xr1 ^ i ;
        return xr1 ;
    }

    int main()
    {
        int n , i ;
        cin >> n ;
        int a[n+1] ;
        for ( i = 1 ; i <= n ; i++ )
            cin >> a[i] ;
        int res1 = function1(n , a) ;
        int res2 = function2( n , a , res1 ) ;
        int result = res1 ^ res2 ;
        cout << result ;

    return 0 ;
    }