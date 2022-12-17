#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void validasi2(int* pilihan,int* cekerror,int skala,char* teks);
void validasi(float* pilihan,int* cekerror,int skala,char* teks);

int main () {
	int banyak, max, cekerror, ulang2;
	float sum, mean, modus, median;
	int n1, n2;
	int a, b, c, i, j, tmp;
	float data[100];
	int f[100];
	char ulangi;
	do{
		system("cls");
		printf("\n\t\t\t         Kelompok 08	       \n");
		printf("\n\t\t\t         PROGRAM STATISTIKA    \n");
		printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
		do{
			validasi2(&banyak, &cekerror,9999999, "\n\t\t\tMasukkan Jumlah Angka: ");
		}while(cekerror==1);

		
		int *p_banyak = &banyak;
		for (a=0; a<*p_banyak; a++){
			do{
				validasi(&data[a], &cekerror,9999999, "\t\t\tMasukkan Angka: " );
			}while(cekerror==1);
		}
		
		//pengurutan
		for (b=0; b<*p_banyak; b++){
			for (c=0; c<*p_banyak-b-1; c++){
				if(data[c] > data[c+1]){
					tmp = data[c];
					data[c] = data[c+1];
					data[c+1] = tmp;
				}
			}
		}
		
		//modus
		for(a=0;a<=data[*p_banyak-1];a++){
			f[a]=0;
			for(b=0;b<*p_banyak;b++){
				if(data[b]==a){
					f[a]=f[a]+1;
				}
			}
			max=1;
			if(f[a]>max){
				max=f[a];
				modus=a;
			}
		}
		if(modus>f[max]){
			printf("\n\t\t\t\tModus: %.2f",modus);
		}
		else{
			printf("\n\t\t\t\tModus: Tidak Ada");
		}
		
		//mean
		for (a=0; a<*p_banyak; a++){
			sum = sum + data[a];
		}
		mean = sum / *p_banyak;
		printf("\n\t\t\t\tMean : %.2f",mean);
		
		//median
		if(banyak%2==1){
			n2=(*p_banyak/2);
	        median=data[n2];
	        printf("\n\t\t\t\tMedian: %.2f",median);
		}
	    else if(*p_banyak%2==0){
			n1=(*p_banyak/2)-1; 
			n2=(*p_banyak/2);
	        median=(data[n1]+data[n2])/2;
	    	printf("\n\t\t\t\tMedian: %.2f\n",median);
		}
		
		do{
			getch();
			system("cls");
	    	ulang2=0;
		    printf("\n\n\t\t\t\t\t Program Statistika telah berakhir\n");
		    printf("\n\t\t\t\t\t Apakah Anda Ingin Mengulang (y/n): ");
		    scanf("%c", &ulangi);
		    fflush(stdin);
		    
		    if(ulangi=='n'){
		    	printf("\n\t\t\t\t\t\t\tTERIMAKASIH !!!\n");
				getchar();
				exit(0);
			}
			else if(ulangi=='y'){
				
			}
			else{
				printf("\n\t\t\t\tMohon Hanya Masukkan y atau n !!!\n");
				ulang2=2;
			}
		}while (ulang2 == 2);
	}while (ulangi=='y');
                   
	return (0);
}

void validasi2(int* pilihan,int* cekerror,int skala,char* teks){	
	char sementara[255];
	char tampungNewline;
	while(1){
		printf(teks);
		fgets(sementara,sizeof(sementara),stdin);
		if(sscanf(sementara,"%d %s",pilihan,&tampungNewline)==1){
			if(*pilihan<=0||*pilihan>skala){
				printf("\n\t\t\t\t\tMohon Hanya Masukkan Angka yang Sesuai!\n\n");
				getch();
				*cekerror=1;
				break;
			}	
			*cekerror=0;
			break;
		}	
		else{ 
			printf("\n\t\t\t\t\tMohon Hanya Masukkan Angka!\n\n");
			fflush(stdin);
			getch();
		}
	}
}

void validasi(float* pilihan,int* cekerror,int skala,char* teks){	
	char sementara[255];
	char tampungNewline;
	while(1){
		printf(teks);
		fgets(sementara,sizeof(sementara),stdin);
		if(sscanf(sementara,"%f %s",pilihan,&tampungNewline)==1){						
			*cekerror=0;
			break;
		}	
		else{ 
			printf("\n\t\t\t\t\tMohon Hanya Masukkan Angka yang Sesuai!\n\n");
			fflush(stdin);
			getch();
		}
	}
}