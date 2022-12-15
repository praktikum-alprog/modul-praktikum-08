/* PROGRAM SORTING & SEARCHING KELOMPOK 8 
PRAKTIKUM ALGORITMA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void menu_sorting();
void menu_searching();
void insertionSort();
void bubbleSort();
void quickSort();
void sorting();
void searching();
void ending();
int main();
int validasiPilihan();
int inputValidasi();
int sequentialSearch();
int binarySearch();

// VALIDASI
int validasiPilihan() {
    int i = 0;
    int salah = 0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array = strlen(angka);

    for(i = 0; i < array; i++){
        if(angka[i] >= 48 && angka [i] <= 57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

        }else{
            salah += 1;
        }
    }

    if(salah > 0){
        printf("INPUT TIDAK SESUAI\n\n");
        printf("Masukan Pilihan Menu : ");
        validasiPilihan();
    }else{
        val = atoi(angka);
        if(val >= 1 && val <= 3){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n\n");
            printf("Masukan Pilihan Menu : ");
            validasiPilihan();
        }
    }
}

int inputValidasi(){
    int i = 0;
    int salah = 0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array = strlen(angka);

    for(i = 0; i < array; i++){
        if(angka[i] >= 48 && angka[i] <= 57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

        }else{
            salah += 1;
        }
    }

    if(salah > 0){
        printf("INPUT TIDAK SESUAI\n\n");
        printf("Masukan input ulang : ");
        inputValidasi();
    }else{
        val = atoi(angka);
        return val;
    }
}

// SORTING
void insertionSort(int angka[], int n){
	int i, j, patokan;

	for(i = 1; i < n; i++){
		patokan = angka[i];
		j = i - 1;
		while(j >= 0 && angka[j] > patokan){
			angka[j+1] = angka[j];
			j--;
		}
		angka[j+1] = patokan;
	}
}

void bubbleSort(int angka[], int n){
	int i, j, temp;

	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(angka[j] > angka[j+1]){
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
}

void quickSort(int angka[], int terkecil, int terbesar){
	int i, j, patokan, temp;

	if(terkecil < terbesar){
		patokan = terkecil;
    	i = terkecil;
    	j = terbesar;
    	while(i < j){
    		while(angka[i] <= angka[patokan] && i < terbesar){
            	i++;
    		}
    		while(angka[j] > angka[patokan]){
            	j--;
            }
        	if(i < j){
        		temp = angka[i];
        		angka[i] = angka[j];
        		angka[j] = temp;
        	}
    	}

		temp = angka[patokan];
    	angka[patokan] = angka[j];
    	angka[j] = temp;
    	quickSort(angka, terkecil, j-1);
    	quickSort(angka, j+1, terbesar);
	}
}

void sorting(int angka[], int n){
    int i, j, data = 1, pilihan;
    clock_t waktu;
    double waktu1, waktu2, waktu3;

    waktu = clock();
    insertionSort(angka, n);
    waktu = clock() - waktu;
    waktu1 = (double)(waktu) / CLOCKS_PER_SEC;

    waktu = clock();
    bubbleSort(angka, n);
    waktu = clock() - waktu;
    waktu2 = (double)(waktu) / CLOCKS_PER_SEC;

    waktu = clock();
    quickSort(angka, 0, n-1);
    waktu = clock() - waktu;
    waktu3 = (double)(waktu) / CLOCKS_PER_SEC;

    for(i = 0; i < n; i++){
        printf("\t");
        for(j = 0; j <= 0; j++){
            printf("data ke-%d = ", data);
            printf("%d ", angka[i]);
            data += 1;
        }
        printf("\n");
    }

    printf("\n+-----------------------------------+\n");
    printf("        Waktu Yang Dibutuhkan        \n");
    printf("+-----------------------------------+\n");
    printf("Insertion Sort  = %.12f \n", waktu1);
    printf("Bubble Sort     = %.12f \n", waktu2);
    printf("Quick Sort      = %.12f \n", waktu3);
    printf("+-----------------------------------+\n\n");

    if(waktu1 < waktu2 && waktu1 < waktu3){
        printf("Insertion Sort Lebih Cepat \ndari Bubble Sort dan Quick Sort\n\n");
    }
    else if(waktu2 < waktu1 && waktu2 < waktu3){
        printf("Bubble Sort Lebih Cepat \ndari Insertion Sort dan Quick Sort\n\n");
    }
    else{
        printf("Quick Sort Lebih Cepat \ndari Insertion Sort dan Bubble Sort\n\n");
    }

}

// MENU SORTING
void menu_sorting(){
    int pilihan, i, n;

    printf("=========================================\n\n");
    printf("                 SORTING                 \n\n");
    printf("=========================================\n");
    printf("\t1. 1000 Data\n");
    printf("\t2. 16000 Data\n");
    printf("\t3. 64000 Data\n");
    printf("\t4. Kembali\n");
    printf("-----------------------------------------\n");
    printf("Masukkan pilihan : ");
    pilihan = inputValidasi();

    if(pilihan > 0 && pilihan<4){
        if(pilihan == 1){
            int angka[1000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }
            sorting(angka, n);
        }else if(pilihan == 2){
            int angka[16000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }

            sorting(angka, n);
        }else{
            int angka[64000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }

            sorting(angka, n);

        }

        printf("=====================================\n");
        printf("1.Ulangi  2. Menu Utama    3.Exit\n");
        printf("-------------------------------------\n");
        printf("Masukan Pilihan Anda : ");
        pilihan = validasiPilihan();
        system("cls");

        switch(pilihan){
	    	case 1:
       			menu_sorting();
        		break;
        	case 2:
        		main();
        		break;
	    	case 3:
        		ending();
        		break;
        }

    }else if(pilihan == 4){
        system("cls");
        main();
    }else{
        system("cls");
        printf("=========================================\n");
        printf("          INPUTKAN DENGAN BENAR          \n");
        menu_sorting();
    }
}

// SEARCHING
int sequentialSearch(int angka[], int n, int angka_dicari){
	int i;

    for(i = 0; i < n; i++){
        if(angka[i] == angka_dicari){
             return i;
        }
    }
    return -1;
}

int binarySearch(int angka[], int terkecil, int terbesar, int angka_dicari){

    if(terbesar >= terkecil){
        int mid = terkecil + (terbesar - terkecil)/2;
        if(angka[mid] == angka_dicari){
            return mid;
        }
        if(angka[mid] > angka_dicari){
            return binarySearch(angka, terkecil, terbesar-1, angka_dicari);
            return binarySearch(angka, mid+1, terbesar, angka_dicari);
        }
   }
   return -1;
}

void searching(int angka[], int n){
    int i, j, angka_dicari, counter = 0, data = 1;
    clock_t waktu;
    double waktu1, waktu2;

    quickSort(angka, 0, n-1);

    for(i = 0; i < n; i++){
        printf("\t");
        for(j = 0; j <= 0; j++){
            printf("data ke-%d = ", data);
            printf("%d ", angka[i]);
            data += 1;
        }
        printf("\n");
    }

    printf("\n+-----------------------------------+\n");
    printf("\nMasukkan Angka Yang Ingin Dicari : ");
    angka_dicari = inputValidasi();

    waktu = clock();
    sequentialSearch(angka, n, angka_dicari);
    waktu = clock() - waktu;
    waktu1 = (double)(waktu) / CLOCKS_PER_SEC;

    waktu = clock();
    binarySearch(angka, 0, n-1, angka_dicari);
    waktu = clock() - waktu;
    waktu2 = (double)(waktu) / CLOCKS_PER_SEC;

    for(i = 0; i < n; i++){
        if(angka[i] == angka_dicari){
            printf("\nAngka Ditemukan Pada Index : %d", i+1);
            counter++;
        }
    }

    if(counter == 0){
        printf("\nTidak Ada Angka Yang Sesuai!");
    }

    printf("\n+-----------------------------------+\n");
    printf("        Waktu Yang Dibutuhkan        \n");
    printf("+-----------------------------------+\n");
    printf("Sequential Search  = %.12f \n", waktu1);
    printf("Binary Search      = %.12f \n", waktu2);
    printf("+-----------------------------------+\n\n");

    if(waktu1 < waktu2){
        printf("Sequential Search Lebih Cepat \ndari Binary Search\n\n");
    }
    else if(waktu1 > waktu2){
        printf("Binary Search Lebih Cepat \ndari Sequential Search\n\n");
    }else{
        printf("Binary Search Sama \ndengan Sequential Search\n\n");
    }
}

// MENU SEARCHING
void menu_searching(){
    int pilihan, i, n;

    printf("=========================================\n\n");
    printf("                SEARCHING                \n\n");
    printf("=========================================\n");
    printf("\t1. 1000 Data\n");
    printf("\t2. 16000 Data\n");
    printf("\t3. 64000 Data\n");
    printf("\t4. Kembali\n");
    printf("-----------------------------------------\n");
    printf("Masukkan pilihan : ");
    pilihan = inputValidasi();

    if(pilihan > 0 && pilihan < 4){
        if(pilihan == 1){
            int angka[1000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }

            searching(angka, n);
        }else if(pilihan == 2){
            int angka[16000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }

            searching(angka, n);
        }else{
            int angka[64000];

            system("cls");
            n = sizeof(angka) / sizeof(angka[0]);
            srand((unsigned) time(NULL));

            for(i = 0; i < n; i++){
                angka[i] = rand();
            }

            searching(angka, n);
        }

        printf("=====================================\n");
        printf("1.Ulangi  2. Menu Utama    3.Exit\n");
        printf("-------------------------------------\n");
        printf("Masukan Pilihan Anda : ");
        pilihan = validasiPilihan();
        system("cls");

        switch(pilihan){
	    	case 1:
        		menu_searching();
        		break;
        	case 2:
        		main();
        		break;
	    	case 3:
        		ending();
        		break;
        }
    }else if(pilihan == 4){
        system("cls");
        main();
    }else{
        system("cls");
        printf("=========================================\n");
        printf("          INPUTKAN DENGAN BENAR          \n");
        menu_searching();
    }

}

// MAIN MENU
int main(){
    int pilihan;

	system("COLOR F0");
	
    printf("=========================================\n\n");
    printf("         PROGRAM SORTING & SEARCHING     \n");
    printf("                 KELOMPOK 8               \n");
    printf("\n");
	printf("[1]. 2205551006 Made Nandika Saka Putra\n");
	printf("[2]. 2205551018 Sukma Wati\n");
	printf("[3]. 2205551035 Chrismana Rimbunta N\n");
	printf("[4]. 2205551038 Alfredo Felix Maruba\n");
	printf("[5]. 2205551039 Maxwell Rafael Paendong\n");
	printf("[6]. 2205551143 I Gusti Candra Arisma\n\n");
    printf("=========================================\n");
    printf("\t1. Sorting\n");
    printf("\t2. Searching\n");
    printf("\t3. Exit\n");
    printf("-----------------------------------------\n");
    printf("Masukkan Pilihan : ");
    pilihan = inputValidasi();

    if(pilihan == 1){
        system("cls");
        menu_sorting();
    }else if(pilihan == 2){
        system("cls");
        menu_searching();
    }else if(pilihan == 3){
        system("cls");
        ending();
    }else{
        system("cls");
        printf("=========================================\n");
        printf("          INPUTKAN DENGAN BENAR          \n");
        main();
    }

    system("pause");
    system("cls");

    return 0;
}

// ENDING
void ending(){
	printf("+==================================+\n");
	printf("|   TERIMAKASIH ATAS KUNJUNGANNYA  |\n");
	printf("+==================================+\n");
	
}
