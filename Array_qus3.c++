#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int n = 3;

    for (int k = 0; k < n - 1; k++)
    {
        int j, first = 0;
        first = arr[0];
        for (int j = 0; j < length - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[length - 1] = first;
    }
    cout << endl;
    cout << "array after rotation: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i];
    }

    return 0;
}