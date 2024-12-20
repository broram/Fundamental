/* 	Nama File		: latihan8.c
	Programmer		: Muhammad Ilham Ramadhan 24343101
	Tgl. pembuatan	: 15/11/2024
	Deskripsi		: Program Mengelola Data Mahasiswa dengan Struct 
*/
#include <stdio.h>
#include <string.h>

void biodata(){
    printf(" Program Mengelola Data Mahasiswa dengan Struct \n");
    printf("==========================================================\n");
    printf("Nama : Muhammad Ilham Ramadhan\n");
    printf("Nim  : 24343101\n");
    printf("==============================\n");
}
//defenisi tipe struct secara global
struct tanggal {
    int hari, bulan, tahun;
};

struct mahasiswa {
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

int main() {
    biodata();
    // mengisi data kedalam variabel struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "Muhammad Ali");
    data_mahasiswa.nim = 20220002;
    data_mahasiswa.tanggal_lahir.hari = 11;
    data_mahasiswa.tanggal_lahir.bulan = 10;
    data_mahasiswa.tanggal_lahir.tahun = 2002;

    // menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("Nomer Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir: %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari,
           data_mahasiswa.tanggal_lahir.bulan,
           data_mahasiswa.tanggal_lahir.tahun);

    return 0;
}
