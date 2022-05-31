#include <iostream>
using namespace std;

int main() {
    int a, b, n, jumlah = 0;

    cout << "Masukin nilai akhir (x) : ";
    cin >> a;
    cout << "Masukin selish (y) : ";
    cin >> b;
    cout << "Masukin banyak barisan(n) : ";
    cin >> n;

    // aritmatika

    cout << "\nSeluruh bilangan aritmatika : ";
    for (int i=a+((n-1)*b); i>=a; i-=b){
        cout << i << " ";
        jumlah += i;
    }
    cout << endl << "Jumlah : " << jumlah << endl;
    jumlah = 0; 

    //prima

    cout << "\nSeluruh bilangan prima : ";
    for (int i=a+((n-1)*b); i>=a; i-=b){
        int hitung = 0;
        for (int j=1; j<=i; j++){
            if (i%j == 0){
                hitung++;
            }
        }
        if (hitung == 2){
            cout << i << " ";
            jumlah += i;
        }          
    }
    cout << endl << "Jumlah : " << jumlah << endl;
    jumlah = 0; 

    //fibonanci

    cout << "\nSeluruh bilangan fibonanci : ";
    for (int i=a+((n-1)*b); i>=a; i-=b){
        int angka1 = 0; 
        int angka2 = 1;
        for (int j=i; j>0; j--){
            int sum = angka1 + angka2;
            angka1 = angka2;
            angka2 = sum;
            if (sum == i){
                cout << sum << " ";
                if (i==1){
                    cout << a << " "; 
                }
                jumlah = jumlah += sum;
            }
        }
    }
    if (a == 1){
        jumlah += a;
    }
    cout << endl << "Jumlah : " << jumlah << endl;
    return 0;
}
