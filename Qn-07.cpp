/*7. Define a class Greatest and define instance member function to find Largest among
     3 numbers using classes.*/

#include <iostream>
using namespace std ;

class Greatest
{
    public :
        void grt (int x, int y,int z)
        {
            if (x>y && x>z)
                cout<<"Greatest = "<<x ;
            else if (y>z)
                cout<<"Greatest = "<<y ;
            else 
                cout<<"Greatest = "<<z ;
            
        }
} ;



int main ()
{
    Greatest G ;
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c ;

    G.grt(a,b,c) ;
    return 0 ;
}
