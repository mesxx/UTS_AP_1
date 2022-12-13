#include <iostream>

using namespace std;

int main()
{
    int itemCode, price, discount, result;
    string itemName;

    cout << "Masukkan Kode Item: ";
    cin >> itemCode;

    switch (itemCode)
    {
    case 5:
        itemName = "Book Cases";
        price = 150000;
        discount = price * 0.05;
        result = price - discount;
        break;

    case 4:
        itemName = "Computer";
        price = 7000000;
        discount = price * 0.15;
        result = price - discount;
        break;

    case 3:
        itemName = "Envelopes";
        price = 15000;
        discount = price * 0.1;
        result = price - discount;
        break;

    case 2:
        itemName = "Paper";
        price = 50000;
        discount = price * 0;
        result = price - discount;
        break;

    default:
        itemName = "Table";
        price = 1000000;
        discount = price * 0.1;
        result = price - discount;
        break;
    }

    cout << "\nNama Item: " << itemName << "\n";
    cout << "Harga: " << price << "\n";
    cout << "Discount: " << discount << "\n";
    cout << "Harga setelah discount: " << result;

    return 0;
}