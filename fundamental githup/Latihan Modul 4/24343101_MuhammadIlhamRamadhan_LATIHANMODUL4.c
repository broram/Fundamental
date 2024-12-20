/*
    Nama File		: modul4.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 12/10/2024
	Deskripsi		:Menentukan bilangan bulat ganjil atau genap
*/	

#include <stdio.h>
#include <stdlib.h>

/* jalankan program ini menggunakan console pauser atau tambahkan fungsi getch, system("pause") atau loop input Anda sendiri */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("Menentukan bilangan bulat ganjil atau genap  \n");
	printf("======================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("===============================\n");
    int bilangan, sisaBagi;

    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    sisaBagi = bilangan % 2;

    if(sisaBagi == 0){
        printf("Bilangan %d merupakan bilangan genap.", bilangan);
    } else{
        printf("Bilangan %d merupakan bilangan ganjil.", bilangan);
    }
}