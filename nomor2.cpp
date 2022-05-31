#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Masukkan waktu dalam detik (nyata) : ";
    int input_detik_nyata;
    cin >> input_detik_nyata;

    // nyata
    int jam = input_detik_nyata/3600;
    int modulo = input_detik_nyata%3600;
    int menit = modulo/60;
    int detik = modulo%60;

    cout << jam <<" jam " << menit <<" menit " << detik << " detik" << endl;
 
    //lain
    // 5 menit di dunia nyata = 1 menit di dunia lain
    // 10 menit di dunia nyata = 2 menit di dunia lain
    // artinya waktu di dunia nyata 5 kali lebih lambat daripada dunia lain
    
    int selisih_waktu = input_detik_nyata/5;
    jam = selisih_waktu/3600;
    modulo = selisih_waktu%3600;
    menit = modulo/60;
    detik = modulo%60;

    cout << jam <<" jam " << menit <<" menit " << detik << " detik" << endl;

    // bawah
    // 1 hari di dunia nyata = 3 jam di dunia bawah
    // 24 jam di dunia nyata = 3 jam di dunia bawah
    // artinya waktu di dunia nyata 8 kali lebih lambat daripada dunia lain

    selisih_waktu = input_detik_nyata/8;
    jam = selisih_waktu/3600;
    modulo = selisih_waktu%3600;
    menit = modulo/60;
    detik = modulo%60;

    cout << jam <<" jam " << menit <<" menit " << detik << " detik" << endl;

    return 0;
}
