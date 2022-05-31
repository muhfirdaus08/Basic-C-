#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Masukan nama Anda : ";
    string nama;
    cin >> nama;

    cout << "IDENTITAS ---> " << nama << endl;
    cout << "TANGGAL LAHIR" << endl;
    cout << "Tanggal = ";
    int tanggal_lahir;
    cin >> tanggal_lahir;
    cout << "Bulan = ";
    int bulan_lahir;
    cin >> bulan_lahir;
    cout << "Tahun = ";
    int tahun_lahir;
    cin >> tahun_lahir;

    cout << "TANGGAL SAAT INI" << endl;
    cout << "Tanggal = ";
    int tanggal_ini;
    cin >> tanggal_ini;
    cout << "Bulan = ";
    int bulan_ini;
    cin >> bulan_ini;
    cout << "Tahun = ";
    int tahun_ini;
    cin >> tahun_ini;

    //proses

    if (tanggal_ini < tanggal_lahir){
        tanggal_ini += 30;
        bulan_ini--;
    }else if (bulan_ini < bulan_lahir){
        bulan_ini += 12;
        tahun_ini--;
    }

    //hasil

    cout << "UMUR ANDA SAAT INI" << endl;
    cout << tahun_ini - tahun_lahir << " Tahun ";
    cout << bulan_ini - bulan_lahir << " Bulan ";
    cout << tanggal_ini - tanggal_lahir << " Hari" << endl;
    
    return 0;
}
