#include <iostream>
using namespace std ;

int TOH(int n , char A , char B , char C)
{
    if (n==1)
        {
            cout << " Move 1 fom " << A << " to " << C << "\n" ;
            return 0 ;
        }

    TOH(n-1,A,C,B);
    cout << "Move " << n << " from " << A << " to " <<  C << endl;
    TOH(n-1,B,A,C);
    
return 0 ;
}

int main()
{
    int n ;
    cin >> n ;
    TOH(n,'A','B','C');
return 0 ;
}