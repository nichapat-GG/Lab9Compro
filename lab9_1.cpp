#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	rate /= 100;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for(int year = 1;loan > 0;year++){
		double PrevBalance = loan;
		double Interest = PrevBalance * rate;
		double Total = PrevBalance + Interest;
		double Payment;
		if(pay > Total){
			Payment = Total;
		}else{
			Payment = pay;
		}
		double NewBalance = Total - Payment;
	
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	

	loan = NewBalance;
	
	}
	
	return 0;
}
