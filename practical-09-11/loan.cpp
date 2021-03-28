#include "loan.h"
#include <iostream>
#include <math.h>

using namespace std;

loan::loan() {

}

void loan::set_money_interest(double money, double interest) {
    a=money;
    r=interest;
}

loan::~loan() {

}

////////////////////////////
payment::payment() {

}

void payment::set_period(int period) {
    n=period;
}
double payment::get_payment() {
    p=a*pow((1+r),n)*r/(pow((1+r),n)-1);
    return p;
}

payment::~payment() {

}

//////////////////////////////
period::period() {

}

void period::set_payment(double payment) {
    p=payment;
}
double period::get_period() {
    n1=log10(p/(p-a*r))/log10(r+1);
    return n1;
}

period::~period() {

}