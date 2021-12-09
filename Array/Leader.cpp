#include <iostream>
using namespace std ;

int Leader(int arr[],int n)
{
    int i , j ;
    for(i=0 ; i<n ; i++)
    {
        int temp = 0 ;
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i] <= arr[j])
                {
                    temp = 1 ;
                    break ;
                }
        }
        if ( temp == 0)
            cout << arr[i] << " " ; 
    }
 return 0 ;    
}
int main()
{
    int n , i ;
    cin >> n ;
    int a[n] ;
    for (i=0 ; i<n ; i++)
        cin >> a[i] ;
    Leader(a,n);
return 0 ;
}
    