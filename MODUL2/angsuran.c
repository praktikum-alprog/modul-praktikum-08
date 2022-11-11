#include <stdio.h>
#include <windows.h>
#include <string.h>


void header(){
    printf("==========================================================================\n");
    printf("|--------------------- PROGRAM MENGHITUNG ANGSURAN-----------------------|\n");
    printf("|-------------------------------KELOMPOK 8-------------------------------|\n");
    printf("\n");
    printf("|   |                           [1]. UMA                              |  |\n");
    printf("|   |                           [2]. MAX                              |  |\n");
    printf("|   |                           [3]. CANDRA                           |  |\n");
    printf("|   |                           [4]. RIMBUN                           |  |\n");
    printf("|   |                           [5]. AL                               |  |\n");
    printf("|   |                           [6]. NANDIKA                          |  |\n");
    printf("|   |--------------------Made Wahyu Adwitya Pramana-------------------|  |\n");
    printf("==========================================================================\n");
}

void ending(){
    system ("cls");
    printf ("|----------------------------------|\n");
    printf ("|==KAMSAHAMNIDA ATAS KUNJUNGANNYA==|\n");
    printf ("|------------ANNYEONG >_< ---------|\n");
    printf ("|----------------------------------|\n");

    exit (0);
}

void hitung_bunga(int pokok_pinjaman, float besar_bunga, int lama_pinjaman){
    double angsuran_pokok;
    double total_bunga = 0;
    double total_angsuran = 0;
    system("cls");
    puts("||=======================================================================||");
    puts("|| \t\t\t Rincian Pembayaran Angsuran \t\t\t ||");
    puts("||=======================================================================||");
    puts("||-----------------------------------------------------------------------||");
    puts("|| Bulan \t Bunga \t\t Angsuran pokok\t\tAngsuran perbulan||");
    puts("||-----------------------------------------------------------------------||");
    for(int i = 1; i <= lama_pinjaman; i++){
        angsuran_pokok = pokok_pinjaman / lama_pinjaman;
        double bunga = (pokok_pinjaman -((i-1) * angsuran_pokok)) * besar_bunga / 12;
        total_bunga += bunga;
        total_angsuran += angsuran_pokok + bunga; 
        printf("|| %d \t\t Rp. %.2f \t Rp. %.2f \t\t Rp. %.2f \t ||\n", i, bunga, angsuran_pokok, angsuran_pokok + bunga);
    }
    puts("||-----------------------------------------------------------------------||");
    printf("|| Total Bunga \t\t\t\t\t\t Rp. %.2f \t ||\n", total_bunga);
    printf("|| Total Angsuran \t\t\t\t\t Rp. %.2f\t ||\n", total_angsuran);
    puts("||-----------------------------------------------------------------------||");   
}

void clean(){
    while(getchar() != '\n');
}

int validasi(float *var, char nama[100])
{
    if (scanf("%f", var) != 1)
    {
        clean();
        printf("Hanya masukkan angka!, masukkan ulang %s! : ", nama);
        validasi(var, nama);
    }
    return 0;
}

int valid(int x){

    double pil = 0;
    int hasil;
    int i = 0;

    do{
        pil = scanf("%d", &hasil);
        while (getchar()!='\n'){
            /* tidak ada proses*/
        }
        
        if (pil == 0 || hasil > 1 || hasil < 0){
            printf("INPUT SALAH!!PILIH ULANG YA!! ");
            printf("==> pilih (0/1):");
        }
        else{
            i = 1;
        }
        
    }while (i != 1);

    return hasil;
}


int main(){
    float pokok_pinjaman, lama_pinjaman, besar_bunga;
    char ulang;
    char nama [100];

        header();
        puts("||=======================================================================||");
        puts("|| \t\t\t Program Perhitungan Angsuran \t\t\t ||");
        puts("||=======================================================================||");

        printf("||jumlah Pinjaman : ");
        strcpy(nama, "pokok pinjaman");
        validasi(&pokok_pinjaman, nama);
        printf("||Besar Bunga (%%) :");
        strcpy(nama, "besar bunga");
        validasi(&besar_bunga, nama);
        printf("||lama pinjaman (bulan) :");
        strcpy(nama, "lama pinjaman");
        validasi(&lama_pinjaman, nama);
        hitung_bunga(pokok_pinjaman, (float)besar_bunga / 100, lama_pinjaman);

        clean();
        printf("Apakah ingin mencoba kembali (y/n) ?\n");
        printf("1. ya\n");
        printf("0. no\n");
        printf("pilih : \n");
        ulang = valid(0);

        if (ulang == 1){
            main();
        }
        else{
            ending();
        }  
    
    return 0;
}
