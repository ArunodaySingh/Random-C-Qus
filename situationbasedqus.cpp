#include <bits/stdc++.h>
using namespace std;

class company
{
    string prod_name1 = "Laptop";
    string prod_name2 = "Dosktop";
    int qunatity1;
    int quantity2;
    int threshold_value = 10;

public:
    void addquantity1(int);
    void addquantity2(int);
    void order_placed(string, int);
    void pop_up_message();
};

void company::addquantity1(int q1)
{
    qunatity1 = q1;
    cout << "Prodouct quantity add successfully ";
}
void company::addquantity2(int q1)
{
    quantity2 = q1;
    cout << "Prodouct quantity add successfully ";
}

void company::order_placed(string prod, int q)
{
    if (prod == prod_name1)
    {
        cout << "Your order of " << prod_name1 << "Placed Sucessfully";
        qunatity1 -= q;
    }
    if (prod == prod_name2)
    {
        cout << "Your order of " << prod_name2 << "Placed Sucessfully";
        quantity2 -= q;
    }
}

void company::pop_up_message()
{

    if (qunatity1 < threshold_value)
    {
        cout << "Quantoty of the product less than threshold value " << endl;

        void addquantity1(int);
    }
    if (quantity2 < threshold_value)
    {
        cout << "Quantoty of the product less than threshold value " << endl;

        void addquantity2(int);
    }
}

int main()
{
    company obj;
    int n1, n2, q;
    string name;
    cout << "Enter the product quantity " << endl;
    cin >> n1;
    obj.addquantity1(n1);
    cout << "Enter the product quantity " << endl;
    cin >> n2;
    obj.addquantity1(n2);

    cout << "Enter the buy quantity & Name of the product " << endl;
    obj.order_placed(name, q);
    obj.pop_up_message();
    return 0;
}