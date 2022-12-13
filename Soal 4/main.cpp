#include <iostream>

using namespace std;

int main()
{
    int x, i, j;

    cout << "Masukkan Jumlah Deret:";
    cin >> x;

    for (i = 1; i <= x; i++)
    {
        for (j = x; j >= i; j--)
        {
            cout << i;
            if (i == j)
            {
                cout << "+";
            }
            else
            {
                cout << "-";
            }
        }

        cout << endl;
    }

    return 0;
}