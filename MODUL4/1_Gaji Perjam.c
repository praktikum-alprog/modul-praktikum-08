#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>

//pemanggilan fungsi
void home();
void hitunggaji();
int validasi();
void ulang();


//menampung typedata dan variabel 
typedef struct{
    int harian_perjam;
    int lembur_perjam;
    int harian_jam;
    int lembur_jam;
    int lembur_gaji;
    int harian_gaji;
} Gaji;

//awalan dari program
int main(){
    system("color 70");
    printf("\t+======================================================+\n");
    printf("\t|                                                      |\n");
    printf("\t|       PROGRAM PERHITUNGAN GAJI DENGAN STRUCT         |\n");
    printf("\t|         OLEH KELOMPOK 08 PRATIKUM ALPROG             |\n");
    printf("\t|                                                      |\n");
    printf("\t|======================================================|\n");
    printf("\t| Anggota:                                             |\n");
    printf("\t| 2205551010    Nandika                                |\n");
    printf("\t| 2205551015    Sukma Wati                             |\n");
    printf("\t| 2205551035    Chrismana Rimbunta Nandeak             |\n");
    printf("\t| 2205551038    Alfredo Felix Maruba                   |\n");
    printf("\t| 2205551039    Maxwell Rafael Paendong                |\n");
    printf("\t| 2205551145    Chandra |\n");
    printf("+======================================================+\n\n");
    printf("Tekan apa saja untuk melanjutkan...");
	getch();
	home();
    system("cls");
    return 0;
}

//pemanggilan fungsi menu awal
void home(){
    float a;
    int b;
    system("cls");
    printf("+=================================================+\n");
	printf("|                 SELAMAT DATANG                  |\n");
	printf("|         PROGRAM PENGHITUNGAN GAJI HARIAN        |\n");
	printf("+=================================================+\n\n");
    printf("---------------------------------------------------\n");
    printf("==> Masukkan Jumlah Jam Kerja Anda : ");
    while(a!=b || a<1 || a>24){//perulangan
        a=validasi();//validasi
        b=(int)a;
        if(a!=b || a<1 || a>24){
           printf("\n------------------------------------------------\n");
            printf("|               INPUT ANDA ERROR               |\n");
            printf("|         SILAHKAN MENGULANGI INPUTAN          |\n");
            printf("------------------------------------------------\n");
            printf("==> Silahkan Masukan Angka Yang Baru : ");
            system("PAUSE");
        }
    }
    
    system("cls");
    hitunggaji(b);

}

//proses perhitungan gaji
void hitunggaji(int b){
    Gaji g;
    int total;
    g.harian_perjam;
    g.lembur_perjam;
    g.harian_jam;
    g.lembur_jam;
    g.lembur_gaji;
    g.harian_gaji;
    
    //perhitungan
    g.harian_perjam=10625;
    g.lembur_perjam=10625*8;
    g.harian_jam=b;
    if(g.harian_jam>8){
        g.lembur_jam=g.harian_jam-8;
        g.harian_jam=8;
        g.lembur_gaji=g.lembur_jam*g.lembur_perjam;
    }
    g.harian_gaji=g.harian_jam* g.harian_perjam;
    
    if(b>8){
        total=g.harian_gaji+g.lembur_gaji;
    }
    if (b>8){
    printf("       ===================================== \n");
    printf("  =============                     ==============\n");
    printf(" ============    TOTAL GAJI HARIAN    =============\n");
    printf("  ==============                   ===============\n");
    printf("       ===================================== \n");
    printf("+----------------------------------------------------------+\n");
    printf("|       GAJI HARIAN         |       GAJI LEMBUR            |\n");
    printf("|----------------------------------------------------------|\n");
    printf("| GAJI PER JAM :Rp%d     | GAJI PER JAM :    Rp%d    |\n", g.harian_perjam, g.lembur_perjam);
    printf("| JAM KERJA    :%d JAM       | JAM KERJA    : %d JAM         |\n",g.harian_jam, g.lembur_jam);
    printf("| GAJI         :Rp%d     | GAJI LEMBUR  : Rp%d      |\n",g.harian_gaji, g.lembur_gaji);
    printf("+==========================================================+\n");
    printf("| TOTAL GAJI                |      Rp%d                |\n",total);
    printf("+==========================================================+\n");

    }
    else if(b<=8){
    printf("       ===================================== \n");
    printf("  =============                     ==============\n");
    printf(" ============    TOTAL GAJI HARIAN    =============\n");
    printf("  ==============                   ===============\n");
    printf("       ===================================== \n");
    printf("+--------------------------------------------------+\n");
    printf("|                   GAJI HARIAN                    |\n");
    printf("|--------------------------------------------------|\n");
    printf("| GAJI PER JAM      :Rp%d                       |\n", g.harian_perjam);
    printf("| JAM KERJA         :%d JAM                         | \n",g.harian_jam);
    printf("| GAJI              :Rp%d                       | \n",g.harian_gaji);
    printf("+==================================================+\n");
    printf("| TOTAL GAJI        :      Rp%d                 |\n",g.harian_gaji);
    printf("+==================================================+\n");
    }
    printf("Tekan apa saja untuk melanjutkan...");
	getch();
    ulang();
}

//validasi 
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
		else{
			i = 1;
		}
		
		} while (i != 1);
		
		return hasil;
    	
	}

void ulang(){
    float a;
    int b;

    system("cls");
    printf("+-------------------------------------------------------+\n");
    printf("|  APAKAH ANDA INGIN MENGULANG PERHITUNGAN GAJI HARIAN? |\n");
    printf("+-------------------------------------------------------+\n");
    printf("| PILIHAN :                                             |\n");
    printf("| --> YA    = 1                                         |\n");
    printf("| --> TIDAK = 2                                         |\n");
    printf("+-------------------------------------------------------+\n");
    printf("==> Masukkan Pilihan : ");
    a=validasi(1);
    b=(int)a;
    
    while(a!=b || a<1 || a>2){
      printf("\n+----------------------------------------------+\n");
        printf("|               INPUT ANDA ERROR               |\n");
        printf("|         SILAHKAN MENGULANGI INPUTAN          |\n");
        printf("+----------------------------------------------+\n");
        system("PAUSE");
        system("cls");
        printf("+-------------------------------------------------------+\n");
    	printf("|  APAKAH ANDA INGIN MENGULANG PERHITUNGAN GAJI HARIAN? |\n");
    	printf("+-------------------------------------------------------+\n");
    	printf("| PILIHAN :                                             |\n");
    	printf("| --> YA    = 1                                         |\n");
    	printf("| --> TIDAK = 2                                         |\n");
    	printf("+-------------------------------------------------------+\n");
        printf("==> Silahkan Masukan Angka Yang Baru : ");
        a=validasi(1);
        b=(int)a;
    }

    system("cls");

    if(a==1){
        home();
    }else if(a==2){
        printf("+===============================================+\n");
        printf("|                 Terima  Kasih                 |\n");
        printf("+===============================================+\n\n");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(" :)");
				sleep(1);
    }
    exit(0);
}
