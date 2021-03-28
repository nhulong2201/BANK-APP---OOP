#ifndef customer_h_
#define customer_h_
#include <iostream>
#include <string>
#include "transaction.h"

using namespace std;

class customer
{
public:
   customer();
   //customer(string c_name, string c_dob, string c_job, string c_address);
   void set_password(string pass);
   string get_password();
   void set_num_trans(int num);
   int get_num_trans();
   void set_name(string c_name);
   string get_name();
   void set_dob(string c_dob);
   string get_dob();
   void set_job(string c_job);
   string get_job();
   void set_address(string c_address);
   string get_address();

   Transaction *get_trans();
   void printInfo();
   void add_transactions(Transaction trans);
   ~customer();

private:
   string name, dob, job, address, password;
   Transaction *transactions;
   int counter_trans=0;
   int num_trans;
};
#endif