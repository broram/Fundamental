#include<stdio.h>
void biodata();

//fungsi rekursi untuk menara hanoi
void hanoi(int n, char asal, char tujuan, char bantu){
    if(n == 1){
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int main(){
    biodata();
    int cakram;

    //meminta input julam cakram dari pengguna
    printf("masukan jumlah cakram: ");
    scanf("%d", &cakram);

    //panggilan fungsi rekursi untuk menara hanoi
    printf("langkan langkah untuk memindahkan %d cakram: \n", cakram);
    hanoi(cakram, 'A', 'C', 'B'); //'A' adalah tiang asal, 'B' adalah tiang tujuan,'C' adalah tiang bantu
     
    return 0;
}
void biodata(){
	printf("program menghitung faktorial \n");
	printf("=================================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("==============================\n");
}