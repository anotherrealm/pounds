#include <stdio.h>

int main (void){

float s, e, i ;

printf("Enter starting weight in pounds : \n");
scanf("%f", &s);

printf("Enter ending weight in pounds : \n");
scanf("%f", &e);


printf("Enter the increment : \n");
scanf("%f", &i);


printf("pounds to kilograms tables\n");

printf("pounds  kilograms");



for(float p =s;p <=e; p += i){
    float kg = p * 0.454;
    printf("%4.5f %4.5f\n", p, kg);
}

return 0 ;


}
