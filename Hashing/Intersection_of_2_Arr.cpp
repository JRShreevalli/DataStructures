#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> us;
    for(int i = 0; i < m; i++)
      us.insert(arr1[i]);
      
    int res = 0;  
    for(int i = 0; i < n; i++)
    {
        if(us.find(arr2[i]) != us.end())
        {
            res++;
            us.erase(arr2[i]);
        }
    }
    return res;
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
    cout << intersection(a, m, b, n );
    
    return 0;
}