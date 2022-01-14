#include <iostream>
#include <unordered_map>
using namespace std;
 
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int t, i ;
    cin >> t ;
    int a[t] ;
    for(i=0 ; i<t ; i++)
        cin >> a[i] ;
    countFreq(a,t) ;
    return 0;
}
