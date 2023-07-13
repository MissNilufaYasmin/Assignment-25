/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/

#include <iostream>
using namespace std ;

class AREA
{
    private :
        int R ;    //circle
        int L,B ;   //rectangle
        int Base ;  //triangle
        float H ;
    public :
        void area (int r) //Area of circle 
        {
            R = r ;
            cout<<"Area of circle is " << 3.14*R*R<<endl ;
        }
        void area (int l,int b)  //Area of rectangle
        {
            L=l ;
            B=b ;
            cout<<"Area of rectangle is " << L*B <<endl;
        }
        void area (int b,float h)  // Area of triangle
        {
            Base = b ;
            H = h ;
            cout<<"Area of triangle is " <<  0.5*Base*H <<endl ;
        }
        
} ;

int main ()
{
    AREA a1,a2,a3 ;
    a1.area(10) ;
    a2.area(4,5) ;
    a3.area(3,6.5f) ;
    return 0 ;
}
