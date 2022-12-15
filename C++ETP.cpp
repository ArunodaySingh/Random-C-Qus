// * count the character 

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ofstream fout;
char ch;
string line;
int count=0,store;
fout.open("file1.txt");
while(fout)
{
  getline(cin,line);
  if(line=="-1")
  {
   break;
  }
  fout<<line;
}
fout.close();
ifstream fin;
fin.open("file1.txt");
while(fin)
{
   fin.get(ch);
   store=ch;
   if ((store > 63 && store < 91) || (store > 96 && store <123))
   {
      count++;
   }
}
cout<<count-1;
}