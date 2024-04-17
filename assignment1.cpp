/* Implement a class Complex which represents the Complex Number data type.

1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.
*/

#include <iostream>
using namespace std;
class complex
{
    public:
    float real,img;
    //constructor
    complex();
    //operator overloading
    complex operator +(complex obj);
    complex operator *(complex obj);
    friend ostream &operator<<(ostream &out,complex &obj);
    friend istream &operator>>(istream &in,complex &obj);
};

    complex :: complex()
    {
        real=0;
        img=0;
    }
     istream & operator >>(istream &in,complex &obj)
    {
        in>>obj.real;
        in>>obj.img;
        return in;
    }
    ostream & operator <<(ostream &out,complex &obj)
    {
        out<<""<<obj.real;
        out<<" + "<<obj.img<<"i";
        return cout;
    }
    
    complex complex::operator +(complex obj)
{
    complex temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
}
    complex complex::operator*(complex obj)
    {
        complex tp;
        tp.real=real*obj.real-img*obj.img;
        tp.img=img*obj.real+real*obj.img;
        return tp;
    }


int main()
{
complex a,b,c,d;
cout<<"Enter the real and img part:"<<endl;
cin>>a;
cout<<"Enter the real and img part:"<<endl;
cin>>b;
cout<<"Arithmetric operation:"<<endl;
c=a+b;
cout<<"Addition is :  ";
cout<<c<<endl;
d=a*b;
cout<<"Multiplication is :  ";
cout<<d<<endl;
return 0;
}