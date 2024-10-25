#include<stdio.h>
#include<windows.h>
#include<conio.h>
 
 unsigned long amount=0, deposit, withdraw;
    int choice, pin, k;  
    char transaction ='y';
int main()
{    
    printf("\t---Welcome to our ATM ---\n");
    int p=1996;
 
 
    printf("\nEnter Personal identification number [PIN] : ");
    scanf("%d",&p);
    if (p==1000)    
{
    system("cls");        
}
else
{
    printf("invalid Password!!!!");
    return(0);
}
       
    do
    {
            printf("\t---Welcome to ATM ---\n");
            printf("\t1. Check Balance\n");
            printf("\t2. Withdraw Cash\n");
            printf("\t3. Deposit Cash\n");
            printf("\t4. Quit\n\n\n");
            printf("\tSelect An Option: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\n YOUR BALANCE : $ %lu ", amount);
                break;
 
            case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW : $ ");
                scanf("%lu", &withdraw);
                if (withdraw %20 != 0)
                {
                    printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF $20");
                }
 
                else if (withdraw >(amount ))
                {
                    printf("\n INSUFFICENT FUNDS");
 
                }
                else
                {
                    amount = amount - withdraw;
                    printf("\n\n PLEASE COLLECT CASH");
                    printf("\n YOUR CURRENT BALANCE IS $ %lu", amount);
                }
                break;
 
            case 3:
 
 
                printf("\n ENTER THE AMOUNT TO DEPOSIT : $");
                scanf("%lu", &deposit);
                            amount = amount + deposit;
                printf("YOUR BALANCE IS $ %lu", amount);
                break;
 
            case 4:
            system("cls");
            printf("\nTHANK YOU FOR USING OUR ATM \n");
            getch();
            return 0;
                break;
            default:
                printf("\n INVALID OPTION");
            }
 
            printf("\nFOR ANOTHER TRANSCATION?(y/n): \n");
             
            fflush(stdin);
             
            scanf("%c", &transaction);
            system("cls");
             
            if (transaction == 'n'|| transaction == 'N')
                        k = 1;
        } while (!k);
 
        printf("\n THANKS FOR USING OUR ATM\n");
       
 
}