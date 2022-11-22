/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  for (int line = 1; line <= 8; line++)
  {
    int c = 1;
    for (int j = 1; j <= line; j++)
    {
      cout << c <<" "; // always 1
      c = c * (line - j) / j;  // logic
    }cout<<endl;
  }
  return 0;
}