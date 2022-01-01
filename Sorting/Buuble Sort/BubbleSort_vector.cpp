#include <iostream>
using namespace std ;

int swap(int *x , int *y )
{
    int temp = *x ;
    *x = *y ;
    *y = temp ;
return 0 ;
}
int bubbleSort(vector <int> v , int n )
{
    int i , j ;
    for(i=0 ; i<v.size() ; i++ )
    {
        for(j=0 ; j<v.size() - 1 ; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(&v[j],&v[j+1]) ;
            }
        }
    }
    for(i=0 ; i<n ; i++)
            cout << v[i] << " " ;
    
}
int main()
{
    int n , i , x;
    cin >> n ;
    vector <int> v ;
    for(i=0 ; i<n ; i++)
    {
        cin >> x ;
        v.push_back(x) ;
    }
    bubbleSort(v,n) ;
    return 0 ;
}