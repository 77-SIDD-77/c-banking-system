#include<stdio.h>
#include<string.h>

float balance = 1000.00;
float hist[10];
int histCount = 0; 
 void checkBalance()
{
    printf("\nYour current balance is: Rs.%.2f\n", balance);
}
 void deposit()
{
    float amount;
    printf("\nEnter amount to deposit: Rs.");
    scanf("%f", &amount);
    balance =balance+ amount;
    hist[histCount++] = amount;
    printf("Deposited: Rs.%.2f\n", amount);
}
 void withdraw()
{
    float amount;
    printf("\nEnter amount to withdraw: Rs.");
    scanf("%f", &amount);
    if(amount > balance) 
    {
        printf("Insufficient balance!\n");
    } 
    else 
    {
        balance = balance - amount;
        hist[histCount++] = -amount;
        printf("Withdrawn: Rs.%.2f\n", amount);
    }
}
 void miniStatement()
{
    printf("\n--- Mini Statement ---\n");
    for(int i = 0; i < histCount; i++) 
    {
        if(hist[i] >= 0) 
        {
            printf("Deposited: Rs.%.2f\n", hist[i]);
        } 
        else 
        {

            printf("Withdrawn: Rs.%.2f\n", -hist[i]);
        }
    }           
    printf("Current Balance: Rs.%.2f\n", balance);

}

int main()
{  int choice;
    do
    {
   
        printf("\n======= ATM MENU =======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Mini Statement\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        switch(choice) 
        {
            case 1: checkBalance();
                    break;
            case 2: deposit();
                    break;
            case 3: withdraw();
                    break;
            case 4: miniStatement();
                    break;
            case 5: printf("\nThank you for using ATM!\n");
                    break;
            default: printf("Invalid choice\n");
        }
    } while(choice != 5);
    return 0;
}
