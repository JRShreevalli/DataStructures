#include <bits/stdc++.h>
using namespace std ;

void Sec_Largest_Element(int arr[],int n)
{
    if ((n-1) < 2)
        cout << "not possible" << endl ;
    int i , j;
    for (i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i] == arr[n-2])
                cout << "Element found is " << arr[i] << endl ;
        }
    }
}
void Sort(int arr[], int n)
{
    int i , j ;
    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
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
    Sort(arr,n);
    Sec_Largest_Element(arr,n);
return 0 ;
}
