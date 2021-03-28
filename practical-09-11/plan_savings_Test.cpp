#include <iostream>
#include "plan_savings.h"
#include <math.h>

using namespace std;

int main(void) {
    //DOUBLE_INTEREST

    {double_interest sum;
    sum.set_values(1, 1, 1);
    if (sum.get_sum()!=2) {
        cout<<"Incorrect1!";
    }
    }

    {double_interest sum;
    sum.set_values(2, 0.046, 7);
    if ((round(sum.get_sum()*100)/100)!=3.74) {
        cout<<"Incorrect2!";
    }
    }

    {double_interest sum;
    sum.set_values(3000, 0.055, 10);
    if ((round(sum.get_sum()*100)/100)!=5124.43) {
        cout<<"Incorrect3!";
    }
    }

    {double_interest sum;
    sum.set_values(2890.4, 0.0325, 3);
    if ((round(sum.get_sum()*100)/100)!=3181.47) {
        cout<<"Incorrect4!";
    }
    }

    {double_interest sum;
    sum.set_values(1000000, 0.1, 30);
    if ((round(sum.get_sum()*100)/100)!=17449402.27) {
        cout<<"Incorrect4!";
    }
    }









    //ANNUITY
    {annuity sum;
    sum.set_values(1, 1, 1);
    if (sum.get_sum()!=2) {
        cout<<"Incorrect5!"<<sum.get_sum()<<endl;
    }
    }

    {annuity sum;
    sum.set_values(2, 0.055, 10);
    if ((round(sum.get_sum()*100)/100)!=27.17) {
        cout<<"Incorrect6!"<<sum.get_sum()<<"    "<<round(sum.get_sum()*100)/100<<endl;
    }
    }

    {annuity sum;
    sum.set_values(2890.4, 0.0325, 3);
    if ((round(sum.get_sum()*100)/100)!=9247.14) {
        cout<<"Incorrect7!";
    }
    }

    {annuity sum;
    sum.set_values(10025, 0.2, 30);
    if ((round(sum.get_sum()*100)/100)!=14218035.28) {
        cout<<"Incorrect7!"<<round(sum.get_sum()*100)/100;
    }
    }



    return 0;
}
