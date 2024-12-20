/* 	Nama File		: array2.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 19/10/2024
	Deskripsi		:Menjumlahkan Elemen Array
*/
#include <stdio.h>
void biodata();
int main() {
    biodata();
    int angka[5] = {10, 20, 30, 40, 50}; // Inisialisasi array dengan 5 nilai
    int jumlah = 0;

    // Loop untuk menjumlahkan semua elemen array
    for (int i = 0; i < 5; i++) {
        jumlah += angka[i]; 
    }

    // Tampilkan hasil penjumlahan
    printf("Jumlah semua elemen array: %d\n", jumlah);

    return 0;
}
void biodata(){
    printf("Menjumlahkan Elemen Array\n");
    printf("==========================================================\n");
    printf("Nama : Muhammad Ilham Ramadhan\n");
    printf("Nim  : 24343101\n");
    printf("==============================\n");
}
