#include <iostream>
using namespace std;

string username = "", password = "";
string username1 = "", password1 = "";
int pilihan = 0;
int saldo = 1000000;
int listrik = 150000, air = 100000, online = 200000;


void login();
void masuk();
void menu();
void profil();
void cekProfil();
void yesno();
void ubahUsername();
void ubahPassword();
void ubahPassword();
void cekSaldo();
void topUp();
void transfer();
void pembayaran();
void pembonline();
void pemblistrik();
void pembair();

int main(int argc, char const *argv[])
{
    login();
    return 0;
}

void masuk() {
    cout << "\nUsername anda : ";
    cin >> username;
    cout << "Password anda : ";
    cin >> password;
    
    if ((username == username1) && (password == password1)){
        cout << "Login berhasil, pilih menu di bawah ini" << endl;
        menu();
    }
    else {
        cout << "Username atau Password Salah atau Tidak Terdaftar" << endl;
        login ();
    }
} 

void daftar() {
    cout << "\nSelamat Datang di Menu Daftar" << endl;
    cout << "Username anda : ";
    cin >> username1;
    cout << "Password anda : ";
    cin >> password1;
    cout << "Terima Kasih, Silahkan Login" << endl;
    login();
}

void login() {
    while (pilihan != 3)
    {
        cout << "1. Masuk" << endl;
        cout << "2. Daftar" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilihan;

        switch (pilihan){
            case 1 : 
                masuk();
                break;
            case 2 : 
                daftar();
                break;
            case 3 :
                cout << "Sampai Jumpa :)" << endl;
                exit(0);
                break;       
        }
    }  
}

void cekProfil(){
    cout << "1. Cek Username" << endl;
    cout << "2. Cek Password" << endl;
    cout << "3. Kembali" << endl;
    cout << "Pilih : ";
    cin >> pilihan;

    switch (pilihan){
        case 1 : 
            cout << "Username anda : " << username1 << endl;
            break;
        case 2 :
            cout << "Password anda : " << password1 << endl;
            break;
        case 3 :
            menu();
            break;
    }
    profil();
}

void yesno (){
    cout << "Lanjutkan Perubahan ? Y/N : ";
    string yn;
    cin >> yn;

    if ((yn == "Y")|| (yn == "y")){
        cout << "Perubahan Berhasil" << endl;
    }   
    else if ((yn == "N")|| (yn == "n")){
        cout << "Perubahan Gagal" << endl;
    }
}

void ubahUsername(){
    cout << "Masukan Username Baru : ";
    cin >> username1;
    username = username1;
    yesno();
}

void ubahPassword(){
    cout << "Masukan Password Baru : ";
    cin >> password1;
    password = password1;
    yesno();
}
    
void ubahProfil(){
    cout << "1. Ubah Username" << endl;
    cout << "2. Ubah Password" << endl;
    cout << "3. Kembali" << endl;
    cout << "Pilih : ";
    cin >> pilihan;

    switch (pilihan){
        case 1 : 
            ubahUsername();
            break;
        case 2 :
            ubahPassword();
            break;
        case 3 :
            menu();
            break;
    }
    profil();
}

void profil(){
    cout << "1. Cek Profil" << endl;
    cout << "2. Ubah Profil" << endl;
    cout << "3. Kembali" << endl;
    cout << "Pilih : ";
    cin >> pilihan;
    switch (pilihan){
        case 1 : 
            cekProfil();
            break;
        case 2 :
            ubahProfil();
            break;
        case 3 :
            menu();
            break;
    }
    profil();
}

void cekSaldo(){
    cout << "Saldo Anda Adalah = " << saldo << endl;
    menu();
}

void topUp (){
    cout << "1. Lanjutkan TopUp" << endl;
    cout << "2. Kembali" << endl;
    cout << "Pilih = ";
    cin >> pilihan;
    cout << "\n";
    
    switch (pilihan){
        case 1 :
            cout << "Masukan Jumlah Saldo : ";
            int jumlah;
            cin >> jumlah;
    
            saldo = jumlah + saldo;
            
            cout << "Saldo Anda Sekarang Adalah = " << saldo << endl;
            menu();
            break;
            
        case 2 :
            menu();
            break;
    }    
}

