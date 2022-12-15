#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

void judul();
void reset();
int validasi();

int main(){
    int tanggal, bulan, tahun, ulangi, cek_tahun;

    //Input tahun lahir
    do{
        judul();
        printf(" Masukkan Tahun Lahir : ");
        tahun = validasi();

        if ((tahun <= 0) || (tahun >= 3000)){
            printf("\n\n Invalid Input");
            printf("\n Mohon Input Tahun Lahir dengan Benar!");
            sleep(2);
            system("cls");
            ulangi = 0;
        }else{
            ulangi = 1;
        }
    }while(ulangi == 0);

    system("cls");
    //Cek tahun kabisat
    cek_tahun = tahun % 4;
    //Input bulan lahir
    do{
        judul();
        printf(" Masukkan Bulan Lahir (Angka) : ");
        bulan = validasi();

        if ((bulan <= 0) || (bulan >= 13)){
            printf("\n\n Invalid Input");
            printf("\n Mohon Input Angka 1-12");
            sleep(2);
            system("cls");
            ulangi = 0;
        }else{
            ulangi = 1;
        }
    }while(ulangi == 0);
    system("cls");
    do{
            //Input tanggal lahir di bulan Februari tahun kabisat
        if (bulan == 2 && cek_tahun == 0){
            do{
                judul();
                printf(" Masukkan Tanggal Lahir : ");
                tanggal = validasi();

                if ((tanggal <= 0) || (tanggal >= 30)){
                    printf("\n\n Invalid Input");
                    printf("\n Mohon Input Angka 1-29");
                    sleep(2);
                    system("cls");
                    ulangi = 0;
                }else{
                    ulangi = 1;
                    }
            }while(ulangi == 0);
            system("cls");
                //Input tanggal lahir di bulan Februari tahun normal
            }else if (bulan == 2 && cek_tahun != 0){
                do{
                    judul();
                    printf(" Masukkan Tanggal Lahir : ");
                    tanggal = validasi();

                    if ((tanggal <= 0) || (tanggal >= 29)){
                        printf("\n\n Invalid Input");
                        printf("\n Mohon Input Angka 1-28");
                        sleep(2);
                        system("cls");
                        ulangi = 0;
                    }else{
                        ulangi = 1;
                        }
                }while(ulangi == 0);
                system("cls");
                        //Input tanggal lahir di bulan dengan jumlah tanggal 31
            }else if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 ||
                bulan == 10 || bulan == 12){
                do{
                    judul();
                    printf(" Masukkan Tanggal Lahir : ");
                    tanggal = validasi();

                    if ((tanggal <= 0) || (tanggal >= 32)){
                        printf("\n\n Invalid Input");
                        printf("\n Mohon Input Angka 1-31");
                        sleep(2);
                        system("cls");
                        ulangi = 0;
                    }else{
                        ulangi = 1;
                        }
                }while(ulangi == 0);
                system("cls");
                    //Input tanggal lahir di bulan dengan jumlah tanggal 30
            }else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
                do{
                    judul();
                    printf("Masukkan Tanggal Lahir : ");
                    tanggal = validasi();

                    if ((tanggal <= 0) || (tanggal >= 31)){
                        printf("\n\n Invalid Input");
                        printf("\n Mohon Input Angka 1-30");
                        sleep(2);
                        system("cls");
                        ulangi = 0;
                    }else{
                        ulangi = 1;
                        }
                }while(ulangi == 0);
            system("cls");
            }
            //Menampilkan zodiak sesuai dengan tanggal kelahiran
            judul();
                    if (tanggal >= 20 && bulan == 1 || tanggal <= 18 && bulan == 2) {
                        printf(" Zodiak Anda Adalah Aquarius");
                    }else if (tanggal <= 29 && bulan == 2 || tanggal <= 20 && bulan == 3){
                        printf(" Zodiak Anda Adalah Pisces");
                    }else if (tanggal <= 31 && bulan == 3 || tanggal <= 19 && bulan == 4){
                        printf(" Zodiak Anda Adalah Aries");
                    }else if (tanggal <= 30 && bulan == 4 || tanggal <= 20 && bulan == 5){
                        printf(" Zodiak Anda Adalah Taurus");
                    }else if (tanggal <= 31 && bulan == 5 || tanggal <= 21 && bulan == 6){
                        printf(" Zodiak Anda Adalah Gemini");
                    }else if (tanggal <= 30 && bulan == 6 || tanggal <= 22 && bulan == 7){
                        printf(" Zodiak Anda Adalah Cancer");
                    }else if (tanggal <= 31 && bulan == 7 || tanggal <= 22 && bulan == 8){
                        printf(" Zodiak Anda Adalah Leo");
                    }else if (tanggal <= 31 && bulan == 8 || tanggal <= 22 && bulan == 9){
                        printf(" Zodiak Anda Adalah Virgo");
                    }else if (tanggal <= 30 && bulan == 9 || tanggal <= 23 && bulan == 10){
                        printf(" Zodiak Anda Adalah Libra");
                    }else if (tanggal <= 31 && bulan == 10 || tanggal <= 21 && bulan == 11){
                        printf(" Zodiak Anda Adalah Scorpio");
                    }else if (tanggal <= 30 && bulan == 11 || tanggal <= 21 && bulan == 12){
                        printf(" Zodiak Anda Adalah Sagitarius");
                    }else if (tanggal <= 31 && bulan == 12 || tanggal < 20 && bulan == 1){
                        printf(" Zodiak Anda Adalah Capricorn");
                    }
        }while(ulangi == 0);
            printf("\n\n       === Terima Kasih ===\n");
            reset();
            return 0;
}
//Fungsi untuk meminta input dengan validasi hanya integer
int validasi(){

		double pilihan = 0;
		int hasil;
		int i = 0;

		//perulangan untuk validasi
		do{
			pilihan = scanf("%d", &hasil);
            while(getchar() != '\n'){
                //tidak ada proses
            }
			if (pilihan == 0){
				
				printf("\n\nInput invalid! Mohon input angka!\n");
                printf("Masukkan input dengan benar : ");
			}
			else{
				i = 1;
			}
		} while (i != 1);

		return hasil;

	}
//Fungsi untuk menampilkan judul
void judul(){
    printf("+================================+\n");
    printf("|         Program Zodiak         |\n");
    printf("+================================+\n");
}
//Meminta input untuk mengulangi program
void reset(){
    int ulang;
    printf("\n\n Ingin Mengulangi? [y / t]  ");
    ulang = getch();

    if (ulang == 'y'|| ulang == 'Y'){
        system("cls");
        main();
    }else if (ulang == 't'|| ulang == 'T'){
        return;
    }else {
        system("cls");
        judul();
        printf (" Invalid Input\n");
        reset();
    }
}
