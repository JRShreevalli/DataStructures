#include <iostream>
using namespace std ;

int Search(int arr[] , int num , int ele)
{
    int low = 0 ;
    int high = num-1 ;
    while(low <= high)
    {
        int mid = (low + high) / 2 ;
        if( arr[mid] == ele )
            return mid ;
        else if( arr[mid] < ele )
            low = mid + 1 ;
        else
            high = mid - 1 ;
    }
    return 0 ;
}
int main()
{
    int n , i , x ;
    cin >> n ;
    int a[n] ;
    for (i=0 ; i<n ; i++)
        cin >> a[i] ;
    cout << "Search element :" << " " ;
    cin >> x ;
    cout <<  Search(a,n,x) ; 
return 0 ;
}
