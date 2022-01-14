#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    // unordered set always keeps unique elements in unordered way ..... 
    unordered_set <int> us;
    for(int i = 0; i < n; i++)
        us.insert(arr[i]);

    return us.size() ;
}

int main()
{
    int t, i ;
    cin >> t ;
    int a[t] ;
    for(i=0 ; i<t ; i++)
        cin >> a[i] ;
    cout << countDistinct(a, t) << endl ;
    return 0;
}