#include<bits/stdc++.h>
using namespace std;

int swaping(int *x , int *y )
{
    int temp = *x ;
    *x = *y ;
    *y = temp ;
return 0 ;
}

void bubbleSort(int arr[], int n)
{
    for(int i = 0;i < n; i++)
    {
        for(int j = 0 ; j < n - i -1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                swaping(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() 
{
	int n ;
    cin >> n ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
        cin >> a[i] ;
	bubbleSort(a, n);
	for(int i = 0;i < n; i++)
    {
	    cout<<a[i]<<" ";
	}
	return 0;
}
