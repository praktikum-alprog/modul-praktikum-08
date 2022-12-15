#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//=====================================================================
// VALIDASI
int inputbilangan(){
    int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=0;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ // PEMBATAS PADA ASCII DIMANA 48-57 BERNILAI "0-9"

        }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("INPUT TIDAK SESUAI\n");
        printf("Masukkan input kembali : ");
        inputbilangan();
    }else{
        val = atoi(angka);
        if(val>=1){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n");
            printf("Masukkan input kembali : ");
            inputbilangan();
        }
    }
}

int validasiPilihan(){
	int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=0;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ // PEMBATAS PADA ASCII DIMANA 48-57 BERNILAI "0-9"

        }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("INPUT TIDAK SESUAI\n");
        printf("Masukkan input kembali : ");
        validasiPilihan();
    }else{
        val = atoi(angka);
        if(val>=1 && val<=3){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n");
            printf("Masukkan input kembali : ");
            validasiPilihan();
        }
    }
}

//=====================================================================
//  FUNGSI & PROSEDUR

void menu(); // deklarasi menu

int rekursiffibo(int j){
	int fibonancci;
	if(j==1||j==2){
		return 1;
	}else{
		fibonancci=rekursiffibo(j-1)+rekursiffibo(j-2);
		return fibonancci;
	}
}

void iteratiffibo(){
	int n,i;
	int f1=1;
	int f2=1;
	int hasil;
	int pilihan;

	printf("===================================================\n\n");
	printf("              PROGRAM DERET FIBONACCI               \n\n");
    printf("---------------------------------------------------\n");
    printf("                      ITERATIF                    \n");
	printf("===================================================\n\n");
	printf("Masukkan Jumlah Deret yang Diinginkan: ");
	n=inputbilangan();

	printf("\n---------------------------------------------------\n");
    printf("DERET FIBONACCI : \n");
	for(i=1;i<=n;i++){
		if(i==1){
			hasil=f1;
		}else if(i==2){
			hasil=f2;
		}else{
			hasil=f1+f2;
			f1=f2;
			f2=hasil;
		}
		printf("%d ",hasil);
	}
    printf("\n\n===================================================\n");
    printf("     1.Ulangi      2.Kembali       3.Exit\n");
    printf("---------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system ("cls");
    

	switch(pilihan){
	    case 1:
        iteratiffibo();
	    break;
	    case 2:
	    menu();
	    break;
	    default:
	    exit(0);
	    break;
    }
}

void rekursif(){
    int pilihan;
	int n,j;
	printf("===================================================\n\n");
	printf("              PROGRAM DERET FIBONACCI              \n\n");
    printf("---------------------------------------------------\n");
    printf("                     REKURSIF                      \n");
	printf("===================================================\n\n");
	printf("Masukkan Jumlah Deret yang diinginkan: ");
	n=inputbilangan();

    printf("\n---------------------------------------------------\n");
	printf("DERET FIBONACCI : \n");
	for(j=1;j<=n;j++){
		printf("%d ", rekursiffibo(j));
		}
    printf("\n\n===================================================\n");
    printf("     1.Ulangi      2.Kembali       3.Exit\n");
    printf("---------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system ("cls");
    

	switch(pilihan){
	    case 1:
        rekursif();
	    break;
	    case 2:
	    menu();
	    break;
	    default:
	    exit(0);
	    break;
    }
}

//=====================================================================
//MAIN
int main(){
    system("COLOR F0");
    menu();
    system("pause");
    return 0;

}

//=====================================================================
// MENU

void menu(){
	int pilih;

	printf("===================================================\n\n");
	printf("              PROGRAM DERET FIBONACCI              \n\n");
	printf("===================================================\n\n");
	printf("\t1. Deret Fibonancci dengan Fungsi Rekursif\n");
	printf("\t2. Deret Fibonancci dengan Fungsi Iteratif\n");
	printf("\t3. Keluar\n");
	printf("---------------------------------------------------\n");
	printf("Masukkan Pilihan: ");
	pilih=validasiPilihan();
	system ("cls");
	

	if(pilih==1){
		rekursif();
	}
	else if(pilih==2){
		iteratiffibo();
	}
	else{
		exit(0);
	}

}
