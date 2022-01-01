#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
    }    
}

int main() {
	
    int m , n , i ;
    cin >> m >> n ;
    int a[m] , b[n] ;
    for(i=0 ; i<m ; i++)
    {
        cin >> a[i] ;
    }
    for(i=0 ; i<n ; i++)
    {
        cin >> b[i] ;
    }
	intersection(a,b,m,n);

}