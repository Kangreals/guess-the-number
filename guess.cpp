#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()
using namespace std;

int main()
{

    char konfirm;

    do
    {
        srand(time(0));
        int screatNumber = rand() % 100 + 1; // angka 1-100
        int gues;
        int attempts = 0;

        cout << "============= Tebak Angka =============\n";
        cout << "Pilih dari angka 1 - 100 untuk menebak angka!\n";

        do
        {
            // kode input angka
            cout << "tebakanmu= ";
            cin >> gues;
            attempts++;

            // kode tebakan
            if (gues < screatNumber)
                cout << "Terlalu Kecil!\n";
            else if (gues > screatNumber)
                cout << "Terlalu Besar!\n";
            else
                cout << "Selamat Anda Berhasil Dalam " << attempts << " Percobaan\n";

        } while (gues != screatNumber);

        // kode konfirmasi

        cout << "Apakah anda ingin mengulangi permainan tersebut?(Y/N)";
        cin >> konfirm;

        konfirm = toupper(konfirm);
        cout << endl;

    } while (konfirm == 'Y');
    
    cout << "terimakasih sudah bermain ^^\n";

    return 0;
}