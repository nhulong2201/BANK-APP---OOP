#include <iostream>
#include "transaction.h"
#include <string>

using namespace std;

int main(void) {

    {
        Transaction trans;
        trans.set_amount(1999);
        trans.set_date("23/5/2020");
        trans.set_location("London_St");
        trans.printTrans();
    }

    {
        Transaction trans;
        trans.set_amount(28);
        trans.set_date("3/5/2020");
        trans.set_location("Gawler_St");
        trans.printTrans();
    }

    {
        Transaction trans;
        trans.set_amount(156);
        trans.set_date("2/10/2019");
        trans.set_location("Coles_Rundle_Mall");
        trans.printTrans();
    }


    return 0;
}
