#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string nama = "Nama saya adalah Daus";

    cout << "Sebelum dihilangin a : " << nama << endl << endl;

    // kita contohnya mau ilangin karakter a di string nama

    // untuk output 
    cout << "\n\nHasil kalau dihilangin a : " << nama << endl;

    //proses
    //pertama kita looping dulu
    for (int i = 0; i <= nama.length(); i++)
    {
        // kedua kita buat kondisi dimana kalau ketemu a di index ke-i maka kita skip atau jangan ditampilkan
        if (nama.at(i) == 'a'){
            //kita ganti pakai karakter kosong
            cout << "";
        }
        // selain dari itu kita tampilkan
        else {
            cout << nama.at(i);
        }
    }

    return 0;
}
