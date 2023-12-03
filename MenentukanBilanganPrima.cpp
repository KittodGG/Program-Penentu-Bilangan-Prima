#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int angka, prima = 1;

    cout << "Masukkan sebuah bilangan: ";
    cin  >> angka;

    if (angka <= 1)
    {
        prima = 0; // Bilangan negatif dan 1 bukan bilangan prima
    }
    else
    {
        for (int i = 2; i * i <= angka; i++)
        {
            if (angka % i == 0)
            {
                prima = 0; // Jika n terbagi oleh i, maka n bukan bilangan prima
                break; // Keluar dari loop karena sudah tidak mungkin bilangan prima
            }
        }
    }

    if (prima)
    {
        cout << angka << " adalah bilangan prima." << endl;
        cout << endl;
    }
    else
    {
        cout << angka << " bukan bilangan prima." << endl;
        cout << endl;
    }

    system("pause");
    return 0;
}
