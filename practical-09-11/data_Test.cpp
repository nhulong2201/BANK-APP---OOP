#include <iostream>
#include <string>
#include <fstream>
#include "customer.h"
#include "bank.h"
#include "transaction.h"
#include "plan_savings.h"
#include "loan.h"

using namespace std;

int main(void) {
    ifstream inFile;
    inFile.open("data.txt");

    if (!inFile) {
        cout<<"Unable to open the file"<<endl;
        exit(1);
    }

    bank BANK;
    customer *customers_list=BANK.get_customers();

    //setName
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_name;
        inFile>>temp_name;
        customers_list[i].set_name(temp_name);
    }
    if (customers_list[0].get_name()!="Josh") {
        cout<<"Error!"<<endl;
    }


    //setPassword
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_pass;
        inFile>>temp_pass;
        customers_list[i].set_password(temp_pass);
    }
    if (customers_list[0].get_password()!="AK1547") {
        cout<<"Error!"<<endl;
    }







    return 0;
}