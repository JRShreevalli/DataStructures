#include <iostream>
using namespace std ;

class parent 
{
    public :
            int program(int n)
            {
                if ( n == 0 )
                    return 0;
                return  n % 10 + program( n/10 ) ;
            }
};

int main()
{
    int num ;
    cin >> num ;
    parent ob ;
    cout << ob.program(num);
return 0 ;
}