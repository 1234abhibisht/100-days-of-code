#include <stdio.h>
#include <math.h>
int SimpleInterest(float principle, float rate, float time, float compounded) {
    /* SI = (P*r*t)/100 */
    float SI=(principle*rate*time)/100;
    printf("Simple Interest is :%f\n",SI);
    return SI;
}
int Compound(float principle, float rate, float time, float compounded) {
    /* A = P(1+r/n) power tn and CI = A - P*/
    float base = (1+rate/compounded), power = time*compounded;
    float Amount = principle*pow(base,power); 
    float CI = Amount-principle;
    printf("Compund Interest is : %f",CI);
    return CI;
}
int main() {
    float principle ;
    printf("Enter Principle : ");
    scanf("%f" ,&principle);
    float rate;
    printf("Enter rate : ");
    scanf("%f",&rate);
    float time ;
    printf("Enter time in year : ");
    scanf("%f",&time);
    float compounded;
    printf("Enter number of time amount compounded per year : ");
    scanf("%f",&compounded);
    Compound(principle,rate,time,compounded);
    return 0;
}
