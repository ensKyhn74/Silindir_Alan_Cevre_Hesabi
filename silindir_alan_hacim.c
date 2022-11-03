#include <stdio.h>
#define PI 3.14
// Klavyeden girilen yarıçapa göre silindirin alanını ve hacmini hesaplar

int main() 

{

 float yaricap;
 float yukseklik;

 printf("silindirin taban veya tavan dairesinin yaricapini girin: ");
 scanf("%f",&yaricap);

 printf("silindirin yuksekligini girin: ");
 scanf("%f",&yukseklik);
 
 printf("silindirin alani: %.2f\n",2*PI*yaricap*(yaricap + yukseklik));
 printf("silindirin hacmi: %.2f",PI*yaricap*yaricap*yukseklik);
 
 return 0;

}