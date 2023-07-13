/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include <iostream>
using namespace std ;

class Square
{
    private :
        int num ;  //optional 
    public :
        int sqr (int x)
        {
            num = x ;
            return num*num ;
        }
        void print()
        {
            cout<<"Square of "<<num<<" is = "<<sqr(num) ;
        }
} ;



int main ()
{
    Square S ;
    int a ;
    cout<<"Enter a numbers : ";
    cin>>a ;

    S.sqr(a) ;
    S.print() ;
    return 0 ;
}
