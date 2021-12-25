#include <iostream>
using namespace std ;

bool Triplet_pair(int n , int a[] , int x)
{
    int i , j , k ;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            for(k=0 ; k<n-2 ; k++)
            {
                if(a[i]+a[j]+a[k] == x)
                    return true ;
            }
        }
    }
    return false ;
}
int main()
{
    int num , i , x ;
    cin >> num ;
    int a[num] ;
    for(i=0 ; i<num ; i++)
        cin >> a[i] ;
    cout << "Triplet Pair = " ;
    cin >> x ;
    cout << Triplet_pair(num,a,x);
    return 0 ;
}