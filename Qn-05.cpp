/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/

#include <iostream>
using namespace std ;

class ReverseNumber
{
    private :
        int num ;  //optional 
    public :
        void reverse (int) ;
} ;

void ReverseNumber :: reverse (int x)
{
    int y, sum=0;
    num = x ; 
    while (x)
    {
        y = x%10 ;
        sum = sum*10+y ;
        x = x/10 ;
    }
    cout<<"Reverse of "<<num <<" is = "<<sum ;
}

int main ()
{
    ReverseNumber A ;
    int a ;
    cout<<"Enter a numbers : ";
    cin>>a ;

    A.reverse(a) ;
    return 0 ;
}
