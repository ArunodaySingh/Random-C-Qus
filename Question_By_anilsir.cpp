#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, num, store, data,even=0,odd=0;
    cout << "Enter the value of n" << endl;
    cin >> n;
    ofstream fout1;
    ofstream fout2;
    ofstream fout3;

    ifstream fin;
    fout1.open("file1.txt");
    fout2.open("file2.txt");
    fout3.open("file3.txt");
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value " << i << endl;
        cin >> data;
        fout1 << data << endl;
    }
    fout1.close();
    fin.open("file1.txt");
    while (n)
    {
        fin >> store;

        if (store % 2 == 0)
        {
            fout2 << store<<endl;
            even++;
        }
        else
        {
            fout3 << store<<endl;
            odd++;
        }
        n--;
        
       
    }
    fout2.close();
    fout3.close();

    ifstream fin2;
    fin2.open("file2.txt"); // for even

    while (even)
    {


        fin2 >> store;
        cout << store<<endl ;
        even--;
    }

    fin2.close();
    fin2.open("file3.txt"); // for odd file
    while (odd)
    {
        fin2 >> store;
        cout << store << endl;
        odd--;
    }

    fin2.close();

    return 0;
}