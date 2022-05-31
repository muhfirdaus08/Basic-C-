#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int input, a = 5;
    cout<<"Input : "; cin>>input;
    for (int i = 0; i < input; i++){
        for (int j = 0; j < input; j++){
            // a = i-j;
            // //atau a = j-i;
            // if (a>0){
            //     cout<< setw(3) << a;
            // }
            // else{
            //     a = a*(-1);
            //     cout<< setw(3) << a;
            // }

            if (i==0 && j>=0 && j<=input-1 || j==0 && i>=0 && i<=input-1 || i==input-1 && j>=0 && j<=input-1){
                cout << a << " ";
            }else {
                cout << " ";
            }
        }
        cout<<endl;
    }
}