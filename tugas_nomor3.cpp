#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float vAsep = 12, vUcup = 18, s = 7.2, t = 5;

    float selisih_jarak = vUcup * (t/60);

    float t_papasan = (s-selisih_jarak)/(vAsep + vUcup);

    float s_papasan = vUcup * t_papasan;

    cout << "\nAsep dan Ucup berpapasan pada jarak : " << endl;
    cout << s_papasan << " km + " << selisih_jarak << " km = " << s_papasan+selisih_jarak << " km dari rumah Ucup\n" << endl;

    return 0;

}


