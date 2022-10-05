
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    class A
    {
    private:
        int a;
        int b;
    public:
        void sum(int x, int y)
        {
            int c;
            a=x;
            b=y;
            c=a+b;
            cout<<c;
        }
    };
    A obj;
    obj.sum(10,5);
    return 0;
}

