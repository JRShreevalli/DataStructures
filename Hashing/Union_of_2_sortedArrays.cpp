#include <bits/stdc++.h>
using namespace std;

int unionSize(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> us;

    for(int i = 0; i < m; i++)
        us.insert(arr1[i]);

    for(int i = 0; i < n; i++)
        us.insert(arr2[i]);
    
    return us.size(); 
}

int main()
{
    int m, i , n ;
    cin >> m >> n  ;
    int a[m] , b[n] ;
    for(i=0 ; i<m ; i++)
        cin >> a[i] ;
    for(i=0 ; i<n ; i++)
        cin >> b[i] ;
    cout << (a, m, b, n ) ;
}