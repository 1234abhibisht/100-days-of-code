#include <stdio.h>
void PrimeComposite(int a) {
    int x;
    for(int i = 2; i <= a-1; i++) {
        if(a % i == 0) {  /* composite number */
            x = 1;
            break;
        }
        else {
            x == 0;
        }
    }
    if(a == 1) printf("%d is neither composite nor prime",a);
    else if(a == 2) printf("%d is Prime",a);
    else if(x == 1) printf("%d is Composite",a);
    else printf("%d is Prime",a);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    PrimeComposite(n);
    return 0;
}
