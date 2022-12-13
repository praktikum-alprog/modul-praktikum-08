#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char kata[100];
char sts[100];
char copy_kata[100];
char mengulang = 'y';
int i,j,statusku,status,panjang_kata,pnj,c,x,count[26];//count untuk menghitung jumlah kata

void cetakfile();
void tentukanpalindrom();
void input();
void reset();

int main(){
        input();
        tentukanpalindrom();
        cetakfile();
        reset();
}

void input(){
    status=0;
    statusku=1;
    c=0;
    for(i=0;i<27;i++){
        count[i] = 0;
    }
    //nama
    system("cls");
    printf("+======================================================+\n");
    printf("#                                                      #\n");
    printf("#           PROGRAM PENGECEKAN KATA PALINDROM          #\n");
    printf("#                                                      #\n");
    printf("#                   OLEH KELOMPOK 08                    #\n");
    printf("#                                                      #\n");
    printf("#                       MODUL 4                        #\n");
    printf("#                                                      #\n");    
    printf("+======================================================+\n\n");

    //input kata
    printf("\nMasukkan kata (tidak boleh angka): ");
    fflush(stdin);//Fungsinya adalah untuk membersihkan (atau flush) output buffer dan memindahkan data buffer
    gets(kata);
    panjang_kata = strlen(kata);//Fungsi strlen digunakan untuk menghitung panjang karakter pada suatu string
    strlwr(kata);//Mengubah semua karakter Huruf Kapital atau Besar yang ada dalam suatu string menjadi sebuah Huruf Kecil.
    while(statusku>0){
        statusku = 0;
        for(i=0;i<panjang_kata;i++){
            if(kata[i]<'a' || kata[i]>'z'){
                kata[i]=kata[i+1];
                for(j=i+1;j<panjang_kata-1;j++){
                    kata[j]=kata[j+1];
                    kata[j+1]='\0';
                    }
                }
        }
        pnj = strlen(kata);
        for(i=0;i<pnj;i++){
            if(kata[i]<'a' || kata[i]>'z'){
                statusku=statusku+1;
                }
        }
    }
}

void tentukanpalindrom(){
    FILE *in = fopen("kamuskata.txt","a");
    pnj = strlen(kata);
    printf("\nString yang dinputkan(setelah divalidasi): %s\n", kata);
    fprintf(in,"%s(%d): ",kata,pnj);

    //pembalikan kata
    strcpy(copy_kata,kata);
    strrev(copy_kata);
    printf("\nHasil kata setelah dibalik: ");
    printf("%s", copy_kata);

    //mengecek apakah kata yang diinput adalah palyndrom
    for(i=0;i<pnj;i++){
        if(kata[i]!=copy_kata[i]){
            status = status + 1;
        }
    }
    if(status!=0){
        printf("\nString bukan palindrome\n");
        strcpy(sts,"Bukan Palindrome");
    }
    else{
        printf("\nString merupakan palindrome\n");
        strcpy(sts,"Palindrome");
    }
    fclose(in);
}

void cetakfile(){
    FILE *in = fopen("kamuskata.txt","a");
    printf("\nFrequensi karakter yang muncul dalam string: \n");
    while (kata[c] != '\0'){
        if (kata[c] >= 'a' && kata[c] <= 'z'){
            x = kata[c] - 'a';
            count[x]++;
        }
        c++;
    }
    for(i=0;i<26;i++){
        if(count[i]!=0){
            printf("%c muncul sebanyak %d kali dalam string.\n", i + 'a', count[i]);
            fprintf(in,"%c=%d ", i + 'a', count[i]);
        }
    }
    fprintf(in," :%s\n", sts);
    fclose(in);
}

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
        printf (" Invalid Input\n");
        reset();
    }
}