#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

void biodata(){
	printf(" game teba-2tebakan \n");
	printf("=================================================================\n");
	printf("Nama : Muhammad Ilham Ramadhan\n");
	printf("Nim  : 24343101\n");
	printf("==============================\n");
}
void mudah(){
    int angkaTebakan, tebakan, kesempatan, mainLagi;
    char pilihan;
    printf("mudah2 kesempatan 5 dengan angkatebakan 50");
    //menginisialisasi generator angka acak
    srand(time(0));
    //pilihan angka acak anatara 1 dan 100
        angkaTebakan = rand() % 50 + 1;
        kesempatan = 5 ;

        //memulai permainan dengan struktur kontrol loop
        while(kesempatan > 0){
            printf("\nmasukan tebakan anda: ");
            scanf("%d", &tebakan);

            //struktur kontrol if-else untuk mengevaluasi tebakan
            if(tebakan > angkaTebakan){
                printf("tebakan anda terlalu tinggi!");
            }else if(tebakan < angkaTebakan){
                printf("tebakan anda terlalu kecil!");
            }else{
                printf("tebakan anda benar!!");
                break;
            }
            kesempatan--; //mengurangi jumlah kesempatan 
            printf("kesempatan tersisa %d\n", kesempatan);;
        }
        if(kesempatan == 0){
        printf("maaf, anda kehabisan kesempatan, angka yang benar adalah %d\n", angkaTebakan);
        }
    }

void lumayan(){
    int angkaTebakan, tebakan, kesempatan, mainLagi;
    char pilihan;
    printf("lumayan kesempatan 5 dengan angkatebakan 100");
    //menginisialisasi generator angka acak
    srand(time(0));
    //pilihan angka acak anatara 1 dan 100
        angkaTebakan = rand() % 100 + 1;
        kesempatan = 5 ;    

        //memulai permainan dengan struktur kontrol loop
        while(kesempatan > 0){
            printf("\nmasukan tebakan anda: ");
            scanf("%d", &tebakan);

            //struktur kontrol if-else untuk mengevaluasi tebakan
            if(tebakan > angkaTebakan){
                printf("tebakan anda terlalu tinggi!");
            }else if(tebakan < angkaTebakan){
                printf("tebakan anda terlalu kecil!");
            }else{
                printf("tebakan anda benar!!");
                break;
            }
            kesempatan--; //mengurangi jumlah kesempatan 
            printf("kesempatan tersisa %d\n", kesempatan);
        }
        if(kesempatan == 0){
        printf("maaf, anda kehabisan kesempatan, angka yang benar adalah %d\n", angkaTebakan);
        }
    }

void susah(){
    int angkaTebakan, tebakan, kesempatan, mainLagi;
    char pilihan;
    printf("susah kesempatan 5 dengan angkatebakan 150");
    //menginisialisasi generator angka acak
    srand(time(0));
    //pilihan angka acak anatara 1 dan 100
        angkaTebakan = rand() % 150 + 1;
        kesempatan = 5 ;
        //memulai permainan dengan struktur kontrol loop
        while(kesempatan > 0){
            printf("\nmasukan tebakan anda: ");
            scanf("%d", &tebakan);

            //struktur kontrol if-else untuk mengevaluasi tebakan
            if(tebakan > angkaTebakan){
                printf("tebakan anda terlalu tinggi!");
            }else if(tebakan < angkaTebakan){
                printf("tebakan anda terlalu kecil!");
            }else{
                printf("tebakan anda benar!!");
                break;
            }
            kesempatan--; //mengurangi jumlah kesempatan 
            printf("kesempatan tersisa %d\n", kesempatan);
        }
        if(kesempatan == 0){
        printf("maaf, anda kehabisan kesempatan, angka yang benar adalah %d\n", angkaTebakan);
        }
    }


int main(){
    int level;
    biodata();

    printf("pilih level yang antum mau\n");
    printf("1. mudah\n");
    printf("2. lumayan\n");
    printf("3. susah\n");
    printf("4. berhenti dari game membosankan\n");
    scanf("%d", &level);

    switch(level){
        case 1:
            mudah();
            break;
        case 2:
            lumayan();
            break;
        case 3:
            susah();
            break;
        case 4:
            exit(0);
        default:  
            printf("obsi tidak tidak ada, cobalagiii");

    }

    return 0;
}