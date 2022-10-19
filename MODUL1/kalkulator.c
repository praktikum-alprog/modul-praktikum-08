/** –––––––––––––––––––––––––––––––––––––––––––––
* PROGRAM  KALKULATOR KELOMPOK 8 
* ––––––––––––––––––––––––––––––––––––––––––––––*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
  
void header(){
    system("cls");
    printf("==============================================================\n");
    printf("|---------------------SARANGHAE BORAHE-----------------------|\n");
    printf("|-------------------------KELOMPOK 8-------------------------|\n");
    printf("|--------------------PROGRAM KALKULATOR----------------------|\n");
    printf("|                                                            |\n");
    printf("|-------|  SILAHKAN PILIH OPERASI YANG ANDA INGINKAN  |------|\n");
    printf("|------------------------------------------------------------|\n");
    printf("|   |                [1]. Penjumlahan                    |   |\n");
    printf("|   |                [2]. Pengurangan                    |   |\n");
    printf("|   |                [3]. Perkalian                      |   |\n");
    printf("|   |                [4]. Pembagian                      |   |\n");
    printf("|   |                [5]. modulus                        |   |\n");
    printf("|   |                [0]. exit                           |   |\n");
    printf("|------------------------------------------------------------|\n");
    printf("==============================================================\n");
}

void ending(){
    system ("cls");
    printf ("|----------------------------------|\n");
    printf ("|==KAMSAHAMNIDA ATAS KUNJUNGANNYA==|\n");
    printf ("|------------ANNYEONG >_< ---------|\n");
    printf ("|----------------------------------|\n");

    exit (0);
}

int validasi(int x){
    double pil = 5;
    int hasil;
    int i = 0;

    do{
        pil = scanf("%d", &hasil);
        if (pil < 1){   
            getchar();
            printf(" INPUT SALAH!!PILIH ULANG YA!! ");
            printf("==> pilih :");
        }
        else if (x == 1){
            if (hasil > 1 || hasil < 0){
                printf("INPUT SALAH!!PILIH ULANG YA!! ");
                printf("==> pilih (0/1) :");
            }
            else {
                i = 1;
            }  
        }
        else if(x == 2){
            if (hasil < 1){
                printf("BILANGAN KEDUA TIDAK BOLEH NOL(0) / KURANG DARI NOL(0) YAAA!! ");
                printf("==> SILAHKAN MASUKKAN ULANG :");
            }
            else{
                i = 1;
            }
        }
        else if (x == 3)
        {
            if (hasil > 5 || hasil < 0){
                printf("INPUT SALAH!!PILIH ULANG YA!! ");
                printf("==> pilih (0-5) :");
            }
            else{
                i = 1;
            }
        }
        else{
            i = 1;
        } 
    } while (i != 1);

    return hasil;
}


int main(){
    int bil1, bil2, hasil,pil;
    char operasi, ulang;

    header();

    printf("Masukan pilihan : \n");
    pil = validasi(3);
    system ("cls");
    
    if (pil !=0){
        printf("Masukan bilangan pertama: \n");
        bil1 = validasi(0);
        printf("Masukan bilangan kedua: \n");
        
        if (pil == 4 || pil == 5){
            bil2 = validasi(2);
        }
        else {
            bil2 = validasi(0);    
        }   
    }
    
    switch(pil) {
        case 0: 
            ending();
            break;
        case 1 :
            system ("cls");
            hasil = bil1 + bil2;
            operasi='+';
            printf("Hasil penjumlahan dari ");
            printf("%i + %i = %i\n", bil1, bil2, hasil);
            break;

        case 2 : 
            system ("cls");
            hasil = bil1 - bil2;
            operasi='-';
            printf("Hasil pengurangan dari ");
            printf("%i - %i = %i\n", bil1, bil2, hasil); 
            break;

        case 3: 
            system ("cls");
            hasil = bil1 * bil2;
            operasi='*';
            printf("Hasil perkalian dari ");
            printf("%i * %i = %i\n", bil1, bil2, hasil);
            break;

        case 4 : 
            system("cls");
            hasil = bil1 /bil2;
            operasi='/';
            printf("Hasil pembagian dari ");
            printf("%i / %i = %i\n", bil1, bil2, hasil);
            break;

        case 5:
            system ("cls");
            hasil = bil1 % bil2;
            operasi='%';
            printf("modulus dari ");
            printf("%i %% %i = %i\n", bil1, bil2, hasil);
            break;

        default :
            printf("INPUT SALAH!!PILIH ULANG YA!!\n");
            printf("Tekan enter\n");
            getch();
            main();
            break;
    }

    printf("Apakah ingin mencoba kembali (y/n) ?\n");
    printf("1. ya\n");
    printf("0. no\n");
    printf("pilih : \n");
    ulang = validasi(1);

    if (ulang == 1){
        main();
    }
    else{
        ending();
    }  

return 0;
} 












