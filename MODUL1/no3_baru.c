#include <stdio.h>
#include <stdlib.h>



int main (void){
    system("cls");
    char ulang;
    int jenisbangun;
    printf("=========KELOMPOK 08===========\n");
    printf("=========BANGUN RUANG==========\n");
    printf("Klik enter untuk memulai\n");
    do{
    clean();
    system("cls");
    printf("\n=========================Program Bangun Ruang========================\n");
	printf("Pilih bangun datar yang akan anda hitung Volume dan Luas Permukaannya :\n ");
	printf("1.Bola                            ||     Kode = 1\n");
	printf(" 2.Kerucut                         ||     Kode = 2\n");
	printf(" 3.Limas Segiempat                 ||     Kode = 3\n");
	printf(" 4.Prisma Segitiga                 ||     Kode = 4\n");
	printf(" 5.Tabung                          ||     Kode = 5\n");
	printf("Masukkan kode          : ");
	validasi(&jenisbangun, "Kode jenis bangun");
    printf("\n=====================================================================\n");
      system("cls");
        if(jenisbangun == 1){
        bola();


        }else if(jenisbangun == 2){
        kerucut();


        }else if(jenisbangun == 3){
        limas_segiempat();


        }else if(jenisbangun == 4){
        prisma_segitiga();


        }else if(jenisbangun == 5){
        tabung();


        }else {
        printf("\n=====================================================================\n");
        printf("                    Input yang anda masukkan salah");
        printf("\n=====================================================================\n");
        }
        clean();
        
        printf("Apakah anda ingin mengulang program? : (y/n)");
        scanf("%c", &ulang);
    } while (ulang == 'y');
        system("cls");
        printf("\n=====================================================================\n");
        printf("                Terima kasih telah menggunakan program ini");
        printf("\n=====================================================================\n");

        return 0;
}

  
    void bola(){
        const float phi = 3.14;
        int r;
        float LP,V;

        printf("                        Program Menghitung Bola");
        printf("\n=====================================================================\n");
        printf("\nMasukkan Jari-jari             : ");
            validasi(&r, "jari-jari");
        printf("\n=====================================================================\n");
            LP = 4*phi*r*r;
        printf ("\nLuas Permukaan Bola             : %.2f cm2\n" ,LP);
            V = 4*phi*(r*r*r)/3;
        printf ("Volume Bola                     : %.2f  cm3\n" ,V);
        return LP, V;
    }

    void kerucut(){
        const float phi = 3.14;
        int r, t;
        float V,LP,LP1,LA,s;

        printf("                        Program Menghitung Kerucut");
        printf("\n=====================================================================\n");
        printf("\nMasukkan Jari-jari Alas                       : ");
            validasi(&r, "jari-jari alas");
        printf("Masukkan Tinggi                                 : ");
            validasi(&t, "tinggi kerucut");
        printf("\n=====================================================================\n");
            LA  = phi*r*r;
            s   = sqrt ((r*r) + (t*t));
            LP  = phi* r *(r + s);
            LP1 = phi*r*s;
        printf ("\nLuas Permukaan Kerucut             : %.2f cm2\n" ,LP);
        printf ("Luas Permukaan Kerucut Tanpa Alas  : %.2f cm2\n", LP1);
            V = LA * t / 3;
        printf ("Volume Kerucut                     : %.2f cm3\n" ,V);
        return V, LP, LP1;
    }

    void limas_segiempat(){
        int p, l, t;
        double sm1, sm2;
        double LA, LP, V, Ls1, Ls2;

        printf("            Program Menghitung Limas Segiempat");
        printf("\n=====================================================================\n");
        printf("\nMasukkan Panjang Alas Limas   : ");
            validasi(&p, "panjang");
        printf("Masukkan Lebar Alas Limas     : ");
            validasi(&l, "lebar alas");
        printf("Masukkan Tinggi Limas         : ");
            validasi(&t, "tinggi");
        printf("\n=====================================================================\n");
            sm1 = sqrt ((t*t) + (1/4*(p*p)));
            sm2 = sqrt ((t*t) + (1/4*(l*l)));
            Ls1 = (p*sm1)/2;
            Ls2 = (l*sm2)/2;
            LA  = p*l;
            LP  = LA + (2*Ls1) + (2*Ls2);
        printf("\nLuas Permukaan Limas Segiempat : %.2lf cm2\n" ,LP);
            V = (LA * t) / 3;
        printf ("Volume Limas Persegi            : %.2lf cm3\n" ,V);
        return LP, V;
    }

    void prisma_segitiga(){
        int s1, t2, t;
        float sm, s;
        float LA,LP,LP1,V;
        float Ls1,Ls2,Ls3;

        printf("               Program Menghitung Prisma Segitiga\n");
        printf("\n=====================================================================\n");
        printf("Masukkan  Alas Segitiga                    : ");
            validasi(&s1, "alas Segitiga");
        printf("Masukkan Tinggi Segitiga                   : ");
            validasi(&t2, "tinggi segitiga");
        printf("Masukkan Tinggi Prisma                     : ");
            validasi(&t, "tinggi prisma");
        printf("\n=====================================================================\n");


            sm = sqrt ((s1*s1)+(t2*t2));
            Ls1  = sm*t;
            Ls2  = s1*t;
            Ls3  = t2*t;
            LA = s1*t2/2;
            LP = (2*LA) + Ls1 + Ls2 + Ls3;
            LP1= LA + Ls1 + Ls2 + Ls3;
        printf ("Luas Permukaan Prisma                              : %.2f cm2\n" ,LP);
        printf ("Luas Permukaan Prisma Tanpa Alas atau Tanpa Tutup  : %.2f cm2\n", LP1);
            V = LA * t ;
        printf ("Volume Prisma                                      : %.2f cm3\n" ,V);
        return LP, LP1, V;
    }

    void tabung(){

        const float phi = 3.14;
        int r, t;
        float V,LP,LP1,LA,s;

        printf("                    Program Menghitung Tabung");
        printf("\n=====================================================================\n");
        printf("\nMasukkan Jari-jari                         : ");
            validasi(&r, "jari-jari alas");
        printf("Masukkan Tinggi                              : ");
            validasi(&t, "tinggi tabung");
        printf("\n=====================================================================\n");
            LA  = phi*r*r;
            s   = 2*phi*r*t;
            LP  = (2*LA) + s;
            LP1 = LA+ s;
        printf ("\nLuas Permukaan Tabung                              : %.2f cm2\n" ,LP);
        printf ("Luas Permukaan Tabung Tanpa Alas atau Tanpa Tutup  : %.2f cm2\n", LP1);
            V = LA * t ;
        printf ("Volume Tabung                                      : %.2f cm3\n" ,V);
        return LP, LP1, V;
    }



    void clean(){
            while (getchar() != '\n');
        }

    int validasi(int *var, char nama[100]){
            if (scanf("%d", var) !=1)
            {
                clean();
                printf("Hanya memasukkan angka!, masukkan ulang %s! : ", nama);
                validasi(var, nama);
            }
            return 1;
        }

