#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int count = 0, count1 = 0, count2 = 0;
    unordered_map<int, int> q;
    q[1] = ++count;
    q[1] = ++count;
    q[2] = count;
    q[3] = 4;
    for (auto i : q)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}