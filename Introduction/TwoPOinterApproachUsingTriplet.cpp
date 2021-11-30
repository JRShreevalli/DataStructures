/* #include <bits/stdc++.h>
using namespace std ;

int sort(int a[], int n)
{
    for(int i = 0;i < n; i++)
    {
        for(int j = 0 ; j < n - i -1; j++)
        {
            if( a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
    return 0 ;
}

bool Triplet( int a[ ] , int n , int sum ) 
{
    int l , r ;
    for( int i = 0 ; i <= n-2 ; i++ )
    {
        l = i + 1 ;
        r = n-1 ;
        while( l < r )
        {
            if(a[i] + a[l] + a[r] == 0)
            {
                printf("Triplet is %d, %d, %d", a[i], a[l], a[r]); 
				return true; 
            }
            	else if (a[i] + a[l] + a[r] < sum) 
				    l++; 
			else  
				r--; 
        }
    }
}
int main()
{
    int n , i ;
    cin >> n;
    int a[n] ;
    for( i = 0 ; i < n ; i++ )
        cin >> a[i] ;
    int sum ;
    cin >> sum ;
    sort( a , n ) ;
    Triplet( a , n , sum);
return 0 ;
} */

#include<bits/stdc++.h>
using namespace std;
 
// function to print triplets with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
 
    // sort array elements
    sort(arr, arr+n);
 
    for (int i=0; i<n-1; i++)
    {
        // initialize left and right
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r)
        {
            if (x + arr[l] + arr[r] == 0)
            {
                // print elements if it's sum is zero
                printf("%d %d %d\n", x, arr[l], arr[r]);
                l++;
                r--;
                found = true;
                  break;
            }
 
            // If sum of three elements is less
            // than zero then increment in left
            else if (x + arr[l] + arr[r] < 0)
                l++;
 
            // if sum is greater than zero than
            // decrement in right side
            else
                r--;
        }
    }
 
    if (found == false)
        cout << " No Triplet Found" << endl;
}
 
// Driven source
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}