#include <iostream>
using namespace std ;

int Square_Root(int n)
{
    int low = 1 ; int high = n ; int ans = -1 ;
    while(low <= high)
    {
        int mid = (low + high) / 2 ;
        int sq = mid * mid ;
        if(sq == n)
            return sq ;
        else if(sq > n)
            high = mid - 1 ;
        else 
            {
                low = mid + 1 ;
                ans = mid ;
            }
    }
    return ans ;
}
int main()
{
    int num ;
    cin >> num ;
    cout << Square_Root(num);
    return 0 ;
}