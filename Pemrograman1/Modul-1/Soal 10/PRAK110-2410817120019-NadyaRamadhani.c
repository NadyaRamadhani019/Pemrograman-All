#include <stdio.h>
#include <math.h>
int main(){
    int alas = 5;
    int tinggi = 12;
    int keliling = 30;
    int luas = 30;
    double sisi_miring = sqrt (alas^2)+(tinggi^2);
    printf("Diketahui:\n");
    printf("Alas = %d cm\n",alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %.0f cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm", luas);
    return 0;
}