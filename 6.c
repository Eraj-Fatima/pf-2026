#include<stdio.h>
int deposit(float*balance, float amount){
    if(amount<=0)
return 0;
    *balance= *balance +amount;
        return 1;
    }


int withdraw(float*balance, float amount){
    if(amount > *balance || amount<=0)
        return 0;
    *balance= *balance- amount;
        return 1;
    }


int main(){
    int option;
    float balance = 1000;
    float amount;
    while(1){
        printf("choose options(1-4):\n");
        scanf("%d",& option);

        if(option==1){
            printf("enter amount: \n");
            scanf("%f",& amount);
            if(deposit(&balance, amount))
            printf("amount deposited successfully.\n");
            else
            printf("insufficient funds or invalid amount.\n");
        }
        else if(option==2){
            printf("enter amount: \n");
            scanf("%f",& amount);
            if(withdraw(&balance, amount))
            printf("amount withdraw successfully.\n");
            else
            printf("insufficient funds or invalid amount.\n");
        }
        else if(option==3){
            printf("current balane: %.2f\n", balance);
        }
        else if(option == 4){
            printf("Goodbye.\n");
            break;
        }
     else{
        printf("invalid option.\n");
     }
    }
    return 0;
}