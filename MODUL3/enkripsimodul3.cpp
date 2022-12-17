#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main();

void pembuka(){
   printf("\t________________________________________\n");
    printf("\t|          PROGRAM CIPHER TEXT         |\n");
    printf("\t|              KELOMPOK 08             |\n");
    printf("\t|______________________________________|\n");
}

void penutup(){
   system("cls");
   printf("\n\n\t ________________________________________________ \n");
	printf("\t|                                                |\n");
	printf("\t|   - -   T  E  R  I  M  A  K  A  S  I  H   - -  |\n");
	printf("\t|   - -     S A M P A I       J U M P A  - -     |\n");
    printf("\t|________________________________________________|\n\n");

   exit(0);
}

void enkripsi (int geser){
   char string [100];

   printf("\nPlaintext      : ");
   scanf(" %[^\n]s", &string);

   for (int i = 0; i < strlen(string); i++){
      if (string[i] == ' '){
         continue;
      }
      string[i] = string[i] + geser;
   }

   for (int j = 0; string[j]!='\0'; j++) {
      string[j] = toupper(string[j]);
   }

   printf("Hasil dekripsi : %s", string);
}

void dekripsi (int geser){
   char string [100];

   printf("\nChippertext    : ");
   scanf(" %[^\n]s", &string);
      
   for (int i = 0; i < strlen(string); i++){
      if (string[i] == ' '){
         continue;
      }
      string[i] = string[i] - geser;
   }

   for (int j = 0; string[j]!='\0'; j++) {
      string[j] = tolower(string[j]);
   }

   printf("Hasil dekripsi : %s", string);
}

int validasi(int x){
   double pilihan = 2;
   int hasil;
   int i = 0;

   do{
      pilihan = scanf("%d", &hasil);
      
      while (getchar() !='\n'){
	  }
      
      if (pilihan == 0 || hasil < 1){
         printf("Input invalid! Input dengan benar : ");
      }
      else if (x == 1){
         if (hasil > 3 || hasil < 1){
            printf("Input invalid! Pilih dengan benar : ");
         }
         else {
            i = 1;
         }  
      }
      else if (x == 2){
         if (hasil > 2 || hasil < 1){
            printf("Input invalid! Pilih dengan benar : ");
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

   pilihan = validasi(2);

   if (pilihan == 1){
      main();
   }
   else{
      penutup();
   }
}

int main(){
   char string [100];
   char hasil [100];
   int geser, pilihan, ulang; 

   system("cls");
   pembuka(); 
   
   printf("Jumlah pergeseran : ");
   geser = validasi(0);

   printf("\nPilih Metode Berikut");
   printf("\n1. Enkripsi");
   printf("\n2. Dekripsi");
   printf("\n3. Keluar Program");
   printf("\n=> ");

   pilihan = validasi(1);

   if (pilihan == 1){
      enkripsi(geser);
   }

   else if (pilihan == 2){
      dekripsi(geser);
   }

   else{
      penutup();
   }

   pemilihan_menu();
   
   return 0;
}

