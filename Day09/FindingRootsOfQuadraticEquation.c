/* roots of quadratic = -b+root(b^2-4ac)/2a and -y-root(b^2-4ac)/2a where a,b,c are constants of equation */
#include <stdio.h>
#include <math.h>
void quadratic(int x, int y, int z) {
    int a = pow(y,2) - 4*x*z;
    float squareroot = sqrt(a);
    float root1 = (-y + squareroot)/2*x;
    float root2 = (-y - squareroot)/2*x;
    printf("roots of equation is %f & %f",root1,root2);
}
int main() {
    int x;
    printf("Enter constant of x^2 :");
    scanf("%d",&x);
    int y;
    printf("Enter constant of x : ");
    scanf("%d",&y);
    int z;
    printf("Enter constant : ");
    scanf("%d",&z);
    quadratic(x,y,z);
    return 0;
}
