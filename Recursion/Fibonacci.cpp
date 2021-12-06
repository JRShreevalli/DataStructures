// Nth Fibonacci value .........
#include <iostream>
using namespace std ;

class parent
{
    public :
            int Fib(int n)
            {
                if (n == 0)
                    return 0 ;
                else if (n == 1)
                    return 1 ;
                return Fib(n-1) + Fib(n-2) ;
            }
};

int main()
{
    int n ;
    cin >> n ;
    parent obj ;
    cout << obj.Fib(n);
return 0 ;
}