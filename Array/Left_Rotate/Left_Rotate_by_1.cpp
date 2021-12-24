// Write a function rotate(ar[], d, n) that rotates arr[] of size n by 1 element ................................ 

#include <iostream>
using namespace std;

int main()
{
    int n , i ;
    cin >> n ;
    int a[n] ;
    for (i=0 ; i<n ; i++)
        cin >> a[i] ;

    int temp1 = a[0] ;

    for (i=0 ; i<n ; i++)
    {
        if (i == n-1)
            a[i] = temp1 ;
        else
            a[i] = a[i+1] ;
    }
    for (i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    return 0 ;
}
