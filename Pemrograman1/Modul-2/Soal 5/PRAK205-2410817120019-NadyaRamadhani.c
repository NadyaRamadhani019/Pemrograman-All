#include <stdio.h>
#include <math.h>
int main(){
//input output pertama
float a;
float b;
float alas;
float tinggi;
float keliling;
float luas;

printf("");
scanf("%f %f", &a, &b);

alas = sqrt ((b*b) - (a*a));
tinggi = a;
keliling = a + b + alas;
luas = 1.0/2 * alas * tinggi;

printf("Alas = %.0f cm\n", alas);
printf("Tinggi = %.0f cm\n", a);
printf("Keliling = %.0f cm\n", keliling);
printf("Luas = %.0f cm^2\n", luas);

//input output kedua
printf("\n");
printf("");
scanf("%f", &a);
printf("");
scanf("%f", &b);

alas = sqrt ((b*b) - (a*a));
tinggi = a;
keliling = a + b + alas;
luas = 1.0/2 * alas * tinggi;

printf("Alas = %.0f cm\n", alas);
printf("Tinggi = %.0f cm\n", a);
printf("Keliling = %.0f cm\n", keliling);
printf("Luas = %.0f cm^2\n", luas);

return 0;
}