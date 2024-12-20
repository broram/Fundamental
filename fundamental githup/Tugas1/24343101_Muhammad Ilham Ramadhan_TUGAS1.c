#include<stdio.h>

int main(){

//deklarasi fariabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;

//input nilai dari pengguna
    printf("masukan nilai tugas(0-100): ");
    scanf("%f", &nilaiTugas);
    printf("masukan nilai UTS(0-100): ");
    scanf("%f", &nilaiUTS);
    printf("masukan nilai UAS(0-100): ");
    scanf("%f", &nilaiUAS);

//hiting nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

//tentukan apakah lulus atau tidak
    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);

//Output hasil
    printf("\nNilai akhir anda: %.2f\n", nilaiAkhir);

    if(lulus)
        printf("selamat anda lulus\n");
    else 
        printf("maaf, anda tidak lulus\n");

    return 0;
}