#ifndef bank_h_
#define bank_h_
#include <iostream>
#include <string>
#include "customer.h"
#include "transaction.h"
#include "plan_savings.h"
#include "loan.h"

using namespace std;

class bank
{
  public:
  bank();

  string name;
  string address;
  customer *bank_customers;
  int counter_customers=0;
  int num_customers=8;

  plan_savings *sum;
  double get_annuity(double money, double interest, int period);
  double get_double_interest(double money, double interest, int period);

  payment loan_payment;
  double calculate_payment(double money, double interest, int period);

  period loan_period;
  double calculate_period(double money, double interest, double payment);

  customer *get_customers();
  void add_customers(customer person);
  int get_num_customers();

  ~bank();
};
#endif