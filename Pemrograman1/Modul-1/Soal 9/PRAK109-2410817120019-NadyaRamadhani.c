#include <stdio.h>
int main(){
    int pasukan_YuZhong = 958730;
    int pahlawan = 5;
    int pasukan_per_pahlawan = pasukan_YuZhong / pahlawan;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan_YuZhong);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukan_per_pahlawan);
    return 0;
}