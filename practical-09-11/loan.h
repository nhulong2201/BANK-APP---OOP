#ifndef loan_h_
#define loan_h_
#include <iostream>

using namespace std;

class loan
{
    public:
    loan();
    double r, a, p;
    void set_money_interest(double money, double interest);

    ~loan();

};

class payment : public loan
{
    public:
    payment();
    int n;

    void set_period(int period);
    double get_payment();

    ~payment();
};

class period : public loan
{
    public:
    period();
    double n1;

    void set_payment(double payment);
    double get_period();

    ~period();
};

#endif