#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <fstream>

#include "transaction.h"
#include "customer.h"
#include "bank.h"
#include "loan.h"

using namespace std;

int main(void) {
    bank BANK;
    customer *customers_list=BANK.get_customers();
    ifstream inFile;
    inFile.open("data.txt");
    if (!inFile) {
        cout<<"Unable to open file"<<endl;
        exit(1);
    }

//READ IN DATA (PERSONAL INFOMRATION)
//////////////////////////////////////////////////////////////////////////////////////////
    //setName
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_name;
        inFile>>temp_name;
        customers_list[i].set_name(temp_name);
    }

    //cout<<customers_list[7].get_name()<<endl;

    //setPassword
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_pass;
        inFile>>temp_pass;
        customers_list[i].set_password(temp_pass);
    }

    //setDOB
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_dob;
        inFile>>temp_dob;
        customers_list[i].set_dob(temp_dob);
    }
    //cout<<customers_list[2].get_dob()<<endl;

    //setJob
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_job;
        inFile>>temp_job;
        customers_list[i].set_job(temp_job);
    }
    //cout<<customers_list[5].get_job()<<endl;

    //setAddress
    for (int i=0; i<BANK.get_num_customers(); i++) {
        string temp_address;
        inFile>>temp_address;
        customers_list[i].set_address(temp_address);
    }
    //cout<<customers_list[7].get_address()<<endl;

    //setNumTrans
    for (int i=0; i<BANK.get_num_customers(); i++) {
        int temp_num;
        inFile>>temp_num;
        customers_list[i].set_num_trans(temp_num);
    }
   // cout<<customers_list[7].get_num_trans()<<endl;

    //setDateTrans
    for (int i=0; i<BANK.get_num_customers(); i++) {
        Transaction *transactions_list=customers_list[i].get_trans();
        for (int j=0; j<customers_list[i].get_num_trans(); j++) {
            string temp_date;
            inFile>>temp_date;
            transactions_list[j].set_date(temp_date);
        }
    }
    // Transaction *transactions_list=customers_list[7].get_trans();
    // cout<<transactions_list[1].get_date()<<endl;

    //set_location
    for (int i=0; i<BANK.get_num_customers(); i++) {
        Transaction *transactions_list=customers_list[i].get_trans();
        for (int j=0; j<customers_list[i].get_num_trans(); j++) {
            string temp_location;
            inFile>>temp_location;
            transactions_list[j].set_location(temp_location);
        }
    }
    // Transaction *transactions_list=customers_list[7].get_trans();
    // cout<<transactions_list[1].get_location()<<endl;

    //setAmount
    for (int i=0; i<BANK.get_num_customers(); i++) {
        Transaction *transactions_list=customers_list[i].get_trans();
        for (int j=0; j<customers_list[i].get_num_trans(); j++) {
            double temp_amount;
            inFile>>temp_amount;
            transactions_list[j].set_amount(temp_amount);
        }
    }

    inFile.close();
