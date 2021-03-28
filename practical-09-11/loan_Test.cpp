#include<bits/stdc++.h>

#include <iostream>
#include "loan.h"
#include <math.h>

using namespace std;

int main(void) {
    //MONTHLY PAYMENT
    {payment pay;
    pay.set_money_interest(1, 1);
    pay.set_period(1);
    if (pay.get_payment()!=2) {
        cout<<"Incorrect"<<endl;
    }
    }

    {payment pay;
    pay.set_money_interest(2450, 0.034);
    pay.set_period(12);
    if ((round(pay.get_payment()*100)/100)!=252.05) {
        cout<<"Incorrect"<<endl;
    }
    }

    {payment pay;
    pay.set_money_interest(15200, 0.04);
    pay.set_period(14);
    if ((round(pay.get_payment()*100)/100)!=1438.97) {
        cout<<"Incorrect"<<endl;
    }
    }
////////////////////////////////////////////////////////////////////////////////

    //PERIOD TO REPAY: (month)
    {period months;
    months.set_money_interest(12, 0.05);
    months.set_payment(0.7);

    if (ceil(months.get_period())!=40) {
        cout<<"Incorrect"<<endl;
    }
    }

    {period months;
    months.set_money_interest(1, 0.01);
    months.set_payment(0.5);

    if (ceil(months.get_period())!=3) {
        cout<<"Incorrect"<<endl;
    }
    }

    {period months;
    months.set_money_interest(54000, 0.008);
    months.set_payment(1400);

    if (ceil(months.get_period())!=47) {
        cout<<"Incorrect"<<endl;
    }
    }

    return 0;
}