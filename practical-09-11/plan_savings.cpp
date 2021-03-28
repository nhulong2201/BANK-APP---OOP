#include "plan_savings.h"
#include <iostream>
#include <math.h>

using namespace std;

plan_savings::plan_savings() {

}
void plan_savings::set_values(double money, double interest, int period) {
   a=money;
   r=interest;
   n=period;
}
plan_savings::~plan_savings(){

}

double double_interest::get_sum() {
    return a*pow((1+r), n);
}
double annuity::get_sum() {
    return (a/r)*(pow((1+r),n)-1)*(1+r);
}