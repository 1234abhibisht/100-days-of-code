/* roots of quadratic = -b+root(b^2-4ac)/2a and -y-root(b^2-4ac)/2a where a,b,c are constants of equation */
#include <stdio.h>
int main() {
    float percentage;
    printf("Enter your percentage : ");
    scanf("%f",&percentage);
    if(percentage > 90 && percentage <= 100) printf("You got A grade");
    else if(percentage > 80 && percentage <= 90) printf("You got B grade");
    else if(percentage > 70 && percentage <= 80) printf("You got C grade");
    else if(percentage > 60 && percentage <= 70) printf("You got D grade");
    else if(percentage > 50 && percentage <= 60) printf("You got E grade");
    else printf("You are fail");
    return 0;
}
