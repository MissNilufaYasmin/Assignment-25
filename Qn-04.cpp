/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/

#include<iostream>
using namespace std ;

class LargestNumber
{
    public :
        void L_Num (int x , int y , int z)
        {
            if (x>y)
            {
                if (x>z)
                    cout<<"Largest number is "<<x ;
            }
            else if (y>z)
                cout<<"Largest number is "<<y ;
            else    
                cout<<"Largest number is "<<z ;        
            
        }
                
} ;

int main ()
{
    LargestNumber num ;
    int p,q,r ;
    cout<<"Enter three numbers : ";
    cin>>p>>q>>r ;
    num.L_Num(p,q,r) ;
    return 0 ;
}
