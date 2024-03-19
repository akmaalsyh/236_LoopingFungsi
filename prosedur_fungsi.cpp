#include <iostream>
using namespace std;

int main()
{
    string nama;
    int nAdidas, nPuma, nNB, nCompass, nNike;
    int hAdidas = 300, hPuma = 250, hNB = 150, hNike = 350;
}

void input ()
{
    cin >> nAdidas;

    cout << "Masukkan jumlah puma = ";
    cin >> nPuma;

    cout << "Masukkan jumlah New Balance = ";
    cin >> nNB;

    cout << "Masukkan jumlah Compass = ";
    cin >> nCompass;

    cout << "Masukkan jumlah Nike = ";
    cin >> nNike;
}

int totalharga()
{
    return (nAdidas *hAdidas ) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike);
}

void display()
{
    cout << endl;
    cout << "======================" << endl;
    cout << endl;
    cout << "jumlah puma = " << nPuma << endl;
    cout << "jumlah adidas = " << nAdidas << endl;
    cout << endl;
    cout << "total harga - Rp. " << totalharga() << endl;
}