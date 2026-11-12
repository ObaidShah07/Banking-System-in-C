#include<stdio.h>
#include<conio.h>
#include "data.h"

enum type1{
    savings =1,
    current,
};

typedef struct account_info{
    char name[50];
    char ph_no[18];
    long int balance;
    int acc_no;
    char a_no[11];
    enum type1 type;
}data_;

//function to create an account
//doesnt return anything or take any parameters

void add_data() {
    data_ temp;
    //storing data in the temp variable 
    getchar();

    printf("\nEnter your name: ");
    fgets(temp.name,sizeof(temp.name),stdin);

    printf("\nEnter your phone number: ");
    scanf("%s", &temp.ph_no);

    printf("\nEnter your aadhar number: ");
    scanf("%s", &temp.a_no);

    temp.balance = 0;

    while(1){
        printf("\nEnter account type '1' for savings '2' for currnet ");
        int choice;
        scanf("%d",&choice);
        if (choice == 1 || choice == 2){
            temp.type = choice;
            break;
        }
        printf("\nInvalid input you can try again");
    }
    //case of inilitizing count 
    FILE* fle = fopen("data.txt","rb+");
    if(fle == NULL){
        int n = 0;
        fle = fopen("data.txt","wb+");
        fwrite(&n,sizeof(n),1,fle);
    }

    //incrementing
    int n;
    fseek(fle,0,SEEK_SET);
    fread(&n,sizeof(n),1,fle);
    temp.acc_no = 100000 +n;
    n++;
    fseek(fle,0,SEEK_SET);
    fwrite(&n,sizeof(n),1,fle);

    //storing the data in the file
    fseek(fle,0,SEEK_END);
    fwrite(&temp,sizeof(data),1,fle);

    printf("\nCongratulaitons your account has been created");
    printf("\nYour account number is %d", temp.acc_no);
    getch();
    fclose(fle);
    
    return;
}


//function to search the address of data of a given account
//takes input account number and returns address long int form
long int search(int ano){
    //opening file
    FILE*fle = fopen("data.txt","rb");
    if(fle == NULL){
        printf("\nFailed to open the file");
        getch();
        return 0;
    }
    data_ temp;
    int count;

    //checking every entry to the find the matching account number
    fread(&count,sizeof(count),1,fle); 

    for(int i=0 ; i<count; i++){
                                           
        fread(&temp,sizeof(temp),1,fle);

        if(temp.acc_no == ano){
            fseek(fle,-(long)sizeof(data),SEEK_CUR);
            long int loc = ftell(fle);
            fclose(fle);
            return loc;
        }
    }
    
    return 0;
}