////////////////////////////////////////////////////////////////////////////////////////////

    //BANK APP
    cout<<"WELCOME TO OUR BANK"<<endl;

    //Enter Name
    string name;
    cout<<"Please enter your name: ";
    cin>>name;


    int customer_turn;

    int check=0;
    for (int i=0; i<BANK.get_num_customers(); i++) {

        if (name==customers_list[i].get_name()) {
            customer_turn=i;
            cout<<"Hello "<<customers_list[i].get_name()<<endl;;
            break;

        } else {
            check++;
        }
    }

    if (check==BANK.get_num_customers()) {
        cout<<"Customer does not exist!!!"<<endl;
        return 0;
    }

    //Enter password
    cout<<"Please enter your password: ";
    string pass;
    cin>>pass;

    //checkPassword
    if (pass!=customers_list[customer_turn].get_password()) {
        cout<<"Password is incorrect!!!"<<endl;
        return 0;
    } else {
        cout<<"1. Profile"<<
        endl<<"2. Transactions"<<
        endl<<"3. Plan for savings"<<
        endl<<"4. Plan for Installment Loan"<<
        endl<<"Choose one of the inquiries: ";
    }

    int choice;
    cin>>choice;

    //////////////////////////////////////////
    if (choice==1) {        //PROFILE
        customers_list[customer_turn].printInfo();
    } else if (choice==2) { //TRANSACTIONS
        Transaction *trans_list=customers_list[customer_turn].get_trans();
        for (int j=0; j<customers_list[customer_turn].get_num_trans(); j++) {
            trans_list[j].printTrans();
        }
    } else if (choice==3) { //PLAN for SAVINGS
        double a,r;
        int n;
        cout<<"1. Double Interest"<<
        endl<<"2. Annuity"<<
        endl<<"Choose one of the inquiries:";

        int choice1;
        cin>>choice1;

        if (choice1==1) {
            cout<<"Enter the amount you want to put into savings: ";
            cin>>a;
            cout<<"Enter the interest you expect (please convert percentage into this form 5%=0.05)"<<
            endl<<"(Notice: This is JUST your expected interest, not our Bank's): ";
            cin>>r;
            cout<<"Enter the period (year):";
            cin>>n;

            if (a<=0 || r<=0 || n<=0) {
                cout<<"Invalid inputs"<<endl;
                return 0;
            }

            cout<<"Total money after "<<n<<" years is: "<<setprecision(2)<<fixed<<BANK.get_double_interest(a,r,n)<<endl;

        } else if (choice1==2) {
            cout<<"Enter the amount you want to put into savings every month: ";
            cin>>a;
            cout<<"Enter the interest you expect (please convert percentage into this form 5%=0.05)"<<
            endl<<"(Notice: This is JUST your expected interest, not our Bank's): ";
            cin>>r;
            cout<<"Enter the period (month):";
            cin>>n;

            if (a<=0 || r<=0 || n<=0) {
                cout<<"Invalid inputs"<<endl;
                return 0;
            }

            cout<<"Total money after "<<n<<" months is: "<<setprecision(2)<<fixed<<BANK.get_annuity(a,r,n)<<endl;
        } else {
            cout<<"Invalid inquiry!"<<endl;
        }

    } else if (choice==4) {  //LOAN
        cout<<"1. Calculate monthly payment"<<
        endl<<"2. Calculate the period"<<
        endl<<"Please choose one of the inquiries: ";

        int choice2;
        cin>>choice2;
        double a,r;
        if (choice2==1) {
            int n;
            cout<<"Enter the amount you want to loan: ";
            cin>>a;
            cout<<"Enter the interest you expect: (please convert percentage into this form 5%=0.05)";
            cin>>r;
            cout<<"Enter the period you intend to fully repay the loan: ";
            cin>>n;

            if (a<=0 || r<=0 || n<=0) {
                cout<<"Invalid inputs"<<endl;
                return 0;
            }

            cout<<"Money you have to pay every month is: "<<setprecision(2)<<fixed<<BANK.calculate_payment(a,r,n)<<endl;

        } else if (choice2==2) {
            double n1;
            cout<<"Enter the amount you want to loan: ";
            cin>>a;
            cout<<"Enter the interest you expect: (please convert percentage into this form 5%=0.05)";
            cin>>r;
            cout<<"Enter the amount of money you can pay every month: ";
            cin>>n1;

            if (a<=0 || r<=0 || n1<=0 || n1<=a*r || BANK.calculate_period(a,r,n1)<=0) {
                cout<<"Invalid inputs"<<endl;
                return 0;
            }

            cout<<"You would finish repaying the loan within "<<setprecision(2)<<fixed<<BANK.calculate_period(a,r,n1)<<endl;

        } else {
            cout<<"Invalid inquiry"<<endl;
            return 0;
        }
    } else {
        cout<<"Invalid inquiry"<<endl;
        return 0;
    }
    return 0;
}