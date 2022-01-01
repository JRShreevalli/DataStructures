#include <bits/stdc++.h>
using namespace std;

int countInversions(int arr[], int n)
{
    
    int res=0;
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                res++;
        }
    }
    return res;
}

int main() 
{
	int n , i ;
    cin >> n ;
    int a[n] ;
    for(i=0 ; i < n ; i++)
        cin >> a[i] ;
    cout << countInversions(a,n) ;
    return 0 ;
}