#include <stdio.h>
int temperature(int n) {
    float z=(1.8*n)+32;  /* n is temperature in degree celcuis */
    printf("Temperature in Fareheit is : %f",z);
    return z;
}
int main(int argc, char *argv[]) {
    float n;
    printf("Enter value in celcius : ");
    scanf("%f",&n);
    temperature(n);
    return 0;
}
