#include<stdio.h>
#include<conio.h>
#include"data.h"

void mod_data(){
    
    printf("\nEnter your account number ");
    int inp;
    scanf("%d", &inp);
    long int adr = search(inp);
    if(adr == -1){
        printf("\nNo such account exists");
        return;
    }

    FILE* fle = fopen("data.txt", "rb+");
    if (fle == NULL)
    {
        printf("\nFailed to open the file");
        getch();
        return;
    }
    data_ temp;
    fseek(fle,adr,SEEK_SET);
    fread(&temp,sizeof(data_),1,fle);

    printf("\nEnter what attribute you wanna change ");
    printf("\n1. Name");
    printf("\n2. Phone number");
    printf("\n3. Aadhar number");
    printf("\n4. Account type");
    printf("\nEnter your choice");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter your new name ");
            getchar();
            fgets(temp.name, 50, stdin);
            break;

        case 2:
            getchar();
            printf("\nEnter your new phone number ");
            fgets(temp.ph_no, 18, stdin);
            break;

        case 3:
            getchar();
            printf("\nEnter your new aadhar number ");
            fgets(temp.a_no, 11, stdin);
            break;

        case 4:
            getchar();
            printf("\nEnter your new account type '1' for savigs '2' for currnt");
            scanf("%d", &temp.type);
            break;
        default:
            printf("\ninvalid inpout Try again");
            return;
    }

    fseek(fle,adr,SEEK_SET);
    if (fwrite(&temp, sizeof(temp), 1, fle) != 1)
    {
        printf("\nFailed to update the information");
    }
    else
    {
        printf("\nInformation updated successfully ");
    }
}