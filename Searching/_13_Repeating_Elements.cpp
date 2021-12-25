#include <iostream>
using namespace std ;

int Pro(int a[] , int n)
{
    int i ;
    int visited[n]  ;

    for(i=0 ; i<n ; i++)
        visited[a[i]] = false ;

    for(i=0 ; i<n ; i++)
    {
        if(visited[a[i]])
            return a[i] ;
        visited[a[i]] = true ;
    }
    return false ;
}

int main()
{
    int n , i ;
    cin >> n ;
    int a[n] ;
    for(i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    cout << Pro(a,n);
    return 0 ;
}