#include <stdio.h>
int main(){
//input output pertama
float jarijari;
float tinggi;
float volume;
float luas;
float keliling;

printf("");
scanf("%f", &jarijari);
printf("");
scanf("%f", &tinggi);

volume = (22.0/7) * (jarijari * jarijari) * tinggi;
luas = 2 * (22.0/7) * jarijari * (jarijari + tinggi);
keliling = 2 * (22.0/7) * jarijari;

printf("Volume = %.2f\n", volume);
printf("Luas = %.2f\n", luas);
printf("Keliling = %.2f\n", keliling);

//input output kedua
printf("\n");
printf("");
scanf("%f %f", &jarijari, &tinggi);

volume = (22.0/7) * (jarijari * jarijari) * tinggi;
luas = 2 * (22.0/7) * jarijari * (jarijari + tinggi);
keliling = 2 * (22.0/7) * jarijari;

printf("Volume = %.2f\n", volume);
printf("Luas = %.2f\n", luas);
printf("Keliling = %.2f\n", keliling);

return 0;
}