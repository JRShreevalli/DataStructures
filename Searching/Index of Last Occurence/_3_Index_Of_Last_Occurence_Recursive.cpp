// The elements in array are already sorted !!!!!!!!
// REcurssion 
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
                return Search(arr,mid+1,high,ele);

        else if (arr[mid] > ele)
                return Search(arr,low,mid+1,ele);
        else
        {
            if(mid == high || arr[mid+1] != arr[mid])
                    return mid ;
            else
                    return Search(arr,mid+1,high,ele) ;
        }
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
    cout <<  Search(a,0,n-1,x) ; 
return 0 ;
}