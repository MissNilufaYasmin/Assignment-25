/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/

#include<iostream>
using namespace std ;

class complex 
{
    private :
        int a ,b ;
    
    public :
        void setData (int x,int y)
        {
            a = x ;
            b = y ;
        }
        void display ()
        {
            cout<<"Real = "<<a <<" and Imaginary = "<<b<<endl;
        }
} ;

int main ()
{
    complex c1 , c2 ;
    c1.setData(3,4) ;
    c1.display () ;

    int m,n ;
    cout<<"Enter two numbers : ";
    cin>>m>>n ;
    c2.setData (m,n) ;
    c2.display() ;

    return 0 ;
}
