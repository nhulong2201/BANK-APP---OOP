#include "customer.h"
#include "transaction.h"
#include <iostream>
#include <string>

using namespace std;

customer::customer() {
    name="?";
    job="?";
    dob="?";
    address="?";
    //transactions=new Transaction[num];
}

void customer::printInfo() {
    cout<<"Name: "<<name<<endl<<"DOB: "<<dob<<endl<<"Job: "<<job<<endl<<"Address: "<<address<<endl;
}

void customer::add_transactions(Transaction trans) {
    transactions[counter_trans]=trans;
    counter_trans++;
}

void customer::set_num_trans(int num) {
    num_trans=num;
    transactions=new Transaction[num];
}
int customer::get_num_trans(){
    return num_trans;
}

void customer::set_name(string c_name){
    name=c_name;
}
string customer::get_name(){
    return name;
}

void customer::set_dob(string c_dob){
    dob=c_dob;
}
string customer::get_dob(){
    return dob;
}

void customer::set_job(string c_job){
    job=c_job;
}
string customer::get_job(){
    return job;
}

void customer::set_address(string c_address){
    address=c_address;
}
string customer::get_address(){
    return address;
}

void customer::set_password(string pass) {
    password=pass;
}

string customer::get_password() {
    return password;
}

Transaction *customer::get_trans() {
    return transactions;
}



customer::~customer() {
//delete [] transactions;
}