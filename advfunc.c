#include<stdio.h>
#include<conio.h>
#include<time.h>
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
    printf("\n5. Address");
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
            printf("\nEnter your new account type '1' for savigs '2' for currnt ");
            scanf("%d", &temp.type);
            break;

        case 5:
            getchar();
            printf("\nEnter your new address ");
            fgets(temp.address,50,stdin);
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
    fclose(fle);
    getch();
}

//funtion to display the record
void display(){
    printf("\nEnter your account number ");
    int choice;
    scanf("%d", &choice);

    long int off = search(choice);
    if(off == -1){
        printf("\nNo such account exists");
        getch();
        return;
    }
    FILE* fle = fopen("data.txt","rb");
    if(fle == NULL){
        printf("\nFailed to open the file");
        return;
    }
    fseek(fle,off,SEEK_SET);
    data_ temp;
    fread(&temp,sizeof(temp),1,fle);

    printf("\nYOUR ACCOUNT");
    printf("\nACCOUNT NUMBER:    %d",temp.acc_no);
    printf("\nNAME:    %s",temp.name);
    printf("\nADDRESS:    %s",temp.address);
    printf("\nPHONE NUMBER:    %s",temp.ph_no);
    printf("\nAADHAR NUMBER:    %s",temp.a_no);
    printf("\nBALANCE:    %ld",temp.balance);

    switch(temp.type){
        case Savings:
            printf("\nTYPE    Savings");
            break;
        case Current:
            printf("\nTYPE    Current");
            break;
    }
    printf("\nTIME OF CREATION:    %s",temp.time_);
    getch();
    
    return;
}

//funciton to deposite money 
void deposite(){
    printf("\nEnter your account number ");
    int ac;
    scanf("%d", &ac);

    long int acno = search(ac);
    if(ac == -1){
        printf("\nNo such account exits");
        return;
    }
    FILE* fle = fopen("data.txt","rb+");
    if(fle == NULL){
        printf("\nfailed to open the file");
        return;
    }
    fseek(fle,acno,SEEK_SET);
    data_ temp;
    fread(&temp,sizeof(temp),1,fle);
    printf("\nCurrent balance: %ld",temp.balance);
    printf("\nEnter the amount you wnat to deposite ");

    long int amount;
    scanf("%ld", &amount);

    temp.balance = temp.balance + amount;
    fseek(fle,acno,SEEK_SET);
    fwrite(&temp,sizeof(temp),1,fle);
    fclose(fle);

    printf("\nMoney deposited successfully");
}

//withdrawing money
void withdraw(){
    printf("\nEnter your account number ");
    int ac;
    scanf("%d", &ac);

    long int acno = search(ac);
    if(ac == -1){
        printf("\nNo such account exits");
        return;
    }
    FILE* fle = fopen("data.txt","rb+");
    if(fle == NULL){
        printf("\nfailed to open the file");
        return;
    }
    fseek(fle,acno,SEEK_SET);
    data_ temp;
    fread(&temp,sizeof(temp),1,fle);
    printf("\nCurrent balance: %ld",temp.balance);
    printf("\nEnter the amount you wnat to withdraw ");

    long int amount;
    scanf("%ld", &amount);

    temp.balance = temp.balance - amount;
    fseek(fle,acno,SEEK_SET);
    fwrite(&temp,sizeof(temp),1,fle);

    fclose(fle);
    printf("\nMoney withdrawed successfully");
}