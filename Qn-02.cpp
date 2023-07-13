/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/

#include<iostream>
using namespace std ;

class time 
{
    private :
        int sec,min,hrs ;

    public :
        void setValue (int h,int m, int s)
        {
            sec = s ;
            min = m ;
            hrs = h ;
        }

        void displayValue ()
        {
            cout<<hrs<<" hrs "<<min<<" min "<<sec<<" sec"<<endl ;
        }
} ;

int main ()
{
    time t1,t2 ;

    t1.setValue(3,45,20) ;
    t1.displayValue() ;
    t2.setValue(11,48,9) ;
    t2.displayValue() ;
    return 0 ;
}
