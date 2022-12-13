/*PROGRAM OPERASI MATRIKS KELOMPOK 8
PRAKTIKUM ALGORITMA PRAKTIKIM*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


void header(){
    system("cls");
    printf("==============================================================\n");
    printf("|---------------------SARANGHAE BORAHE-----------------------|\n");
    printf("|-------------------------KELOMPOK 8-------------------------|\n");
    printf("|----------------------PROGRAM MATRIKS-----------------------|\n");
    printf("|                                                            |\n");
    printf("|-------|  SILAHKAN PILIH OPERASI YANG ANDA INGINKAN  |------|\n");
    printf("|------------------------------------------------------------|\n");
    printf("|   |                [1]. Penjumlahan                    |   |\n");
    printf("|   |                [2]. Perkalian                      |   |\n");
    printf("|   |                [3]. Transpose                      |   |\n");
    printf("|   |                [0]. exit                           |   |\n");
    printf("|------------------------------------------------------------|\n");
    printf("==============================================================\n");
}

double input(){
    double select;
    char term;
	int i = 0;
	do{

    if (scanf("%lf%c", &select, &term) != 2 || term != '\n') {
        clear_buffer();
        printf("\nInputan salah, Masukkan Bilangan Bulat Positif!"); 
    }
	else{
        if (select < 0) {
            printf("\nInputan salah, Masukkan Bilangan Bulat Positif!");
        }else{
            return select;
        } 
    }
	} while (i != 1);
	return select;
}
  
void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ; 
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
                printf("==> pilih (0/1):");
            }
            else {
                i = 1;
            }  
        }
        else if (x == 2) {
            if (hasil > 3 || hasil < 0){
                printf("INPUT SALAH!!PILIH ULANG YA!! ");
                printf("==> pilih (1-3):");
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
	int menu;
	char ulang;
	int x,m1[5][5],m2[5][5],fin[5][5],i,j,k;

	header();
    printf("Masukan pilihan : ");
    menu = validasi(2);
    system ("cls");

	switch (menu){
		case 0: 
            ending();
            break;
		case 1 : 
			printf("|---------------------------------------------|\n");
			printf("|-------|  OPERASI PENJUMLAHAN MATRIKS |------|\n");
			printf("|---------------------------------------------|\n");
		   
		    printf("Ordo matrix (input 1 angka):\n ");
		    x=input();
		    printf("\nInput nomor pertama Matrix :\n");
		    for(i=0; i<x; i++){
		    	printf("\n");
		    	for(j=0; j<x; j++){
		    		scanf("%d",&m1[i][j]);
				}
		    }
		    printf("\nInput nomor kedua Matrix :\n");
		    for(i=0; i<x; i++){
		    	printf("\n");
		    	for(j=0; j<x; j++){
		    		scanf("%d",&m2[i][j]);
		   		}
		    }
			system("cls");
			printf("\nHasil : \n");
		    for(i=0;i<x;i++){
		    	printf("\n");
		        for(j=0;j<x;j++){
		              fin[i][j] = m1[i][j] + m2[i][j];
		              printf("%d ",fin[i][j]);
		        }
		        printf("");
		    }
			break;
			
		case 2 :
			printf("|---------------------------------------------|\n");
			printf("|-------|  OPERASI PERKALIAN MATRIKS |--------|\n");
			printf("|---------------------------------------------|\n");
		   
		    printf("Ordo matrix (input 1 angka):\n ");
		    x=input();
		    printf("\nInput nomor pertama Matrix :\n");
		    for(i=0; i<x; i++){
		    	printf("\n");
		        for(j=0; j<x; j++){
		             scanf("%d",&m1[i][j]);
		          }
		    }
		    printf("\nInput nomor kedua Matrix :\n");
		    for(i=0; i<x; i++){
		    	printf("\n");
		        for(j=0; j<x; j++){
		             scanf("%d",&m2[i][j]);
		          }
		    }

			system("cls");
			printf("\nHasil :\n");
		    for(i=0; i < x; i++){
		    	printf("\n");
		        for(j=0; j < x; j++){
		        fin[i][j] = 0;
		      // find product
		        for (k = 0; k < x; k++){
		            fin[i][j] += m1[i][k] * m2[k][j];
		        }
		        printf("%d ",fin[i][j]);
		        }
		        printf("");
		    }
		    break;
		case 3 :
			printf("|---------------------------------------------|\n");
			printf("|-------|  OPERASI TRANSPOSE MATRIKS |--------|\n");
			printf("|---------------------------------------------|\n");

			printf("Ordo matrix (input 1 angka): ");
			x=input();
			printf("\ninput nomor pertama Matrix :\n");
			for(i=0; i<x; i++){
		    	printf("\n");
		        for(j=0; j<x; j++){
		             scanf("%d",&m1[i][j]);
		          }
		    }
			system("cls");
			printf("\n");
			printf("hasil tranpose  Matrix :\n");
			for(i = 0; i < x; i++){
			printf("\n");
			printf(" ");
		        for(j = 0; j < x; j++){
		              fin[i][j] = m1[j][i];
		              printf("%d ",fin[i][j]);
		          }
		          printf("\n");
		    }
			break;
		default :
			printf("INPUT SALAH!!PILIH ULANG YA!!\n");
            printf("Tekan enter\n");
            getch();
            main();
			break;
		}

	printf("\nApakah ingin mencoba kembali (y/n) ?\n");
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

void ending(){
    system ("cls");
    printf ("|----------------------------------|\n");
    printf ("|==KAMSAHAMNIDA ATAS KUNJUNGANNYA==|\n");
    printf ("|------------ANNYEONG >_< ---------|\n");
    printf ("|----------------------------------|\n");

    exit (0);
}