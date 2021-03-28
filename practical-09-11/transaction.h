#ifndef trans_h_
#define trans_h_
#include <iostream>
#include <string>

using namespace std;

class Transaction
{
public:
  Transaction();
  //Transaction(string t_date, string t_location, double t_amount);

  void set_date(string t_date);
  string get_date();
  void set_location(string t_location);
  string get_location();
  void set_amount(double t_amount);
  double get_amount();


  void printTrans();
  ~Transaction();

private:
  string date, location;
  double amount;
};
#endif