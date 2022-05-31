#include<iostream>
 
using namespace std;
 
int main(){
    int m[3][3]; //3x3 matrix
    float d = 0;
  
    cout<<"Masukkan Elemen Matriks:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            cout<<"["<<i<<"]"<<"["<<j<<"] : "; cin>>m[i][j];
        }
    
    cout<<"\nMatriks :\n";
    for (int i = 0; i < 3 ;i++){
		for (int j = 0; j < 3; j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
    //finding determinant of the matrix
    for(int i = 0; i < 3; i++)
        d = d + (m[0][i] * (m[1][(i+1)%3] * m[2][(i+2)%3] - m[1][(i+2)%3] * m[2][(i+1)%3]));
    
    if(d>0) //Condition to check if the derterminat is zero or not if zero than inverse dont exists
    {
        cout<<"\n\nInvers Matriks: \n";
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++)
                cout<<((m[(j+1)%3][(i+1)%3] * m[(j+2)%3][(i+2)%3]) - (m[(j+1)%3][(i+2)%3] * m[(j+2)%3][(i+1)%3]))/ d<<"\t\t\t\t"; //finding adjoint and dividing it by determinant
            cout<<"\n";
        }
    }
    else cout<<"Matriks tidak memiliki invers!";
    return 0;
}