#include "transaction.h"
#include <string>
#include <iostream>

using namespace std;

Transaction::Transaction() {
    date="?";
    location="?";
    amount=0;
}

void Transaction::printTrans() {
    cout<<"Transaction: "<<amount<<" | "<<date<<" | "<<location<<endl;
}

void Transaction::set_date(string t_date) {
    date=t_date;
}
string Transaction::get_date() {
    return date;
}

void Transaction::set_location(string t_location){
    location=t_location;
}
string Transaction::get_location(){
    return location;
}

void Transaction::set_amount(double t_amount){
    amount=t_amount;
}
double Transaction::get_amount() {
    return amount;
}

Transaction::~Transaction() {

}