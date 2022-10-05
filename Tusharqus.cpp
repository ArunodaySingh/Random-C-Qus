#include <iostream>
#include <string>
using namespace std;

class String
{
    string str1;
    string str2;

public:
    int count = 0;
    String(string str1, string str2)
    {
        this->str1 = str1;
        this->str2 = str2;
    }
    void logic()
    {
        char a, b;
        string::iterator itr = this->str1.end();
        a = *(itr - 1);
        b = *(itr - 2);
        for (string::iterator itr2 = this->str2.begin(); itr2 != str2.end(); itr2++)
        {
            if (a == *itr2)
            {
                ++count;
            }
            if (b == *itr2)
            {
                ++count;
            }
        }
        if (count == 2)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
    }
};
int main()
{
    string str1, str2;
    cout << "Enter the both string " << endl;
    cin >> str1 >> str2;
    String obj(str1, str2);
    obj.logic();
    return 0;
}