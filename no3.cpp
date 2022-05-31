#include <iostream>
using namespace std;

int main()
{
    int multiverse, person;
    char letter;
    cout<<"Masukkan Jumlah Universe\t: "; cin>>multiverse;
    cout<<"Jumlah Orang tiap Universe\t: "; cin>>person;
    cout<<"Masukkan Huruf\t\t\t: "; cin>>letter;
    cout<<endl;

    int temp = person;
    string name[multiverse][person]; 

    //Input
    for (int i = 0; i < multiverse; i++)
    {
        cout<<"Universe "<<i+1<<endl;
        for (int j = 0; j < person; j++)
        {
            cout<<"Orang Ke-"<<j+1<<" : "; getline(cin>>ws, name[i][j]);
        }
        cout<<endl;
    }

    //Output
    for (int i = 0; i < multiverse; i++)
    {
        person = temp;
        cout<<"Universe "<<i+1<<endl;
        for (int j = 0; j < person; j++)
        {
            int k = 0;
            for (k = j+1; k < person; k++)
            {
                if (name[i][j] == name[i][k])
                {
                    person--;
                    for (int l = k; l < person; l++)
                        name[i][l] = name[i][l+1];
                    k--;
                }
            }
            for (int l = 0; l < name[i][j].length(); l++)
            {
                if (name[i][j][l] == letter || name[i][j][l] == (letter - 32) || name[i][j][l] == (letter + 32))
                {
                    for (int m = l; m < name[i][j].length(); m++)
                        name[i][j][m] = name[i][j][m+1];
                }
            }
            cout<<name[i][j]<<endl;
        }
        cout<<endl;
    }
}