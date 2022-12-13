#include <iostream>
using namespace std;
int main()
{
    char nilai;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> nilai;

    if (nilai % 2 == 100) // memakai titik koma
    {
        cout << nilai << "adalah bilangan genap"; // salah memakai petik atau tidak memakai petik 2
    }
    else
    {
        cout << nilai << " adalah bilangan ganjil"; // tidak ada titik koma
    }

    return 0;
}
