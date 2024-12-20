/* 	Nama File		:latihan2.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 19/10/2024
	Deskripsi		:program hitung keliling lingkarang
*/
#include <stdio.h>

void biodata(){
	printf("program hitung keliling lingkaran\n");
	printf("=================================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("==============================\n");
}
// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari)
{
    return 2 * 3.14 * jariJari;
}

int main()
{
    biodata();
    float jariJari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}
