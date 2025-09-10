/* Profit = SP - CP
   Loss = CP - SP
   Profit percent = profit/CP * 100 
   Loss percent = loss/CP * 100 */
   
#include <stdio.h>
void ProfitLossPercent(int CP, int SP) {
    float loss = CP - SP;
    float profit = SP - CP;
    float losspercent = (loss/CP) * 100;
    float profitpercent = (profit/CP) * 100;
    if(CP > SP) { 
        printf("Loss of : %f\n",loss);
        printf("Loss percent is : %f",losspercent);
    }
    else if(SP > CP) {
        printf("Profit of : %f\n",profit);
        printf("Profit percent is : %f",profitpercent);
    }
    else {
       printf("Neither profit nor loss");
    }
}
int main() {
    int CP;
    printf("Enter CP : ");
    scanf("%d",&CP);
    int SP;
    printf("Enter SP : ");
    scanf("%d",&SP);
    ProfitLossPercent(CP,SP);
    return 0;
}
