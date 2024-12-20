/* 	Nama File		:latihan1.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 19/10/2024
	Deskripsi		:Menentukan luas persegi panjang
*/
#include<stdio.h>

void biodata(){
	printf("Menentukan luas persegi panjang \n");
	printf("=================================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("==============================\n");
}

//fungsi untuk menghitung luas persegi panajang 
int hitungLuasPP(int panjang, int lebar){
    return panjang * lebar;
}

int main(){
    biodata();
    int panjang, lebar;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    //memangggil fungsi dan menampilkan hasil
    int luas = hitungLuasPP(panjang, lebar);
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}