#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int input,baris,kolom;
    cout<<"Banyak Pola Bilangan : ";
    cin>>input;
    cout<<" "<<endl;
    for (baris = 0; baris < input; baris++){
        for (kolom = 0; kolom < input; kolom++) {
            cout<< setw(3) << abs(baris-kolom) << " ";
    }   
        cout<<"\n";
    }
    return 0;
}
