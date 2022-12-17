#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main();

void pembuka(){
    printf("\t________________________________________________\n");
    printf("\t|      PROGRAM STRUCT DAN UNION PADA KUBUS     |\n");
    printf("\t|                KELOMPOK 08                   |\n");
    printf("\t|______________________________________________|\n");
}

void penutup(){
    system("cls");
    printf("\n\n\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|   - -   T  E  R  I  M  A  K  A  S  I  H   - -  |\n");
	printf("\t|   - -     S A M P A I       J U M P A  - -     |\n");
    printf("\t|________________________________________________|\n\n"); 
}

int validasi(){
    double pilihan = 2;
    int hasil;
    int i = 0;

    do{
        pilihan = scanf("%d", &hasil);
        
        while (getchar() !='\n'){
		}
		
        if (pilihan == 0 || hasil < 1){
            getchar();
            printf("Input dinyatakan Tidak Sesuai! Mohon pilih kembali dengan benar! : ");
        }
        else{
            i = 1;
        }
    } while (i != 1);
    return hasil;
}

void pemilihan_menu(){
    int pilihan;
    
    		printf("\t--------------------------------------------------\n");
            printf("\t ________________________________________________ \n");
        	printf("\t|                                                |\n");
        	printf("\t|    Apakah anda ingin mengulang program ini?    |\n");
	        printf("\t|________________________________________________|\n\n");
	        printf("\t           1. Ya               2. Tidak           \n");
	
	        printf("\n\n\t          Masukkan pilihan Anda : ");
	        printf("\t--------------------------------------------------\n");
	        
    pilihan = validasi();

    if (pilihan == 1){
        main();
    }
    else{
        penutup();
    }
}

struct kubusStruct{
    int sisi1;
    int vol1;
    int lp1;
};

int kubus_struct(int sisi_k){
    struct kubusStruct kubus;
    int memori;

    kubus.sisi1 = sisi_k;

    kubus.vol1 = pow(kubus.sisi1, 3);
    kubus.lp1 = 6*pow(kubus.sisi1, 2);
    printf("\n---------------------------");
    printf("\n    Kubus Struct    ");
    printf("\n---------------------------");
    printf("\nVolume              : %d", kubus.vol1);
    printf("\nLuas permukaan      : %d", kubus.lp1);
    printf("\n---------------------------");

    memori = sizeof(kubus);

    return memori;
}

union kubusUnion{
    int sisi2;
    int vol2;
    int lp2;
};

int kubus_union(int sisi_k){
    union kubusUnion kubus2;
    int memori;

    kubus2.sisi2 = sisi_k;
    kubus2.vol2 = pow(kubus2.sisi2, 3);

    printf("\n\n---------------------------");
    printf("\n    Kubus Union    ");
    printf("\n---------------------------");
    printf("\nVolume              : %d", kubus2.vol2);
    
    kubus2.sisi2 = sisi_k;

    kubus2.lp2 = 6*pow(kubus2.sisi2, 2);
    printf("\nLuas Permukaan      : %d", kubus2.lp2);
    printf("\n---------------------------");
    
    memori = sizeof(kubus2);

    return memori;
}

int main(){
    int sisi, ukuran_s, ukuran_u;
    
    system("cls");
    pembuka();
    
    printf("Input sisi kubus yang diinginkan    : ");
    sisi = validasi();

    ukuran_s = kubus_struct(sisi);
    ukuran_u = kubus_union(sisi);

    printf("\n\n---------------------------");
    printf("\n    Ukuran Memori Kubus    ");
    printf("\n---------------------------");
    printf("\nUkuran Kubus Struct : %d", ukuran_s);
    printf("\nUkuran Kubus Union  : %d", ukuran_u);
    printf("\n---------------------------");

    pemilihan_menu();

    return 0;
}