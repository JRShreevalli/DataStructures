#include <iostream>
using namespace std ;

bool Two_Pointer_pair(int n,int a[] , int x)
{
    int low = 0 ;
    int high = n-1 ;
    while(low < high)
    {
        if(a[low] + a[high] == x)
            return true ;
        if(a[low] + a[high] > x)
            high = high -1 ;
        else
            low = low + 1 ;
    }
    return false ;
}
int Sort(int n , int a[])
{
    int i ;
    for(i=0 ; i<n ; i++)
    {
        if(a[i] > a[i+1])
        {
            int temp = a[i] ;
            a[i] = a[i+1] ;
            a[i+1] = temp ;
        }
    }
    return 0 ;
}
int main()
{
    int num , i , x ;
    cin >> num ;
    int a[num] ;
    for(i=0 ; i<num ; i++)
        cin >> a[i] ;
    cout << "Sum Pair = " ;
    cin >> x ;
    Sort(num,a);
    cout << Two_Pointer_pair(num,a,x);
    return 0 ;
}