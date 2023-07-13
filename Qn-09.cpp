//9. Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
using namespace std ;

class Circle
{
    private :
        int R ;
    public :
        float area (int r)
        {
            R = r ;
            return 3.14*R*R ;
        }
        void print()
        {
            cout<<"Area of Circle is "<<area(R) ;
        }
} ;

int main ()
{
    Circle C ;
    int a;
    cout<<"Enter Radius of a circle : ";
    cin>>a ;

    C.area(a) ;
    C.print() ;
    return 0 ;
}
