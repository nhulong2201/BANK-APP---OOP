#include <string>
#include <iostream>
#include "customer.h"
#include "bank.h"
#include "transaction.h"
#include "plan_savings.h"

using namespace std;

bank::bank() {
    name="Doraemon";
    address="Tokyo- Japan";
    bank_customers=new customer[8];
}

customer *bank::get_customers() {
    return bank_customers;
}

void bank::add_customers(customer person) {
    bank_customers[counter_customers]=person;
    counter_customers++;
}

int bank::get_num_customers() {
    return num_customers;
}

double bank::get_double_interest(double money, double interest, int period) {
    double_interest *sum=new double_interest;
    sum->set_values(money, interest, period);
    return sum->get_sum();
}

double bank::get_annuity(double money, double interest, int period) {
    annuity *sum=new annuity;
    sum->set_values(money, interest, period);
    return sum->get_sum();
}

double bank::calculate_payment(double money, double interest, int period) {
    payment loan_payment;
    loan_payment.set_money_interest(money, interest);
    loan_payment.set_period(period);
    return loan_payment.get_payment();
}

double bank::calculate_period(double money, double interest, double payment) {
    period loan_period;
    loan_period.set_money_interest(money, interest);
    loan_period.set_payment(payment);
    return loan_period.get_period();
}

bank::~bank() {
    delete [] sum;
    delete [] bank_customers;
}