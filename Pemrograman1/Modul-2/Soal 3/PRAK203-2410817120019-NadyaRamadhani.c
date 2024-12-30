#include <stdio.h>
int main(){
//input output pertama
float a, b, i, j, x, y;
float hasil;

printf("");
scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
hasil = (a-b) * (i/j) - (x+y);
printf("%.3f", hasil);

//input output kedua
printf("\n\n");
printf("");
scanf("%f %f", &a, &b);
printf("");
scanf("%f %f", &i, &j);
printf("");
scanf("%f %f", &x, &y);
hasil = (a-b) * (i/j) - (x+y);
printf("%.3f", hasil);

return 0;
}