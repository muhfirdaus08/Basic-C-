#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Masukkan waktu dalam detik (nyata) : ";
    int detik;
    cin >> detik;

    // NYATA
    cout <<  detik/3600 <<" jam " << (detik%3600)/60 <<" menit " << (detik%3600)%60 << " detik" << endl;

    // LAIN
    // 5 menit di dunia nyata = 1 menit di dunia lain
    // 10 menit di dunia nyata = 2 menit di dunia lain
    // artinya waktu di dunia nyata 5 kali lebih lambat daripada dunia lain
    cout <<  (detik/5)/3600 <<" jam " << ((detik/5)%3600)/60 <<" menit " << ((detik/5)%3600)%60 << " detik" << endl;

    // BAWAH
    // 1 hari di dunia nyata = 3 jam di dunia bawah
    // 24 jam di dunia nyata = 3 jam di dunia bawah
    // artinya waktu di dunia nyata 8 kali lebih lambat daripada dunia lain
    cout <<  (detik/8)/3600 <<" jam " << ((detik/8)%3600)/60 <<" menit " << ((detik/8)%3600)%60 << " detik" << endl;

    return 0;
}
