#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a ,b , z;
    
public:
    void sum(int x,int y)
    {
        a=x;
        b=y;
        z=a+b;
    }
    friend void result(Complex);
};

void result(Complex c8)
{
    cout<<"sum of two number is " << c8.z<<endl;
}

int main()
{
    Complex c1 , c2;
    c1.sum(4,5);
    c2.sum(14,15);
    result(c1);
    result(c2);
    
}