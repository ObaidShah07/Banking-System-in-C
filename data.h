#ifndef DATA_H
#define DATA_H

enum type1{
    Savings =1,
    Current,
};

typedef struct{
    char name[50];
    char ph_no[18];
    long int balance;
    int acc_no;
    char a_no[11];
    char time_[20];
    enum type1 type;
    char address [50];
}data_;

/**
 * @brief creates and account
 * 
 * @param void
 * 
 * @return void
 */
void add_data(void);

/**
 * @bried finds loction of the data structure
 * 
 * @param account number
 * 
 * @return long int
 */
long int search(int no);

#endif