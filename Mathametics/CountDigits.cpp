//APPROACH 1
/* #include <iostream>
using namespace std ;

int CountDigits( int t , int a[ ] , int i)
{
        int count = 0 ;
        while(a[i] != 0)
        {
            a[i] = a[i]/10 ;
            count++ ;
        }
        if(a[i] == 0)
            cout << count << endl ;
    return 0 ;
}  
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] ;
    for( i = 0 ; i < t ; i++ )
    {
        cin >> a[i] ;
    }
    for( i = 0 ; i < t ; i++)
        CountDigits( t , a , i );
return 0 ;
} */  
// approach 2
/* #include <iostream>
using namespace std ;

int CountDigits( int a )
{
       int count ;
       if ( a == 0)
       {
           return 0 ;
       }
       return  1 + CountDigits( a/10 ) ;
}  
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] ;
    for( i = 0 ; i < t ; i++ )
    {
        cin >> a[i] ;
    }
    for( i = 0 ; i < t ; i++)
        cout << CountDigits( a[i] ) << " ";
return 0 ;
}  */

/*
    #include <iostream>
    using namespace std ;

int CountDigits( int a )
{
       int count ;
       if ( a == 0)
       {
           return 0 ;
       }
       return  1 + CountDigits( a/10 ) ;
}  
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] ;
    for( i = 0 ; i < t ; i++ )
    {
        cin >> a[i] ;
    }
    int result[t] ;
    for(i = 0 ; i < t ; i++)
        result[i] = CountDigits( a[i] ) ;
    for(i = 0 ; i < t ; i++ )
        cout << result[i] << " " ;
return 0 ;
}   */

#include <iostream>
using namespace std ;

int CountDigits( int a [ ], int t  )
{
    int i ;
    for( i = 0 ; i < t ; i++ )
    {
       int count = 0 ;
        while(a[i] != 0)
        {
            a[i] = a[i]/10 ;
            count++ ;
        }
        if(a[i] == 0)
            cout << count << endl ;
    }
    return 0 ;
}  
int main()
{
    int t , i ;
    cin >> t ;
    int a[t] ;
    for( i = 0 ; i < t ; i++ )
    {
        cin >> a[i] ;
    }
    CountDigits( a , t ) ;
return 0 ;
}
