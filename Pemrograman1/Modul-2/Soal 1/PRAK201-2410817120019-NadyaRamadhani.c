#include <stdio.h>
int main(){
    char nama[20];
    char nim[15];
    char kelas[5];
    char ttl[25];
    char alamat[60];
    char hobi[30];
    char nohp[15];

    printf("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel        : ");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                : ");
    fgets(hobi, sizeof(hobi), stdin);
    printf("No. HP               : ");
    fgets(nohp, sizeof(nohp), stdin);

    printf("\n");
    printf("Nama                 : %s", nama);
    printf("NIM                  : %s", nim);
    printf("Kelas Paralel        : %s", kelas);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat               : %s", alamat);
    printf("Hobby                : %s", hobi);
    printf("No. HP               : %s", nohp);

    return 0;

}