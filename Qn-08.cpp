/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/

#include <iostream>
using namespace std ;

class Rectangle
{
    private :
        int x,y ;
    public :
        int area (int a, int b)
        {
            x=a ;
            y=b ;
            return x*y ;
        }
        void print()
        {
            cout<<"Area of rectangle is "<<area(x,y) ;
        }
} ;

int main ()
{
    Rectangle R ;
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b ;

    R.area(a,b) ;
    R.print() ;
    return 0 ;
}
