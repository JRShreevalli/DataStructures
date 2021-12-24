// Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.

#include <iostream>
#include <algorithm>
using namespace std ;

int Max_Diff(int arr[] , int n )
{
    int i , j  ;
    int temp = arr[1] - arr[0] ;
    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            temp = max(temp,arr[j]-arr[i]);
        }
    }
    return temp ;
}
int main()
{
    int n , i;
    cout << "Enter size of an array : " ;
    cin >> n ;
    int a[n] ;
    for(i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    int res = Max_Diff(a,n);
    cout << res << endl ;
return 0 ;
}
