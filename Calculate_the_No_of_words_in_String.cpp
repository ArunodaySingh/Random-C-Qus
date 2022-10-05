#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string str = "abcbdeaaf";
    for (int i = 0; i < str.size(); i++)
    {
        char store = str[i];
         int check = 0;
        for (int j = 0; j < str.size(); j++)
        {
           
            if (str[j] == store)
            {
                ++check;
            }
            
        }
        if (check > count)
            {
                count = check;
            }
    }
    cout << "The highest no of time character came " << count;
    return 0;
}