#include <stdio.h>
#include <math.h>
int SimpleInterest(float p, float r, float t, float c) {
    /* SI = (P*r*t)/100 */
    float SI=(p*r*t)/100;
    printf("Simple Interest is :%f\n",SI);
    return SI;
}
int CompoundInterest(float p, float r, float t, float c) {
    /* A = P(1+r/n) power tn and CI = A - P*/
    float base = (1+r/c), power = t*c;
    float A = p*pow(base,power); 
    float CI = A-p;
    printf("Compund Interest is : %f",CI);
    return CI;
}
int main() {
    float p;
    printf("Enter principle : ");
    scanf("%f",&p);
    float r;
    printf("Enter rate : ");
    scanf("%f",&r);
    float t;
    printf("Enter time : ");
    scanf("%f",&t);
    float c;
    printf("Number of times interest should be compounded for : ");
    scanf("%f",&c);
    SimpleInterest(p,r,t,c);
    CompoundInterest(p,r,t,c);
    return 0;
}
