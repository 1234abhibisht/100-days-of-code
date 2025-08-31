#include <stdio.h>
int sumn(int n) {
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum=sum+i;
    }
    printf("Sum of first %d numbers is : %d",n, sum);
    return sum;
}
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    sumn(n);
    return 0;
}
   
