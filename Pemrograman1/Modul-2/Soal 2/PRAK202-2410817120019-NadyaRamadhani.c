#include <stdio.h>
int main(){

//test case 1
float nil1;
float nil2;
float hasil;

printf("Masukkan Nilai Pertama: ");
scanf("%f", &nil1);
printf("Masukkan Nilai Kedua: ");
scanf("%f", &nil2);
hasil = nil1 + nil2;

printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", nil1, nil2, hasil);

//test case 2
printf("\n\n");
printf("Masukkan Nilai Pertama: ");
scanf("%f", &nil1);
printf("Masukkan Nilai Kedua: ");
scanf("%f", &nil2);
hasil = nil1 + nil2;

printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", nil1, nil2, hasil);

return 0;
}