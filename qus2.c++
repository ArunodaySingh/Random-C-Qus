//========Author CodeTillLOgn==========

#include <bits/stdc++.h>
using namespace std;

int hourglass(int arr[6][6])
{
    int l = 0, k = 0, large, sum = 0, icount, jcount;
    while (l != 4)
    {
        while (k != 4)
        {
            icount = 0;
            jcount = 0;
            for (int i = l; i < l + 3; i++)
            {
                for (int j = k; j < k + 3; j++)
                {

                    if (icount == 1 && jcount == 1)
                    {

                        sum += arr[i][j];
                    }
                    else if (icount == 1 && jcount == 0 || icount == 1 && jcount == 2)
                    {
                        jcount++;
                        continue;
                    }
                    else
                    {

                        sum += arr[i][j];
                    }

                    jcount++;
                }
                jcount = 0;
                icount++;
            }
            if (large <= sum)
            {
                large = sum;
            }
            sum = 0;
            k++;
        }
        l++;
        k = 0;
    }
    cout << large;
}
int main()
{
    int arr[6][6], value, i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cin >> value;
            arr[i][j] = value;
        }
    }
    hourglass(arr);
}
