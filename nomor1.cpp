#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ada 10 anak yang bernama hinata, kageyama, tanaka, kenma, oikawa, nishinoya, yaku, bokuto, sawamura, aone

    int hinata, kageyama, tanaka, kenma, oikawa, nishinoya, yaku, bokuto, sawamura, aone;

    // jumlah bola yang dibeli masing-masing anak
    // kecuali aone

    oikawa = 6; hinata = 2; nishinoya = 7; yaku = 8;
    kageyama = 3; kenma = 5; bokuto = 9; sawamura = 10; tanaka = 4; 

    cout << "=== Kantong Bola Sebelum Tertukar ===" << endl;
    cout << "Hinata : " << hinata << endl;
    cout << "Kageyama : " << kageyama << endl;
    cout << "Tanaka : " << tanaka << endl;
    cout << "Kenma : " << kenma << endl;
    cout << "Oikawa : " << oikawa << endl;
    cout << "Nishinoya : " << nishinoya << endl;
    cout << "Yaku : " << yaku << endl;
    cout << "Bokuto : " << bokuto << endl;
    cout << "Sawamura : " << sawamura << endl;

    // karena buru-buru mereka membawa kantong belanja yang ada didekatnya

    // aone sebagai variabel bantu untuk penukaran

    aone = oikawa;
    oikawa = hinata;
    hinata = kenma;
    kenma = yaku;
    yaku = kageyama;
    kageyama = tanaka;
    tanaka = nishinoya;
    nishinoya = bokuto;
    bokuto = sawamura;
    sawamura = kageyama - 2;    
    kageyama = aone;

    cout << "=== Kantong Bola Setalah Tertukar ===" << endl;
    cout << "Hinata : " << hinata << endl;
    cout << "Kageyama : " << kageyama << endl;
    cout << "Tanaka : " << tanaka << endl;
    cout << "Kenma : " << kenma << endl;
    cout << "Oikawa : " << oikawa << endl;
    cout << "Nishinoya : " << nishinoya << endl;
    cout << "Yaku : " << yaku << endl;
    cout << "Bokuto : " << bokuto << endl;
    cout << "Sawamura : " << sawamura << endl;

    return 0;
}
