#include <stdio.h>
#include <math.h>

void menuTiga();

int main() {
	int menu;

	do {
		printf("1. pingporolansudo\n");
		printf("2. sincostan\n");
		printf("3. hitung keliling dan luas\n");
		printf("4. Keluar\n");
		printf("========================\n");
		printf("Pilih Menu: "); scanf("%d", &menu);
		printf("\n");

		switch(menu) {
			case 1:

{
    int a, b, hasil, menu;
    float c, d, hasilbagi;
    printf("\tMenu :\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");

    printf("Pilih menu : ");
    scanf("%d",&menu);
    switch (menu){
      case 1:
        printf("\n1. Penjumlahan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("\nHasil:\t\t\t   %d\n", hasil);
        break;
    case 2:
        printf("\n1. Pengurangan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("\nHasil:\t\t\t   %d\n", hasil);
        break;
    case 3:
        printf("\n1. Perkalian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("\nHasil:\t\t\t   %d\n", hasil);
        break;
    case 4:
        printf("\n1. Pembagian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%f", &c);
        printf("Masukan bilangan kedua   : ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("\nHasil:\t\t\t   %.2f\n", hasilbagi);
        break;
      default:
        printf("Anda salah memilih menu.");
        break;
    }
    return 0;
}
				break;
			case 2:
//sincostan
				break;
			case 3:
//keliling
				break;
			case 4:
				break;
		}
	} while (menu != 4);

	return 0;
}


