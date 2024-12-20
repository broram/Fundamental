/* 	Nama File		:latihan3.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 19/10/2024
	Deskripsi		:program menghitung faktorial
*/
#include<stdio.h>

void biodata(){
	printf("program menghitung faktorial \n");
	printf("=================================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("==============================\n");
}
// Fungsi untuk menghitung faktorial secara rekursif
int hitungFaktorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * hitungFaktorial(n - 1);
    }
}

int main()
{
    biodata();
    int n;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    // Memanggil fungsi dan menampilkan hasil
    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah: %d\n", n, faktorial);

    return 0;
}