#include<stdio.h>
void checkBalance(float *balance)
{
    printf("Current Balance = %.2f\n",*balance);
}
void withdraw(float *balance)
{
    float amount;
    printf("enter amount to withdraw: \n");
    scanf("%f", &amount);
    if(amount > *balance)
    {
        printf("insufficient balance\n");
    }
    else
    {
        *balance = *balance - amount;
        printf("withdrawal successful\n");
    }
}
void deposit(float *balance)
{
    float amount;
    printf("enter amount to deposit: \n");
    scanf("%f", &amount);
    *balance = *balance + amount;
    printf("deposit successful\n");
}

int main()
{
    float balance = 100000;
    char pin[4];
    printf("enter pin: \n");
    fgets(pin, sizeof(pin), stdin);   
    int choice;
    char user_name[20];
    printf("enter user name: \n");
    fgets(user_name, sizeof(user_name), stdin);

    printf("\n========================================\n");
    printf("             ATM SIMULATION             \n");
    printf("========================================\n");
    printf("          Welcome to SmartBank          \n");
    printf("----------------------------------------\n");
    printf("          1. Check Balance              \n");
    printf("          2. Withdraw Money             \n");
    printf("          3. Deposit Money              \n");
    printf("          4. Exit                       \n");
    printf("----------------------------------------\n");
    

 do {
    printf("Enter your choice:(index number) ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            checkBalance(&balance);
            printf("\n");
            printf("========================================\n");
            break;
        case 2:
            withdraw(&balance);
            printf("current balance = %.2f\n", balance);
            printf("========================================\n");
            break;
        case 3:
            deposit(&balance);
            printf("current balance = %.2f\n", balance);
            printf("========================================\n");
            break;
        case 4:
            printf("Exiting the program...\n");
            printf("========================================\n");
            printf("          Thank you for using           \n");
            printf("             SmartBank ATM              \n");
            printf("========================================\n");
            break;
        default:
            printf("invalid choice \n");
            printf("========================================\n");
            printf("          Thank you for using           \n");
            printf("             SmartBank ATM              \n");
            printf("========================================\n");
    }

 }while(choice != 4);
 return 0;
}