#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void judul();
void menu();
void menu();
int validasi();
void akhir();
void nilai();

void judul(){
//	system("cls");
	printf("\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|        PROGRAM PENGHITUNGAN NILAI AKHIR        |\n");
	printf("\t|             K E L O M P O K   0 8              |\n");
	printf("\t|________________________________________________|\n");
}

void kelompok(){
	printf("\t ________________________________________________ \n");
	printf("\t|NIM KELOMPOK	                                   |\n");
	printf("\t|2205551006 Made Nandika Saka Putra              |\n");
	printf("\t|2205551018 Sukma Wati                           |\n");
	printf("\t|2205551035 Chrismana Rimbunta N                 |\n");
	printf("\t|2205551038 Alfredo Felix Maruba                 |\n");
	printf("\t|2205551039 Maxwell Rafael Paendong              |\n");
	printf("\t|2205551143 I Gusti Candra Arisma                |\n");
	printf("\t|________________________________________________|\n");
	
}

int validasi (int x){
    
    double pilihan = 0;
    int hasil;
    int i = 0;
    
    
    //perulangan validasi
    do{
    	pilihan = scanf("%d", &hasil);
    	
    	while(getchar() != '\n'){
    		//tidak ada proses
		}
    	
    	if (pilihan == 0){
    		printf("Input Invalid!! Pilih Dengan Benar : ");
		}
		else if (x==1){
			if (hasil > 2 || hasil <= 0){
				printf("Input Invalid!! Pilih Dengan Benar : ");
			}
			else{
				i = 1;
			}
		}
		else if (x==2){
			if (hasil > 15 || hasil <= 0){
				printf("Input Invalid!! Pilih Dengan Benar : ");
			}
			else{
				i = 1;
			}
		}
		else if (x==3){
			if (hasil > 100 || hasil <= 0){
				printf("Input Invalid!! Pilih Dengan Benar : ");
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

void menu(){
	int utama;
	
	system("color 0F");
	judul();
	kelompok();
	
	printf("\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|      1. Hitung Nilai Akhir                     |\n");
	printf("\t|                                                |\n");
	printf("\t|      2. Keluar                                 |\n");
	printf("\t|________________________________________________|\n\n");
	
	printf("\t  Masukkan menu yang ingin dipilih : ");
	utama = validasi(1);
	if (utama == 1){
		system("cls");
		nilai();
	}else if (utama == 2){
		system("cls");
		printf("\n\t ________________________________________________ \n");
		printf("\t|                                                |\n");
		printf("\t|     - - T  E  R  I  M  A  K  A  S  I  H - -    |\n");
		printf("\t|________________________________________________|\n\n");
	}else {
		system("cls");
		printf ("\n\t -- Maaf pilihan yang anda masukkan tidak valid --\n");
		menu();
	}
}

void nilai(){
	int pilih, reset;
	float tgs1, tgs2, tgs3, quiz, uts, uas;
	float hadir, nilai_kehadiran, nilai_tugas, nilai_quiz, nilai_uts, nilai_uas, nilai_akhir;
	
	

	
	//jumlah kehadiran
	
        system("cls");
		system("color 0E");
        judul();
		printf("\n\t Masukkan jumlah kehadiran anda: ");
		hadir = (float) validasi(2);
		
	
	// nilai tugas 1

		system("cls");
		system("color 03");
		judul();
		printf("\n\t Masukkan nilai tugas pertama anda : ");
		tgs1 = (float) validasi(3);
	
    
	// nilai tugas 2
	
		system("cls");
		system("color 03");
		judul();
		printf("\n\t Masukkan nilai tugas kedua anda : ");
		tgs2 = (float) validasi(3);
		
	
	// nilai tugas 3
	
		system("cls");
		system("color 03");
		judul();
		printf("\n\t Masukkan nilai tugas ketiga anda : ");
		tgs3 = (float) validasi(3);
		
	
	// nilai quiz
	
		system("cls");
		system("color 0A");
		judul();
		printf("\n\t Masukkan nilai quiz anda : ");
		quiz = (float) validasi(3);
		
	
	// nilai UTS
	
		system("cls");
		system("color 0B");
		judul();
		printf("\n\t Masukkan nilai UTS anda : ");
		uts = (float) validasi(3);
	
	
	// nilai UAS	
	
		system("cls");
		system("color 0C");
		judul();
		printf("\n\t Masukkan nilai UAS anda : ");
		uas = (float) validasi(3);

	
	// Hitung bobot masing-masing nilai
    nilai_kehadiran = hadir / 15 * 100 * 0.05;
    nilai_tugas = ((tgs1 + tgs2 + tgs3) / 3) * 0.2;
    nilai_quiz = quiz * 0.15;
    nilai_uts = uts * 0.3;
    nilai_uas = uas * 0.3;
    nilai_akhir = nilai_kehadiran + nilai_tugas + nilai_quiz + nilai_uts + nilai_uas;
	
	//output nilai angka
	system("cls");
	system("color 8F");
	judul();
	printf("\n\t        ------------------------------------\n");
	printf("\t             Nilai akhir anda adalah %.2f   \n", nilai_akhir);
	printf("\t        ------------------------------------\n");
	
	
	
	//output nilai huruf
	if (nilai_akhir >= 80 && nilai_akhir <= 100){
        printf("\t               Indeks Nilai Huruf = A ");
    }else if (nilai_akhir >= 75 && nilai_akhir < 80){
        printf("\t               Indeks Nilai Huruf = B+ ");
	}else if (nilai_akhir >= 65 && nilai_akhir < 75){
        printf("\t               Indeks Nilai Huruf = B ");
    }else if (nilai_akhir >= 60 && nilai_akhir < 65){
        printf("\t               Indeks Nilai Huruf = C+ ");
	}else if (nilai_akhir >= 55 && nilai_akhir < 60){
        printf("\t               Indeks Nilai Huruf = C ");
    }else if (nilai_akhir >= 50 && nilai_akhir < 55){
        printf("\t               Indeks Nilai Huruf = D+ ");
	}else if (nilai_akhir >= 45 && nilai_akhir < 50){
        printf("\t               Indeks Nilai Huruf = E+ ");
    }else if (nilai_akhir >= 0 && nilai_akhir <45){
        printf("\t               Indeks Nilai Huruf = E ");
	}
	
	printf("\n\t        ------------------------------------\n");
	printf("\t             Nilai Kehadiran Anda Adalah %.2f      \n", nilai_kehadiran);
	printf("\t             Nilai Tugas Anda Adalah %.2f    \n", nilai_tugas);	
	printf("\t             Nilai Quiz Anda Adalah %.2f     \n", nilai_quiz);
	printf("\t             Nilai UTS Anda Adalah %.2f      \n", nilai_uts);
	printf("\t             Nilai UAS Anda Adalah %.2f      \n", nilai_uas);	
	printf("\n\t        ------------------------------------\n\n");
	
	akhir();
}

int main(){
	menu();
	
	return 0;
}

void akhir(){
	int pilih;
	printf("\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|    Apakah anda ingin mengulang program ini?    |\n");
	printf("\t|________________________________________________|\n\n");
	printf("\t           1. Ya               2. Tidak           \n");
	
	printf("\n\n\t          Masukkan pilihan Anda : ");
	pilih = validasi(1);
	if (pilih == 1){
		system("cls");
		main();
	}else if (pilih == 2){
		system("cls");
		printf("\n\n\t ________________________________________________ \n");
		printf("\t|                                                |\n");
		printf("\t|   - -   T  E  R  I  M  A  K  A  S  I  H   - -  |\n");
		printf("\t|________________________________________________|\n\n");
		return;
	}else {
		system("cls");
		judul();
		printf ("\n\t -- Maaf pilihan yang anda masukkan tidak valid --\n");
		akhir();
	}
}
