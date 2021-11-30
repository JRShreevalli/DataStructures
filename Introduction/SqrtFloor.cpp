// Naive code //
/* #include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i*i <= n)
        i++ ;
    cout << i-1 ;
} */

// EFFICIENT CODE 
#include <iostream>
using namespace std;

int program(int n)
{
    int ans ;
    int low = 0 ;
    int high = n - 1 ;
    while(low <= high)
    {
        int mid = (low + high)/2 ;
        int sqmid = mid * mid ;
        if(sqmid == n)
            return mid ;
        else if( sqmid > n)
            high = mid - 1 ;
        else
            low = mid + 1 ;
            ans = mid ;
    }
    return ans ;
}
int main()
{
    int n ;
    cin >> n ;
    cout << program( n );
return 0;
}

// similar too finding 1st occurence
