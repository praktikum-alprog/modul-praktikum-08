#include<stdio.h>
#include<windows.h>
#include<math.h>

const float phi=3.14;
void header();
void menu(void);
int validasi();

void header( ){
	system("cls");
	printf("||==========Program Menghitung Luas dan Keliling Bangun Datar==========||\n");
	printf("||======================Kelompok 08 Alprog=============================||\n");
	printf("\t\t 1. Program Menghitung Segitiga Sembarang\n");                            
	printf("\t\t 2. Program Menghitung Belah Ketupat\n");
	printf("\t\t 3. Program Menghitung Jajar Genjang\n");
	printf("\t\t 4. Program Menghitung Trapesium\n");
	printf("\t\t 5. Program Menghitung Lingkaran\n");
	printf("||=====================================================================||\n");
}

void segitiga_sembarang(){
	int kel, luas, pilih, sisi, sisi1, sisi2,sisi3;
	
	printf("||============================================||\n");
	printf("||     Program Menghitung Segitiga Sembarang  ||\n");
	printf("||     1. Menghitung Luas                     ||\n");
	printf("||     2. Menghitung Keliling                 ||\n");
	printf("||============================================||\n");
	printf("\n");
	printf("Masukan pilihan: ");
	pilih = validasi(1);
	system("cls");
		
		if (pilih==1){
			
			printf("Program Menghitung Luas\n");
			printf("Masukan nilai sisi1: ");
			sisi1 = validasi(3);
			//scanf("%f", &sisi1);
			printf("Masukan nilai sisi2: ");
			sisi2 = validasi(3);
			printf("Masukan nilai sisi3: ");
			sisi3 = validasi(3);
			sisi=0.5*(sisi1+sisi2+sisi3);
            luas=sqrt(sisi*(sisi-sisi1)*(sisi-sisi2)*(sisi-sisi3));
			printf("Maka Nilai luas segitiga sembarang adalah %d\n", luas);

		}
		else if (pilih==2){
			printf("Program Menghitung Keliling\n");
			printf("Masukan nilai sisi : ");
			sisi = validasi(3);
			kel=sisi+sisi+sisi;
			printf("Maka nilai keliling segitiga sembarang adalah %d\n",kel);
		
		}
		
}

void belah_ketupat(){
	int diagonal1, diagonal2, kel, luas, pilih, sisi;
	
	printf("||============================================||\n");
	printf("||     Program Menghitung Belah Ketupat       ||\n");
	printf("||     1. Menghitung Luas                     ||\n");
	printf("||     2. Menghitung Keliling                 ||\n");
	printf("||============================================||\n");
	printf("\n");
	printf("Masukan pilihan: ");
	pilih = validasi(1);
	//scanf ("%f", &i);
	system("cls");

		if(pilih==1){
			printf("Program Menghitung Luas Belah Ketupat\n");
			printf("Masukan nilai diagonal 1: ");
			diagonal1 = validasi(3);
			//scanf ("%f", &d1);
			printf("Masukan nilai diagonal 2: ");
			diagonal2 = validasi(3);
			luas=0.5*diagonal1*diagonal2;
			printf("Maka nilai luas belah ketupat adalah %d\n", luas);

		}

		else if(pilih==2){
			printf("Program Menghitung Keliling Belah Ketupat\n");
			printf("Masukan nilai sisi: ");
			sisi = validasi(3);
			kel=4*sisi;
			printf("Maka nilai keliling belah ketupat adalah %d\n", kel);

		}		
		
}

void jajar_genjang(){
	int alas, kel, luas, lbr, pjg, pilih, tinggi;
	
	printf("||============================================||\n");
	printf("||     Program Menghitung Jajar Genjang       ||\n");
	printf("||     1. Menghitung Luas                     ||\n");
	printf("||     2. Menghitung Keliling                 ||\n");
	printf("||============================================||\n");
	printf("\n");
	printf("Masukan pilihan: ");
	pilih = validasi(1);
	//scanf ("%f", &pilih);
	system("cls");

		if(pilih==1){
			printf("Program Menghitung Luas Jajar Genjang\n");
			printf("Masukan nilai alas: ");
			alas = validasi(3);
			printf("Masukan nilai tinggi: ");
			tinggi = validasi(3);
			luas=alas*tinggi;
			printf("Maka nilai luas jajar genjang adalah %d\n", luas);
		}

		else if(pilih==2){
			printf("Program Menghitung Keliling Jajar Genjang\n");
			printf("Masukan nilai panjang: ");
			pjg = validasi(3);
			printf("Masukan nilai lebar : ");
			lbr = validasi(3);
			kel=2*pjg+2*lbr;
			printf("Maka nilai keliling jajar genjang adalah %d\n", kel);

		}
}


