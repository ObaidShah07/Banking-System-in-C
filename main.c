#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"data.h"
#include"advfunc.h"

int main() {

    while(1){
        system("cls");
        printf("\n\tWELCOME TO THE BANK");
        printf("\n===================================");

        printf("\n1. Create an account");
        printf("\n2. For modifying holder details");
        printf("\n3. View the account info");
        printf("\n4. To exit the bank");
        printf("\nEnter your choice ");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_data();
            break;
        
        case 2:
            mod_data();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\nExiting the bank");
            getch();
            return 0;
        }
    }
    return 0;
}