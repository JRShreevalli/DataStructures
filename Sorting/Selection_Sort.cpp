#include<bits/stdc++.h>
using namespace std;

int swaping(int *x , int *y )
{
    int temp = *x ;
    *x = *y ;
    *y = temp ;
return 0 ;
}

void selectionSort(int arr[], int n)
{
    
    for(int i = 0; i < n; i++)
    {
        int min_ind = i;
        
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swaping(&arr[i], &arr[min_ind]);
    }
    
    
}

int main() 
{
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
        cin >> a[i] ;
	selectionSort(a, n);
	for(int i = 0;i < n; i++)
    {
	    cout<<a[i]<<" ";
	}
	return 0;
}