void tranfer (){
    int idPenerima =0, nominal=0;
    cout << "1. Lanjutkan Transfer" << endl;
    cout << "2. Kembali" << endl;
    cout << "Pilih = ";
    cin >> pilihan;
    cout << "\n";
    
    switch (pilihan){
        case 1 :
            if (saldo == 0){
                cout << "Saldo Anda Kosong, Silahkan TopUp" << endl;
            }
            else {
                cout << "Masukan No. ID Penerima : ";
                cin >> idPenerima;
                cout << "Masukan Nominal         : ";
                cin >> nominal;
                cout << "Transfer Berhasil";

                saldo = saldo - nominal;

                cout << "No. ID Penerima        : " << idPenerima << endl;
                cout << "Nominal                : " << nominal << endl;
                cout << "Sisa Saldo Ando Adalah = " << saldo << endl;
            }
            menu();
            break;
        case 2 :
            menu();
            break;
    }
                
}

void pemblistrik (){
    cout << "Tagihan Listrik Anda  : " << listrik << endl;
    cout << "Lanjutkan Pembayaran ? Y/N : ";
    string yn;
    cin >> yn;

    if ((yn == "Y")|| (yn == "y")){
        if (saldo < listrik){
            cout << "Saldo Tidak Cukup, Silahkan TopUp" << endl;
            menu();
        }
        else {
            saldo = saldo - listrik;
            cout << "Pembayaran Berhasil" << endl;
        }  
    }   
    else if ((yn == "N")|| (yn == "n")){
        cout << "Pembayaran Gagal" << endl;
    }
    cout << "Sisa Saldo Anda " << saldo << endl;
    menu();
}

void pembair (){
    cout << "Tagihan Air Anda      : " << air << endl;
    cout << "Lanjutkan Pembayaran ? Y/N : ";
    string yn;
    cin >> yn;

    if ((yn == "Y")|| (yn == "y")){
        if (saldo < air){
            cout << "Saldo Tidak Cukup, Silahkan TopUp" << endl;
            menu();
        }
        else {
            saldo = saldo - listrik;
            cout << "Pembayaran Berhasil" << endl;
        }  
    }   
    else if ((yn == "N")|| (yn == "n")){
        cout << "Pembayaran Gagal" << endl;
    }
    cout << "Sisa Saldo Anda " << saldo << endl;
    menu();
}

void pembonline (){
    cout << "Tagihan Belanja Online Anda : " << online;
    cout << "Lanjutkan Pembayaran ? Y/N : ";
    string yn;
    cin >> yn;

    if ((yn == "Y")|| (yn == "y")){
        if (saldo < online){
            cout << "Saldo Tidak Cukup, Silahkan TopUp" << endl;
            menu();
        }
        else {
            saldo = saldo - listrik;
            cout << "Pembayaran Berhasil" << endl;
        }  
    }   
    else if ((yn == "N")|| (yn == "n")){
        cout << "Pembayaran Gagal" << endl;
    }
    cout << "Sisa Saldo Anda " << saldo << endl;
    menu();
}


void pembayaran (){
    cout << "1. Listrik" << endl;
    cout << "2. Air" << endl;
    cout << "3. Belanja Online" << endl;
    cout << "4. Kembali" << endl;
    cout << "Pilih = ";
    cin >> pilihan;
    cout << "\n";
    
    switch (pilihan){
        case 1 :
            cout << "Masukan Nomor Pelanggan : ";
            int nomor;
            cin >> nomor;
            cout << "Nomor Pelanggan Anda  : " << nomor << endl;
            pemblistrik();
            break;
            
        case 2 :
            cout << "Masukan Nomor Pelanggan : ";
            cin >> nomor;
            cout << "Nomor Pelanggan Anda  : "<< nomor << endl;
            pembair();
            break;
            
        case 3 :
            cout << "Masukan Nomor Pembayaran   : ";
            cin >> nomor;
            cout << "Nomor Pembayaran Anda    : "<< nomor << endl;
            pembonline();
            break;
            
        case 4 :
            menu();
            break;
    }
    pembayaran();
}

void menu (){
    cout << "1. Cek Saldo" << endl;
    cout << "2. Top Up Saldo" << endl;
    cout << "3. Transfer" << endl;
    cout << "4. Pembayaran" << endl;
    cout << "5. Profil" << endl;
    cout << "6. Logout" << endl;
    cout << "Pilih : ";
    cin >> pilihan;
    cout << "\n";
    
    switch (pilihan){
        case 1 :
            cekSaldo();
            break;
        case 2 :
            topUp();
            break;
        case 3 :
            tranfer();
            break;
        case 4 :
            pembayaran();
            break;
        case 5 :
            profil();
            break;
        case 6 :
            login();
            break;         
    }
}
