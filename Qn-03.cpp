/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/

#include<iostream>
using namespace std ;

class Factorial
{
    private :
        int num , fact ;

    public :
        void calculate_fact (int) ;
        void print()
        {
            cout<<"Fcatorial of "<<num<<" is "<<fact<<endl ;
        }
} ;

void Factorial :: calculate_fact (int x)
{
    num = x ;
    int i , f=1 ;
    for(i=num ; i>=1 ; i--)
        f = f*i ;
    fact = f ;
}

int main ()
{
    Factorial f1 ;
    f1.calculate_fact (5) ;
    f1.print() ;
    return 0 ;
}
