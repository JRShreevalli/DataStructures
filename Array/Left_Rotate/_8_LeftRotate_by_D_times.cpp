// Write a function Left_Rot(ar[], d, n) that rotates arr[] of size n by d elements......................

#include <iostream>
using namespace std ;

int Left_Rot(int arr[] , int n)
{
    int i ;
    int temp1 = arr[0] ;
    for (i=0 ; i<n ; i++)
    {
        if (i == n-1)
            arr[i] = temp1 ;
        else
            arr[i] = arr[i+1] ;
    }
}
int Left_Rototate_D_times(int a[], int n, int d)
{
    int i ;
    for(i=0 ; i<d ; i++)
        Left_Rot(a,n);
    return 0 ;
}
int main()
{
    int n , i ;
    cin >> n ;
    int a[n] , d ;
    cin >> d ;
    for (i=0 ; i<n ; i++)
        cin >> a[i] ;
    Left_Rototate_D_times(a, n , d);
    for( i=0 ; i<n ; i++)
        cout << a[i] <<" " ;
return 0 ;
}
