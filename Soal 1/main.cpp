#include <iostream>
#include <string>

using namespace std; // typo namespaceds

int main()
{
    char Karakter = 'A';              // tidak ada variable A sebelum mendeclare variable Karakter atau tidak ada petik
    char Universitas[7] = "UNSIA";    // petik yang salah dan typo Universit4s dan kesalahan pada pointer serta tidak ada deklarasi jumlah char
    char Jurusan[15] = "Informatika"; // char tidak memakai petik 2
    string firstName = "Budi";        // nama variable diawali angka

    cout << Karakter << endl;
    cout << Universitas << endl; // tidak ada titik koma
    cout << Jurusan << endl;
    cout << firstName << endl;

    return 0;
}
