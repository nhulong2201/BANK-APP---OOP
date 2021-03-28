
#include <iostream>
#include <string>
#include <fstream>

#include "customer.h"
#include "transaction.h"



using namespace std;

int main(void) {
    string name,dob,job,address;
    customer person;

    cin>>name;
    cin>>dob;
    cin>>job;
    cin>>address;

    person.set_name(name);
    person.set_dob(dob);
    person.set_job(job);
    person.set_address(address);
    person.printInfo();

}