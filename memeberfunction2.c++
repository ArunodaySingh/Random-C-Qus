#include<bits/stdc++.h>
using namespace std;

class B;
class A
{
private:
    int a=2;
public:
    friend void sum(A,B);
};
class B
{
    int b=3;
public:
    friend void sum(A,B);
 };
 void sum(A o1,B o2)
 {
     cout<<o1.a+o2.b;
 }
 
 int main()
 {
     A o1;
     B o2;
     sum(o1,o2);
 }