// The elements in array are already sorted !!!!!!!!

#include <iostream>
using namespace std ;

int Search(int arr[] , int low , int high , int  ele)
{
    while(low <= high)
    {
        int mid = (low + high ) / 2 ;

        if(arr[mid] == ele)
                return mid ;

        else if (arr[mid] < ele)
                low = mid + 1 ;

        else if (arr[mid] > ele)
                high = mid - 1 ;
        else
        {
            if(mid == 0 || arr[mid] != arr[mid-1])
                    return mid ;
            else
                    high = mid - 1 ;
        }
    }
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
    cout <<  Search(a,0,n-1,x) ; 
return 0 ;
}
