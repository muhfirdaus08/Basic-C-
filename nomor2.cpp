#include <iostream>
using namespace std;

//variabel global
int a;

int max_value(int matriks[][100], int baris, int kolom);
void compare_max(int matriks_pertama[][100], int matriks_kedua[][100]);
int min_value(int matriks[][100], int baris, int kolom);
void compare_min(int matriks_pertama[][100], int matriks_kedua[][100]);
void print_matriks(int matriks[][100], int baris, int kolom);


int main(int argc, char const *argv[])
{   
	//variabel local
	int matriks1 [100][100];
	int matriks2 [100][100];

	//input ordo
	printf("\n\nInput ordo matriks persegi = ");
	scanf("%d", &a);

	//input matriks 1
    printf("\nInput nilai matriks pada matriks 1\n");
    for (int row = 0; row < a; row++) {
        for (int column = 0; column < a; column++) {
            printf("Matriks 1 [%d][%d] = ", row, column);
            scanf("%d", &matriks1[row][column]);
        }
    }


    //input matriks 2
    printf("\nInput nilai matriks pada matriks 2\n");
    for (int row = 0; row < a; row++) {
        for (int column = 0; column < a; column++) {
            printf("Matriks 2 [%d][%d] = ", row, column);
            scanf("%d", &matriks2[row][column]);
        }
    }

	//output
	printf("\nHasil input matriks :\n");
    printf("\nMatriks 1\n");
	print_matriks(matriks1, a, a);
    printf("Matriks 2\n");
	print_matriks(matriks2, a, a);

	printf("\n\n===Hasil Penentuan Angka Terbesar dan Terkecil Pada Dua Matriks==\n");
	printf("\nAngka terbesar dari Matriks 1 dan Matriks 2 adalah '");
	compare_max(matriks1, matriks2);
	printf("\nAngka terkecil dari Matriks 1 dan Matriks 2 adalah '");
	compare_min(matriks1, matriks2);

	printf("\n\n");

	return 0;
}


void print_matriks(int matriks[][100], int baris, int kolom)
{
    for (int row = 0; row < baris; row++) {
		printf("[");
        for (int column = 0; column < kolom; column++) {
            printf("%d", matriks[row][column]);
			if (column < (kolom - 1)){
				printf(",");
			}else {
				printf("]");
			}
		}
        printf("\n");
    }
	printf("\n");
}

int max_value(int matriks[][100], int baris, int kolom)
{
    int column = 0, row = 0;
    int max = matriks[0][0];

    for (row = 0; row < baris; row++) {
        for (column = 0; column < kolom; column++) {
            if (matriks[row][column] > max) {
                max = matriks[row][column];
            }
        }
    }
    return max;
}

void compare_max(int matriks_pertama[][100], int matriks_kedua[][100])
{
	int max_matriks1 = max_value(matriks_pertama, a, a);
	int max_matriks2 = max_value(matriks_kedua, a, a);

	if (max_matriks1 > max_matriks2){
		printf("%d' yang berada pada Matriks 1", max_matriks1);
	}else if (max_matriks1 < max_matriks2){
		printf("%d' yang berada pada Matriks 2", max_matriks2);
	}else if (max_matriks1 == max_matriks2){
		printf("%d' yang berada pada Matriks 1 dan 2", max_matriks1);
	}
}


int min_value(int matriks[][100], int baris, int kolom)
{
    int column = 0, row = 0;
    int min = matriks[0][0];

    for (row = 0; row < baris; row++) {
        for (column = 0; column < kolom; column++) {
            if (matriks[row][column] < min) {
                min = matriks[row][column];
            }
        }
    }
    return min;
}

void compare_min(int matriks_pertama[][100], int matriks_kedua[][100])
{
	int min_matriks1 = min_value(matriks_pertama, a, a);
	int min_matriks2 = min_value(matriks_kedua, a, a);

	if (min_matriks1 < min_matriks2){
		printf("%d' yang berada pada Matriks 1", min_matriks1);
	}else if (min_matriks1 > min_matriks2){
		printf("%d' yang berada pada Matriks 2", min_matriks2);
	}else if (min_matriks1 == min_matriks2){
		printf("%d' yang berada pada Matriks 1 dan 2", min_matriks1);
	}
}


