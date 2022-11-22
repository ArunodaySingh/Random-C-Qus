#include <bits/stdc++.h>
using namespace std;
 int sum = 0;
 int indx = 1;
void check(int arr[], int n, int size)
{
    label:
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == indx && sum <= n)
        {
            cout << indx << " ";
            sum+=indx;
            check(arr,n,size);
        }
        cout<<endl;
        indx++;
        goto label;
    }
}
int main()
{
    int n = 6;
    int arr[11] = {6, 5, 7, 1, 8, 2, 9, 9, 7, 7, 9};
    int size = 10;
    check(arr, n, size);

    return 0;
}