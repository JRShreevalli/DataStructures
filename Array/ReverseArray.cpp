#include <bits/stdc++.h>
using namespace std ;

void Reverse(int a[],int n)
{
    int low = 0 , high = n-1 ;
    while(low < high)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp ;
        low = low + 1 ;
        high = high - 1 ;
    }
}
int main()
{
     int n ;
    cout << "Enter no.of elements to be entered into an array : " ;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin >> arr[i] ;
    Reverse(arr,n);
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " " ; 
return 0 ;
}