void trapesium(){
	int alas1, alas2, kel, luas, pilih, sisi1, sisi2, sisi3, sisi4, tinggi;
	
	printf("||============================================||\n");
	printf("||     Program Menghitung Trapesium           ||\n");
	printf("||     1. Menghitung Luas                     ||\n");
	printf("||     2. Menghitung Keliling                 ||\n");
	printf("||============================================||\n");
	printf("\n");
	printf("Masukan pilihan: ");
	pilih = validasi(1);
	//scanf ("%f", &i);
	system("cls");
		
		if(pilih==1){
			printf("Program Menghitung Luas Trapesium\n");
			printf("Masukan nilai alas a: ");
			alas1 = validasi(3);
			printf("Masukan nilai alas b: ");
			alas2 = validasi(3);
			printf("Masukan nilai tinggi: ");
			tinggi = validasi(3);
			luas=0.5*(alas1+alas2)*tinggi;
			printf("Maka nilai luas Trapesium adalah %d\n", luas);
		}

		else if(pilih==2){
			printf("Program Menghitung Keliling Trapesium\n");
			printf("Masukan nilai a: ");
			sisi1 = validasi(3);
			printf("Masukan nilai b : ");
			sisi2 = validasi(3);
			printf("Masukan nilai c: ");
			sisi3 = validasi(3);
			printf("Masukan nilai d: ");
			sisi4 = validasi(3);
			kel=sisi1+sisi2+sisi3+sisi4;
			printf("Maka nilai keliling Trapesium adalah %d\n", kel);
		}
}

void lingkaran(){
	float jari_jari, kel, luas;
	int pilih;
	
	printf("||============================================||\n");
	printf("||     Program Menghitung Lingkaran           ||\n");
	printf("||     1. Menghitung Luas                     ||\n");
	printf("||     2. Menghitung Keliling                 ||\n");
	printf("||============================================||\n");
	printf("\n");
	printf("Masukan pilihan: ");
	pilih = validasi(1);
	//scanf ("%f", &i);
	system("cls");
	
		if(pilih==1){
			printf("Program Menghitung Luas Lingkaran\n");
			printf("Masukan nilai jari-jari: ");
			jari_jari = validasi(3);
			luas=phi*jari_jari*jari_jari;
			printf("Maka nilai luas Lingkaran adalah %.2f\n", luas);
		}

		else if(pilih==2){
			printf("Program Menghitung Keliling Lingkaran\n");
			printf("Masukan nilai jari-jari: ");
			jari_jari = validasi(3);
			kel=phi*jari_jari*2;
			printf("Maka nilai keliling Lingkaran adalah %.2f\n", kel);
		}
}


int main(){
	int pilihan;
	header();
	
	printf("Masukan pilihan: ");
	pilihan = validasi(2);
	system("cls");
	
	if (pilihan == 1){
			
		segitiga_sembarang();
		
	}
	
	else if(pilihan==2){
		
		belah_ketupat();
	}

	else if(pilihan==3){
		
		jajar_genjang();
		
	}

	else if(pilihan==4){
		
		trapesium();
		
	}

	else if(pilihan==5){
		 
		 lingkaran();

	}

	menu();
	
	return 0;

}

	
void menu(){
		int pilih;
		
		printf("\n");
		printf("1. Balik Ke Menu\n");
		printf("2. Keluar Dari Program\n");
		printf("Pilihan: ");
		pilih = validasi(1);
		// scanf("%d", &pilih);
	
			if (pilih==1){
				main();
		
			}
	
			else if (pilih==2){
				system("cls");
				printf("\n\n");
				printf("\t\t||==========Terima Kasih Telah Menggunakan Program Kami================||\n");
				printf("\t\t||========================Kelompok 08 Alprog===========================||\n");
				printf("\t\t||=====================================================================||\n");                            
				exit(0);
    		}
	
	}


	int validasi(int x){
		
		double pilihan = 0;
		int hasil;
		int i = 0;

		//perulangan untuk validasi
		do{
			pilihan = scanf("%d", &hasil);
			
			if (pilihan == 0){
				getchar();
				printf("Input invalid! Pilih dengan benar : ");
			}
			else if (x == 1){
				if (hasil > 2 || hasil <= 0 ){
					printf("Input invalid! Pilih dengan benar : ");
				}
				else {
					i = 1;
				}  
			}
			else if(x == 2){
				if (hasil > 5 || hasil <= 0){
					printf("Input invalid! Pilih dengan benar : ");
				}
				else {
					i = 1;
				}  
			}
			else if(x == 3){
				if(hasil < 1 ){
					printf("Input Invalid! Pilih dengan benar: ");
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
		
	
