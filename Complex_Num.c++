#include<iostream> 
using namespace std;  
class Complex
{   
    public :
        int real;
        int imag;

    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r, int i)
    {
        real=r;
        imag=i;
        
    }
    void  add(Complex C1,Complex C2)
    {   Complex C3;
        C3.real =C1.real+C2.real;
        C3.imag =C1.imag+C2.imag;
        cout<<"\n Addition Of Two Complex Numbers:- ( "<<C3.real<<" + "<<C3.imag<<"i )";
        
    }
    void  mul(Complex C1,Complex C2)
    {   Complex C3;
        C3.real =C1.real*C2.real;
        C3.imag =C1.imag*C2.imag;
        cout<<"\n Multiplication Of Two Complex Numbers:-  ( "<<C3.real<<" + "<<C3.imag<<"i )";
        
    }
};
int main()
{
    Complex C1(4,5);
    Complex C2(3,6);
    Complex C3;
    C3.add(C1,C2);
    C3.mul(C1,C2);
   return 0;
}
