// * Find the root of the quadratic equation

#include<iostream>
#include<math.h>
using namespace std;

class overload_opearator
{
   int num1;
   int num2;
   int store;
   public:
   overload_opearator(int a,int b)
   {
      num1=a;
      num2=b;
   }
   void operator+()
   {
      store=num1*num2;
   }
   void operator*()
   {
      store=num1+num2;
   }
   void output()
   {
      cout<<store<<endl;
   }

};

int main()
{
 overload_opearator obj(4,5);
 +obj;
 obj.output();
 *obj;
 obj.output();  
 return 0;
}