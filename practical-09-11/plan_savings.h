#ifndef plan_h_
#define plan_h_
#include <iostream>
#include <string>

class plan_savings
{
  public:
  plan_savings();
  double a, r;
  int n;

  void set_values(double money, double interest, int period);
  virtual double get_sum()=0;
  ~plan_savings();
};

//DOUBLE_Interest
class double_interest : public plan_savings
{
  public:
  virtual double get_sum();
};
//Annuity
class annuity : public plan_savings
{
    public:
    virtual double get_sum();
};
#endif