#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void pembuka(){
    printf("\t_____________________________________\n");
    printf("\t|      PROGRAM MENARA HANOI         |\n");
    printf("\t|          KELOMPOK 08              |\n");
    printf("\t|___________________________________|\n");
}

void penutup(){
    system("cls");
    printf("\n\n\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|   - -   T  E  R  I  M  A  K  A  S  I  H   - -  |\n");
	printf("\t|   - -     S A M P A I       J U M P A  - -     |\n");
    printf("\t|________________________________________________|\n\n");
}

int validasi(int x){
    double pilihan = 2;
    int hasil;
    int i = 0;

    do{
        pilihan = scanf("%d", &hasil);
        
        while (getchar() !='\n'){
		}
        
        if (pilihan == 0 || hasil < 1){
            printf("Input dinyatakan Tidak Sesuai! Mohon pilih kembali dengan benar! : ");
        }
        else if (x == 1){
            if (hasil > 2){
                printf("Input dinyatakan Tidak Sesuai! Mohon pilih kembali dengan benar! : ");
            }
            else {
                i = 1;
            }  
        }
        else{
            i = 1;
        } 
    } while (i != 1);
    return hasil;
}

void menara_hanoi(int cakram, int c1, int c2, int c3){ 
  	if (cakram == 1) {
    	printf("Pindahkan cakram dari tiang %d => tiang %d\n",c1,c3);  
	}
	else {
        menara_hanoi(cakram-1,c1,c3,c2);
        menara_hanoi(1,c1,c2,c3);
        menara_hanoi(cakram-1,c2,c1,c3);
    }
}

int main(){
    int pilihan, cakram, hasil, ulang;
    system("cls");
    system("color 0");
    pembuka();
    printf("Mohon Pilih Salah Satu Menu Yang Telah Tersedia :\n");
    printf("1. Metode Hanoi Rekursif\n");
    printf("2. Metode Hanoi Iteratif\n");
    printf("3. Keluar Dari Program\n");

    printf("=>Pilih : ");
    pilihan = validasi(0);

    switch (pilihan){
        case 1:
            system("cls");
            printf("\t\t-----------------------------\n");
            printf("\t\t--  METODE HANOI REKURSIF  --\n");
            printf("\t\t-----------------------------\n\n");

            printf("Masukkan jumlah cakram yang diinginkan : ");
            cakram = validasi(0);

            printf("\nLangkah - langkah pemindahan cakram : \n\n");
            menara_hanoi(cakram, 1, 2,3);
            
            hasil = pow(2, cakram)-1;
            printf ("\nJumlah langkah minimum = %d langkah\n",hasil);

            break;

        case 2:
            system("cls");
            printf("\t\t-----------------------------\n");
            printf("\t\t--  METODE HANOI ITERATIF  --\n");
            printf("\t\t-----------------------------\n\n");

            printf("Masukkan jumlah cakram yang diinginkan : ");
            cakram = validasi(0);
            printf("%d", cakram);

            printf("\nLangkah - langkah pemindahan cakram : \n\n");

            hasil=pow(2, cakram)-1;

            for (int i = 1; i <= hasil; i++){
                printf("Pindahkan cakram dari tiang %d => tiang %d\n",((i&(i-1))%cakram )+ 1,(((i|(i-1))+1)%cakram) + 1); 
            }

            printf ("\nJumlah langkah minimum = %d langkah\n",hasil);

            break;
        case 3:
            penutup();
        
        default:
            printf("Input dinyatakan Tidak Sesuai! Mohon pilih kembali dengan benar!\n");
            printf("Tekan Enter...");
            getch();
            main();
            break;
        }
        
        	printf("\t ________________________________________________ \n");
        	printf("\t|                                                |\n");
        	printf("\t|    Apakah anda ingin mengulang program ini?    |\n");
	        printf("\t|________________________________________________|\n\n");
	        printf("\t           1. Ya               2. Tidak           \n");
	
	        printf("\n\n\t          Masukkan pilihan Anda : ");
        ulang = validasi(1);

        if (ulang == 1){
            main();
        }
        else{
            penutup();
        }
    return 0;
}