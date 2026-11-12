#include<stdio.h>
#include<conio.h>
#include"data.h"

int main() {

    while(1){
        printf("\n\tWELCOME TO THE BANK");
        printf("\n===================================");

        printf("\n1. Create an account");
        printf("\n2. Search for an account");
        printf("\n3. Deposite money");
        printf("\n4. To exit the bank");
        printf("\nEnter your choice");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_data();
            break;
        
        case 2:
            printf("\nEnter your account number ");
            int acc;
            scanf("%d", &acc);

            long int n = search(acc);
            printf("\nLocation of your data is: %ld", n);
            break;

        case 4:
            printf("\nExiting the bank");
            getch();
            return 0;
        }
    }
    return 0;
}