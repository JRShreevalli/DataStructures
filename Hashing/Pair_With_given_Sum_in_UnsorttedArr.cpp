#include <bits/stdc++.h>
using namespace std;


int pairWithSumX(int arr[],int n, int X)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
    {
        if(us.find(X - arr[i]) != us.end())
          return 1;
          
        us.insert(arr[i]);
    }
    return 0;
    
}

int main()
{
    int t, i , X  ;
    cin >> t ;
    int a[t] ;
    for(i=0 ; i<t ; i++)
        cin >> a[i] ;
    cin >> X ;
    cout << pairWithSumX(a , t, X);
    return 0;
}