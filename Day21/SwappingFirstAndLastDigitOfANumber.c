#include <stdio.h>
int countnumber(int a) {
    int count;
    while(a != 0) {
        a = a / 10;
        count++;
    }
    return count;
}
void swap(int digits, int arr[], int input) {
    int thirdvariable = arr[0];
    arr[0] = arr[digits - 1];
    arr[digits - 1] = thirdvariable;
    printf("Reverse of %d is : ",input);
    for(int i = 0; i <= digits - 1; i++) {
        printf("%d",arr[i]);
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = countnumber(n);
    int arr[x];
    int input = n;
    for(int i = x - 1; i >= 0; i--) {
        int lastdigit = n % 10;
        arr[i] = lastdigit;
        n = n / 10;
    }
    swap(x,arr,input);
    return 0;
}
