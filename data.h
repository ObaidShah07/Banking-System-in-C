#ifndef DATA_H
#define DATA_H

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
}data_;

void add_data(void);

long int search(int no);

#endif