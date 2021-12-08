#include <iostream>
using namespace std ;

int LargestElement(int arr[],int n)
{
    int i ;
    int temp = arr[0];
    for (i=1 ; i<n ; i++)
    {
        if (temp < arr[i])
            temp = arr[i] ;
    }
    return temp ;
}
int main()
{
    int n ;
    cout << "Enter no.of elements to be entered into an array : " ;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin >> arr[i] ;
    int res = LargestElement(arr,n);
    cout << "Largest Element of an array = " << res ;
return 0 ;
}
