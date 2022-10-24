#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, p, q, e;
    bool a;
    cin >> n;
    q = e = n;
    p = s = n - 1;
label:
    while (n > 0 && e > 0)
    {
        (s > 0) ? a = false : a = true;
        if (a == false)
        {
            cout << " ";
            --s;
        }
        else
        {
            cout << "*";
        }
        --n;
        if (q == (n + q) && e>0)
        {
            cout << endl;
            n = q;
            s = --p;
            --e;
            goto label;
        }

    }
    return 0;
}