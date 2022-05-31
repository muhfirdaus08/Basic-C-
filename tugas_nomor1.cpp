#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\nPROGRAM MENGHITUNG AKAR-AKAR PERSAMAAN KUADRAT" << endl;

    //deklarasi
    int a, b, c;
    double x1, x2, dalamakar;

    //inisialisasi
    a = 1; b = -4; c = -6;

    // mencari hasil dalam akar
    dalamakar = pow(b, 2) - (4*a*c);

    // mencari x1 dan x2
    x1 = ((-1*b) + (sqrt(dalamakar)))/(2*a);
    x2 = ((-1*b) - (sqrt(dalamakar)))/(2*a);

    cout << "Diketahui persamaan kuadrat : " << a << "x^2" << b << "x" << c << endl;
    cout << "\nMaka diperoleh : " << endl;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << "Nilai c = " << c << endl;
    cout << "\nMaka nilai akar-akarnya" << endl;
    cout << "Akar x1 = " << x1 << endl;
    cout << "Akar x2 = " << x2 << endl;

    return 0;
}
