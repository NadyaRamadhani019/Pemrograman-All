#include <stdio.h>
int main(){
    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;
    int diskon_A_13 = harga_sepatu_A - (harga_sepatu_A * 13/100);
    int diskon_B_21 = harga_sepatu_B - (harga_sepatu_B * 21/100);
    printf("Harga sepatu A adalah %d\n", harga_sepatu_A);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskon_A_13);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", diskon_B_21);
    return 0;
}