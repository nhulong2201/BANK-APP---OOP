all: bank test test_profile test_trans test_plan_savings test_loan test_data

bank: main.cpp bank.cpp customer.cpp transaction.cpp plan_savings.cpp loan.cpp
	g++ -std=c++11 main.cpp bank.cpp customer.cpp transaction.cpp plan_savings.cpp loan.cpp -o bank

test_profile: profile_Test.cpp customer.cpp transaction.cpp
	g++ -std=c++11 profile_Test.cpp customer.cpp transaction.cpp -o test_profile
test_trans: transac_Test.cpp transaction.cpp
	g++ -std=c++11 transac_Test.cpp transaction.cpp -o test_trans
test_plan_savings: plan_savings_Test.cpp plan_savings.cpp
	g++ -std=c++11 plan_savings_Test.cpp plan_savings.cpp -o test_plan_savings
test_loan: loan_Test.cpp loan.cpp
	g++ -std=c++11 loan_Test.cpp loan.cpp -o test_loan
test_data: data_Test.cpp bank.cpp customer.cpp transaction.cpp plan_savings.cpp loan.cpp
	g++ -std=c++11 data_Test.cpp bank.cpp customer.cpp transaction.cpp plan_savings.cpp loan.cpp -o test_data

test:
	./test_profile < input_profile.txt | diff - output_profile.txt
	./test_trans < input_trans.txt | diff - output_trans.txt
