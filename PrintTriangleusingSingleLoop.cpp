#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, k, p, q;
    cin >> n;
    k = n;
    q = k;
    s = n - 1;
    p = s;
label:
    while (n > 0)
    {
        if (s > 0)
        {
            cout << " ";
            --s;
        }
        else
        {
            cout << "*";
        }

        --n;
    }
    cout << endl;
    n = k;
    s = --p;
    if (q > 1)
    {
        --q;
        goto label;
    }
    return 0;
}