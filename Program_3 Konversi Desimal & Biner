/* PROGRAM KONVERSI BINER & DESIMAL KELOMPOK 8 
PRAKTIKUM ALGORITMA*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void konversiBiner();
void konversiDesimal();
void ending();
int main();
int validasiPilihan();
int inputBilangan();
int inputBiner();

// VALIDASI
int validasiPilihan(){
	int i = 0;
	int salah = 0;
	char angka[100];
	int val;
	int array;
	
	scanf("%s", &angka);
	array = strlen(angka);
	
	for(i = 0; i < array; i++){
		if(angka[i] >= 48 && angka[i] <= 57){ // PEMBATAS PADA ASCII DIMANA 48-57 BERNILAI "0-9"
			
		}else{
			salah += 1;
		}
	}
	
	if(salah > 0){
		printf("INPUT TIDAK SESUAI!\n");
		printf("Masukkan input kembali : ");
		validasiPilihan();
	}else{
		val = atoi(angka);
		if(val >= 1 && val <= 3){
			return val;
		}else{
			printf("INPUT TIDAK SESUAI!\n");
			printf("Masukkan input kembali : ");
			validasiPilihan();
		}
	}
}

int inputBilangan(){
	int i = 0;
	int salah = 0;
	char angka[100];
	int val;
	int array;
	
	scanf("%s", &angka);
	array = strlen(angka);
	
	for(i = 0; i < array; i++){
		if(angka[i] >= 48 && angka[i] <= 57){ // PEMBATAS PADA ASCII DIMANA 48-57 BERNILAI "0-9"
			
		}else{
			salah += 1;
		}
	}
	
	if(salah > 0){
		printf("INPUT TIDAK SESUAI!\n");
		printf("Masukkan input kembali : ");
		inputBilangan();
	}else{
		val = atoi(angka);
		return val;
	}
}

int inputBiner(){
	int i = 0;
	int salah = 0;
	char angka[100];
	int val;
	int array;
	
	scanf("%s", &angka);
	array = strlen(angka);
	
	if(strlen(angka) > 10){
		salah += 1;
	}
	
	for(i = 0; i < array; i++){
        if(angka[i] >= 48 && angka[i] <= 49){ // PEMBATAS PADA ASCII DIMANA 48-49 BERNILAI "0-1"

        }else{
            salah += 1;
        }
    }
    
    if(salah > 0){
    	printf("INPUT TIDAK SESUAI!\n");
		printf("Masukkan input kembali : ");
		inputBiner();
	}else{
		val = atoi(angka);
		return val;
	}
}

// MAIN
int main(){
	system("COLOR F0");
	menu();
	system("pause");
	return 0;
	
}

// MENU
void menu(){
	int pilih;
	
	printf("===================================================\n\n");
	printf("             PROGRAM KONVERSI BILANGAN             \n");
	printf("                  DESIMAL & BINER                  \n");
	printf("                     KELOMPOK 8                    \n");
	printf("\n");
	printf("[1]. 2205551006 Made Nandika Saka Putra\n");
	printf("[2]. 2205551018 Sukma Wati\n");
	printf("[3]. 2205551035 Chrismana Rimbunta N\n");
	printf("[4]. 2205551038 Alfredo Felix Maruba\n");
	printf("[5]. 2205551039 Maxwell Rafael Paendong\n");
	printf("[6]. 2205551143 I Gusti Candra Arisma\n\n");
	printf("===================================================\n\n");
	printf("\t1. Mengkonversi Bilangan Desimal ke Biner\n");
	printf("\t2. Mengkonversi Bilangan Biner ke Desimal\n");
	printf("\t3. Keluar                                \n");
	printf("---------------------------------------------------\n");
	
	printf("Masukkan Pilihan Anda: ");
	pilih = validasiPilihan();
	system("cls");
	
	switch(pilih){
		case 1:
			konversiBiner();
			break;
		case 2:
			konversiDesimal();
			break;
		case 3:
			ending();
			break;
	}
}

void konversiBiner(){
	int pilih;
	int angka, sisa, biner, basis;
	int desimal;
	
	printf("===================================================\n\n");
	printf("             PROGRAM KONVERSI BILANGAN             \n");
	printf("                  DESIMAL & BINER                  \n\n");
    printf("---------------------------------------------------\n");
    printf("             KONVERSI DESIMAL KE BINER             \n");
    printf("===================================================\n\n");
    
	printf("Mengkonversi Bilangan Desimal Ke Bilangan Biner\n");
    printf("Masukkan Angka Desimal: ");
    angka = inputBilangan();
    
    biner = 0;
    basis = 1;
    
	while(angka != 0){
    	sisa = angka%2;
    	biner = biner+sisa*basis;
    	angka = angka/2;
    	basis = basis*10;    	
	}
	printf("\nHasil konversi bilangan diatas adalah %d\n", biner);
	
	printf("\n===================================================\n");
    printf("     1.Ulangi      2.Kembali       3.Exit\n");
    printf("---------------------------------------------------\n");
    
	printf("Masukan Pilihan Anda : ");
    pilih = validasiPilihan();
    system("cls");
    
    switch(pilih){
    	case 1:
    		konversiBiner();
    		break;
    	case 2:
    		menu();
    		break;
    	case 3:
    		ending();
    		break;
	}
}

void konversiDesimal(){
	int pilih;
	int angka, sisa, biner, basis;
	int desimal;
	
	printf("===================================================\n\n");
	printf("             PROGRAM KONVERSI BILANGAN             \n");
	printf("                  DESIMAL & BINER                  \n\n");
    printf("---------------------------------------------------\n");
    printf("             KONVERSI BINER KE DESIMAL             \n");
    printf("===================================================\n\n");
    
    printf("Mengkonversi Bilangan Biner ke Bilangan Desimal\n");
    printf("Masukkan Bilangan Biner: ");
    biner = inputBiner();
    
    desimal = 0;
    basis = 1;
    
	while(biner != 0){
        sisa = biner%10;
        desimal = desimal+sisa*basis;
        biner = biner/10;
        basis = basis*2;
    }
    printf("\nHasil konversi bilangan diatas adalah %d\n",desimal);
    
    printf("\n===================================================\n");
    printf("     1.Ulangi      2.Kembali       3.Exit\n");
    printf("---------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilih = validasiPilihan();
    system("cls");

	switch(pilih){
	    case 1:
        	konversiDesimal();
	    	break;
	    case 2:
	    	menu();
	    	break;
	    case 3:
	    	ending();
	    	break;
    }
}

// ENDING
void ending(){
	printf("+==================================+\n");
	printf("|   TERIMAKASIH ATAS KUNJUNGANNYA  |\n");
	printf("+==================================+\n");
	
}

