#include<stdio.h>
#include "data.h"

enum type1{
    savings =1,
    current,
};

typedef struct{
    char name[50];
    char ph_no[18];
    long int balance;
    int acc_no;
    char a_no[11];
    enum type1 type;
}data;

int add_data() {
    data temp;
    //storing data in the temp variable 

    printf("\nEnter your name: ");
    fgets(temp.name,sizeof(temp.name),stdin);

    printf("\nEnter your phone number: ");
    scanf("%s", &temp.ph_no);

    printf("\nEnter your aadhar number: ");
    scanf("%s", &temp.a_no);

    printf("\nEnter account type '1' for savings '2' for currnet ");
    int choice;
    scanf("%d",&choice);
    if (choice != 1 && choice != 2){
        printf("\nIvalid input ");
    }
    temp.type = choice;

    //case of inilitizing count 
    FILE* fle = fopen("data.txt","rb+");
    if(fle == NULL){
        int n = 0;
        fle = fopen("data.txt","wb+");
        fwrite(&n,sizeof(n),1,fle);
    }

    //storing the data in the file
    fseek(fle,0,SEEK_END);
    fwrite(&temp,sizeof(data),1,fle);

    //incrementing
    int n;
    fseek(fle,0,SEEK_SET);
    fread(&n,sizeof(n),1,fle);
    n++;
    fseek(fle,0,SEEK_SET);
    fwrite(&n,sizeof(n),1,fle);
    fclose(fle);
    
    return 0;
}

void search(){
    FILE*fle = fopen("data.txt","rb");

    fclose(fle);
    return;
}

