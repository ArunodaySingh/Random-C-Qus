#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, p, q, r, s, t = 2;
    for (i = 1; i <= 3; i++)
    {
        for (j = 2; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    for (p = 1; p <= 2; p++)
    {
        for (q = 1; q <= p; q++)
        {
            cout << " ";
        }
        for (r = 1; r <= t; r++)
        {
            cout << r;
        }
        t--; // It's increase space complexity too.
        for (s = p; s <= 1; s++)
        {
            cout << s;
        }
        cout << endl;
    }
}