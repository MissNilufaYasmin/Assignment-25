/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include <iostream>
using namespace std ;

class Square
{
    private :
        int num , result ;
        static int count ;  
        
    public :
        int sqr (int x)
        {
            num = x ;
            result = num*num ;
            count++ ;
        }
        void print()
        {
            cout<<"Square of "<<num<<" is "<<result<<endl<<"Function is called "<<count<<" times by the objects";
        }
} ;

int Square :: count = 0 ;

int main ()
{
    Square S ,S1 ;
    int a ;
    cout<<"Enter a numbers : ";
    cin>>a ;

    S.sqr(a) ;
    //S.print() ;

    S1.sqr(8);
    S1.print();
    
    
    return 0 ;
}
