#include <iostream>
using namespace std;
int main()
{
    int r, c, k, g,q=0;
    for (r = 1; r <= 5; r++)
    {
        for (c = 4; c >= r; c--)
        {
            cout << " ";
        }
        for (k = r; k <= (2 * r) - 1; k++)
        {
            cout << k;
        }
        for (g= q;g>=r;g--)
        {
            cout << g;
           
        }
         q+=2;

        cout << endl;
    }
}