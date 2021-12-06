#include <iostream>
using namespace std ;

class parent
{
    public :
            int i = 1 ;
    public :
            int program(int n)
            {
                if (n==0)
                    return 0 ;
                cout << i++ << " " ;
                return program(n-1) ;
            }
};

int main()
{
    int n ;
    cin >> n ;
    parent obj ;
    obj.program(n);
return 0 ;
}